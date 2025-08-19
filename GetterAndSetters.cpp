#include <iostream>

class Stove {
private:
    int temperature = 0;

public:
    int getTemperature() {
        return temperature;
    }

    void setTemperature(int temp) {
        temperature = temp;
    }
};

int main() {
    Stove stove1;

    stove1.setTemperature(200);

    std::cout << "Stove temperature: " << stove1.getTemperature() << '\n';

    if (stove1.getTemperature() > 180) {
        std::cout << "Warning: Stove is very hot 🥵🥵 " << '\n';
    } else {
        std::cout << "Stove is at a safe temperature 👌." << '\n';
    }

    return 0;
}
