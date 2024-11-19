#include "Car.h"

// Implementation of move constructor
Car::Car(Car&& other) noexcept 
    : model(std::move(other.model))
    , year(other.year)
    , mileage(other.mileage) {
    other.year = 0;
    other.mileage = 0;
}

// Implementation of move assignment
Car& Car::operator=(Car&& other) noexcept {
    if (this != &other) {
        model = std::move(other.model);
        year = other.year;
        mileage = other.mileage;
        other.year = 0;
        other.mileage = 0;
    }
    return *this;
}