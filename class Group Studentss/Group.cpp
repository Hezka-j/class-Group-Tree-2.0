#include <iostream>
#include<vector>
using namespace std;

#include "Group.h"
ostream& operator << (const ostream& o, const Student& st)
{
	st.Print();
	return cout;
}
Group::Group(const Group& original)
{
	this->name = original.name;
	this->speciality = original.speciality;
	this->number_course = original.number_course;
	this->count_students = original.count_students;
	group = original.group;
}

Group::Group() {}

Group::Group(string name, string speciality, int number_course)
{
	this->name = name;
	this->speciality = speciality;
	this->number_course = number_course;
}

Group::~Group()
{
	/*if (students != nullptr)
	{
		for (int i = 0; i < count_students; i++)
		{
			delete students[i];
		}
		delete[] students;
	}*/
}

void Group::SetName(string name)
{
	this->name = name;
}

string Group::GetName() const
{
	return name;
}

void Group::SetSpeciality(string speciality)
{
	this->speciality = speciality;
}

string Group::GetSpeciality() const
{
	return speciality;
}

void Group::SetCountStudents(int count_students)
{
	this->count_students = count_students;
}

int Group::GetCountStudents() const
{
	return count_students;
}

void Group::SetCourseNumber(int number_course)
{
	this->number_course = number_course;
}

int Group::GetCourseNumber() const
{
	return number_course;
}

void Group::Print() const
{
	cout << "Name: " << name << "\n";
	cout << "Speciality: " << speciality << "\n";
	cout << "Course number: " << number_course << "\n";
	cout << "Students count: " << group.size() << "\n";
	if (group.size() > 0)
	{
		for (Student current : group)
		{
			cout << current;
		}
	}
	cout << "\n";
}

void Group::AddStudent(const Student& new_student)
{
	/*Student** temp = new Student * [count_students + 1];
	for (int i = 0; i < count_students; i++)
		temp[i] = students[i];
	temp[count_students] = new Student(new_student);
	delete[] students;
	count_students++;
	students = temp;*/
	group.insert(new_student);
}

void Group::DeleteStudent(const Student& student)
{
	group.erase(student);
	/*Student** temp = new Student * [count_students - 1];
	bool ok = false;
	for (int i = 0; i < count_students; i++)
	{
		if (i == student_index)
		{
			ok = true;
		}
		if (!ok)
		{
			temp[i] = students[i];
		}
		else
		{
			temp[i] = students[i + 1];
		}
	}
	delete[] students;
	count_students--;
	students = temp;*/
}