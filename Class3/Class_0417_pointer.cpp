#include <iostream>

using namespace std;

void dynamicAllocate();
//int main()
//{
	//int a = 10;
	//cout << a << endl;
	//cout << &a << endl;

	//cout << *&a << endl;

	//int num = 5;
	//int* ptr = &num;
	//int *ptr = &num; // 포인터 선언 *
	//int** pptr = &ptr;

	//cout << "num 값 : " << *ptr << endl; // 포인터 값 참조 *
	//*ptr = 10;
	//cout << "num 값 : " << *ptr << endl; // 포인터 값 참조 *

	//주소 연산자(&) == 번지연산자
	////참조 연산자(*)
	//int num1 = 1234;
	//float num2 = 3.14;

	//int* ptr_num1 = &num1;
	//float* ptr_num2 = &num2;

	//cout << "ptr_num1 포인터 크기 : " << sizeof(ptr_num1) << endl;
	//cout << "포인터 ptr_num1 이 가리키는 주소 값 : " << ptr_num1 << endl;
	//cout << "포인터 ptr_num1 이 가리키는 주소에 저장된 값 : " << *ptr_num1 << endl;
	//cout << "ptr_num1 포인터 크기 : " << sizeof(ptr_num1) << endl;
	//cout << "포인터 ptr_num2 이 가리키는 주소 값 : " << ptr_num2 << endl;
	//cout << "포인터 ptr_num2 이 가리키는 주소에 저장된 값 : " << *ptr_num2 << endl;

	//int a = 2;
	//int b = 5;
	//int* ptr_a = &a;
	//int* ptr_b = &b;

	////int c = *(ptr_a) + *(ptr_b);
	//int c = * ptr_a + * ptr_b;
	//cout << c << endl;

	//char MyChar = 'a';
	//char* ptr_MyChar = &MyChar;
	//int MyInt = 10;
	//int* ptr_MyInt = &MyInt;

	//cout << MyChar << endl;
	//cout << *ptr_MyChar << endl;
	//cout << ptr_MyChar << endl;
	//cout << &MyChar << endl;
	//
	//cout << MyInt << endl;
	//cout << *ptr_MyInt << endl;
	//cout << ptr_MyInt << endl;
	//cout << &MyInt << endl;

	//char* ptr1;
	//int* ptr2;
	//double* ptr3;
	//cout << "char형 포인터의 크기 : " << sizeof(ptr1) << endl;
	//cout << "int형 포인터의 크기 : " << sizeof(ptr2) << endl;
	//cout << "double형 포인터의 크기 : " << sizeof(ptr3) << endl;

	//float length = 10.53;
	//float* ptr = &length;
	//float** pptr = &ptr;

	//cout << "ptr 이 가리키는 주소값 (&length) : " << ptr << endl;
	//cout << "pptr이 가리키는 주소값 (&&length) : " << pptr << endl;
	//cout << "ptr 이 가리키는 주소에 저장된 값(*ptr) : " << *ptr << endl;
	//cout << "pptr이 가리키는 주소에 저장된 값(*pptr) : " << *pptr << endl;

	//int arr[] = { 1,2,3 };
	//int* ptr_arr = arr;
	//cout << "배열 포인터의 크기는 : " << sizeof(ptr_arr) << endl;
	//cout << "배열의 크기는 : " << sizeof(arr) << endl;
	//cout << arr << endl; //따라서 배열에 메모리가 할당되지만, 배열 이름이 추가로 메모리를 차지하지는 않아요. 
	//cout << ptr_arr;


	/*int a = 1, b = 2, c = 0;
	int* arr_ptr[3];
	arr_ptr[0] = &a;
	arr_ptr[1] = &b;
	arr_ptr[2] = &c;
	cout << *arr_ptr[0] << " " << arr_ptr[0] << endl;
	cout << arr_ptr<< endl;
	cout << &arr_ptr[0]<< endl;
	cout << *arr_ptr[1] << " " << arr_ptr[1] << endl;
	cout << *arr_ptr[2] << " " << arr_ptr[2] << endl;

	*arr_ptr[0]=0;
	*arr_ptr[1]=0;
	*arr_ptr[2]=0;

	cout << *arr_ptr[0] << " " << arr_ptr[0] << endl;
	cout << *arr_ptr[1] << " " << arr_ptr[1] << endl;
	cout << *arr_ptr[2] << " " << arr_ptr[2] << endl;*/

	//int arr1[3] = { 1,2,3 };
	//int* arr_ptr1[3];
	//for (int i = 0; i < 3; ++i)
	//{
	//	arr_ptr1[i] = &arr1[i];
	//}
	//cout << "int형 포인터 배열크기 : " << sizeof(arr_ptr1) << endl;
	//cout << "int 배열크기:" << sizeof(arr1) << endl;

	//double arr2[3] = { 1,2,3 };
	//double* arr_ptr2[3];
	//for (int i = 0; i < 3; ++i)
	//{
	//	arr_ptr2[i] = &arr2[i];
	//}
	//cout << "double형 포인터 배열크기 : " << sizeof(arr_ptr2) << endl;
	//cout << "double 배열크기:" << sizeof(arr2) << endl;

//	int* ptr_dynamic = new int(5);
//	cout << "new : " << * ptr_dynamic << endl;
//	delete(ptr_dynamic);
//	//cout << "delete : " << * ptr_dynamic << endl;
//
//	dynamicAllocate();
//}


void dynamicAllocate()
{
	int* localPtr_dynamic = new int(10);
	cout << "new : " << * localPtr_dynamic << endl;
	delete(localPtr_dynamic);
	//cout << "delete : " << * localPtr_dynamic << endl;
}