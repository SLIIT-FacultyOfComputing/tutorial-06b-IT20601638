#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student:: assignDetails(int sID, char Sname[]) {
  studentID = sID;
  strcpy(name,Sname);
  
}

// Display StudentId and Name
void Student::display() {
  cout<<"............................"<<endl;
  cout<<"Student ID :"<<studentID<<endl;
  cout<<"Student Name:"<<name<<endl;
  
}
