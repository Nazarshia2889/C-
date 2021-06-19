#include <iostream>
#include <string>
using namespace std;

class Car {
    public:
        Car(string c, string b, int s, int p) {
            color = c;
            brand = b;
            speed = s;
            price = p;
        }
        void setColor(string c) {
            color = c;
        }
        string getColor() {
            return color;
        }
        int getPrice() {
            return price;
        }
    private:
        string color;
        string brand;
        int speed;
        int price;
};

int main() {
    Car car("white", "Toyota", 50, 10000);
    cout << car.getColor() << endl;
    car.setColor("red");
    cout << car.getColor() << endl;
    car.setColor("blue");
    cout << car.getColor() << endl;
    car.setColor("white");
    cout << car.getColor() << endl;

}