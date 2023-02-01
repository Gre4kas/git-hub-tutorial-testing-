#include <iostream>
#include <vector>

int main() {
    int rows, cols;
    std::cout << "Enter rows: ";
    std::cin >> rows;
    std::cout << "Enter cols: ";
    std::cin >> cols;

    // Allocate memory for the 2D array
    std::vector<std::vector<int>> array(rows, std::vector<int>(cols));

    // Fill the array with values
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            array[i][j] = i*j;
        }
    }

    // Print the array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // No need to free memory, it will be automatically handled by the vector
    return 0;
}
