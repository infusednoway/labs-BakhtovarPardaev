#include <iostream>

#include "C:\Users\kolobok\Desktop\programming\Project1\Project1\Position.h"
#include "C:\Users\kolobok\Desktop\programming\Project1\Project1\Krug.h"
#include "C:\Users\kolobok\Desktop\programming\Project1\Project1\S.h"
#include "C:\Users\kolobok\Desktop\programming\Project1\Project1\S_kruga.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int choise;
    double x, y, side, rad;
    int a = 0;
    while (a == 0)
    {
        std::cout << "„то вы хотите выполнить?" "\n" << "1. ¬вод позиции" "\n" << "2. ¬вод круга пользователем" "\n" << "3. ¬вод радиуса окружности" "\n" << "4. ¬вод квадрата пользователем" "\n" << "5. ¬вод стороны квадрата" "\n" "6. ¬вод окружности в квадрате по радиусу" "\n" "7. ¬вод окружности в квадрате по стороне квадрата" "\n" "8. ¬ыход" "\n";
        cin >> choise;
        if (choise == 1) {
            cout << "¬ведите x и y "; cin >> x >> y;
            Position a(x, y);
            a.out();
        }
        if (choise == 2) {
            cout << "¬ведите координаты центра и радиус "; cin >> x >> y >> rad;
            Krug a(x, y, rad);
            a.out();
        }
        if (choise == 3) {
            cout << "¬ведите радиус "; cin >> rad;
            Krug a(rad);
            a.out();
        }
        if (choise == 4) {
            cout << "¬ведите координаты центра и сторону "; cin >> x >> y >> side;
            S a(x, y, side);
            a.out();
        }
        if (choise == 5) {
            cout << "¬ведите сторону "; cin >> side;
            S a(side);
            a.out();
        }
        if (choise == 6) {
            cout << "¬ведите координаты центра и радиус "; cin >> x >> y >> rad;
            S_kruga a(x, y, rad);
            a.Krug::out();
            a.Krug::out();
        }
        if (choise == 7) {
            cout << "¬ведите сторону "; cin >> side;
            S_kruga a(side);
            a.Krug::out();
            a.S::out();
        }
        if (choise == 8) {
            a++;
        }
    }
    return 0;
}