#ifndef CLASSEC_H
#define CLASSEC_H

#include <string>

class ClasseC {
private:
    std::string C1;
    int C2;

public:
    ClasseC();
    ClasseC(std::string c1, int c2);

    std::string getC1() const;
    int getC2() const;

    void setC1(std::string c1);
    void setC2(int c2);

    void MC1();
    void MC2();
    void MC3();
};

#endif