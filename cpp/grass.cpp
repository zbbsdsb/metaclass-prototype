#include <iostream>
#include <string>

class Metaclass {
public:
    virtual void displayAttributes() = 0;
};

class Grass : public Metaclass {
public:
    void displayAttributes() override {
        std::cout << "Grass Attributes:\n"
                  << "Height: 10cm\n"
                  << "Color: Green\n"
                  << "Density: Medium\n"
                  << "Growth Condition: Humid\n"
                  << "Interaction: Can be trampled or cut\n";
    }
};

class Water : public Metaclass {
public:
    void displayAttributes() override {
        std::cout << "Water Attributes:\n"
                  << "State: Liquid\n"
                  << "Temperature: 0-100C\n"
                  << "Flow: Yes\n"
                  << "Evaporation: Yes\n"
                  << "Freezing: Yes\n";
    }
};

int main() {
    Grass grass;
    Water water;

    grass.displayAttributes();
    water.displayAttributes();

    return 0;
}

