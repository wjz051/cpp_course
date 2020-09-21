#include <iostream>

using namespace std;

template<typename T1,typename T2>
void myswap(T1 & a, T2 &b){
    T2  t = a;
    a = b;
    b = t;
}
//����ģ��   ʵ����   ģ�庯��      ģ�庯���ĵ���
//myswap    ->     myswap<int> ->myswap<int>(1,2)

template<typename T1,typename T2>
T2 mymax(T1 & a, T2 &b){
    T2  t = a;
    a = b;
    b = t;
}

int main()
{
    int i = 1; double j = 2.1;
    myswap(i,j);
    cout<<i<<j<<endl;
    return 0;
}
