#include <iostream>
extern double weighted_average(int array[], int n);
int main() {
    int myArray[] = {1, 2, 1, 4, 1, 3};
    int size = 6;

    double result = weighted_average(myArray, size);

    std::cout << "Weighted Average: " << result << std::endl;

    return 0;
}