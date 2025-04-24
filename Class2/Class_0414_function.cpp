#include <iostream> //c++ 라이브러리
#include <stdio.h>	//c 라이브러리
#include <math.h>
#include "Myfirst.h"
#include "Mymath.h"
#define _CRT_SECURE_NO_WARNINGS
#define Pi 3.14

using namespace std;

//함수의 원형 선언
int Sum(int i, int j);

//int main()
//{
	//cout << "Hello" << endl;
	//int c;		//변수 선언
	//int aa = 3;	//변수 선언, 초기화
	//int bb = 4;	//변수 선언, 초기화
	//함수의 호출 후 return 값을 int c에 대입
	/*c = Sum(aa, bb);
	cout << c << endl;

	cout << Sum(10, 5) << endl;
	cout << F::Sum(10, 5) << endl;
	cout << M::Sum(5, 4) << endl;*/

	//원의 둘레 r * 2 * Pi 
	//원의 넓이 r * r * Pi
	//float r = 3;	//반지름
	//float l;		//원의 둘레
	//float s;		//원의 넓이

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
	//printf("%d %d %d\n", 10, 5, 20);	// decimal(10진법의)
	//printf("I am %d years old \n", 5+1);
	//printf("I am %s years old \n", "51");
	//printf("Goodbye\a\n");
	
	/*char input;
	int age;
	scanf_s("%c", &input);
	printf("이름: %c\n", input);
	scanf_s("%d", &age);
	printf("나이: %d\n", age);*/

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

//함수 선언과 정의
int Sum(int m, int n)
{
	int temp = m + n;
	return temp;
}