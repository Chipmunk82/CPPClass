#include <iostream>
#include "Car.h"

using namespace std;

//Car GlobalCar("Global");

class Animal
{
public:
	string name;

public:
	Animal() {}
	Animal(string name)
	{
		cout << name << "... ����..." << endl;
		//this->name = name;
	}
	void Run()
	{
		cout << name << "... �޸���.... " << endl;
	}
}; // �ڵ����� �����ݷ��� ����

/*int main()
{
	Car LocalCar("����");
	Car* MyCar_ptr = new Car("�����Ҵ�");
	delete MyCar_ptr;
	//Animal animal;				//��ü ����
	//animal.name = "������";	//������� �� ����	�ʵ�/�Ӽ�
	//animal.Run();				//����Լ� ȣ��		�޼���

	//tiger �ν��Ͻ� ����
	//Animal* tiger = new Animal("ȣ����");	// tiger�ν��Ͻ� ����
	//delete tiger;	// �޸� ���� ����
	
	//Car MyCar; //��ü ����
	//MyCar.Break();
	//MyCar.Run();
	//MyCar.GasFull(5);
	//Car Mycar(1000, 80, 2);
	//Car YouCar = Car(10,5);
	//Car MyCar(100); �����ε��� �����ڰ� ���� ��� ����X

	//Car car;
	//Car* ptr_car = &car;
	
	//cout << ptr_car->name << endl;
	//cout << ptr_car->gas << endl;
	//ptr_car->Break();
	//ptr_car->GasFull(20);

	//cout << (*ptr_car).name << endl;

	//Car car(100,30,5);
	//car.SetGas(440);
	//cout << car.GetWeight() << endl;

	//Car MyCar("BMW", 1800, 120, 4);
	//Car YourCar;
	//Car YourCar(); // ��üx �Լ� ����o
	//Car* YourCar = new Car(); // �����Ҵ�
	//delete YourCar;

}*/