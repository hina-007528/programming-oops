// 
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to draw the moon using asterisks (*)
void drawMoon(int radius) {
    // Dimensions of the moon in terms of rows and columns
    int diameter = 2 * radius;

    // Create a 2D grid to represent the screen
    vector<vector<char>> grid(diameter, vector<char>(diameter, ' ')); // Initialize with empty spaces

    // Iterate through each cell of the grid
    for (int y = 0; y < diameter; ++y) {
        for (int x = 0; x < diameter; ++x) {
            // Calculate the distance from the center of the moon
            int dx = x - radius;
            int dy = y - radius;

            // Equation for a circle: (x - centerX)^2 + (y - centerY)^2 <= radius^2
            if (dx * dx + dy * dy <= radius * radius) {
                grid[y][x] = '*';  // Mark the cell as part of the moon
            }
        }
    }

    // Print the grid (moon) to the console
    for (int y = 0; y < diameter; ++y) {
        for (int x = 0; x < diameter; ++x) {
            cout << grid[y][x];
        }
        cout << endl;
    }
}

int main() {
    int radius;

    // Ask the user for the radius of the moon
    cout << "Enter the radius of the moon (integer): ";
    cin >> radius;

    // Call the function to draw the moon
    drawMoon(radius);

    return 0;
}

