#include <string>
#include "RPG.h"
#include <iostream>

using namespace std;

int main(){

    RPG NPC = RPG();
    RPG Douglas = RPG("Douglas", 5, 4, 3, "warrior");

    cout << "Is " << Douglas.getName() << " alive? " << Douglas.isAlive() << endl;
    cout << Douglas.getName() << " Old Health: " << Douglas.getHealth() << endl;
    Douglas.updateHealth(10);
    cout << Douglas.getName() << " New Health: " << Douglas.getHealth() << endl;
    return 0;
}