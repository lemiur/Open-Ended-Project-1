//
// Created by zimme on 2022/02/06.
//
#include "Screen.h"
#include "Player.cpp"

void Screen::setPixel(int x, int y, bool newWall)
{
    current_screen[x][y].wall = newWall;
}
Pixel *Screen::getScreen()
{
    return *current_screen;
}
Pixel Screen::getPixel(int x, int y)
{
    return current_screen[x][y];
}
void Screen::update(Player viewer)
{

    for (int x = 0; x<SCREENSIZE;x++)
    {


        for (int y = 0; y<SCREENSIZE; y++)
        {
            int current[2];
            current[0] = x;
            current[1] = y;

            if (viewer == current)
            {
                std::cout << "@";
            }else if (current_screen[x][y].wall)
            {
                std::cout << "#";
            }else{
                std::cout << ".";
            }



        }
        std::cout << std::endl;
    }
}

