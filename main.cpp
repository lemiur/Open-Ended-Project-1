//
// Created by zimme on 2022/02/06.
//
#include "Screen.h"
#include "Player.h"
#include <iostream>
bool yesOrNo(){
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
bool approveMove(){
    std::cout << "In what direction do you want to move? [U/D/L/R]: ";
    char answer;
    std::cin >> answer;
    answer = toupper(answer);
    while (answer != 'U' && answer != 'D' && answer != 'L' && answer != 'R' )
    {
        std::cout << "Error. Please retype your response. [U/D/L/R]: ";
        std::cin >> answer;
        answer = toupper(answer);
    }
    return answer;
}
bool canMove (Screen screen, char answer, Player play)
{
    Pixel* screenInPixels = screen.getScreen();
    std::cout<<screenInPixels;
    return true;
}
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
    canMove(main_screen, 'D', mainPlayer);

    /*while (yesOrNo() == 'Y')
    {

    }*/
}
