

#include <iostream>

int main()
{
	int n = 0, step = 0, arr[100]{};
	bool flag = true;
	
	printf("Input array length ");
	scanf_s("%i", &n);

	for (int i = 0; i < n; i++) {
		scanf_s("%i", &arr[i]);
	}
	for (int j = 0; j < n; j++) {
		printf("%i ", arr[j]);
	}
	//sorting
	while (flag) {
		flag = false;
		for (int j = 0; j < n; j++) {
			for (int i = 0; i < n - 1; i++) {
				if (arr[i] > arr[i + 1]) {
					int z = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = z;
					flag = true;
				}
			}

		}
		step++;
	}	

	printf("\nItterations: %i\n", step);
	printf("\n Result: ");
	for (int i = 0; i < n; i++) {
		printf("%i ", arr[i]);
	}
}
