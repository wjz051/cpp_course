#include <iostream>
using namespace std;

//big three   con/descon   copy   operator=


class mystring
{
    friend mystring operator+(const mystring & a,const mystring & b);

public:
    mystring(const char * s )
    {
        cout<<"mystring(const char * s )"<<endl;
    }

    //��Ա��������+���޷�����Ĭ������ת�����캯��
    // mystring& operator = (const mystring & another)
    // {
    //     cout<<" mystring operator = (const mystring & another)"<<endl;
    // }

};

mystring operator+(const mystring & a,const mystring & b)
{
    return mystring("");
}

class Stack
{
public:
    explicit Stack(int size = 1024)
    {

    }
};

int main()
{
//    string s;     //����
//    string s2("china");  //ת������
//    string s3(s2);       //��������
//    string s4 = s3;      //��������
//    string s5;
//    s5 = s4;

    mystring s5("china");           //��ʾ����
    cout<<"+++++++++++++++++++++++"<<endl;
//    mystring s6 = (mystring)"china";          //��ʽ����
    s5 = "china";

    mystring s6=s5+" is great";

//    Stack  st(100);
//    Stack  st2 = static_cast<Stack>(100);
    return 0;
}
