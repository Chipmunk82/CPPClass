#include "Car.h"

Car::Car()
{
	//constructor
	//객체를 생성할 때 호출해 주는 함수
	//생성자에서도 초기화 가능
	//반환자료형 생략
	//cout << "weight : " << weight << endl;
	cout << "Car default constructor 호출" << endl;
	
	++countCar;
}

Car::Car(float g, int m)
{
	cout << "변경 전 gas " << gas << ", max " << max <<  endl;
	gas = g;
	//max = m;
	cout << "변경 후 gas " << gas << ", max " << max <<  endl;
	cout << "constructor 매개변수 2인자 flaot, int 호출" << endl;
}

Car::~Car()
{
	//소멸자
	//객체를 소멸될 때 호출해 주는 함수
	//Overloading 불가		
	cout << name << " destructor 호출" << endl;
}

void Car::Run()
{
	cout << "Car class Run 함수 호출" << endl;
}

int Car::GetMax()
{
	return 0;
}

void Car::GasFull(int gas)
{
	cout << gas << "Car class GasFull 함수 호출" << endl;
}
