#include <iostream>
using namespace std;
struct Person
{
	int num;
	string name;
	int balance;
};
void exch(Person& p)
{
	cout << "Введите новый баланс: ";
	cin >> p.balance;
	cout << endl;
	//cout<<"Ваш счет: "<<p.num<<", "<<p.name<<", "<<p.balance;
}
int main() {
	Person p;
	cout << "Введите номер счета: ";
	cin >> p.num;
	cout << endl;
	cout << "Введите имя владельца: ";
	cin >> p.name;
	cout << endl;
	cout << "Введите баланс: ";
	cin >> p.balance;
	cout << endl;
	exch(p);
	cout << "Ваш счет: " << p.num << ", " << p.name << ", " << p.balance;

}