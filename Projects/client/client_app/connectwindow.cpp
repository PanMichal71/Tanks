#include "connectwindow.h"
#include "ui_connectwindow.h"

ConnectWindow::ConnectWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ConnectWindow),
    mainWindowPointer(parent)
{
    ui->setupUi(this);
    connect(ui->backButton,SIGNAL(clicked()),mainWindowPointer,SLOT(back()));
}

ConnectWindow::~ConnectWindow()
{
    delete ui;
}



void ConnectWindow::on_connectButton_clicked()
{
    /*
     Tu ma być tak, że zbieram dane z pól nazwa, serwer i port, wpierdziulam to do biblioteki
     no i potem próbuje się połączyć z serwerem wysyłając też nazwę, dostaję od Michasia pozwolenie
     i wtedy mogę u siebię mapkę stworzyć
    client *fun = new client;

    bool i=  fun->hurcziConnectToServer(ui->lineEdit_3->displayText()
                              ,ui->lineEdit_2->displayText()
                              ,ui->lineEdit->displayText());

    if(i==1)
    {
            ui->label_4->setText("ok");
    }
    */

    win= new GameWindow(this);
    win->show();
    hide();


}

void ConnectWindow::on_backButton_clicked()
{

}
