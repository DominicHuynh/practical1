#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    std::unordered_map<int, int> frequencyMap;

    for (int i = 0; i < n; i++) {
        frequencyMap[array[i]]++;
    }
    double sum = 0.0;
    for (const auto& entry : frequencyMap) {
        sum += static_cast<double>(entry.first * entry.second);
    }

    return sum / n;
}