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
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed, ios::floatfield);
  cout.precision(2);
  
  Node* head;
  addNode(new Student("Joe", "Askbvaowe", 204912, 4.20), &head);
  addNode(new Student("Fred", "Joemawew", 201581, 3.69), &head);
  addNode(new Student("Shengdong", "Li", 415403, 4.50), &head);
  addNode(new Student("Ryan", "Thammakhoune", 350575, 3.95), &head);

  printStudent(getAt(0, head));
  printStudent(getAt(1, head));
  printStudent(getAt(2, head));
  printStudent(getAt(3, head));

  clrList(head);
}

void addNode(Student* s, Node** n) {
  if (!(*n)) {
    *n = new Node(s);
    return;
  }
  if ((*n)->getNext()) {
    Node* next = (*n)->getNext();
    addNode(s, &next);
    return;
  }
  (*n)->setNext(new Node(s));
}

Student* getAt(int i, Node* n) {
  for(int a = 0; a < i; a++) {
    n = n->getNext();
  }
  return n->getStudent();
}

void printStudent(Student* s) {
  cout << "Student: " << s->getFirstName() << " " << s->getLastName() << endl;
  cout << "ID: " << s->getId() << endl;
  cout << "GPA: " << s->getGpa() << endl << endl;
}

void clrList(Node* n) {
  if (n->getNext()) {
    clrList(n->getNext());
  }
  delete n;
}
