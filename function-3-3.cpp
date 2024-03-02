#include <unordered_map> // for std::unordered_map

double weighted_average(int array[], int n) {
    // Check if the size parameter is less than 1
    if (n < 1) {
        return 0.0;
    }

    // Create a map to store the frequency of each distinct element
    std::unordered_map<int, int> frequencyMap;

    // Calculate the frequency of each distinct element in the array
    for (int i = 0; i < n; ++i) {
        frequencyMap[array[i]]++;
    }

    // Calculate the weighted sum
    double weightedSum = 0.0;
    for (const auto& pair : frequencyMap) {
        weightedSum += static_cast<double>(pair.first * pair.second) / n;
    }

    return weightedSum;
}
