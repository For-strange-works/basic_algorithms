

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
            if(array[i][j]) count++;
        }

    //for (int i = 0; i < n; i++) {
    //    for (int j = 0; j < n; j++)
    //        std::cout << array[i][j] << " ";
    //    std::cout<<"\n";
    //}

    std::cout << "number of edges: " << count/2;

    for (int i = 0; i < n; i++) {
        delete[] array[i];
    }
    delete[] array;

}

