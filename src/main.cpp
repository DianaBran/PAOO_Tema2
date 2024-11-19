#include "Car.h"

int main() {
    // Item 4: Test initialization
    Car car1("Toyota", 2020);
    car1.displayInfo();
    
    // Item 5 & 6: These won't compile (demonstration of deleted functions)
    // Car car2(car1);  // Error: copy constructor is deleted
    // Car car3 = car1; // Error: copy assignment is deleted
    
    // Test move semantics
    Car car4 = std::move(car1);
    car4.displayInfo();
    
    return 0;
}