#include "ClasseA.h"
#include <iostream>

ClasseA::ClasseA() : A1(0), A2(0.0f) {}
ClasseA::ClasseA(int a1, float a2) : A1(a1), A2(a2) {}

int ClasseA::getA1() const { return A1; }
float ClasseA::getA2() const { return A2; }

void ClasseA::setA1(int a1) { A1 = a1; }
void ClasseA::setA2(float a2) { A2 = a2; }

void ClasseA::MA1() { std::cout << "MA1" << std::endl; }
void ClasseA::MA2() { std::cout << "MA2" << std::endl; }
void ClasseA::MA3() { std::cout << "Alteração a classe A partir do clone" << std::endl; }