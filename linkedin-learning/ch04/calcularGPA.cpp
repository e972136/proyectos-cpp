#include <iostream>
#include <string>
#include <vector>
#include "records.h"

using namespace std;

int obtener_estudiante(int id, vector<Student> & students){	
	for(int i=0;i<students.size();i++){		
		if(students[i].getId()==id){
			return i;
		}
	}
	return -1;
}
int obtener_curso(int id, vector<Course> & courses){	
	for(int i=0;i<courses.size();i++){		
		if(courses[i].getId()==id){
			return i;
		}
	}
	return -1;
}

int main(){
	
	vector<Student> students;
	students.push_back(Student(1,"gaspar"));
	students.push_back(Student(2,"jose"));
	
	vector<Course> courses;
	courses.push_back(Course(1,"algebra",5));
	courses.push_back(Course(2,"fisica",4));
	courses.push_back(Course(3,"ingles",3));
	
	vector<Grade> grades;
	grades.push_back(Grade(1,1,GRADE_B));
	grades.push_back(Grade(1,2,GRADE_A));
	grades.push_back(Grade(1,3,GRADE_C));

	int id_estudiante;

	cout<<"id:";
	cin>>id_estudiante;
	
	int pos_estudiante = obtener_estudiante(id_estudiante,students);
	if(pos_estudiante==-1){
		cout<<"Estudiante no existe"<<endl;
		return 0;
	}
	Student student = students[pos_estudiante];
	cout<<student.getName()<<endl;
	
	double suma_creditos = 0;
	double total_creditos = 0;
	
	for(Grade grade:grades){
		if(grade.getStudentId()!=id_estudiante){
			continue;
		}
		int pos_curso = obtener_curso(grade.getCourseId(),courses);
		if(pos_curso==-1){
			continue;
		}
		Course course = courses[pos_curso];		
		double actual = student_grade_equivalencia[(int)grade.getGrade()]*course.getCredits();		
		total_creditos+=course.getCredits();
		suma_creditos+=actual;
	}
	double gpa =  suma_creditos/total_creditos;
	cout<<"total_creditos:"<<total_creditos<<endl;
	cout<<"suma_creditos:"<<suma_creditos<<endl;
	cout<<"gpa:"<<gpa;
	
}
