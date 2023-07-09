#pragma once
#include <iostream>

// Класс конуса.
class Cone {
private:
    double x, y, z;        // трехмерные координаты
    double radius;         // радиус
    double height;         // высота
public:
    // Конструктор по умолчанию
    Cone();
    // Конструктор с центром в начале координат
    Cone(double r, double h);
    // Конструктор для Cone
    Cone(double a, double b, double c, double r, double h);

    // Функции доступа
    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();
    double area();
    double volume();

    friend std::ostream& operator<<(std::ostream& stream, Cone obj);
};

class Trank_Cone : public Cone {
private:
    double x, y, z;                 // трехмерные координаты
    double radius1, radius2;        // радиус
    double height;                  // высота

public:
    // Конструктор по умолчанию
    Trank_Cone();
    // Конструктор с центром в начале координат
    Trank_Cone(double r1, double r2, double h);
    // Конструктор для Trunk_Cone
    Trank_Cone(double a, double b, double c, double r1, double r2, double h);

    // Функции доступа
    void setRadiusMax(double r1);
    void setRadiusMin(double r2);
    double getRadiuses();
    double area();
    double volume();

    friend std::ostream& operator<<(std::ostream& stream, Trank_Cone obj);
};
