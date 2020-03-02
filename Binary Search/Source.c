#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int* array, int first, int last, int value)
{
	while (first <= last)
	{
		int mid = (first + last) / 2;

		if (array[mid] == value)
		{
			return mid;
		}
		else if (array[mid] < value)
		{
			first = mid + 1;
		}
		else /* array[mid] > value */
		{
			last = mid - 1;
		}
	}

	return -1;
}

int main()
{
	int a[] = { 1, 3, 4, 6, 7, 8, 9, 10, 13, 14, 18, 19, 21, 24, 37, 40, 45, 71 };
	int count = sizeof(a) / sizeof(int);
	int index = BinarySearch(a, 0, count, 5);

	printf("%d", index);
}
