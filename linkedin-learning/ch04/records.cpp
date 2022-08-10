#include "records.h"
#include <sstream>
using namespace std;

Student::Student(int id, string name){
	this->id = id;
	this->name = name;
	}
	
string Student::toString(){
		std::stringstream  example;
		example<<id<<";"<<name;		
		return example.str();
}

int Student::getId(){
	return id;
}

string Student::getName(){
	return name;
}

void Student::setName(string name){
	this->name = name;
}

void Student::setId(int id){
	this->id=id;
}

// course

	Course::Course(int id,string name ,int credits){
		this->id = id;
		this->name = name;
		this->credits = credits;
	}
	
	string Course::toString(){
		std::stringstream  example;
		example<<id<<";"<<name<<";"<<credits;		
		return example.str();
	}
	
	int Course::getId(){
		return id;
	}
	string Course::getName(){
		return name;
	}
	int Course::getCredits(){
		return credits;
	}
	
	void Course::setId(int id){
		this->id = id;		
	}
	
	void Course::setName(string name){
		this->name = name;
	}
	void Course::setCredits(int credits){
		this->credits = credits;
	}

//grade
	Grade::Grade(int studentId,int courseId,unsigned char grade){
		this->studentId=studentId;
		this->courseId=courseId;
		this->grade=grade;
	}
	
	string Grade::toString(){
		std::stringstream  example;
		example<<studentId<<";"<<courseId<<";"<<(student_grade)grade;		
		return example.str();
	}
	
	int Grade::getStudentId(){
		return studentId;
	}
	
	int Grade::getCourseId(){
		return courseId;
	}
	
	unsigned char Grade::getGrade(){
		return grade;
	}
	
	void Grade::setStudentId(int){
		this->studentId=studentId;
	}
	
	void Grade::setCourseId(int){
		this->studentId=studentId;
	}
	
	void Grade::setGrade(unsigned char){
		this->studentId=studentId;
	}
