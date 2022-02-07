//
// Created by zimme on 2022/02/06.
//
#ifndef OPEN_ENDED_PROJECT_1_SCREEN_H
#define OPEN_ENDED_PROJECT_1_SCREEN_H
#include <iostream>
#include "Player.h"
const int SCREENSIZE = 10;
enum symbols {AMPERSAND = '&', POUND = '#', DOLLAR = '$', EXCLAMATION = '!', SPACE = ' ', PERIOD = '.'};
struct Pixel {
    bool wall = false;
    void flip()
    {
        if (wall == true)
        {
            wall = false;
        }
        if (wall == false)
        {
            wall = true;
        }
    }
    std::ostream& operator<<(std::ostream& out)
    {
        out << wall;
        return out;
    }

};
class Screen
{
    private:
        Pixel current_screen [SCREENSIZE][SCREENSIZE];
        Player viewer;
    public:
        void setPixel(int x, int y, bool newWall);
        Pixel *getScreen();
        Pixel getPixel(int x, int y);
        void update(Player viewer);
};
#endif //OPEN_ENDED_PROJECT_1_SCREEN_H
