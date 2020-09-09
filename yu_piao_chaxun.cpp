#include "yu_piao_chaxun.h"

yu_piao_chaxun::yu_piao_chaxun(QWidget *parent) : QWidget(parent)
{


    this->setWindowTitle("余票查询");
    c.setParent(this);
    c.setText("返回");

    connect(&c,&QPushButton::released,this,&yu_piao_chaxun::sendSlot11);

    resize(500,400);

    i=0;j=0;

    c1=new QPushButton(this);
    c1->setText("购买");
    c1->move(400,300);

    c2=new QLabel(this);
    c2->setText("起点站");
    c2->move(80,80);

    c3=new QLabel(this);
    c3->setText("终点站");
    c3->move(80,120);

    c7=new QPushButton(this);
    c7->setText("查询");
    c7->move(400,100);

    connect(c7,&QPushButton::released,this,&yu_piao_chaxun::show1);

    c9=new QLabel(this);
    c9->setText("剩余票数");
    c9->move(80,200);

    c10=new QLabel(this);
    c10->setText("价钱");
    c10->move(80,300);


    c4=new QLineEdit(this);
    c4->setPlaceholderText("请输入1-10之间的数字");
    c4->resize(200,25);
    c4->move(150,80);

    qstation=c4->text();
    a = qstation.toInt();


    c5=new QLineEdit(this);
    c5->setPlaceholderText("请输入1-10之间的数字");
    c5->resize(200,25);
    c5->move(150,120);

    sstation=c5->text();
    b = sstation.toInt();

    for(j=0;j<10;j++){
        jishu[j]=0;
    }
//    jishu[10]={1,2,3,3,2,3,2,1,1,0};
//    jishu[0]=1;jishu[1]=2;jishu[2]=3;jishu[3]=3;jishu[4]=3;
//    jishu[5]=4;jishu[6]=3;jishu[7]=1;jishu[8]=1;jishu[9]=0;

    juli[0]=9;juli[1]=2;juli[2]=3;juli[3]=4;juli[4]=2;
    juli[5]=7;juli[6]=5;juli[7]=2;juli[8]=1;juli[9]=0;



    c6=new QLineEdit(this);
    c6->resize(200,100);
    c6->move(150,150);

    c8=new QLineEdit(this);
    c8->resize(200,100);
    c8->move(150,250);



    //下级窗口

    connect(c1,&QPushButton::released,this,&yu_piao_chaxun::change2);//跳转到已经查询好的界面

    connect(&w,yu_piao_xinxi::mySingal2,this,&yu_piao_chaxun::dealSub2);


}

void yu_piao_chaxun::sendSlot11()
{
    emit mySingal11();
}

//下级窗口的
void yu_piao_chaxun::change2()
{
    w.show();
    this->hide();
    for(m=a-1,n=b;m<n;m++){
        jishu[m]=jishu[m]+1;
    }
    i=i+1;
}

void yu_piao_chaxun::dealSub2()
{
    w.hide();
    this->show();

}
void yu_piao_chaxun::show1()
{

    k=jishu[a-1];
    for(j=a;j<b;j++){
        if(k<jishu[j]){
            k=jishu[j];
        }
    }
    k=10-k;//剩余车票数量

    for(m=a-1,n=b;m<n;m++){
        jishu[9] =juli[m]+jishu[9];
        l=jishu[9];
    }
    //票价

    QString str = QString::number(a,10);
    c6->setText(str);

    QString strt = QString::number(l,10);
    c8->setText(strt);
}


