#include <iostream>
#include "function.h"

int main() {
    const int SIZE = 10;
    int intArray[SIZE];
    char charArray[SIZE];
    double doubleArray[SIZE];

    DataProcessor::FillArray(intArray, SIZE);
    DataProcessor::ShowArray(intArray, SIZE);

    int minInt = DataProcessor::FindMin(intArray, SIZE);
    int maxInt = DataProcessor::FindMax(intArray, SIZE);

    DataProcessor::SortArray(intArray, SIZE);
    DataProcessor::ShowArray(intArray, SIZE);

    int indexToEdit = 2;
    int newValue = 100;
    DataProcessor::EditArray(intArray, SIZE, indexToEdit, newValue);
    DataProcessor::ShowArray(intArray, SIZE);

    return 0;
}
