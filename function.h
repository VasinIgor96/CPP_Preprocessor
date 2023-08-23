#include <iostream>

class DataProcessor {
public:
    template <typename T>
    static void FillArray(T arr[], int size);

    template <typename T>
    static void ShowArray(T arr[], int size);

    template <typename T>
    static T FindMin(T arr[], int size);

    template <typename T>
    static T FindMax(T arr[], int size);

    template <typename T>
    static void SortArray(T arr[], int size);

    template <typename T>
    static void EditArray(T arr[], int size, int index, T newValue);
};
