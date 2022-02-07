//
// Created by zimme on 2022/02/06.
//

#ifndef OPEN_ENDED_PROJECT_1_PLAYER_H
#define OPEN_ENDED_PROJECT_1_PLAYER_H
#include "Screen.h"
enum directions {UP = 'u', DOWN = 'd', LEFT = 'l', RIGHT = 'r'};
class Player
{
    private:
        //x coordinate of player
        int x = 0;
        //y coordinate of player
        int y = 0;
    public:
        //moves the player up, right, left, or down
        void movePlayer (directions direction);
        //checks if a player is at a certain coordinate
        bool operator==(int *otherPosition);
        //checks to see if there's a wall
        bool operator>(struct Pixel otherPosition);
        //checks to see if there is NOT a wall
        bool operator<=(Pixel otherPosition);
        //gets the x coordinate of the player.
        int getX();
        //gets the y coordinate of the player.
        int getY();
        std::ostream& operator<<(std::ostream& out);


};


#endif //OPEN_ENDED_PROJECT_1_PLAYER_H
