#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	string sentence;
	string sentence_2;
	string sentence_3;
	cout << "Enter a string : ";
	getline(cin, sentence);
	fstream main_file;
	fstream copy_file;
	main_file.open("main_file.txt", ios::out);
	main_file << sentence;
	cout << "Writing in file is done" << endl;
	cout << "Main file contains : " << sentence << endl;
	main_file.close();
	main_file.open("main_file.txt", ios::in);
	getline(main_file, sentence_2);
	copy_file.open("copy_file.txt", ios::app);
	if (copy_file.is_open())
	{
		copy_file << sentence_2;
		cout << "Appending done from main file" << endl;
		copy_file.close();
	}
	else
	{
		cout << "Didn't write data" << endl;
	}
	copy_file.open("copy_file.txt", ios::in);
	getline(copy_file, sentence_3);
	cout << "Append item : " << sentence_3 << endl;
	copy_file.close();
	return 0;
}