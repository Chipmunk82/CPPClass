#include "Myfirst.h"
#include <iostream>

using namespace std;

extern int global_A;

int F::Sum(int a, int b)
{
    cout << "F ������ Sum �Լ� ����" << endl;
    return a + b;
}

void F::PrintVariable(int local_A)
{
    local_A++;
    global_A++;
    cout << "�Ű����� local_A : " << local_A << endl;
    cout << "�������� global_A : " << global_A << endl;
}