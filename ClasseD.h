#ifndef CLASSED_H
#define CLASSED_H

#include <string>

class ClasseD {
private:
    int D1;
    std::string D2;

public:
    ClasseD();
    ClasseD(int d1, std::string d2);

    int getD1() const;
    std::string getD2() const;

    void setD1(int d1);
    void setD2(std::string d2);

    void MD1();
    void MD2();
    void MD3();
};

#endif