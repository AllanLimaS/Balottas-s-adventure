#ifndef MENU_01_H
#define MENU_01_H
#include <QWidget>

namespace Ui {
class menu_01;
}

class menu_01 : public QWidget
{
    Q_OBJECT
    int HP,forca,sorte,defesa;

public:
    explicit menu_01(QWidget *parent = nullptr);
    ~menu_01();
    bool aberto;
    int getHP() const;
    void setHP(int value);
    void set_up_points(int valor);
    void set_up_HP(int valor);

    int getForca() const;
    void setForca(int value);

    int getSorte() const;
    void setSorte(int value);

    int getDefesa() const;
    void setDefesa(int value);

private slots:
    void on_botao_confirma_clicked();

    void on_HP_box_valueChanged(int arg1);

private:
    Ui::menu_01 *ui;
};

#endif // MENU_01_H
