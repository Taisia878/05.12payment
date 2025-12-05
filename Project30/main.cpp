#include <iostream>
#include <string>
using namespace std;

class Payment
{
	protected:
		string surname;
		string name;
		string patronymic;
		int salary;
		int yearOfEmployment;
		double surchargeRate;//процент надбавки
		double campingTax; //походный налог
		int dayOfWorks;
		int dayDo;
		int creditingOfTheAmount;//начисление суммы 
		int withholdingOfAnamount; //удержание суммы 
public:
	Payment() { salary = 0; yearOfEmployment = 0; surchargeRate = 0.0; campingTax = 0.0;  dayOfWorks = 0; dayDo = 0; creditingOfTheAmount = 0; withholdingOfAnamount = 0;}
	Payment(string s, string n, string p, int sal, int y, double sur, double cm, int dw, int dd, int ca, int wa)
	{
	 surname = s;
	 name = n;
     patronymic = p;
	 salary = sal;
     yearOfEmployment = y;
	 surchargeRate = sur;
	 campingTax = cm;
	 dayOfWorks = dw;
	 dayDo = dd;
     creditingOfTheAmount = ca;
     withholdingOfAnamount = wa;
	}

	void Input(string s, string n, string p, int sal, int y, double sur, double cm, int dw, int dd, int ca, int wa)
	{
		surname = s;
		name = n;
		patronymic = p;
		salary = sal;
		yearOfEmployment = y;
		surchargeRate = sur;
		campingTax = cm;
		dayOfWorks = dw;
		dayDo = dd;
		creditingOfTheAmount = ca;
		withholdingOfAnamount = wa;
	}

	void experience()
	{
		int nowyear = 2025;
		int experience = nowyear - yearOfEmployment;
		cout << experience;
	};

	void accrual()
	{
		int accrual = salary * (dayOfWorks / dayDo);
		cout << accrual;
	};

	void retention()
	{
		double retention = campingTax * 0.1;
		double flientax = (campingTax - retention) * 0.13;
		cout << "retention: " << retention << endl;
		cout << "\tflientax: " << flientax << endl;
		double all = retention + flientax;
		cout << "\tall: " << all << endl;
		double forissuance = campingTax - all;
		cout << "\tforissuance: " << forissuance << endl;
	};


	void Print()
	{
		cout << "surname: " << surname << "\tname: " << name << "\tpatronymic: " << patronymic << "\tsalary: " << salary << "\tyearOfEmployment: " << yearOfEmployment <<"\tsurchargeRate: " <<
		surchargeRate << "\tcampingTax: " << "\tdayOfWorks: " << dayOfWorks << "\tdayDo: " << dayDo << "\tcreditingOfTheAmount: " << creditingOfTheAmount << "\twithholdingOfAnamount: " << withholdingOfAnamount;
	}

};


int main()
{
	Payment obj("Ivanov", "Petr", "Sergeevich", 45000, 2018, 0.15, 1200, 22, 5, 52000, 3000);
	obj.Print();
	obj.experience();
	obj.accrual();
	obj.retention();
}