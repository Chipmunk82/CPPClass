#include <iostream>
#include <string>

using namespace std;

int main()
{
	//int sum = 0;
	//�迭 ���� 3, int�� �迭 ����, �ʱ�ȭ
	//int grade[3] = { 85, 67, 90 };	//��,��,��

	//�迭�� ���� = sizeof(�迭�̸�)/sizeof(�迭�̸�[0])
	//int len = sizeof(grade) / sizeof(grade[0]);

	//for (int i = 0; i < 3;i++) {
	//for (int i = 0; i < len ;i++) {
	//	sum += grade[i];
	//}
	//cout << "������ ������ : " << sum << endl;
	//cout << "������ ������� : " << (float)sum / len << endl;

	//int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	//arr[0][0] = 1 arr[0][1] = 2 arr[0][2] = 3

	int arr1[2][3] = { 10,20,30,40 }; // ���� �κ��� 0���� ä����
	int arr2[2][3] = {
						{10,20,30},
						{40,50,60}
					};

	//cout << "arr1�� �迭 ��� ��" << endl;
	//cout << arr1[0][0] << " ";
	//cout << arr1[0][1] << " ";
	//cout << arr1[0][2] << endl;
	//cout << arr1[1][0] << " ";
	//cout << arr1[1][1] << " ";
	//cout << arr1[1][2] << endl << endl;
	//
	//cout << "arr2�� �迭 ��� ��" << endl;
	//cout << arr2[0][0] << " ";
	//cout << arr2[0][1] << " ";
	//cout << arr2[0][2] << endl;
	//cout << arr2[1][0] << " ";
	//cout << arr2[1][1] << " ";
	//cout << arr2[1][2] << endl << endl;

	//���� ����
	int arr1_col_len = sizeof(arr1[0]) / sizeof(arr1[0][0]);

	//���� ����
	int arr1_row_len = (sizeof(arr1) / arr1_col_len) / sizeof(arr1[0][0]);

	//cout << "arr1�� �迭 ��� ��" << endl;

	//for (int i = 0; i < arr1_row_len; i++)
	//{
	//	for (int j = 0; j < arr1_col_len;j++)
	//	{
	//		cout << arr1[i][j] << " ";
	//	}
	//	cout << endl;
	//}
	//cout << endl;

	//char fruits[3][10] = { "apple", "banana", "orange" };
	//cout << "1��° �׸� : " << fruits[0] << endl;
	//cout << "2��° �׸� : " << fruits[1] << endl;
	//cout << "3��° �׸� : " << fruits[2] << endl;

	string name, subject;
	cout << "�̸��� �Է��� �ּ���."; // ���»~ ����~ ���ϰ���Ű?
	//cin >> name;
	getline(cin,  name);
	cout << "�����ϴ� ������ �Է��� �ּ���."; // ���ڹ��� �丮�� ��, ��, Ÿ ��
	//cin >> subject;
	getline(cin,  subject);
	cout << name << "���� �����ϴ� ������ �ٷ� " << subject << "�Դϴ�." << endl;


}