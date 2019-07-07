#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QSqlQueryModel>
#include<QDebug>
#include<QMessageBox>

#pragma execution_character_set("utf-8")
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    stu=new student;
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    this->setWindowIcon(QIcon("favicon.ico"));//set UI icon
    this->setFixedSize( this->width (),this->height ());
 }

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *)
{
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    //绘图操作
    p.drawPixmap(0, 0, width(),height(),QPixmap("../photos/bk.png"));//画背景图
    p.end();
}

void MainWindow::on_pushButton_exit_clicked()
{
    close();
}

void MainWindow::on_pushButton_regist_clicked()
{
    QString sql1;
    QString sql3;

    inputName=ui->lineEdit_name->text();
    QString inputPassword=ui->lineEdit_password->text();
    QSqlQueryModel *model1=new QSqlQueryModel;
    sql1="select count (*) from student where name='"+inputName+"'";
    model1->setQuery(sql1);
    QModelIndex index1=model1->index(0,0);
    if(index1.data()==0)
    {
        QMessageBox::about(NULL,"提示","用户注册成功");
        sql3="insert into student(name,password) values('"+inputName+"','"+inputPassword+"')";
        QSqlQueryModel *model=new QSqlQueryModel;
        model->setQuery(sql3);
    }
    else if(index1.data()!=0)
    {
        QMessageBox::about(NULL,"提示","用户已经存在");
    }
}

void MainWindow::on_pushButton_login_clicked()
{
    QString sql1,sql2;
    QString sql3;

    QString inputName=ui->lineEdit_name->text();
    QString inputPassword=ui->lineEdit_password->text();
    QSqlQueryModel *model1=new QSqlQueryModel;
    QSqlQueryModel *model2=new QSqlQueryModel;
    sql1="select count (*) from student where name='"+inputName+"'";
    model1->setQuery(sql1);
    QModelIndex index1=model1->index(0,0);
    sql2="select password from student where name ='"+inputName+"'";
    model2->setQuery(sql2);
    QModelIndex index2=model2->index(0,0);
    if(ui->checkBox_admin->isChecked())
    {
        if(inputName=="admin"&&inputPassword=="admin")
        {
            QMessageBox::about(NULL,"提示","管理员登陆成功");
            adm=new admin;
            adm->show();

        }
        else
        {
            QMessageBox::about(NULL,"提示","用户名或密码错误");
        }
    }
    else
    {
        if(index1.data()!=0&&inputPassword==index2.data())
        {
            QMessageBox::about(NULL,"提示","用户登录成功");
            stu->stuName=inputName;//将登陆的学生信息读取出来
            stu->show();
            stu->init();

        }
        else
        {
            QMessageBox::about(NULL,"提示","用户名或密码错误");

        }
    }
}
