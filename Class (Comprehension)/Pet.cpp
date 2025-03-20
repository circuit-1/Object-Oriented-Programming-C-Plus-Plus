#include <string>
#include "Pet.h"
using namespace std;

Pet::Pet(){
    name = "";
    age = 0;
    owner = "";
    isHouseTrained = false;
}

Pet::Pet(string name, int age, string owner, bool isHouseTrained){
    this->name = name;
    this->age = age;
    this->owner = owner;
    this->isHouseTrained = isHouseTrained;
}

void Pet::updateName(string name){
    this->name = name;
}

void Pet::updateAge(int age){
    this->age = age;
}

void Pet::updateOwner(string owner){
    this->owner = owner;
}

void Pet::setIsHouseTrained(bool isHouseTrained){
    this->isHouseTrained = isHouseTrained;
}

string Pet::getName() const{
    return name;
}

int Pet::getAge() const{
    return age;
}

string Pet::getOwner() const{
    return owner;
}

bool Pet::getIsHouseTrained() const{
    return isHouseTrained;
}