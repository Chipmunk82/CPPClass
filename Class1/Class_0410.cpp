#include <iostream>


//int main()
//{
//	using namespace std;
	//������ Ÿ��
	/*int myInt = -10;
	long myLong = -41251;
	unsigned int myUint = 10;
	unsigned long myUlong = 41251;

	std::cout << myInt << std::endl;
	std::cout << myLong << std::endl;
	std::cout << myUint << std::endl;
	std::cout << myUlong << std::endl;*/

	//�Ǽ��� Ÿ��
	/*float myFloat = 10.255;
	myFloat = 150.233233233;
	std::cout << myFloat << std::endl;
	float A = 1.2;
	float B = 1.2;
	std::cout << (A + B) << std::endl;
	std::cout << (A + B == 2.3 ) << std::endl;	// 0�� false ����
	std::cout << (A == B) << std::endl;			// 1�� true  ����
	*/

	// ������ Ÿ��
	/*char Mychar = 'A';
	char Mychar2 = 50;
	char Mychar3 = 66;
	std::cout << Mychar << std::endl;
	std::cout << Mychar2 << std::endl;
	std::cout << Mychar3 << std::endl;*/

	//bool�� Ÿ��
	/*bool isTrue = 0;
	std::cout << isTrue << std::endl;
	isTrue = true;
	std::cout << isTrue << std::endl;
	isTrue = 1; 
	std::cout << isTrue << std::endl;
	isTrue = false; 
	std::cout << isTrue << std::endl;*/
	// ī�����̽� isTrue 

	//��� Ÿ��
	/*const int limit = 20;
	limit = 10;
	std::cout << limit << std::endl;*/

	// ������ ����ȯ implicit
	/*int A = 10.1355;
	float B = 10;
	char C = 97;
	int D = 'a';*/

	

	// ����� ����ȯ explicit
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

	//������
	//1. ��� ������(arithmetic operator)
	/*int result = 0;
	result = 5 + 5 * 5; // ����(*)�� �켱���� ����
	std::cout << result << std::endl;
	
	result = (5 + 5) * 5; // () �켱���� ����
	std::cout << result << std::endl;

	result = 5 / 5;		//��
	std::cout << result << std::endl;
	
	result = 5 * 0;		// 0 ���� ����		
	std::cout << result << std::endl;

	result = 5 % 3;		//������������
	std::cout << result << std::endl;

	result = 5 / 0;		//0�� �����⳪ ������ ������ �Ұ���
	result = 5 % 0;
	std::cout << result << std::endl;

	float result2 = 0.0;
	result2 = 10 / 3;		// ������ ����ȯ
	result2 = 10.0 / 3.0;
	result2 = (float)10 / 3;// ����� ����ȯ (������ �Ѱ��� ū Ÿ������ �ڵ� ����ȯ)
	std::cout << result2 << std::endl;
	*/

	// shift+del => �� �� �����~

	// 2. ���Կ�����(assignment operator)
	/*int result3 = 5;
	result3 = result3 + 2;
	result3 += 2;
	result3 = result3 - 2; 
	result3 -= 2;
	result3 *= 2;
	result3 /= 2;
	result3 %= 2;
	std::cout << result3 << std::endl;*/

	//3. �� ������(comparison)
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

	//4. ��������(logical operator)
	/*std::cout << "AND	" << ((a >= b) && (a >= c)) << std::endl;	//1
	std::cout << "OR	" << ((a >= b) || (a >= c)) << std::endl;	//1
	std::cout << "NOT	" << !(a >= b) << std::endl;				//0
	*/

	//5. ����������(increment and decrement operator)
	/*int x = 5;
	int y = (x++) + 5; // ���� ����
	std::cout << y << std::endl;
	int z = (++x) + 5; // ���� ����
	std::cout << z << std::endl;
	*/

	//6. ��Ÿ������
	// ��ǥ (,)  ������
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

	//���� ������
	/*int i = 10, j = 5;
	int greater;
	greater = ( i > j )? i : j;
	std::cout << greater << std::endl;
	*/

	//sizeof() ������ - �޸� ũ�⸦ ��ȯ(����Ʈ����)
	/*int m;
	double n;
	cout << sizeof(m) << endl;
	cout << sizeof(n) << endl;
	cout << sizeof(int) << endl;*/


	//���� ���� ������(scope resolution operator)
	//using namespace std;

	//}
