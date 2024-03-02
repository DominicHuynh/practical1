#include <unordered_map> // for std::unordered_map

double weighted_average(int array[], int n) {
    // Check if the size parameter is less than 1
    if (n < 1) {
        return 0;
    }

    // Create a hash map to store the frequency of each element
    std::unordered_map<int, int> freqMap;

    // Calculate the frequency of each element in the array
    for (int i = 0; i < n; ++i) {
        freqMap[array[i]]++;
    }

    // Calculate the weighted average
    double weightedAvg = 0.0;
    for (const auto& pair : freqMap) {
        weightedAvg += pair.first * static_cast<double>(pair.second) / n;
    }

    return weightedAvg;
}
