#include<iostream>
using namespace std;

void display_menu();
void circle(double radius);
void rectangle(double width, double height);
void square(double length);
void triangle(double base, double height);

int main()
{
    char option;
    do {
        display_menu();
        cin>>option;
        switch (option) {
            case '1':
                {
                    double radius;
                    cout << "Enter the radius of the circle: ";
                    cin >> radius;
                    circle(radius);
                    break;
                }
            case '2':
                {
                    double width, height;
                    cout << "Enter the width and height of the rectangle: ";
                    cin >> width >> height;
                    rectangle(width, height);
                    break;
                }
            case '3':
                {
                    double length;
                    cout << "Enter the length of the square: ";
                    cin >> length;
                    square(length);
                    break;
                }
            case '4':
                {
                    double base, height;
                    cout << "Enter the base and height of the triangle: ";
                    cin >> base >> height;
                    triangle(base, height);
                    break;
                }
            default:
                cout<<"inavalid option check again."<<endl;
                break;
        }
        cout << "Do you want to run the program again? (Y/N): ";
        cin>>option;
    }
    while (option == 'Y' || option == 'y');

    return 0;
}

void display_menu() {
    cout << "1. Calculate the area of a circle." << endl;
    cout << "2. Calculate the area of a rectangle." << endl;
    cout << "3. Calculate the area of a square." << endl;
    cout << "4. Calculate the area of a triangle." << endl;
    cout << "Enter your choice: ";
}

void circle(double radius) {
    double area =(radius*radius*22)/7;
    cout<< "The area of the circle is "<<area<< endl;
}

void rectangle(double width, double height) {
    double area = width*height;
    cout<<"The area of the rectangle is "<<area<<endl;
}

void square(double length) {
    double area = length*length;
    cout<<"The area of the square is "<<area<<endl;
}

void triangle(double base, double height) {
    double area = 0.5*base*height;
    cout<<"The area of the triangle is "<<area<<endl;
}