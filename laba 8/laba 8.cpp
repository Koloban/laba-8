#include <iostream>

using namespace std;

int main()
{
	//Pervaya
	int chis;
	do {
		cout << "Enter number:";
		cin >> chis;
	} while (chis <= 9999 || chis>99999);
	// Если число больше 9999 и меньше или равно 99999, значит оно пятизначное 
	for (int i = 0; i < 5; i++) {
		cout << endl << chis % 10;
		chis /= 10;
	}
	// Раскладываем число по цифрам, отрезая от него каждый раз последнюю цифру
	//Vtoraya
	cout << "\n\nEnter char:";
	char sim;
	cin >> sim;
	sim = toupper(sim);
	cout << "\nYour char top:" << sim;
	//Функция toupper переводит симвл в верхний регистр
	//Tretya
	int sred = 0, mas[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int i = 0; i < 10; i++) {
		sred += mas[i];
	}
	cout << "\n\nSred:" << float(sred) / 10;
} // В задании не сказано, про вод с клавиатуры, массив задал сам