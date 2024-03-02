
#include <unordered_map> // for std::unordered_map

double weighted_average(int array[], int n) {
    // Check if the size parameter is less than 1
    if (n < 1) {
        return 0.0;
    }

    // Create a map to store the frequency of each distinct element
    std::unordered_map<int, int> frequency_map;

    // Calculate the frequency of each distinct element in the array
    for (int i = 0; i < n; ++i) {
        frequency_map[array[i]]++;
    }

    // Calculate the weighted sum
    double weighted_sum = 0.0;
    for (const auto& pair : frequency_map) {
        weighted_sum += static_cast<double>(pair.first * pair.second) / n;
    }

    return weighted_sum;
}
