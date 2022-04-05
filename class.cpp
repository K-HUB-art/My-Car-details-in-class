#include <iostream>
#include <string.h>
using namespace std;

// Create a Car class with some attributes
class Car {
  public:
    string brand;
    string model;
    string fuel;
    int price;
    int year;
};

int main() {
  // Create an object of Car
  Car Mycar1;
  Mycar1.brand = "Toyota";
  Mycar1.model = "Hybrid Yaris";
  Mycar1.fuel = "Petrol";
  Mycar1.price = 16000;
  Mycar1.year = 2016;

  // Create another object of Car
  Car Mycar2;
  Mycar2.brand = "Ford";
  Mycar2.model = "Mustang";
  Mycar2.fuel = "Diesel";
  Mycar2.price = 12000;
  Mycar2.year = 2009;

  // Print attribute values
  cout << Mycar1.brand << " " << Mycar1.model << " " << Mycar1.fuel << " " << Mycar1.price << " " << Mycar1.year << endl;
  cout << Mycar2.brand << " " << Mycar2.model << " " << Mycar2.fuel << " " << Mycar2.price << " " << Mycar2.year << endl;
  return 0;
}
