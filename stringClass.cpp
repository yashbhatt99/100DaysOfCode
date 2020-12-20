#include<iostream>
#include <string>

using namespace std;

int main()
{
	//Ways to initialize string.

	string s0;
	string s1("Hellow there!");

	string s2 = "Hellow again!";
	string s3(s2);
	string s4 = s3;

	// Replaceing a character array with string.
	char a[] = {'a', 'b', 'c', '\0'};
	string s5(a);

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;


	//s.append .. to append the string

	s2.append("How are you???");

	// append string with '+=' operator
	s1 += "How are you??";
	cout << s1 << endl;

	cout << s2 << endl;

	// check weather the string is empty or not.

	if (s0.empty()) {
		cout << "String s0 is an empty string." << endl;
	}

	//empty the string.

	cout << s1.length() << endl;
	s1.clear();
	cout << s1.length() << endl;


	//Comparing two strings.
	//when you comapare two strings it will return lexographical number in terms of answer. -ve / +ve/ 0.
	cout << s1.compare(s2) << endl;

	//Overloaded Operators
	string s6 = "Mango";
	string s7 = "pineapple";

	if (s7 > s6)
	{
		cout << "pineapple is lexi greater than mango" << endl;
	}

	//finding a substring.it will return the index from where the substring is starting.
	string str = "I would like to have some apple juice";
	int idx = str.find("apple");
	cout << idx << endl;

	//Removing a substring --> give strating index and length of the substring in arguments.
	string word  = "apple";
	int len = word.length();
	cout << str << endl;
	str.erase(idx, len + 1);
	cout << str << endl;


	//itereating over a string.
	for (int i = 0; i < s2.length(); i++)
	{
		cout << s2[i] << "-" ;
	}

	cout << endl;

	//Using Interators (s.begin() and s.end()).

	for (auto it = s2.begin(); it != s2.end(); it++)
	{
		cout << (*it) << "-";
	}

	cout << endl;

	//for each loop
	for (auto  c : s4)
	{
		cout << c << ".";
	}

	cout << endl;




	return 0;
}