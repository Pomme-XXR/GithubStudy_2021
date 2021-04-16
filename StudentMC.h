#pragma once
#include<iostream>
#include<fstream>
using namespace std;
struct Student
{
	string name;
	string classnumber;
	string year;
	string average;

};
void Student_In(Student a)
{
	fstream file("StudentMessage.txt", ios::app);
	file << a.name << " " << a.year << " " << a.classnumber << " " << a.average << endl;
	file.close();
}
Student Student_Seek(Student a, string n)
{
	fstream filein("StudentMessage.txt", ios::in);
	Student b;
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
void Student_Change(Student a)
{
	Student s[100];
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
void Student_Delete(Student a)
{
	Student s[100];
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