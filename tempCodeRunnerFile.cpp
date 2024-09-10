 #include <iostream>
#include <exception>
#include <string>
using namespace std;

// Custom exception class TooHot
class TooHot : public exception {
private:
    int temperature;
    string message;  // Store the message as a member variable
public:
    // Constructor to initialize the temperature and message
    TooHot(int temp) : temperature(temp) {
        message = "Temperature " + to_string(temperature) + " is Too Hot";
    }

    // Override what() method to provide a custom error message
    const char* what() const noexcept override {
        return message.c_str();
    }
};

// Custom exception class TooCold
class TooCold : public exception {
private:
    int temperature;
    string message;  // Store the message as a member variable
public:
    // Constructor to initialize the temperature and message
    TooCold(int temp) : temperature(temp) {
        message = "Temperature " + to_string(temperature) + " is Too Cold";
    }

    // Override what() method to provide a custom error message
    const char* what() const noexcept override {
        return message.c_str();
    }
};

int main() {
    int temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    try {
        if (temperature > 40) {
            throw TooHot(temperature);
        } else if (temperature < 20) {
            throw TooCold(temperature);
        } else {
            cout << "Temperature is: " << temperature << " degrees" << endl;
        }
    } catch (const TooHot& e) {
        cout << e.what() << endl;
    } catch (const TooCold& e) {
        cout << e.what() << endl;
    }

    return 0;
}
