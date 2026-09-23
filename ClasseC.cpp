#include "ClasseC.h"
#include <iostream>

ClasseC::ClasseC() : C1(""), C2(0) {}
ClasseC::ClasseC(std::string c1, int c2) : C1(c1), C2(c2) {}

std::string ClasseC::getC1() const { return C1; }
int ClasseC::getC2() const { return C2; }

void ClasseC::setC1(std::string c1) { C1 = c1; }
void ClasseC::setC2(int c2) { C2 = c2; }

void ClasseC::MC1() { std::cout << "MC1" << std::endl; }
void ClasseC::MC2() { std::cout << "MC2" << std::endl; }