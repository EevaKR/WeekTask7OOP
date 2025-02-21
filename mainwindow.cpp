#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_add_clicked()
{
    if(tila==3){
    QString num1str= ui->num1->text();
    int num1 = num1str.toInt();
    QString num2str= ui->num2->text();
    int num2 = num2str.toInt();

    int result = num1 + num2;
    qDebug() << "Plussattu numero" <<num1 <<"+"<< num2;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    qDebug() << "Tulos" <<result;
    }
    tila = 1;
    qDebug() << "Laskun jälkeen palataan tilaan " << tila;
}


void MainWindow::on_sub_clicked()
{
    QString num1str= ui->num1->text();
    int num1 = num1str.toInt();
    QString num2str= ui->num2->text();
    int num2 = num2str.toInt();

    int result = num1 - num2;
    qDebug() << "Miinustettu numero" <<num1 << "+" << num2;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    qDebug() << "Tulos" <<result;
}


void MainWindow::on_mul_clicked()
{
    QString num1str= ui->num1->text();
    int num1 = num1str.toInt();
    QString num2str= ui->num2->text();
    int num2 = num2str.toInt();

    int result = num1 * num2;
    qDebug() << "Kerrottu numero" <<num1 << "*" << num2;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    qDebug() << "Tulos" <<result;
}


void MainWindow::on_div_clicked()
{
    QString num1str= ui->num1->text();
    int num1 = num1str.toInt();
    QString num2str= ui->num2->text();
    int num2 = num2str.toInt();

    int result = num1 / num2;
    qDebug() << "Jaettu numero" <<num1 << "/" << num2;
    QString resStr = QString::number(result);
    ui->result->setText(resStr);
    qDebug() << "Tulos" <<result;
}


void MainWindow::on_N1_clicked()
{
    QString N1str = ui->N1->text();
    int n = N1str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N1;
    //ui->num1->setText(N1str);
}


void MainWindow::on_N2_clicked()
{
    QString N2str = ui->N2->text();
    int n = N2str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N2;
    //ui->num2->setText(N2str);
}


void MainWindow::on_N3_clicked()
{
    QString N3str = ui->N3->text();
    int n = N3str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N3;
    //ui->num3->setText(N3str);
}


void MainWindow::on_N4_clicked()
{
    QString N4str = ui->N4->text();
    int n = N4str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N4;
    //ui->num1->setText(N4str);
}


void MainWindow::on_N5_clicked()
{
    QString N5str = ui->N5->text();
    int n = N5str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N5;
    //ui->num5->setText(N5str);
}


void MainWindow::on_N6_clicked()
{
    QString N1str = ui->N1->text();
    int n = N1str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N1;
    //ui->num1->setText(N1str);
}


void MainWindow::on_N7_clicked()
{
    QString N7str = ui->N7->text();
    int n = N7str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N1;
    //ui->num1->setText(N1str);
}


void MainWindow::on_N8_clicked()
{
    QString N8str = ui->N8->text();
    int n = N8str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N1;
    //ui->num1->setText(N1str);
}


void MainWindow::on_N9_clicked()
{
    QString N9str = ui->N9->text();
    int n = N9str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N9;
    //ui->num9->setText(N9str);
}


void MainWindow::on_N0_clicked()
{
    QString N0str = ui->N0->text();
    int n = N0str.toInt();
    numberClickHandler(n);
    qDebug() << "Painettu numero= " << n;
    //qDebug() << "Painettu numeroa" << N0;
    //ui->num0->setText(N0str);
}

void MainWindow::numberClickHandler(int n)
{
    qDebug() << "Valittu numero" << n;

    QString str = QString::number(n);
    if (tila ==1) {

        ui->num1->setText(str);
    } else if (tila==2) {
       ui->num2->setText(str);
    } else {
       ui->result->setText(str);
    }
}


void MainWindow::on_enter_2_clicked()
{
    tila++;
    qDebug() << "Valittu tila on " << tila;
    if(tila ==3) {
        tila = 1;
    }
}

