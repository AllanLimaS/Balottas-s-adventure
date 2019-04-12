#include "pirok.h"
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

        // create a scene
        QGraphicsScene * scene = new QGraphicsScene();
        scene->setSceneRect(0,0,1000,1000);
        // create an item to add to the scene
        for(int i =50 ; i < 1000 ; i=i +50){
            scene->addLine(1,i,1000,i,QPen(5));
        }
        for(int i = 50; i < 1000 ; i = i + 50){
            scene->addLine(i,1,i,1000,QPen(2));
        }
        scene->addLine(1,1,1000,1000,QPen(2));
        pirok * rect = new pirok();
        rect->setRect(300,300,50,50); // change the rect from 0x0 (default) to 100x100 pixels
        rect->setBrush(QBrush(6));
        // add the item to the scene
        scene->addItem(rect);

        // make rect focusable
        rect->setFlag(QGraphicsItem::ItemIsFocusable);
        rect->setFocus();

        // create a view to visualize the scene
        QGraphicsView * view = new QGraphicsView(scene);

        // show the view
        view->setFixedSize(1000,1000);
        view->show();

        return a.exec();
}
