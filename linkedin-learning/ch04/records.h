#ifndef RECORDS_H
#define RECORDS_H

#include <iostream>
#include <string>

enum student_grade{GRADE_A, GRADE_B, GRADE_C, GRADE_D, GRADE_F};
const double student_grade_equivalencia[]={4.0,3.0,2.0,1.0,0.0};

class Student{
private:
	int id;
	std::string name;
public:
	Student(int, std::string);
	int getId();
	std::string getName();
	void setName(std::string);
	void setId(int);	
	std::string toString();
};

class Course{
private:
	int id;
	std::string name;
	int credits;
public:
	Course(int,std::string,int);
	int getId();
	std::string getName();
	int getCredits();
	
	void setId(int);
	void setName(std::string);
	void setCredits(int);
	std::string toString();
};

class Grade{
private:
	int studentId;
	int courseId;
	unsigned char grade;
public:
	Grade(int,int,unsigned char);
	int getStudentId();
	int getCourseId();
	unsigned char getGrade();
	void setStudentId(int);
	void setCourseId(int);
	void setGrade(unsigned char);
	std::string toString();
};

#endif
