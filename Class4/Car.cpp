#include "Car.h"

Car::Car()
{
	//constructor
	//��ü�� ������ �� ȣ���� �ִ� �Լ�
	//�����ڿ����� �ʱ�ȭ ����
	//��ȯ�ڷ��� ����
	//cout << "weight : " << weight << endl;
	cout << "Car default constructor ȣ��" << endl;
	
	++countCar;
}

Car::Car(float g, int m)
{
	cout << "���� �� gas " << gas << ", max " << max <<  endl;
	gas = g;
	//max = m;
	cout << "���� �� gas " << gas << ", max " << max <<  endl;
	cout << "constructor �Ű����� 2���� flaot, int ȣ��" << endl;
}

Car::~Car()
{
	//�Ҹ���
	//��ü�� �Ҹ�� �� ȣ���� �ִ� �Լ�
	//Overloading �Ұ�		
	cout << name << " destructor ȣ��" << endl;
}

void Car::Run()
{
	cout << "Car class Run �Լ� ȣ��" << endl;
}

int Car::GetMax()
{
	return 0;
}

void Car::GasFull(int gas)
{
	cout << gas << "Car class GasFull �Լ� ȣ��" << endl;
}
