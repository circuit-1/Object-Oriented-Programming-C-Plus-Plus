#include <string>
#include "RPG.h"
#include <iostream>

using namespace std;

void displayStats(RPG player1, RPG player2);
void displayEnd(RPG player1, RPG player2);
void gameLoop(RPG * player1, RPG * player2);

int main(){

    RPG p2 = RPG();
    RPG p1 = RPG("Wiz", 70, 45, 15, "mage");

    gameLoop(&p1, &p2);
    displayEnd(p1, p2);
    return 0;
}

/**
 * @brief Prints both player's name and their health.
 * Example Output for names Wiz and NPC
 * Wiz Health: 75 NPC Health: 100
 * 
 * @param player1
 * @param player2
 */
void displayStats(RPG player1, RPG player2){
    printf("%s health: %i %s health: %i\n", player1.getName().c_str(), player1.getHealth(), player2.getName().c_str(), player2.getHealth());
}

/**
 * @brief Displays who wins based on who is alive. Use and if statement to check whether player 1 is alive. If so print that they won, else player 2 won.
 * 
 * Example Output:
 * Wiz defeated NPC! Good game!\n
 * 
 * @param player1
 * @param player2
 */
void displayEnd(RPG player1, RPG player2){
    if(player1.isAlive())
    {
        printf("%s defeated %s! Good game!\n", player1.getName().c_str(), player2.getName().c_str());
    }
    else{
        printf("%s defeated %s! Good game!\n", player2.getName().c_str(), player1.getName().c_str());
    }
}

/**
 * @brief uses a while loop to check whether both players are alive.
 * If so, it calls displayStats((*player1), (*player2))
 * Inside the while loop it:
 *  Then prints the name of player one to say that it is their turn
 *  Then call (*player1).useSkill(player2)
 *  Then prints "-------------------------------\n"
 * 
 *  Repeat the process for player 2 acting on player 1 inside the same while loop
 *  Then prints the name of player two to say that it is their turn 
 *  Then call (*player2).useSkill(player1)
 *  Then prints "-------------------------------\n"
 * 
 * @param player1
 * @param player2
 */
void gameLoop(RPG * player1, RPG * player2){
    while((*player1).isAlive() && (*player2).isAlive()) {
        displayStats((*player1), (*player2));
        printf("%s's turn\n\n", (*player1).getName().c_str());
        (*player1).useSkill(player2);
        printf("-------------------------------\n");
        displayStats((*player1), (*player2));
        printf("\n%s's turn\n\n", (*player2).getName().c_str());
        (*player2).useSkill(player1);
        printf("-------------------------------\n");
    }
}