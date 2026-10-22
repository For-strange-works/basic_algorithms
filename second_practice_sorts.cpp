
#include <iostream>

void bubble_sort(int *a, int len) {
	bool swap;
	int tmp = 0;
	for (int i = 0; i < len - 1; i++) {
		swap = false;

		for (int j = 0; j < len -1 -i; j++) {
			if (a[j+1] <a[j]) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j+1] = tmp;
				swap = true;
			}

			}
		if (!swap) { break;}
		}
		
  }





void quick_sort(int* a, int len) {

}

void merge_sort(int* a, int len) {


}



int main()
{
	srand(static_cast<unsigned int>(time(0)));
	int array[10];
	int length = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % 201 - 100;
	}
	for (auto v : array){
		std::cout << v << std::endl;
	}
	std::cout << "\n";
	bubble_sort(array, length);
	for (auto v : array) {
		std::cout << v << std::endl;
	}
	std::cout << "\n";


 
	return 0;
}

