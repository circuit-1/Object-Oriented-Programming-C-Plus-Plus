#include <string>
using namespace std;

#ifndef PET_H
#define PET_H

class Pet {
    public:

    //Constructors
    Pet();
    Pet(string, int, string, bool);

    //Mutators Functions
    void updateName(string name);
    void updateAge(int age);
    void updateOwner(string adopter);
    void setIsHouseTrained(bool isHouseTrained);
    
    //Accessor Functions
    string getName() const;
    int getAge() const;
    string getOwner() const;
    bool getIsHouseTrained() const;

    private:

    string name;
    int age;
    string owner;
    bool isHouseTrained;
};


#endif