
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m, sum;

	std::cout << "Hello World!\n\n";

	//������ 1. ���������� �������� �������
	/*std::cout << "������ 1.\n����������� ������:\n";
	const int size1 = 10;
	int arr1[size1];
	srand(time(NULL));
	for (int i = 0; i < size1; i++) {
		arr1[i] = rand() % (10 + 1 - 1) + 1;  // (10+1);   //[1..10]
		std::cout << arr1[i] << ' ';
	}
	std::cout << std::endl; //�� ��������� � \n, endl - ������� ����� ������ � ��������� ������ �������� �������

	//����������� ����������
	for (int i = 4; i > 0; i--)    // ��� ���������� �������� �������   // for (int i = size1 - 1; i > 0; i--) - ��� ���������� ���� ������ �������
		// ��� ��� ������ ���������� � ����, �� ��� ���� ��� �� ����������� ������ �������� �������, i = 4. � �� 5
	for (int j = 0; j < i; j++)
			if (arr1[j] > arr1[j + 1])
			std::swap(arr1[j], arr1[j + 1]);


	//������� ����������
	std::sort(arr1, arr1 + 5);  // ��� ���������� �������� �������  // 	std::sort(arr1, arr1 + size1); - ��� ���������� ���� ����� �������

	std::cout << "�������� ������:\n";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << "\n\n";*/

	//������ 2. ����������� � ������
	/*std::cout << "������ 2\n����������� �� ��� ��� ������:\n";
	const int size2 = 31;
	int arr2[size2];
	srand(time(NULL));
	for (int i = 0; i < size2; i++) {
		arr2[i] = rand() % (-1 + 1 - (-30)) + (-30); // [-30..-1]
		//        rand() % 30 - 30;   
		std::cout << arr2[i] << ',';
	}
	std::cout << "\b.\n";
	sum = 0;          // ����� ��� ��. �����
	int counter = 0;  //���-�� ���� ��� < n
	std::cout << "������� ������������ ������� ����������� (�� -30 �� -1 �������) -> ";
	std::cin >> n;
	for (int i = 0; i < size2; i++) {
		sum += arr2[i];
		if (arr2[i] < n)
			counter++;
	}
	std::cout << "���-�� ���� ����� ����������� ���������� ���� " << n << " ��������: " << counter << '\n';
	std::cout << "������� ����������� �� �����: " << (double)sum / size2 << "\n\n";*/

	//������ 3. ��������� � ��������
	/*std::cout << "������ 3\n������� ������ ��������� -> ";
	std::cin >> n; 
	std::cout << "������� ����� ��������� -> ";
	std::cin >> m;
	const int size3 = 20;
	int arr3[size3];
	srand(time(NULL));
	std::cout << "�����:\n";

	for (int i = 0; i < size3; i++) {
		arr3[i] = rand() % 101;      // [0..100] ��� ��������� �� 0 �� X. ������� �������� ��� rand () % X
		if (arr3[i] > n && arr3[i] < m)
			std::cout << i + 1 << ". " << arr3[i] << "!\n";
		else 
			std::cout << i + 1 << ". " << arr3[i] << '\n';
	}
	std::cout << std::endl;*/


	// ������ 4. ���������������
	std::cout << "������ 1.\n����������� ������:\n";
	const int size4 = 10;
	int arr4[size4];
	srand(time(NULL));
	for (int i = 0; i < size4; i++) {
		arr4[i] = rand() % (10 + 1); // [1..10]

		std::cout << arr4[i] << '\t';
for
	}
	std::cout << "\b.\n";

	for (int i = 10; i < size4; i++) {

		if (arr4[i] < arr4[i + 1])
			std::cout << arr4[1] << "\n";
		else
			std::cout << ' ';


	}
	return 0;

}