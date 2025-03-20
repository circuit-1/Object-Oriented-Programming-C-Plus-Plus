#include "Pet.h"
#include <string>
#include <iostream>
using namespace std;

int main(){

    Pet blank = Pet();
    Pet known = Pet("dog", 3, "Jack", false);
    cout << "Name: " << blank.getName() << "\t\tAge: " << blank.getAge() << "\tOwner: " << blank.getOwner()
     << "\tHouse Trained?: " << blank.getIsHouseTrained() << endl;

     cout << "Name: " << known.getName() << "\tAge: " << known.getAge() << "\tOwner: " << known.getOwner()
     << "\tHouse Trained?: " << known.getIsHouseTrained() << endl;

    known.updateAge(5);
    known.updateName("Rover");
    known.updateOwner("Oliver");
    known.setIsHouseTrained(true);

    cout << "Name: " << known.getName() << "\tAge: " << known.getAge() << "\tOwner: " << known.getOwner()
    << "\tHouse Trained?: " << known.getIsHouseTrained() << endl;
    
    return 0;
}
