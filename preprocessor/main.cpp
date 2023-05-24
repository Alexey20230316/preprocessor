#include<iostream>

#define MODE 1

int add(int a, int b);

int main()
{
	setlocale(LC_ALL, "Russian");
	int a = 0;
	int b = 0;

#if !defined (MODE)
std::cout << "Необходимо определить MODE!" << std::endl;
#endif // MODE

#if MODE == 0
std::cout << "Работаю в режиме тренировки!" << std::endl;
#elif MODE == 1
std::cout << "Работаю в боевом режиме!" << std::endl;
std::cout << "Введите число 1: "; std::cin >> a;
std::cout << std::endl << "Введите число 2: "; std::cin >> b;
std::cout << "Результат сложения: " << add(a, b) << std::endl;
#else 
std::cout << "Неизвестный режим.Завершение работы." << std::endl;
#endif




}


int add(int a, int b)
{
	
	return a + b;
}