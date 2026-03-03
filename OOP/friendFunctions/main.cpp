#include <iostream>
#include <string>

using namespace std;

class Car; // Скелет класса Car
class Person;

class Dog {
  private:
  int health = 100;

  public:
  friend class Person;
};

class Person {
  private:
  int age;
  string name;
  public:
  Person(int age, string name) { this->age = age; this->name = name; };

  friend void info_car(Car &car, Person &person);

  void Damage(Dog &dog) { 
    dog.health -=20; 
    cout << "Health of animal: " << dog.health << endl;
  };

  void Heal(Dog &dog) {
    dog.health +=10;
    cout << "Health of animal: " << dog.health << endl;
  }

  void Kill(Dog &dog) {
    dog.health -=100;
    cout << "Dog is die: " << dog.health << endl;
  }
};

class Car {
  private:
  string name;
  public:
  Car(string name) { this->name = name; };

  friend void info_car(Car &car, Person &person);
};

void info_car(Car &car, Person &person) {
    cout << "Person with name: " << person.name << " have a car " << car.name << endl;
};

int main() {

  Car bmw("BMW");
  Person jhon(22, "Jhon");
  info_car(bmw, jhon);

  Dog skuby;
  Person alex(54, "Alex");
  alex.Damage(skuby);
  alex.Damage(skuby);
  alex.Heal(skuby);
  alex.Kill(skuby);

  return 0;
}

// Дружественные функции - функции, которые мы испоьзуем в классе, но прописывает вне его тела. Необходим для доступа к приватным и протектным полям класса. Создается как реадизация за пределами класса, а внутри public прописываем           friend type skeletOfFunction
// К такой функции мs обращаемся НАПРЯМУЮ (не name.nameFunc) тк функция записана ВНЕ класса
// Дружественные классы имеют полный доступ к другому классу