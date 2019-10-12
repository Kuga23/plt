#include "Element.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <memory>
#include <vector>

using namespace std;
using namespace state;

Element::Element()
{
    name = "";
    position.setX(0);
    position.setY(0);
}

std::string Element::getName()
{
    return name;
}

Position &Element::getPosition()
{
    Position &refPosition = position;
    return refPosition;
}

// int Element::getTileCode()
// {
//     return tileCode;
// }

// void Element::setTileCode(int newTileCode)
// {
//     this->tileCode = newTileCode;
// }

// Setters and Getters
void Element::setName(const std::string &name)
{
    this->name = name;
}

void Element::setPosition(const Position &position)
{
    this->position = position;
}