#include <iostream> 
#include <windows.h>
#include <map> 
#include <string> 
using namespace std;


void readFind(); // Чтение 
void writeFind(); // Ввод
int action;

map<string, int> directory;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	directory["Иванов"] = 3;
	directory["Петров"] = 4;
	directory["Смирнов"] = 2;

	cout << "для получения данных введите: 1" << endl;
	cout << "Для ввода данных введите 2" << endl;
	cin >> action;

	while (true)
	{
		if (action == 1)
		{
			readFind();
		}

		if (action == 2)
		{
			writeFind();
		}
		else
		{
			cout << "Вы веели не то число. Введите 1 - для получения данных, 2 - для записи" << endl;
			cin >> action;
		}
	}
		
	return 0;
}

void readFind()
{
	string name;

		cout << "Введите фамилию студента\n";
		cin >> name;

		if (directory.find(name) != directory.end())
		{
			cout << "Оценка " << name << " - " << directory[name] << "\n";
		}
		else
		{
			cout << "Извините, в каталоге нет " << name << "\n";
		}

		cout << "для получения данных введите: 1" << endl;
		cout << "Для ввода данных введите 2" << endl;
		cin >> action;
			
}

void writeFind()
{
	string name;
	int grade;
	cout << "Введите фамилию абонента\n";
	cin >> name;

		if (directory.find(name) == directory.end())
		{
			cout << "Введите оценку" << endl;
			cin >> grade;
			directory[name] = grade;
		}
		else
		{
			cout << "Такая фамилия уже есть"<< "\n";
		}

	cout << "для получения данных введите: 1" << endl;
	cout << "Для ввода данных введите 2" << endl;
	cin >> action;
}
		
		
			


