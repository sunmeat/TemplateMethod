#include <iostream>
using namespace std;

// Абстрактный класс Animal
class Animal {
public:
    // Шаблонный метод makeSound, который определяет алгоритм произнесения звуков животным
    void makeSound() {
        cout << getSpeciesName() << " says " << getSound() << endl;
    }

    // Методы, которые должны быть реализованы в каждом подклассе
    virtual string getSpeciesName() = 0;
    virtual string getSound() = 0;
};

// Подкласс Dog
class Dog : public Animal {
public:
    string getSpeciesName() override {
        return "Dog";
    }

    string getSound() override {
        return "Woof!";
    }
};

// Подкласс Cat
class Cat : public Animal {
public:
    string getSpeciesName() override {
        return "Cat";
    }

    string getSound() override {
        return "Meow!";
    }
};

int main() {
    // Создание объектов Dog и Cat
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    // Вызов шаблонного метода makeSound для каждого объекта
    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
}

/*
Пример кода на паттерн Шаблонный метод на языке C++.
Предположим, у нас есть абстрактный класс Animal, который
определяет общий интерфейс для всех животных, а также реализует
шаблонный метод makeSound, который определяет алгоритм
произнесения звуков животным.

Здесь класс Animal является абстрактным классом, который
определяет интерфейс для всех животных. Метод makeSound
является шаблонным методом, который определяет алгоритм
произнесения звуков животным. Классы Dog и Cat являются
конкретными подклассами Animal, которые реализуют методы
getSpeciesName и getSound, которые возвращают имя вида
животного и звук, соответственно. В функции main создаются
объекты Dog и Cat, после чего вызывается метод makeSound
для каждого объекта. Как результат, на экран выводятся звуки,
производимые каждым животным.
*/

// https://refactoring.guru/ru/design-patterns/template-method

/*
Шаблонный метод — это поведенческий паттерн проектирования,
который определяет скелет алгоритма, перекладывая
ответственность за некоторые его шаги на подклассы.
Паттерн позволяет подклассам переопределять шаги алгоритма,
не меняя его общей структуры.
*/