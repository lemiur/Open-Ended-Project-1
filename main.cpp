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


    /*while (yesOrNo() == 'Y')
    {

    }*/
}
