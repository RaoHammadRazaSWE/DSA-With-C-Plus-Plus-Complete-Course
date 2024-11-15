#include <iostream> // Include input/output stream library
using namespace std;

int main() // Main function
{
    int side, area; // Declare variables for side and area

    // Ask the user to enter the side of the square
    cout << "Enter the side length of the square: ";
    cin >> side; // Read the user's input

    // Calculate the area (Area = side * side)
    area = side * side;

    // Output the area of the square
    cout << "The area of the square is: " << area << endl;

    return 0; // Return 0 to indicate successful execution
}
