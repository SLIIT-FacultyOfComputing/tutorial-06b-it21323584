#include "Student.h"
#include <iostream>
#include<iostream>
#include<cstring>
using namespace std;


// Assign studentId and name
void Student::assignDetails(int id, char sName[]) {

  studentId=id;
  strcpy(name, sName);
  
}

// Display StudentId and Name
void Student::display() {

  cout<<"Student Id :"<<studentId<<endl;
  cout<<"Name:"<<name<<endl;
  
}
