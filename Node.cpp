/*
Author: Peter Jin
Date: 12/3/2019
Node Class
*/

#include <iostream>
#include <cstring>
#include "Student.h"
#include "Node.h"

using namespace std;

//Constructor
Node::Node(Student* s) {
  value = s;
  next = NULL;
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
void Node::setNext(Node* n) {
  next = n;
}

//Get pointer to next node
Node* Node::getNext() {
  return next;
}

//Destructor
Node::~Node() {
  delete value;
}
