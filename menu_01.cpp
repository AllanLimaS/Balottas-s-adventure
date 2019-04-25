#include "menu_01.h"
#include "ui_menu_01.h"

int menu_01::getHP() const
{
    return HP;
}

void menu_01::setHP(int value)
{
    HP = value;
}

int menu_01::getForca() const
{
    return forca;
}

void menu_01::setForca(int value)
{
    forca = value;
}

int menu_01::getSorte() const
{
    return sorte;
}

void menu_01::setSorte(int value)
{
    sorte = value;
}

int menu_01::getDefesa() const
{
    return defesa;
}

void menu_01::setDefesa(int value)
{
    defesa = value;
}

menu_01::menu_01(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu_01)
{
    ui->setupUi(this);
}

menu_01::~menu_01()
{
    delete ui;
}

void menu_01 :: set_up_points(int valor){
   this->ui->label_pontos->setNum(valor);
}

void menu_01 :: set_up_HP(int valor){
   this->ui->label_hp_show->setNum(valor);
}


void menu_01::on_botao_confirma_clicked()
{
    this->HP = this->ui->HP_box->value();
    this->forca = this->ui->Forca_box->value();
    this->defesa = this->ui->Def_box->value();
    this->sorte = this->ui->Sorte_box->value();

}

void menu_01::on_HP_box_valueChanged(int arg1)
{
    this->ui->label_pontos->setText( QString::number(12) );
}


