#include<iostream>

#define MODE 1

int add(int a, int b);

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;

#if !defined (MODE)
std::cout << "���������� ���������� MODE!" << std::endl;
#endif // MODE

#if MODE == 0
std::cout << "������� � ������ ����������!" << std::endl;
#elif MODE == 1
std::cout << "������� � ������ ������!" << std::endl;
std::cout << "������� ����� 1: "; std::cin >> a;
std::cout << std::endl << "������� ����� 2: "; std::cin >> b;
std::cout << "��������� ��������: " << add(a, b) << std::endl;
#else 
std::cout << "����������� �����.���������� ������." << std::endl;
#endif




}


int add(int a, int b)
{
	
	return a + b;
}