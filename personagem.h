#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include "entidade.h"
#include <QGraphicsRectItem>
#include "menu_01.h"

class Personagem: public QGraphicsRectItem, public Entidade
{
private:
    int elmo;           //  Itens do game, que podem receber upgrade
    int armadura;       //na loja (item começa nivel 0 e vai até 3),
    int bota;           //apenas o heroi possui esses itens, seus
    int espada;         //stats aumentam conforme o nivel dos itens.
    int pontosUpgrade;

public:
    void keyPressEvent(QKeyEvent * event);
    menu_01 main_menu;  //Menu principal do jogo
    int getPontosUpgrade() const;
    void setPontosUpgrade(int value);
};

#endif // PERSONAGEM_H
