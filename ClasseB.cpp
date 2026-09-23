#include "ClasseB.h"
#include <iostream>

ClasseB::ClasseB() : B1(0), B2(0.0f) {}
ClasseB::ClasseB(int b1, float b2) : B1(b1), B2(b2) {}

int ClasseB::getB1() const { return B1; }
float ClasseB::getB2() const { return B2; }

void ClasseB::setB1(int b1) { B1 = b1; }
void ClasseB::setB2(float b2) { B2 = b2; }

void ClasseB::MB1() { std::cout << "MB1" << std::endl; }
void ClasseB::MB2() { std::cout << "MB2" << std::endl; }
void ClasseB::MB3() { std::cout << "MB3" << std::endl; }