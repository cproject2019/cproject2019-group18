#include "admin.h"
#include "ui_admin.h"
#include<QSqlQueryModel>
#include<QPainter>
#pragma execution_character_set("utf-8")
admin::admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon("favicon.ico"));//set UI icon
    init();
    connect(ui->lineEdit_findname,SIGNAL(textChanged(QString)),this,SLOT(find()));//将字符变化的事件，与某函数连接
    this->setFixedSize( this->width (),this->height ());//固定窗口大小
}

admin::~admin()
{
    delete ui;
}

void admin::paintEvent(QPaintEvent *)
{
    QPainter p;//创建画家对象
    p.begin(this);//指定当前窗口为绘图设备
    //绘图操作
    p.drawPixmap(0, 0, width(),height(),QPixmap("../photos/bk.png"));//画背景图
    p.end();
}

void admin::init()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString sql;
    sql="select name as 姓名 ,number as 学号,class as 专业 ,EnterTime as 年级, GPA as 绩点,password as 密码  from student";
    model->setQuery(sql);
    ui->tableView->setModel(model);
}

void admin::on_pushButton_exit_clicked()
{
    close();
}

void admin::on_pushButton_show_clicked()
{
    QSqlQueryModel *model=new QSqlQueryModel;
    QString sql;
    sql="select name as 姓名 ,number as 学号,class as 专业 ,EnterTime as 年级, GPA as 绩点,password as 密码  from student";
    model->setQuery(sql);
    ui->tableView->setModel(model);
}

void admin::on_pushButton_change_clicked()
{
    adminc=new admin_change;
    adminc->show();
}

void admin::on_pushButton_del_clicked()
{
    del=new dele;
    del->show();
}
void admin::find()
{
    QSqlQueryModel *modell=new QSqlQueryModel;
    QString find,sql0;
    find=ui->lineEdit_findname->text();
    sql0="select name as 姓名 ,number as 账号,height as 身高 ,weight as 体重, waist as 腰围,password as 密码  from student where name LIKE '%"+find+"%'";
    modell->setQuery(sql0);
    ui->tableView->setModel(modell);

}

void admin::on_pushButton_order_clicked()//根据combobox显示的文字执行不同的语句
{
    QSqlQueryModel *modell=new QSqlQueryModel;
    QString sql0;
    if(ui->checkBox_desc->isChecked())
    {
        if(ui->comboBox->currentText()=="学号")
        {
            sql0="select name as 姓名 ,number as 账号,height as 身高 ,weight as 体重, waist as 腰围,password as 密码  from student order by number desc";
        }
        else if(ui->comboBox->currentText()=="绩点")
        {
            sql0="select name as 姓名 ,number as 账号,height as 身高 ,weight as 体重, waist as 腰围,password as 密码  from student order by GPA desc";
        }
        else if(ui->comboBox->currentText()=="入学时间")
        {
            sql0="select name as 姓名 ,number as 账号,height as 身高 ,weight as 体重, waist as 腰围,password as 密码  from student order by EnterTime desc";
        }
    }
    else
    {
        if(ui->comboBox->currentText()=="账号")
        {
            sql0="select name as 姓名 ,number as 账号,height as 身高 ,weight as 体重, waist as 腰围,password as 密码  from student order by number ";
        }
        else if(ui->comboBox->currentText()=="体重")
        {
            sql0="select name as 姓名 ,number as 账号,height as 身高 ,weight as 体重, waist as 腰围,password as 密码  from student order by weight ";
        }
        else if(ui->comboBox->currentText()=="腰围")
        {
            sql0="select name as 姓名 ,number as 账号,height as 身高 ,weight as 体重, waist as 腰围,password as 密码  from student order by waist ";
        }
    }
    modell->setQuery(sql0);
    ui->tableView->setModel(modell);
}
