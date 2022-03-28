#include <iostream>
#include <clocale>
#include <cmath>
#include <string>
#include <bitset>

using namespace std;

string windSpeed(unsigned int wSpeed)
{
    if(wSpeed < 0.3){
        cout << "��� �������: 0" << endl;
    }
    if(wSpeed >= 0.3 && wSpeed <= 1.5){
        cout << "��� �������: 1" << endl;
    }
    if(wSpeed >= 1.6 && wSpeed <= 3.4){
        cout << "��� �������: 2" << endl;
    }
    if(wSpeed >= 3.5 && wSpeed <= 5.4 ){
        cout << "��� �������: 3" << endl;
    }
    if(wSpeed >= 5.5 && wSpeed <= 7.9){
        cout << "��� �������: 4" << endl;
    }
    if(wSpeed >= 8 && wSpeed <= 10.7){
        cout << "��� �������: 5" << endl;
    }
    if(wSpeed >= 10.8 && wSpeed <= 13.8){
        cout << "��� �������: 6" << endl;
    }
    if(wSpeed >= 13.9 && wSpeed <= 17.1){
        cout << "��� �������: 7" << endl;
    }
    if(wSpeed >= 17.2 && wSpeed <= 20.7){
        cout << "��� �������: 8" << endl;
    }
    if(wSpeed >= 20.8 && wSpeed <= 24.4){
        cout << "��� �������: 9" << endl;
    }
    if(wSpeed >= 24.5 && wSpeed <= 28.4){
        cout << "��� �������: 10" << endl;
    }
    if(wSpeed >= 28.5 && wSpeed <= 32.6){
        cout << "��� �������: 11" << endl;
    }
    if(wSpeed >= 32.7){
        cout << "��� �������: 12" << endl;
    }
}

int temperature(double temp[7])
{
    float sum, cel, far;
    for(int i = 0; i < 7; i++){
        sum += temp[7];
    }
    cel = sum / 7;
    far = 32 + 1.8 * cel;
}

int bits_number(unsigned int number)
{
    bitset<31> b_number{number};
    if (b_number[7]) {
        return 32 - b_number.count();
    }
    return b_number.count();
}
