#include "function.h"
#include <iostream>

template <typename T>
void DataProcessor::FillArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = T(rand());
    }
}

template <typename T>
void DataProcessor::ShowArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
T DataProcessor::FindMin(T arr[], int size) {
    T minVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

template <typename T>
T DataProcessor::FindMax(T arr[], int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T>
void DataProcessor::SortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void DataProcessor::EditArray(T arr[], int size, int index, T newValue) {
    if (index >= 0 && index < size) {
        arr[index] = newValue;
    }
}
