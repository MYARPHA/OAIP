#include <iostream>
#include <cstdlib>
#include <ctime>

void fillArray(int array[], int size) {
    std::srand(std::time(0));
    for (int i = 0; i < size; i++) {
        array[i] = std::rand();
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const int size = 5;
    int array[size];

    fillArray(array, size);
    printArray(array, size);

    return 0;
}
