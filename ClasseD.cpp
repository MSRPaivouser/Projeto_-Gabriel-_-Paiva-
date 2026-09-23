#include "ClasseD.h"
#include <iostream>

ClasseD::ClasseD() : D1(0), D2("") {}
ClasseD::ClasseD(int d1, std::string d2) : D1(d1), D2(d2) {}

int ClasseD::getD1() const { return D1; }
std::string ClasseD::getD2() const { return D2; }

void ClasseD::setD1(int d1) { D1 = d1; }
void ClasseD::setD2(std::string d2) { D2 = d2; }

void ClasseD::MD1() { std::cout << "MD1" << std::endl; }
void ClasseD::MD2() { std::cout << "MD2" << std::endl; }
void ClasseD::MD4() {
    std::cout << "MD4" << std::endl;
}
