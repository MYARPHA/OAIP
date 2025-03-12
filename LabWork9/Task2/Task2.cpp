#include <iostream>

void printArray(char array[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}



int main()
{
    char array[] = { 'm', 'e', 'o', 'w' };
    int size = sizeof(array) / sizeof(array[0]);

    printArray(array, size);

    return 0;
}
