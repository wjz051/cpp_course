#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;

//系统提供默认的赋值运算符重载，也是一种浅赋值行为--只拷贝地址，如果这个时候指向地址的值修改了，也会被修改
//如果对象中，不存在由*构成的堆空间，此时默认也是可以满足需求的。
//格式比较固定 A& operator=(const A& another)  自实现，默认即不存在

//如果对象中，存在由*构成的堆空间

struct Date
{
public:
    Date(const char* y,int m =6 ,int d = 6)
        :month(m),day(d)
        {
            year=(char*)malloc(strlen(y)+1);
            strcpy(year,y);
        }

    Date& operator=(const Date& another)
    {
        delete year;
        year=(char*)malloc(strlen(another.year)+1);
        strcpy(year,another.year);

        this->month = another.month;
        this->day = another.day;
        return *this;
    }


    void dis()
    {
        cout<<"year:"<<year
            <<"month"<<month
            <<"day"<<day<<endl;
    }


    char *year;
    int month;
    int day;
};


int main()
{
    Date d("20184ekiuyiyurgregreghershtrse",8,8);
    d.dis();

    Date d2("20194iyuiyui",9,9);
    d2.dis();

    d2 = d;
    d2.dis();

    printf("%p\n",d.year);
    printf("%p\n",d2.year);

    strcpy(d.year,"2020");

    d.dis();
    d2.dis();

    

    Date  d3("2018");  //d3 = d3  a = a

    d3 = d2 = d;
    d3.operator =(d2.operator =(d));
    d3.dis();
    return 0;
}
