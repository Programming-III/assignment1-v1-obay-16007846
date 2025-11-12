#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird:public Animal{
private:

int Animal::age;
string Animal::name;
bool Animal::isHungry;
float wingSpan;


public:
Bird();
Bird(string name, int age, bool isHungry, float wingSpan);
};
virtual ~Bird();






#endif
