

#include <iostream>

int main()
{
	int arr[100] = {}, max = 0, min = 0, sum = 0, n = 0;

	printf("Input elements length ");
	scanf_s("%i", &n);

	printf("Input array elements\n");

	for (int i = 0; i < n; i++) {
		scanf_s("%i", &arr[i]);
	}

	min = max = arr[0];

	for (int i = 0; i < n; i++) {
		sum += arr[i];

		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("Min: %i Max: %i\n", min, max);
	printf("Sum: %i\n", sum);
	printf("Middle Arithmetic %f", float(sum) / float(n));

}
