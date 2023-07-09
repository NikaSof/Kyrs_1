#pragma once
#include <iostream>

// ����� ������.
class Cone {
private:
    double x, y, z;        // ���������� ����������
    double radius;         // ������
    double height;         // ������
public:
    // ����������� �� ���������
    Cone();
    // ����������� � ������� � ������ ���������
    Cone(double r, double h);
    // ����������� ��� Cone
    Cone(double a, double b, double c, double r, double h);

    // ������� �������
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
    double x, y, z;                 // ���������� ����������
    double radius1, radius2;        // ������
    double height;                  // ������

public:
    // ����������� �� ���������
    Trank_Cone();
    // ����������� � ������� � ������ ���������
    Trank_Cone(double r1, double r2, double h);
    // ����������� ��� Trunk_Cone
    Trank_Cone(double a, double b, double c, double r1, double r2, double h);

    // ������� �������
    void setRadiusMax(double r1);
    void setRadiusMin(double r2);
    double getRadiuses();
    double area();
    double volume();

    friend std::ostream& operator<<(std::ostream& stream, Trank_Cone obj);
};
