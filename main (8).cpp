#include <iostream>

// Абстрактный класс Точка
class Point {
public:
    virtual void draw() = 0;
    virtual void move(double dx, double dy) = 0;
    // Другие методы могут быть добавлены здесь
    virtual ~Point() {}
};

// Класс Линия
class Line : public Point {
    // Реализация класса Линия
};

// Базовый класс Фигура
class Shape : public Point {
public:
    virtual void erase() = 0;
    virtual void rotate(int angle) = 0;
    // Дополнительные методы
};

// Класс Квадрат
class Square : public Shape {
    // Реализация класса Квадрат
};

// Класс Ромб
class Rhombus : public Shape {
    // Реализация класса Ромб
};

// Класс Прямоугольник
class Rectangle : public Shape {
    // Реализация класса Прямоугольник
};

// Класс Параллелограмм с виртуальным наследованием
class Parallelogram : virtual public Square {
    // Реализация класса Параллелограмм
};

int main() {
    // Пример использования классов
}
