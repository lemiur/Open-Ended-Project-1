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
        int x = 0;
        int y = 0;
    public:
        void movePlayer (directions direction);
        bool operator==(int *otherPosition);
        //bool operator>(struct Pixel otherPosition);
        //std::ostream& operator<<(std::ostream& out);


};


#endif //OPEN_ENDED_PROJECT_1_PLAYER_H
