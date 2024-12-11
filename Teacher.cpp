#include "Teacher.h"
#include <iostream>
using namespace std;

Teacher::Teacher(const string& id, const string& lastName, const string& firstName, const string& gender, const string birthDate, const string& teacherId, Department department, ClassName, const vector<Course>& courses) : Person(id, lastName, firstName, gender, birthDate), teacherId(teacherId), department(department), className(className), teachingCourses(courses)
{
}

string Teacher::getTeacherId() const
{
	return teacherId;
}

Department Teacher::getDepartment() const
{
	return department;
}

ClassName Teacher::getClassName() const
{
	return className;
}

vector<Course> Teacher::getCourses() const
{
	return teachingCourses;
}

void Teacher::setTeacherId(const string& teacherId)
{
	this->teacherId = teacherId;
}

void Teacher::setDepartment(Department department)
{
	this->department = department;
}

void Teacher::setClassName(ClassName className)
{
	this->className = className;
}

void Teacher::setCourses(const vector<Course>& courses)
{
	this->teachingCourses = courses;
}

void Teacher::display() const
{
	Person::display();
	cout << "�Юv�s��: " << teacherId << endl;
	cout << "�Юv���ݨt��: " << Utility::toString(department) << endl;
	cout << "�Юv�ұ¯Z��: " << Utility::toString(className) << endl;
	cout << "�Юv�ұ½ҵ{: " << endl;
	for (const Course& course : teachingCourses)
	{
		course.display();
	}
}