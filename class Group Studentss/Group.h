#pragma once
#include <iostream>
#include<vector>
#include<string>
#include<set>
using namespace std;

#include "Student.h"

class Group {
	string name = "";
	string speciality = "";
	int number_course = 1;
	int count_students = 0;
	/*Student** students = nullptr;*/
	/*vector<Student> students;*/
	set<Student> group;
public:
	//������ ���������� �� ������
	/*Student operator [] (int index)
	{
		if (index > count_students || index < 0)
			throw "error index";
		return *group[index];
	}*/
	//������ ���������� �� ������
	/*Student& operator [] (int index)
	{
		if (index > count_students || index < 0)
			throw "error index";
		return *students[index];
	}*/
	void operator += (Student& right)
	{
		AddStudent(right);		
	}

	operator string()
	{
		return name + " " + speciality + " " + to_string(group.size());
	}

	Group operator + (Group& b)
	{
		Group c;
		c.name = this->name + b.GetName();
		c.speciality = this->speciality + b.GetSpeciality();
		c.number_course = this->number_course + b.GetCourseNumber();
		c.count_students = this->group.size() + b.GetCountStudents();
		return c;
	}

	Group(const Group& original);
	Group();
	Group(string name, string speciality, int number_course);
	~Group();

	void SetName(string name);
	string GetName() const;

	void SetSpeciality(string speciality);
	string GetSpeciality() const;

	void SetCountStudents(int count_students);
	int GetCountStudents() const;

	void SetCourseNumber(int number_course);
	int GetCourseNumber() const;

	void Print() const;

	void AddStudent(const Student& new_student);
	void DeleteStudent(const Student& student);
	friend istream& operator >> (const istream& i, Group& group);
};