#include <iostream>
using namespace std;
struct Person {
	string city;
	string street;
	int dom;
	int flat;
	int index;
};
void exch(Person& p) {
	cout << "Город: " << p.city << endl;
	cout << "Улица: " << p.street << endl;
	cout << "Дом: " << p.dom << endl;
	cout << "Квартира: " << p.flat << endl;
	cout << "Индекс: " << p.index << endl;
}
int main() {
	Person p;
	cout << "Город: ";
	cin >> p.city;
	cout << endl;
	cout << "Улица: ";
	cin >> p.street;
	cout << endl;
	cout << "Дом: ";
	cin >> p.dom;
	cout << endl;
	cout << "Квартира: ";
	cin >> p.flat;
	cout << endl;
	cout << "Индекс: ";
	cin >> p.index;
	cout << endl;

	exch(p);
}