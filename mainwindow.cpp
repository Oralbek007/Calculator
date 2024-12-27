#include "mainwindow.h"
#include "./ui_mainwindow.h"
double num_first;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->zero, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->one, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->two, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->three, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->four, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->five, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->six, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->seven, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->eight, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->nine, SIGNAL(clicked()), this, SLOT(digit_numbers()));
    connect(ui->pm, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->persent, SIGNAL(clicked()), this, SLOT(operations()));
    connect(ui->over, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->mult, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->minus, SIGNAL(clicked()), this, SLOT(math_operations()));
    connect(ui->plus, SIGNAL(clicked()), this, SLOT(math_operations()));

    ui->over->setCheckable(true);
    ui->mult->setCheckable(true);
    ui->minus->setCheckable(true);
    ui->plus->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::digit_numbers()
{
    QPushButton *button = (QPushButton *)sender();
    double numbers;
    QString num;
    numbers = (ui->label->text() + button->text()).toDouble();
    num = QString::number(numbers, 'g', 15);
    ui->label->setText(num);
}

void MainWindow::on_point_clicked()
{
    if((!ui->label->text().contains('.'))){
        ui->label->setText(ui->label->text() + '.');
    }

}
void MainWindow::operations()
{
    QPushButton *button = (QPushButton *)sender();

    double numbers;
    QString num;
    if(button->text() == "inverse"){
        numbers = (ui->label->text()).toDouble();
        numbers = numbers * -1;
        num = QString::number(numbers, 'g', 15);
        ui->label->setText(num);
    }else if(button->text() == "%"){
        numbers = (ui->label->text()).toDouble();
        numbers = numbers * 0.01;
        num = QString::number(numbers, 'g', 15);
        ui->label->setText(num);
    }
}

void MainWindow::math_operations()
{
    QPushButton *button = (QPushButton *)sender();
    num_first = ui->label->text().toDouble();
    ui->label->setText("");

    button->setChecked(true);
}



void MainWindow::on_equal_clicked()
{
    double label_number, num_second;
    QString num;
    num_second = ui->label->text().toDouble();
    if(ui->plus->isChecked()){
        label_number = num_first + num_second;
        num = QString::number(label_number);
        ui->label->setText(num);
        ui->plus->setChecked(false);
    }else if(ui->minus->isChecked()){
        label_number = num_first - num_second;
        num = QString::number(label_number);
        ui->label->setText(num);
        ui->minus->setChecked(false);
    }else if(ui->over->isChecked()){
        if(num_second == 0){
            ui->label->setText(num);
        }else{
            label_number = num_first / num_second;
            num = QString::number(label_number);
            ui->label->setText(num);
            ui->over->setChecked(false);
        }
    }else if(ui->mult->isChecked()){
        label_number = num_first * num_second;
        num = QString::number(label_number);
        ui->label->setText(num);
        ui->mult->setChecked(false);
    }

}


void MainWindow::on_delete_2_clicked()
{

    ui->plus->setChecked(false);
    ui->minus->setChecked(false);
    ui->over->setChecked(false);
    ui->mult->setChecked(false);

    ui->label->setText("0");
}
