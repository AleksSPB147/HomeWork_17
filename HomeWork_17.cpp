#include <iostream>

using namespace std;

class Person               // Создаем класс человек
{
private:
	int age;               // Возраст  

protected:
	std::string name;      // Имя  

public:

	Person(std::string name, int age)    //Создаем конструктор
	{
		this->name = name;
		this->age = age;
	};
	~Person() {};                          // Деструктор   

	void display()                      //Создаем метод(вывод)
	{
		cout << "Имя: " << name<< " " << "Возраст: " << age;

	}

};

class Employee : public Person             // Создаем класс работник 
{
   private:
	   std::string company;
	   int qw;

   public:
	   Employee(std::string company, int qw)
	   {
		   this->company = company;
		   this -> qw = qw;
	   };
	   ~Employee() {};
	   void showEmployeeName()
	   {
		   cout << "Имя: " << name << " Компания " << company << endl;
       }

};




int main()
{
	setlocale(LC_ALL, "RU");
	Person Adam("Adamov",45);
	Adam.display();
	


}

/*
Создайте класс Person с конструктором, который получает в качестве параметров значения 
char [] и int и инициализирует ими поля name (protected) и age (private). 
Создайте метод класса display, который выводит на экран информацию в формате:  "Имя: name Возраст: age”.
Создайте класс Employee, наследник класса Person. 
Создайте конструктор класса, который инициирует поле company(private) значением получаемого параметра. 
Создайте метод класса showEmployeeName, который будет выводить информацию о сотруднике в формате: "Имя: name Компания: company”.
Напишите программу, которая запрашивает ввод с клавиатуры (в отдельных строках) имени и возраста сотрудника. 
Создает объект класса Person, инициализирует его введенными с клавиатуры значениями и вызывает метод display.
Далее в новых строках запрашивает ввод с клавиатуры имя, возраст, наименование компании. 
Создает объект класса Employee, инициализирует его введенными с клавиатуры значениями и вызывает метод  showEmployeeName.


*/
