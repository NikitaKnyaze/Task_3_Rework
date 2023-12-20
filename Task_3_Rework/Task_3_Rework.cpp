// Задача 3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <windows.h>

struct adress {
	std::string town;
	std::string street;
	short number_of_house{};
	short number_of_flat{};
	int index{};
};

void output_func(adress user) {
	std::cout << "Город: " << user.town << std::endl << "Улица: " << user.street << std::endl << "Номер дома: " << user.number_of_house
		<< std::endl << "Номер квартиры: " << user.number_of_flat << std::endl << "Индекс: " << user.index << std::endl << std::endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	adress user_1{ "Санкт-Петербург", "Московская", 3, 12, 12341 };
	adress user_2{ "Тосно", "Ленина", 10, 1, 595923 };

	output_func(user_1);
	output_func(user_2);

	return 0;
}