#include "entidade.h"

int Entidade::getLife() const
{
    return life;
}

void Entidade::setLife(int value)
{
    life = value;
}

int Entidade::getMax_life() const
{
    return Max_life;
}

void Entidade::setMax_life(int value)
{
    Max_life = value;
}

int Entidade::getSpeed() const
{
    return speed;
}

void Entidade::setSpeed(int value)
{
    speed = value;
}

int Entidade::getStrenght() const
{
    return strenght;
}

void Entidade::setStrenght(int value)
{
    strenght = value;
}

int Entidade::getArmor() const
{
    return armor;
}

void Entidade::setArmor(int value)
{
    armor = value;
}

Entidade::Entidade()
{

}
