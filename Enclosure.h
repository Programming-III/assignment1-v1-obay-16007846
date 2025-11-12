#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure{
private:
    Animal* = new Animal[Animal.size];
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure(Animal*, int capacity, int currrentCount){
    }
    void addAnimal(Animal* a){
    }
    void displayAnimals();
};
virtual ~Enclosure();







#endif
