#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>

class Car {
private:
    std::string model;
    int year;
    static const int MAX_MILEAGE = 1000000;
    int mileage;

public:
    // Item 4: Proper initialization
    Car(const std::string& m, int y) : model(m), year(y), mileage(0) {}
    
    // Item 5: Show compiler-generated functions
    Car() = default;
    ~Car() = default;
    
    // Item 6: Explicitly disallow unwanted functions
    Car(const Car&) = delete;
    Car& operator=(const Car&) = delete;
    
    // Move operations
    Car(Car&& other) noexcept;
    Car& operator=(Car&& other) noexcept;
    
    void setMileage(int m) {
        if (m <= MAX_MILEAGE) mileage = m;
    }
    
    void displayInfo() const {
        std::cout << "Car: " << model << " " << year << "\n";
        std::cout << "Mileage: " << mileage << "\n";
    }
};
#endif