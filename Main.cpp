/*
Author: Peter Jin
Date: 12/3/2019
Main Class for Node Class Demo
*/

#include <iostream>
#include <cstring>
#include "Student.h"
#include "Node.h"

using namespace std;

void addNode(Student*);
void printStudent(Student*);
Student* getAt(int);

int main() {
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(2);
  
  Node* head;
  addNode(new Student("Joe", "Askbvaowe", 204912, 4.20));
  addNode(new Student("Fred", "Joemawew", 201581, 3.69));

  printStudent(getAt(1));
  
}

