//
// Created by zimme on 2022/02/06.
//
#include "Screen.h"
#include "Player.h"
#include <iostream>
//Check player's responses to determine whether they wish to continue playing.
char yesOrNo(){
    std::cout << "Do you want to keep playing? [Y/N]: ";
    char answer;
    std::cin >> answer;
    answer = toupper(answer);
    while (answer != 'Y' && answer != 'N')
    {
        std::cout << "Error. Please retype your response. [Y/N]: ";
        std::cin >> answer;
        answer = toupper(answer);
    }
    return answer;
}
//A gutted version of what would have been a function to move the player
std::string approveMove(Player play){
    std::cout << "In what direction do you want to move? [U/D/L/R]: ";
    std::string answer;
    std::cin >> answer;
    return answer;
}
//a gutted version of a function to check whether a place is blocked by a wall
bool canMove (Screen screen, char answer, Player play)
{
    Pixel* screenInPixels = screen.getScreen();
    std::cout<<screenInPixels;
    return true;
}
//takes care of main game logic
int main()
{
    std::cout << "test"<<std::endl;
    Screen main_screen;
    Player mainPlayer;
    for (int x = 0; x<SCREENSIZE;x++)
    {
            main_screen.setPixel(x, 2, AMPERSAND);

    }
    main_screen.update(mainPlayer);
    while (yesOrNo()=='Y')
    {
        approveMove(mainPlayer);
    }
    /*while (yesOrNo() == 'Y')
    {

    }*/
}
