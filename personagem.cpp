#include "personagem.h"
#include <QKeyEvent>
#include "menu_01.h"
#include <iostream>
using namespace std;

int Personagem::getPontosUpgrade() const
{
    return pontosUpgrade;
}

void Personagem::setPontosUpgrade(int value)
{
    pontosUpgrade = value;
}

void Personagem::keyPressEvent(QKeyEvent *event){

    if(event->key() == Qt::Key_Escape){
        this->main_menu.show();
        this->main_menu.set_up_points(this->pontosUpgrade);
        this->main_menu.set_up_HP(this->getLife());

    }


    if (event->key() == Qt::Key_Left){
        //gambiarra ahead
        this->setLife(this->main_menu.getHP());
        this->setStrenght(this->main_menu.getForca());
        this->setArmor(this->main_menu.getDefesa()); //cada vez q o player vai pra esquerda seus dados sao atualizados
                                                     // consistente mas n eficientess
        cout<<this->getLife();
        //end da gambiarra


        if(x() == -350){
            setPos(x(),y());
        }else{
            setPos(x()-50,y());
        }
    }

    else if (event->key() == Qt::Key_Right){
        if(x() == 0){
            setPos(x(),y());
        }else{
            setPos(x()+50,y());
        }
    }

    else if (event->key() == Qt::Key_Up){
        if(y() == -350){
            setPos(x(),y());
        }else{
            setPos(x(),y()-50);
        }
    }

    else if (event->key() == Qt::Key_Down){
        if(y() == 0){
            setPos(x(),y());
        }else{
            setPos(x(),y()+50);
        }
    }
}
