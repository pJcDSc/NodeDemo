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

void addNode(Student*, Node**);
void printStudent(Student*);
Student* getAt(int, Node*);
void clrList(Node*);

int main() {
  //Configure cout 
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(2);

  //Starter node
  Node* head;
  
  //Add Students
  addNode(new Student("Joe", "Askbvaowe", 204912, 4.20), &head);
  addNode(new Student("Fred", "Joemawew", 201581, 3.69), &head);
  addNode(new Student("Shengdong", "Li", 415403, 4.50), &head);
  addNode(new Student("Ryan", "Thammakhoune", 350575, 3.95), &head);

  //Print the Students
  printStudent(getAt(0, head));
  printStudent(getAt(1, head));
  printStudent(getAt(2, head));
  printStudent(getAt(3, head));

  //Clear linkedlist
  clrList(head);
}

//Recursive add node function
void addNode(Student* s, Node** n) {
  //If head node is null
  if (!(*n)) {
    //Set node to new node with value of student
    *n = new Node(s);
    return;
  }
  //If node has a next value
  if ((*n)->getNext()) {
    //Call addnode again on next node
    Node* next = (*n)->getNext();
    addNode(s, &next);
    return;
  }
  //Once node doesn't have next value, set next value to new node with value student
  (*n)->setNext(new Node(s));
}

//Get function using for loop
Student* getAt(int i, Node* n) {
  //Go to next student i times
  for(int a = 0; a < i; a++) {
    n = n->getNext();
  }
  //return ith value
  return n->getStudent();
}

//Function to print student
void printStudent(Student* s) {
  cout << "Student: " << s->getFirstName() << " " << s->getLastName() << endl;
  cout << "ID: " << s->getId() << endl;
  cout << "GPA: " << s->getGpa() << endl << endl;
}

//Recursive clear linkedlist function
void clrList(Node* n) {
  //While there is a next value, call clr on next value
  if (n->getNext()) {
    clrList(n->getNext());
  }
  //Each time called, delete n afterwards
  delete n;
}
