#include <iostream>
using namespace std;
void kadai1()
{
    struct sample4_t
    {
        char      cvalue1;
        // �p�f�B���O1 (dvalue�̂��߂̃p�f�B���O)
        double    dvalue;
        char      cvalue2;
        // �p�f�B���O2 (lvalue�̂��߂̃p�f�B���O)
        long      lvalue;
        char      cvalue3;
        // �p�f�B���O3 (svalue�̂��߂̃p�f�B���O)
        short     svalue;
        // �p�f�B���O4 (sample4_t�̂��߂̃p�f�B���O)
    }Data;
    cout << "�S�̂̃T�C�Y" << sizeof(Data) << endl;
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
    cout << "�S�̂̃T�C�Y" << sizeof(Data) << endl;
}
int main()
{
    void(*Func)();
    Func = kadai2;
    Func();
    system("pause");
}
