#ifndef CLASSEB_H
#define CLASSEB_H

class ClasseB {
private:
    int B1;
    float B2;

public:
    ClasseB();
    ClasseB(int b1, float b2);

    int getB1() const;
    float getB2() const;

    void setB1(int b1);
    void setB2(float b2);

    void MB1();
    void MB2();
};

#endif