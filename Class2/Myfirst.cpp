#include "Myfirst.h"
#include <iostream>

using namespace std;

extern int global_A;

int F::Sum(int a, int b)
{
    cout << "F 에서의 Sum 함수 실행" << endl;
    return a + b;
}

void F::PrintVariable(int local_A)
{
    local_A++;
    global_A++;
    cout << "매개변수 local_A : " << local_A << endl;
    cout << "전역변수 global_A : " << global_A << endl;
}