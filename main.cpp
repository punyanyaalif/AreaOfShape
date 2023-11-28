#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int choice;
    float area, radius, length, width;

    cout << "1. Area of Circle";
    cout << "\n2. Area of Rectangle";
    cout << "\n3. Area of Square";
    cout << "\nChoose number only : ";

    cin >> choice;

    switch(choice){
        case 1:
            cout << "Enter radius of Circle : ";
            cin >> radius;
            area = 3.14 * pow(radius,2);
        break;
        case 2:
            cout << "Enter length of Rectangle : ";
            cin >> length;
            cout << "Enter width of Rectangle : ";
            cin >> width;
            area = length * width;
        break;
        case 3:
            cout << "Enter length of Square : ";
            cin >> length;
            area = pow(length,2);
        break;
        default:
            cout << "Wrong Input...!";
    }
    cout << "\nArea : " << area << endl;
    return 0;
}