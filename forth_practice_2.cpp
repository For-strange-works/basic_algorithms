
#include <iostream>

int main()
{
    int n, count = 0;

    std::cout << "Enter your number (1 <= n <= 100)\n";


    std::cin >> n;
    int** array = new int* [n];

    for (int i = 0; i < n; i++)
        array[i] = new int[n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            std::cin >> array[i][j];
            
        }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {

            if (array[i][j]) std::cout << i+1 << " " << j+1 << "\n";
        }
        
    for (int i = 0; i < n; i++) {
        delete[] array[i];
    }
    delete[] array;

}


