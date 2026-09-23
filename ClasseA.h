#ifndef CLASSEA_H
#define CLASSEA_H

class ClasseA {
private:
    int A1;
    float A2;

public:
    ClasseA();
    ClasseA(int a1, float a2);

    int getA1() const;
    float getA2() const;

    void setA1(int a1);
    void setA2(float a2);

    void MA1();
    void MA2();
};

#endif