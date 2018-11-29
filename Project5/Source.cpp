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
		printf("�������� ��������� ���� ����� ������\n");
	else
		printf("������ �������� �������� ������\n");
}

void Task2() {
	int shirota, dolgota;
start:
	printf("������� ������: ");
	scanf_s("%d", &shirota);
	printf("������� �������: ");
	scanf_s("%d", &dolgota);

	if (shirota > 90 || shirota < -90) {
		printf("�� ����� ����������� ������ \n");
		goto start;
	}
	if (dolgota > 180 || dolgota < -180) {
		printf("�� ����� ����������� ������� \n");
		goto start;
	}
	if (shirota > 0 && shirota <= 90)
		printf("�������� ��������� \n");
	else if (shirota >= -90 && shirota < 0)
		printf("����� ��������� \n");
	if (dolgota > 0 && dolgota < 180)
		printf("��������� ��������� \n");
	else if (dolgota > -180 && dolgota < 0)
		printf("�������� ��������� \n");
}

void Task3() {
	int duration, day, price = 100;

	printf("������� ����������������� ���������: ");
	scanf_s("%d", &duration);

start:
	printf("������� ���� ������: ");
	scanf_s("%d", &day);

	if (day > 7 || day < 1) {
		printf("������� ���� ������ ������ \n");
		goto start;
	}

	if (day >= 1 && day <= 5) {
		price = price * duration;
		printf("��������� ����������� ��������: %d\n", price);
	}
	else if (day >= 6 && day <= 7) {
		price = (price * duration)*0.8;
		printf("��������� ����������� ��������: %d\n", price);
	}
}

void Task4() {
	int price;
	printf("������� ��������� �������: ");
	scanf_s("%d", &price);
	if (price > 500 && price < 1000) {
		price = price * 0.95;
		SetConsoleTextAttribute(hConsole, 12);
		printf("��� ��������������� ������ 5%%. ��������� ��������: %d\n", price);
		SetConsoleTextAttribute(hConsole, 15);
	}
	if (price > 1000) {
		price = price * 0.9;
		SetConsoleTextAttribute(hConsole, 12);
		printf("��� ��������������� ������ 10%%. ��������� ��������: %d\n", price);
		SetConsoleTextAttribute(hConsole, 15);
	}
}

void Task5() {
	int season;
start:
	printf("������� ����� �� 1 �� 12: ");
	scanf_s("%d", &season);
	if (season < 1 || season > 12) {
		printf("������� ����� ��������: \n");
		goto start;
	}

	switch (season)
	{
	case 12:
	case 1:
	case 2:
		printf("���� \n");
		break;
	case 3:
	case 4:
	case 5:
		printf("����� \n");
		break;
	case 6:
	case 7:
	case 8:
		printf("���� \n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����� \n");
		break;
	default:
		break;
	}
}

void Task6() {
	int a, b, c;
	printf("������� ������ �����: ");
	scanf_s("%d", &a);
	printf("������� ������ �����: ");
	scanf_s("%d", &b);
	printf("������� ������ �����: ");
	scanf_s("%d", &c);
	if (a == b || b == c || a == c)
		SetConsoleTextAttribute(hConsole, 13);
		printf("����� ��������� ����� ������� ���� ������ \n");
		SetConsoleTextAttribute(hConsole, 15);
}

void Task7() {
	int time;
start:
	printf("������� ����� ");
	scanf_s("%d", &time);
	if (time > 24 || time < 0) {
		printf("������� ����� �� 0 �� 24 \n");
		goto start;
	}
	if (time >= 6 && time <= 12) {
		SetConsoleTextAttribute(hConsole, 14);
		printf("���� \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (time >= 12 && time <= 18) {
		SetConsoleTextAttribute(hConsole, 13);
		printf("���� \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else if (time >= 18 && time <= 24) {
		SetConsoleTextAttribute(hConsole, 11);
		printf("����� \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
	else {
		SetConsoleTextAttribute(hConsole, 12);
		printf("���� \n");
		SetConsoleTextAttribute(hConsole, 15);
	}
}

void Task8() {
	int a;
start:
	printf("������� �����: ");
	scanf_s("%d", &a);
	if (a > 99 || a < 1) {
		printf("������� ����� �� 1 �� 99! \n");
		goto start;
	}
	if ((a - (a / 10)*10) >= 2 && (a - (a / 10)*10) <= 4)
		printf("%d ������� \n", a);
	else if ((a - (a / 10)*10) >= 5 && (a - (a / 10)*10) <= 9)
		printf("%d ������ \n", a);

	else 
		printf("%d ������� \n", a);
}

void Task9() {
	int a;
start:
	printf("������� �����: ");
	scanf_s("%d", &a);
	if (a / 1000 < 1 || a / 1000 > 9) {
		printf("������� ����� �������������� �����! \n");
		goto start;
	}
	if (a / 1000 == a % 10 && a / 100 % 10 == a % 100 / 10)
		printf("������ ����� �������� ����������� \n");
	else
		printf("������ ����� �� �������� ����������� \n");

}

void Task10() {
	int a, b;
	printf("������� ������ �����: ");
	scanf_s("%d", &a);
	printf("������� ������ �����: ");
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
	printf("������� �����������: \n");
	printf("1 - ������ \n");
	printf("2 - ������ \n");
	printf("3 - ������� \n");
	printf("4 - ��������� \n");
	scanf_s("%d", &i);

	printf("���� ���� � �������? 1/0 \n");
	scanf_s("%d", &k);

	switch (i)
	{
	case 1:
	{
		price = 500;
		
		if (k == 1) 
			price = price * 1.2;
		
		printf("��������� ���������� �������� %d\n", price);
	}
	break;
	case 2:
	{
		price = 400;
		printf("��������� ���������� �������� %d\n", price);
		if (k == 1) {
			price = price * 1.2;
			printf("��������� ���������� �������� %d\n", price);
		}
	}
	break;
	case 3:
	{
		price = 350;
		printf("��������� ���������� �������� %d\n", price);
		if (k == 1) {
			price = price * 1.2;
			printf("��������� ���������� �������� %d\n", price);
		}
	}
	break;
	case 4:
	{
		price = 600;
		printf("��������� ���������� �������� %d\n", price);
		if (k == 1) {
			price = price * 1.2;
			printf("��������� ���������� �������� %d\n", price);
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
	printf("������� ����� �������:");
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
	printf("������ ���������� 1/0? \n");
	//getc(NULL);
	//scanf_s("%c", &flag);
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;

	system("pause");
}