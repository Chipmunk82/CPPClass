#include <iostream>


//int main()
//{
//	using namespace std;
	//정수형 타입
	/*int myInt = -10;
	long myLong = -41251;
	unsigned int myUint = 10;
	unsigned long myUlong = 41251;

	std::cout << myInt << std::endl;
	std::cout << myLong << std::endl;
	std::cout << myUint << std::endl;
	std::cout << myUlong << std::endl;*/

	//실수형 타입
	/*float myFloat = 10.255;
	myFloat = 150.233233233;
	std::cout << myFloat << std::endl;
	float A = 1.2;
	float B = 1.2;
	std::cout << (A + B) << std::endl;
	std::cout << (A + B == 2.3 ) << std::endl;	// 0은 false 거짓
	std::cout << (A == B) << std::endl;			// 1은 true  진실
	*/

	// 문자형 타입
	/*char Mychar = 'A';
	char Mychar2 = 50;
	char Mychar3 = 66;
	std::cout << Mychar << std::endl;
	std::cout << Mychar2 << std::endl;
	std::cout << Mychar3 << std::endl;*/

	//bool형 타입
	/*bool isTrue = 0;
	std::cout << isTrue << std::endl;
	isTrue = true;
	std::cout << isTrue << std::endl;
	isTrue = 1; 
	std::cout << isTrue << std::endl;
	isTrue = false; 
	std::cout << isTrue << std::endl;*/
	// 카멜케이스 isTrue 

	//상수 타입
	/*const int limit = 20;
	limit = 10;
	std::cout << limit << std::endl;*/

	// 묵시적 형변환 implicit
	/*int A = 10.1355;
	float B = 10;
	char C = 97;
	int D = 'a';*/

	

	// 명시적 형변환 explicit
	/*int aa = (int)10.1355;
	int bb = (float)10;
	char cc = (char)97;
	int dd = (int)'a';

	float aaa = (float)aa;
	float bbb = (float)bb;	

	std::cout << A << " : " << aa << std::endl;
	std::cout << B << " : " << bb << std::endl;
	std::cout << C << " : " << cc << std::endl;
	std::cout << D << " : " << dd << std::endl;*/

	//연산자
	//1. 산술 연산자(arithmetic operator)
	/*int result = 0;
	result = 5 + 5 * 5; // 곱셈(*)이 우선순위 높다
	std::cout << result << std::endl;
	
	result = (5 + 5) * 5; // () 우선순위 높다
	std::cout << result << std::endl;

	result = 5 / 5;		//몫값
	std::cout << result << std::endl;
	
	result = 5 * 0;		// 0 곱셈 가능		
	std::cout << result << std::endl;

	result = 5 % 3;		//나머지연산자
	std::cout << result << std::endl;

	result = 5 / 0;		//0은 나누기나 나머지 연산자 불가능
	result = 5 % 0;
	std::cout << result << std::endl;

	float result2 = 0.0;
	result2 = 10 / 3;		// 묵시적 형변환
	result2 = 10.0 / 3.0;
	result2 = (float)10 / 3;// 명시적 형변환 (나머지 한개는 큰 타입으로 자동 형변환)
	std::cout << result2 << std::endl;
	*/

	// shift+del => 한 줄 지우기~

	// 2. 대입연산자(assignment operator)
	/*int result3 = 5;
	result3 = result3 + 2;
	result3 += 2;
	result3 = result3 - 2; 
	result3 -= 2;
	result3 *= 2;
	result3 /= 2;
	result3 %= 2;
	std::cout << result3 << std::endl;*/

	//3. 비교 연산자(comparison)
	/*int a = 10;
	int b = 3;
	int c = 5;
	std::cout << (a == b) << std::endl;	//0
	std::cout << (a != b) << std::endl;	//1
	std::cout << (a > b) << std::endl;	//1
	std::cout << (a >= b) << std::endl;	//1
	std::cout << (a < b) << std::endl;	//0
	std::cout << (a <= b) << std::endl;	//0
	*/

	//4. 논리연산자(logical operator)
	/*std::cout << "AND	" << ((a >= b) && (a >= c)) << std::endl;	//1
	std::cout << "OR	" << ((a >= b) || (a >= c)) << std::endl;	//1
	std::cout << "NOT	" << !(a >= b) << std::endl;				//0
	*/

	//5. 증감연산자(increment and decrement operator)
	/*int x = 5;
	int y = (x++) + 5; // 후위 연산
	std::cout << y << std::endl;
	int z = (++x) + 5; // 전위 연산
	std::cout << z << std::endl;
	*/

	//6. 기타연산자
	// 쉼표 (,)  연산자
	/*//int a = 10;
	//int b = 5;
	int xa = 10, yb = 5;
	//int c;
	//int d;
	int xc, xd;
	xc = xa + yb, xd = xa - yb;
	std::cout << xc << std::endl;
	std::cout << xd << std::endl;
	*/

	//삼항 연산자
	/*int i = 10, j = 5;
	int greater;
	greater = ( i > j )? i : j;
	std::cout << greater << std::endl;
	*/

	//sizeof() 연산자 - 메모리 크기를 반환(바이트단위)
	/*int m;
	double n;
	cout << sizeof(m) << endl;
	cout << sizeof(n) << endl;
	cout << sizeof(int) << endl;*/


	//범위 지정 연산자(scope resolution operator)
	//using namespace std;

	//}
