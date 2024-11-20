

#include <iostream>
using namespace std;
class Engine {
    int power;
    string type;
public:
    Engine(int power,string type):power(power),type(type){}
  
    void displayInfo()const {
        cout << "Power : " << power << "Type : " << endl;
    }

};
class Driver {
    string name;
    int age;
public:
    Driver(string name, int age) :name(name), age(0) {}
    void displayInfo()const {
        cout << "Driver : " << name << "Age" << age << endl;
    }
};
class Car {
    string brand;
    string model;
    int year;
    Engine engine;
    Driver* driver;
public:
    Car(string b, string m, int y, Engine& engine) :brand(b), model(m), year(y), engine(engine), driver(nullptr) {}
    void setDrier(Driver* driver) {
        this->driver = driver;
    }
    void displayInfo()const {
        cout << "CAr "<< brand << endl;
        cout << "Mode :" << model << endl;
        cout << "Year : " << year << endl;
        engine.displayInfo();
        if (driver) {
            driver->displayInfo();
        }
        else {
            cout << "Driver dont enter" << endl;
        }
    }
};


int main()
{
   
    Engine en1(150, "Benz");
    Engine en2(200, "Disel");
    Car car1("Toyota", "Corolla", 2020, en1);
    Car car2("Mazda", "soifi", 2014, en2);
    Driver dr1("iVAN", 35);
    Driver dr2("Petro", 40);
    car1.setDrier(&dr1);
    car2.setDrier(&dr2);
    car2.displayInfo();
    car1.displayInfo();
}

