#include "student.h"
#include "ui_student.h"
#include<QDebug>
#include<QSqlQueryModel>
#include<QPainter>
#pragma execution_character_set("utf-8")
student::student(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::student)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("favicon.ico"));//set UI icon
    this->setFixedSize( this->width (),this->height ());
}

student::~student()
{
    delete ui;
}

void student::paintEvent(QPaintEvent *)
{
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    //绘图操作
    p.drawPixmap(0, 0, width(),height(),QPixmap("../photos/bk.png"));//画背景图
    p.end();
}

void student::on_pushButton_clicked()
{
    close();
}
void student::init()
{
    qDebug()<<stuName;
    QString sql_stu;
    sql_stu="select name as 姓名 ,number as 账号,height as 身高 ,weight as 体重, waist as 腰围,password as 密码  from student where name='"+stuName+"'";
    QSqlQueryModel *modelx=new QSqlQueryModel;
    modelx->setQuery(sql_stu);
    ui->tableView->setModel(modelx);
}
