#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        // If the size parameter is less than 1, return 0
        return 0.0;
    }

    // Create a hash map to store the frequency of each distinct element
    std::unordered_map<int, int> freqMap;

    // Calculate the frequency of each distinct element in the array
    for (int i = 0; i < n; ++i) {
        freqMap[array[i]]++;
    }

    // Calculate the weighted sum
    double weightedSum = 0.0;
    for (auto& pair : freqMap) {
        weightedSum += pair.first * static_cast<double>(pair.second) / n;
    }

    return weightedSum;
}
