/*
Author: Peter Jin
Date: 12/3/2019
Node Class
*/

#include <iostream>
#include <cstring>
#include "Student.h"

using namespace std;

//Constructor
Node::Node(Student* s) {
  value = s;
}

//Set Value of Node
void Node::setStudent(Student* s) {
  value = s;
}

//Get Value of Node
Student* Node::getStudent() {
  return value;
}

//Set pointer to next node
void setNext(Node* n) {
  next = n;
}

//Get pointer to next node
Node* getNext() {
  return next;
}

Node::~Node() {
  delete value;
}
