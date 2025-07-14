#include <iostream>
#include <string>

using namespace std;
void CANCEL(){
	system("shutdown /a");
}
void HOUR(){
	cout << "Введите через сколько часов должен выключится компьютер: " << endl;
	int hours;
	cin>>hours;
	cin.ignore();
	string command = "shutdown /s /t " + to_string(hours*60*60);
	system(command.c_str());
}
void MINUTES(){
	cout << "Введите через сколько минут должен выключится компьютер: " << endl;
	int Minute;
	cin>>Minute;
	cin.ignore();
	string command = "shutdown /s /t " + to_string(Minute*60);
	system(command.c_str());
}
void DAYS(){
	cout << "Введите через сколько дней должен выключится компьютер: " << endl;
	int Day;
	cin>>Day;
	cin.ignore();
	string command = "shutdown /s /t " + to_string(Day*24*60*60);
	system(command.c_str());
}
void COMBINED(){
	cout << "Введите через сколько часов и минут должен выключится компьютер: " << endl;
	int Hours,Minute;
	cout<<"Часов: "<<endl;
	cin>>Hours;
	cin.ignore();
	cout<<"Минут: "<<endl;
	cin>>Minute;
	cin.ignore();
	string command = "shutdown /s /t " + to_string(Hours*60*60 + Minute*60);
	system(command.c_str());
}
int main() {
	setlocale(LC_ALL,"Russian");
	cout << "Выберите формат\n1-Минуты\n2-Часы\n3-Дни\n4-Комбинированное Часы/Минуты\n5-Отменить запланированное выключение компьютера." << endl;
	int choice;
	cin>>choice;
	switch (choice) {
	case 1:
		MINUTES();
		break;
	case 2:
		HOUR();
		break;
	case 3:
		DAYS();
		break;
	case 4:
		COMBINED();
		break;
	case 5:
		CANCEL();
		break;
	default:
		cout << "Неверный выбор. Программа завершена." << endl;
		break;
	}
	return 0;
}
