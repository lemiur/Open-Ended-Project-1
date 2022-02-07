//
// Created by zimme on 2022/02/06.
//
#ifndef OPEN_ENDED_PROJECT_1_SCREEN_H
#define OPEN_ENDED_PROJECT_1_SCREEN_H
#include <iostream>
#include "Player.h"
//determines the screen size (how many square characters)
const int SCREENSIZE = 10;
//lists the symbols that are used onscreen
enum symbols {AMPERSAND = '&', POUND = '#', DOLLAR = '$', EXCLAMATION = '!', SPACE = ' ', PERIOD = '.'};
//a "pixel" class. that is, an individual unit on the larger screen, like a single "#" or "."
struct Pixel {
    //Wals are "#", the floor is "."
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
    //This is a print function for pixels. used for debugging
    std::ostream& operator<<(std::ostream& out)
    {
        out << wall;
        return out;
    }

};
class Screen
{
    private:
        //keeps track of what's currently on screen
        Pixel current_screen [SCREENSIZE][SCREENSIZE];
        //the player on the screen
        Player viewer;
    public:
        //set an individual pixel
        void setPixel(int x, int y, bool newWall);
        //get what's currently on screen
        Pixel *getScreen();
        //get an individual pixel
        Pixel getPixel(int x, int y);
        //update the screen
        void update(Player viewer);
};
#endif //OPEN_ENDED_PROJECT_1_SCREEN_H
