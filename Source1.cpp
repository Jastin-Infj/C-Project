#include <iostream>
using namespace std;
void kadai1()
{
    struct sample4_t
    {
        char      cvalue1;
        // パディング1 (dvalueのためのパディング)
        double    dvalue;
        char      cvalue2;
        // パディング2 (lvalueのためのパディング)
        long      lvalue;
        char      cvalue3;
        // パディング3 (svalueのためのパディング)
        short     svalue;
        // パディング4 (sample4_tのためのパディング)
    }Data;
    cout << "全体のサイズ" << sizeof(Data) << endl;
}
void kadai2()
{
    struct MyStruct
    {
        struct MyStruct* next;
        double a;
        char name[4] = {};
    }Data;
    cout << sizeof(Data.next) << endl;
    cout << sizeof(Data.a) << endl;
    cout << sizeof(Data.name) << endl;
    cout << "全体のサイズ" << sizeof(Data) << endl;
}
int main()
{
    void(*Func)();
    Func = kadai2;
    Func();
    system("pause");
}
