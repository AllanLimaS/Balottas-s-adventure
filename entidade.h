#ifndef ENTIDADE_H
#define ENTIDADE_H

class Entidade
{
private:
    int life;
    int Max_life;
    int speed;
    int strenght;
    int armor;

public:
    Entidade();
    int getLife() const;
    void setLife(int value);
    int getMax_life() const;
    void setMax_life(int value);
    int getSpeed() const;
    void setSpeed(int value);
    int getStrenght() const;
    void setStrenght(int value);
    int getArmor() const;
    void setArmor(int value);
};

#endif // ENTIDADE_H
