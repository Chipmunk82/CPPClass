#include <iostream> //c++ ���̺귯��
#include <stdio.h>	//c ���̺귯��
#include <math.h>
#include "Myfirst.h"
#include "Mymath.h"
#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.14

using namespace std;

//�Լ��� ���� ����
int Sum(int i, int j);

//int main()
//{
	//cout << "Hello" << endl;
	//int c;		//���� ����
	//int aa = 3;	//���� ����, �ʱ�ȭ
	//int bb = 4;	//���� ����, �ʱ�ȭ
	//�Լ��� ȣ�� �� return ���� int c�� ����
	/*c = Sum(aa, bb);
	cout << c << endl;

	cout << Sum(10, 5) << endl;
	cout << F::Sum(10, 5) << endl;
	cout << M::Sum(5, 4) << endl;*/

	//���� �ѷ� r * 2 * Pi 
	//���� ���� r * r * Pi
	//float r = 3;	//������
	//float l;		//���� �ѷ�
	//float s;		//���� ����

	//l = r * 2 * Pi;
	//s = r * r * Pi;

	//cout << l << endl;
	//cout << s << endl;

	//printf("Hello");
	//cout << endl;
	//printf("Hello\n");
	//printf("Hello\?");
	//cout << endl;
	//printf("\"Hello\"");
	//cout << endl;

	//char initial = 'S';
	//printf("My name is %c\n", initial);
	//printf("%d %d %d\n", 10, 5, 20);	// decimal(10������)
	//printf("I am %d years old \n", 5+1);
	//printf("I am %s years old \n", "51");
	//printf("Goodbye\a\n");
	
	/*char input;
	int age;
	scanf_s("%c", &input);
	printf("�̸�: %c\n", input);
	scanf_s("%d", &age);
	printf("����: %d\n", age);*/

	/*int age;
	char initial;
	cin >> age;
	cin >> initial;

	cout << "Hi" << endl;
	cout << "My Name is " << initial << endl;
	cout <<"I am "<< age << " years old" << endl;
	cout << "Good Bye;";
	*/
	
//	return 0;
//}

//�Լ� ����� ����
int Sum(int m, int n)
{
	int temp = m + n;
	return temp;
}