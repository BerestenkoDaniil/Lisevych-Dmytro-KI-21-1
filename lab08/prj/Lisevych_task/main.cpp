#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstring>
#include <conio.h>

#include <ModulesLisevych.h>

using namespace std;

int x = 0, z = 0;
char a = '0', b = '0';

string CopyrightHolder()
{
  return "� ˳����� ������ ���������";
}

void inputNumbers(int X, int Z, int A, int B)
{
    cout << "������ X: "; cin >> X; x = X;
    cout << "������ Z: "; cin >> Z; z = Z;
    cout << "������ ������(1): "; cin >> A; a = A;
    cout << "������ ������(2): "; cin >> B; b = B;
    cout << endl;
}

bool logicalExpression(int A, int B)
{
    return A + 3 <= B;
}

void decimaHexNumberOuput(int X, int Z)
{
    cout << "X � ���������: " << dec << X << endl
         << "Z � ���������: " << dec << Z << endl << endl;

    cout << "X � �������������: " << hex << X << endl
         << "Z � �������������: " << hex << Z << endl << endl;
}

int main()
{
    system("chcp 1251");
    cout << CopyrightHolder() << endl << endl;
    inputNumbers(x, z, a, b);
    cout << "���������: " << a << " + 3 <= " << b << "\n" << logicalExpression(a, b) << " (1 - true; 0 - false)"<< endl << endl;
    decimaHexNumberOuput(x, z);
    cout << "S = " << s_calculation(x, z) << endl;
    system("pause");
    return 0;
}

