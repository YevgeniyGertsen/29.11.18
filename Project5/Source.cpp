#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <Windows.h>
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void Task1() {
	int a = 5, b = 7, c, d;
	c = pow(a, 2) - pow(b, 2);
	d = abs(c);
	if (c > d)
		printf("Разность квадратов этих чисел больше\n");
	else
		printf("Модуль квадрата разности больше\n");
}

void Task2() {
	int shirota, dolgota;
start:
	printf("Введите широту: ");
	scanf_s("%d", &shirota);
	printf("Введите долготу: ");
	scanf_s("%d", &dolgota);

	if (shirota > 90 || shirota < -90) {
		printf("Вы ввели некоректную широту \n");
		goto start;
	}
	if (dolgota > 180 || dolgota < -180) {
		printf("Вы ввели некоректную долготу \n");
		goto start;
	}
	if (shirota > 0 && shirota <= 90)
		printf("Северное полушарие \n");
	else if (shirota >= -90 && shirota < 0)
		printf("Южное полушарие \n");
	if (dolgota > 0 && dolgota < 180)
		printf("Восточное полушарие \n");
	else if (dolgota > -180 && dolgota < 0)
		printf("Западное полушарие \n");
}

void Task3() {
	int duration, day, price = 100;

	printf("Введите продолжительность разговора: ");
	scanf_s("%d", &duration);

start:
	printf("Введите день недели: ");
	scanf_s("%d", &day);

	if (day > 7 || day < 1) {
		printf("Введите день недели заного \n");
		goto start;
	}

	if (day >= 1 && day <= 5) {
		price = price * duration;
		printf("Стоимость переговоров составит: %d\n", price);
	}
	else if (day >= 6 && day <= 7) {
		price = (price * duration)*0.8;
		printf("Стоимость переговоров составит: %d\n", price);
	}
}

void Task4() {
	int price;
	printf("Введите стоимость покупки: ");
	scanf_s("%d", &price);
	if (price > 500 && price < 1000) {
		price = price * 0.95;
		SetConsoleTextAttribute(hConsole, 12);
		printf("Вам предоставляется скидка 5%%. Стоимость составит: %d\n", price);
		SetConsoleTextAttribute(hConsole, 15);
	}
	if (price > 1000) {
		price = price * 0.9;
		SetConsoleTextAttribute(hConsole, 12);
		printf("Вам предоставляется скидка 10%%. Стоимость составит: %d\n", price);
		SetConsoleTextAttribute(hConsole, 15);
	}
}

void Task5() {
	int season;
start:
	printf("Введите число от 1 до 12: ");
	scanf_s("%d", &season);
	if (season < 1 || season > 12) {
		printf("ВВедите число повторно: \n");
		goto start;
	}

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("Зима \n");
		break;
	case 3:
	case 4:
	case 5:
		printf("весна \n");
		break;
	case 6:
	case 7:
	case 8:
		printf("Лето \n");
		break;
	case 9:
	case 10:
	case 11:
		printf("Осень \n");
		break;
	default:
		break;
	}
}

void Task6() {
	int a, b, c;
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);
	printf("Введите третье число: ");
	scanf_s("%d", &c);
	if (a == b || b == c || a == c)
		SetConsoleTextAttribute(hConsole, 13);
		printf("Среди введенных чисел имеется пара равных \n");
		SetConsoleTextAttribute(hConsole, 15);
}

void Task7() {
	int time;
start:
	printf("Введите число ");
	scanf_s("%d", &time);
	if (time > 24 || time < 0) {
		printf("Введите число от 0 до 24 \n");
		goto start;
	}
	if (time >= 6 && time <= 12) {
		SetConsoleTextAttribute(hConsole, 14);
		printf("Утро \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (time >= 12 && time <= 18) {
		SetConsoleTextAttribute(hConsole, 13);
		printf("День \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (time >= 18 && time <= 24) {
		SetConsoleTextAttribute(hConsole, 11);
		printf("Вечер \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else {
		SetConsoleTextAttribute(hConsole, 12);
		printf("Ночь \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
}

void Task8() {
	int a;
start:
	printf("Введите число: ");
	scanf_s("%d", &a);
	if (a > 99 || a < 1) {
		printf("Введите число от 1 до 99! \n");
		goto start;
	}
	if ((a - (a / 10)*10) >= 2 && (a - (a / 10)*10) <= 4)
		printf("%d копейки \n", a);
	else if ((a - (a / 10)*10) >= 5 && (a - (a / 10)*10) <= 9)
		printf("%d копеек \n", a);

	else 
		printf("%d копейка \n", a);
}

void Task9() {
	int a;
start:
	printf("Введите число: ");
	scanf_s("%d", &a);
	if (a / 1000 < 1 || a / 1000 > 9) {
		printf("Введите целое четырехзначное число! \n");
		goto start;
	}
	if (a / 1000 == a % 10 && a / 100 % 10 == a % 100 / 10)
		printf("Данное число является палиндроном \n");
	else
		printf("Данное число не является палиндроном \n");

}

void Task10() {
	int a, b;
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);
	if (a > 0 && b < 0) {
		a = -a;
		b = -b;
		printf("%d, %d \n", a, b);
	}
	else if (a < 0 && b > 0) {
		a = -a;
		b = -b;
		printf("%d, %d \n", a, b);
	}
	else if (a < 0 && b < 0) {
		a = 0;
		b = 0;
		printf("%d, %d \n", a, b);
	}
	else if (a > 0 && b > 0) {
		a = 0;
		b = 0;
		printf("%d, %d \n", a, b);
	}
}

void Task11() {
	int days, price, i,k;
	printf("Введите направление: \n");
	printf("1 - Алматы \n");
	printf("2 - Астана \n");
	printf("3 - Шымкент \n");
	printf("4 - Караганда \n");
	scanf_s("%d", &i);

	printf("Рейс туда и обратно? 1/0 \n");
	scanf_s("%d", &k);

	switch (i)
	{
	case 1:
	{
		price = 500;
		
		if (k == 1) 
			price = price * 1.2;
		
		printf("Стоимость авиабилета составит %d\n", price);
	}
	break;
	case 2:
	{
		price = 400;
		printf("Стоимость авиабилета составит %d\n", price);
		if (k == 1) {
			price = price * 1.2;
			printf("Стоимость авиабилета составит %d\n", price);
		}
	}
	break;
	case 3:
	{
		price = 350;
		printf("Стоимость авиабилета составит %d\n", price);
		if (k == 1) {
			price = price * 1.2;
			printf("Стоимость авиабилета составит %d\n", price);
		}
	}
	break;
	case 4:
	{
		price = 600;
		printf("Стоимость авиабилета составит %d\n", price);
		if (k == 1) {
			price = price * 1.2;
			printf("Стоимость авиабилета составит %d\n", price);
		}
	}
	break;
	default:
		break;
	}
	
}

int main() {

	setlocale(LC_ALL, "");
	SetConsoleTextAttribute(hConsole, 15);

	int task;
	//char flag;
	int flag;

start:
	printf("Введите номер задания:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1: {
		Task1();
	}break;
	case 2: {
		Task2();
	} break;
	case 3: {
		Task3();
	} break;
	case 4: {
		Task4();
	}break;
	case 5: {
		Task5();
	}break;
	case 6: {
		Task6();
	}break;
	case 7: {
		Task7();
	}break;
	case 8: {
		Task8();
	}break;
	case 9: {
		Task9();
	}break;
	case 10: {
		Task10();
	}break;
	case 11: {
		Task11();
	}break;
	default:
		break;
	}
	printf("Хотите продолжить 1/0? \n");
	//getc(NULL);
	//scanf_s("%c", &flag);
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}