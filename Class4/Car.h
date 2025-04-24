#pragma once
#include <iostream>

using namespace std;

class Car
{
//���������� private, protected, public
private:
	float weight = 1500;
public:
	//������� �ʱ�ȭ
	string name = "SONATA";
	const int max = 4;
	//���� ��� ���� �ʱ�ȭx
	static int countCar;

protected:
	float gas = 100;

public:
	//����Լ� ����, method
	Car();	//������
	Car(string i_name)
	{
		name = i_name;
		cout << name << "... ������... " << endl;
	}
	Car(int i_max):max(i_max){ 
		cout << "max : " << max << endl;
	}
	Car(float g, int m);
	Car(float i_weight, float i_gas, int i_max) :weight(i_weight), gas(i_gas), max(i_max)
	{
		/*this->weight = weight;
		this->gas = gas;
		this->max = max;*/
		//weight = i_weight;
		//gas = i_gas;
		//max = i_max;
		cout << weight << " : " << i_weight << endl;
		cout << "�Ű����� 3 �ʱ�ȭ ������ ȣ��" << endl;
	}
	Car(string i_name, float i_weight, float i_gas, int i_max) :name(i_name), weight(i_weight), gas(i_gas), max(i_max)
	{
		cout << name << " : " << i_name << endl;
		cout << "�Ű����� 4 �ʱ�ȭ ������ ȣ��" << endl;
	}
	~Car();	//�Ҹ���
	virtual void Break()
	{
		cout << "Car class Break �Լ� ȣ��" << endl;
	}
	//���� ���� �Լ� = 0;
	virtual void Bell() {
	};

	void Run();
	int GetMax();
	void GasFull(int);
	void SetGas(float i_gas)
	{
		gas = i_gas;
		cout << gas << endl;
	}
	float GetWeight()
	{
		return weight;
	}
};