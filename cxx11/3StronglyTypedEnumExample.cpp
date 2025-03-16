#include <iostream>
using namespace std;

enum class Color : uint8_t { // Explicit underlying type
    Red,
    Green,
    Blue
};

enum class Status {
    Success,
    Failure
};

// Forward declaration
enum class Direction;

void printColor(Color color) {
    switch (color) {
        case Color::Red:
            cout << "Red" << endl;
            break;
        case Color::Green:
            cout << "Green" << endl;
            break;
        case Color::Blue:
            cout << "Blue" << endl;
            break;
    }
}

void printStatus(Status status) {
    switch (status) {
        case Status::Success:
            cout << "Success" << endl;
            break;
        case Status::Failure:
            cout << "Failure" << endl;
            break;
    }
}

enum class Direction {
    North,
    South,
    East,
    West
};

int main() {
    Color myColor = Color::Green;
    printColor(myColor);

    Status myStatus = Status::Success;
    printStatus(myStatus);

    Direction myDirection = Direction::North;
    // Use myDirection as needed

    return 0;
}
