#pragma once
#include<iostream>
#include<fstream>
using namespace std;
struct Student_2
{
	string name;
	string classnumber;
	string year;
	string average;

};
void Student_In(Student_2 a)
{
	fstream file("StudentMessage.txt", ios::app);
	file << a.name << " " << a.year << " " << a.classnumber << " " << a.average << endl;
	file.close();
}
Student_2 Student_Seek(Student_2 a, string n)
{
	fstream filein("StudentMessage.txt", ios::in);
	Student_2 b;
	while (filein)
	{
		filein >> b.name;
		filein >> b.year;
		filein >> b.classnumber;
		filein >> b.average;
		if (b.name == n) { a = b; break; }
	}
	return a;
}
void Student_Change(Student_2 a)
{
	Student_2 s[100];
	fstream filein("StudentMessage.txt", ios::in);
	int i = 0;
	while (filein)
	{
		filein >> s[i].name;
		filein >> s[i].year;
		filein >> s[i].classnumber;
		filein >> s[i].average;
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		if (s[j].name == a.name) { s[j] = a; break; }
	}
	fstream fileout("StudentMessage.txt", ios::out);
	for (int p = 0; p < i - 1; p++)
	{
		fileout << s[p].name << " " << s[p].year << " " << s[p].classnumber << " " << s[p].average << endl;
	}
	filein.close();
	fileout.close();
}
void Student_Delete(Student_2 a)
{
	Student_2 s[100];
	fstream filein("StudentMessage.txt", ios::in);
	int i = 0;
	while (filein)
	{
		filein >> s[i].name;
		filein >> s[i].year;
		filein >> s[i].classnumber;
		filein >> s[i].average;
		i++;
	}

	fstream fileout("StudentMessage.txt", ios::out);
	for (int p = 0; p < i - 1; p++)
	{
		if (s[p].name == a.name) { p++; }
		fileout << s[p].name << " " << s[p].year << " " << s[p].classnumber << " " << s[p].average << endl;
	}
	filein.close();
	fileout.close();
}