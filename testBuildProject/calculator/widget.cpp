#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("计算器");
    QFont f("宋体",20);
    ui->lineEdit->setFont(f);
    //按键上放图片
    QIcon con("D:\\Testspace\\qt\\testBuildProject\\calculator\\deleteButton.PNG");
    ui->backButton->setIcon(con);
    //改变按钮背景色
    ui->equalButton->setStyleSheet("background:yellow");
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_oneButton_clicked()
{
    expression += "1";
    ui->lineEdit->setText(expression);
}

void Widget::on_twoButton_clicked()
{
    expression += "2";
    ui->lineEdit->setText(expression);
}

void Widget::on_threeButton_clicked()
{
    expression += "3";
    ui->lineEdit->setText(expression);
}

void Widget::on_fourButton_clicked()
{
    expression += "4";
    ui->lineEdit->setText(expression);
}

void Widget::on_fiveButton_clicked()
{
    expression += "5";
    ui->lineEdit->setText(expression);
}

void Widget::on_sixButton_clicked()
{
    expression += "6";
    ui->lineEdit->setText(expression);
}

void Widget::on_sevenButton_clicked()
{
    expression += "7";
    ui->lineEdit->setText(expression);
}

void Widget::on_eightButton_clicked()
{
    expression += "8";
    ui->lineEdit->setText(expression);
}

void Widget::on_nineButton_clicked()
{
    expression += "9";
    ui->lineEdit->setText(expression);
}

void Widget::on_clearButton_clicked()
{
    expression.clear();
    ui->lineEdit->clear();

}

void Widget::on_backButton_clicked()
{
    expression.chop(1);
    ui->lineEdit->setText(expression);
}

int optPiority(char ch)
{
    switch (ch) {
    case '(':
        return 3;
        break;
    case '*':
    case '/':
        return 2;
        break;
    case '+':
    case '-':
        return 1;
        break;
    default:
        return 0;
    }
}
void Widget::on_equalButton_clicked()
{
    QStack<char> s_opt;
    QStack<int> s_num;

    char opt[128]={0};
    int i=0,tmp=0,num1,num2;

    //Qstring转换成char*
    QByteArray ba;
    ba.append(expression); //把QString转换成QByteArray
    strcpy(opt,ba.data()); //data可以把QByteArray转换成const char *

    while(opt[i]!='\0'|| s_opt.empty()!=true)//将char型的123456789从Ascii转化为数字
    {
        if(opt[i]>='0'&&opt[i]<='9')//如果是数字
        {
            tmp = tmp*10+opt[i]-'0';
            i++;
            if(opt[i]<'0'||opt[i]>'9')
            {
                s_num.push(tmp);
                tmp=0;
            }
        }
        else//如果是操作符
        {
            if(s_opt.empty()==true||
                    optPiority(opt[i])>optPiority(s_opt.top())||
                    (s_opt.top()=='('&&opt[i]!=')')
                    )
            {
                s_opt.push(opt[i]);
                i++;
                continue;
            }

            if(s_opt.top()=='('&&opt[i]==')')
            {
                s_opt.pop();
                i++;
                continue;
            }

            if(optPiority(opt[i])<=optPiority(s_opt.top())||
                    (opt[i]==')'&&s_opt.top()!='(')||
                    (opt[i]=='\0'&&s_opt.empty()!=true)
                    )
            {
                char ch =s_opt.top();
                s_opt.pop();
                switch (ch) {
                case '+':
                    num1= s_num.top();
                    s_num.pop();
                    num2 = s_num.top();
                    s_num.pop();
                    s_num.push(num1+num2);
                    break;
                case '-':
                    num1= s_num.top();
                    s_num.pop();
                    num2 = s_num.top();
                    s_num.pop();
                    s_num.push(num1-num2);
                    break;
                case '*':
                    num1= s_num.top();
                    s_num.pop();
                    num2 = s_num.top();
                    s_num.pop();
                    s_num.push(num1*num2);
                    break;
                case '/':
                    num1= s_num.top();
                    s_num.pop();
                    num2 = s_num.top();
                    s_num.pop();
                    s_num.push(num1/num2);
                    break;
                }
            }
        }
    }
    ui->lineEdit->setText(QString::number(s_num.top()) );
    expression.clear();
}

void Widget::on_plusButton_clicked()
{
    expression += "+";
    ui->lineEdit->setText(expression);
}

void Widget::on_subtractButton_clicked()
{
    expression += "-";
    ui->lineEdit->setText(expression);
}

void Widget::on_multiplyButton_clicked()
{
    expression += "*";
    ui->lineEdit->setText(expression);
}

void Widget::on_divideButton_clicked()
{
    expression += "/";
    ui->lineEdit->setText(expression);
}

void Widget::on_leftBrackets_clicked()
{
    expression += "(";
    ui->lineEdit->setText(expression);
}

void Widget::on_rightBrackets_clicked()
{
    expression += ")";
    ui->lineEdit->setText(expression);
}
