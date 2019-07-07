#include "admin_change.h"
#include "ui_admin_change.h"
#include<QSqlQueryModel>
#include<QMessageBox>
#include"admin.h"
#include<QPainter>
#pragma execution_character_set("utf-8")
admin_change::admin_change(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin_change)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("favicon.ico"));//set UI icon
    this->setFixedSize( this->width (),this->height ());
}

admin_change::~admin_change()
{
    delete ui;
}
void admin_change::paintEvent(QPaintEvent *)
{
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    //绘图操作
    p.drawPixmap(0, 0, width(),height(),QPixmap("../photos/bk.png"));//画背景图
    p.end();
}
void admin_change::on_pushButton_exit_clicked()
{
    close();
}

void admin_change::on_pushButton_enter_clicked()
{
    QString name,number,height,weight,waist,password;
    name=ui->lineEdit_name->text();
    number=ui->lineEdit_number->text();
    height=ui->lineEdit_class->text();
    weight=ui->lineEdit_time->text();
    waist=ui->lineEdit_GPA->text();
    password=ui->lineEdit_passowrd->text();
    if(ui->radioButton_add->isChecked())
    {
        QString sql1;
        sql1="select count (*) from studentL where name='"+name+"'";
        QSqlQueryModel *model1=new QSqlQueryModel;
        model1->setQuery(sql1);
        QModelIndex index1=model1->index(0,0);
        if(index1.data()!=0)
        {
            QMessageBox::about(NULL,"警告","系统中已有这位学生");
        }
        else
        {
            QString sql2;
            QSqlQueryModel *model2=new QSqlQueryModel;
            sql2="insert into student values ('"+name+"','"+number+"','"+height+"','"+weight+"','"+waist+"','"+password+"')";
            model2->setQuery(sql2);
            admin ad;
            ad.init();
            QMessageBox::about(NULL,"提示","系统信息添加成功");
        }

    }
    else if(ui->radioButton_change->isChecked())
    {
        QString sql1;
        sql1="select count (*) from student where name='"+name+"'";
        QSqlQueryModel *model1=new QSqlQueryModel;
        model1->setQuery(sql1);
        QModelIndex index1=model1->index(0,0);
        if(index1.data()==0)
        {
            QMessageBox::about(NULL,"警告","系统中没有这位用户");
        }
        else
        {
            QString sql2;
            QSqlQueryModel *model2=new QSqlQueryModel;
            sql2="update student set number ='"+number+"',height='"+height+"',weight='"+weight+"',waist='"+waist+"',password='"+password+"' where name='"+name+"'";
            model2->setQuery(sql2);

            QMessageBox::about(NULL,"提示","信息修改成功");
        }

    }
    else
    {
        QMessageBox::about(NULL,"警告","请选择你要进行的操作");//两个radio btn必须要选择一个
    }
}
