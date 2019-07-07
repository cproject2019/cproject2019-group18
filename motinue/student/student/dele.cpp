#include "dele.h"
#include "ui_dele.h"
#include<QMessageBox>
#include<QSqlQueryModel>
#include<QPainter>
#pragma execution_character_set("utf-8")
dele::dele(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dele)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("favicon.ico"));//set UI icon
    this->setFixedSize( this->width (),this->height ());
}

dele::~dele()
{
    delete ui;
}

void dele::paintEvent(QPaintEvent *)
{
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    //绘图操作
    p.drawPixmap(0, 0, width(),height(),QPixmap("../photos/bk.png"));//画背景图
    p.end();
}
void dele::on_pushButton_exit_clicked()
{
    close();
}

void dele::on_pushButton_dele_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QSqlQueryModel *model2=new QSqlQueryModel;
    QString name,sql,sql2;
    name=ui->lineEdit_name->text();
    sql2="select count (*) from student where name='"+name+"'";
    model2->setQuery(sql2);
    QModelIndex index1=model2->index(0,0);

    if(index1.data()==0)
    {
        QMessageBox::about(NULL,"警告","motinue系统中并无此人");
    }
    else
    {
        sql="delete from student where name='"+name+"'";
        model->setQuery(sql);
        QMessageBox::about(NULL,"提示","记录删除成功");
    }
}
