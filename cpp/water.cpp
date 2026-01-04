// water.cpp
#include "metaclass.hpp"
#include <iostream>

class Water : public Metaclass {
public:
    void displayAttributes() const override {
        std::cout << "Water Attributes:\n"
                  << "State: Liquid\n"
                  << "Temperature: 0-100C\n"
                  << "Flow: Yes\n"
                  << "Evaporation: Yes\n"
                  << "Freezing: Yes\n";
    }
};

