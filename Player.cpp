//
// Created by zimme on 2022/02/06.
//

#include "Player.h"


void Player::movePlayer(directions direction)
{
    if (direction == UP)
    {
        y++;
    }
    if (direction == DOWN)
    {
        y--;
    }
    if (direction == LEFT)
    {
        x--;
    }
    if (direction == RIGHT)
    {
        x++;
    }
}
bool Player::operator==(int *otherPosition)
{
    if (otherPosition[0] == x && otherPosition[1] == y)
    {
        return true;
    }
    return false;
}
/*bool Player::operator>(Pixel otherPosition)
{
    if (otherPosition.wall)
    {
        return true;
    }else
    {
        return false;
    }

}*/
/*std::ostream& Player::operator<<(std::ostream& out)
{
    out << x;
    return out;
}*/
