

#include <iostream>

int main()
{
	//task #1
	int arr[7];

	printf("Input 7 elements\n");

	for (int i = 0; i < 7; i++) {
		scanf_s("%i", &arr[i]);
	}

	for (int i = 0; i < 7; i++) {
		printf("%2i", arr[i]);
	}

	//task #2
	int arr2[100], n = 0;

	printf("\nInput array length in range of 100\n");
	scanf_s("%i", &n);
	printf("Input elements\n");


	for (int i = 0; i < n; i++) {
		scanf_s("%i", &arr2[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%2i", arr2[i]);
	}
}
