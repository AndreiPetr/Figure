#include <iostream>
#include <string>

using namespace std;

class Figure {
protected:
    int sides;
    string name;
public:
    Figure() {
        sides = 0;
        name = "Фигура:";
    }
    int getNumberOfSides() {
        return sides;
    }
    string getNameOfSides() {
        return name;
    }
};

class Triangle : public Figure {
public:
    Triangle() {
        sides = 3;
        name = "Треугольник:";
    }
};

class Quadrilateral : public Figure {
public:
    Quadrilateral() {
        sides = 4;
        name = "Четырехугольник:";
    }
};

int main() {

    setlocale(LC_ALL, "RUS");

    Figure figure;
    Triangle triangle;
    Quadrilateral quadrilateral;

    cout << "Количество сторон:" << endl;
    cout << figure.getNameOfSides() << " " << figure.getNumberOfSides() << endl;
    cout << triangle.getNameOfSides() << " " << triangle.getNumberOfSides() << endl;
    cout << quadrilateral.getNameOfSides() << " " << quadrilateral.getNumberOfSides() << endl;

    return 0;
}