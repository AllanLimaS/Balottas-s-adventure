#include "personagem.h"
#include "Escada.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <windows.h>
#include <ctime>

int main(int argc, char *argv[])
{

    int X = 0,Y = 0;

    QApplication a(argc, argv);

    QGraphicsScene Tela_game;
    Escada * saida = new Escada();
    Personagem * balottin = new Personagem();


    balottin->setRect(400,400,50,50);
    balottin->setBrush(QBrush(Qt::blue));       // CRIA PRINCIPAL

    srand(time(NULL));       // RAND DA SAIDA
    X = rand()%8;
    Y = rand()%8;

    X = (X * 50) + 50;      // POSIÇÃO X E Y
    Y = (Y * 50) + 50;

    saida->setRect(X, Y, 50, 50);       // CRIA SAIDA
    saida->setBrush(QBrush(Qt::gray));

    Tela_game.addItem(balottin);    // ADD PERSONAGEM
    Tela_game.addItem(saida);       // ADD SAIDA

    balottin->setFlag(QGraphicsItem::ItemIsFocusable); // MANTEM FOCO NO BALLOTIN
    balottin->setFocus();


    for(int i = 0 ; i <= 500 ; i=i +50){ // CRIA LINHAS
        if(i == 0 or i==500){
            Tela_game.addLine(1,i,500,i,QPen(Qt::black, 100, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }else {
            Tela_game.addLine(1,i,500,i,QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }
    }
    for(int i = 0; i <= 500 ; i = i + 50){ // CRIA LINHAS
        if(i == 0 or i == 500){
            Tela_game.addLine(i,1,i,500,QPen(Qt::black, 100, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }else{
            Tela_game.addLine(i,1,i,500,QPen(Qt::black, 1, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
        }
    }

    QGraphicsView view(&Tela_game);
    view.setFixedSize(700,700);
    view.show();

    return a.exec();

}
