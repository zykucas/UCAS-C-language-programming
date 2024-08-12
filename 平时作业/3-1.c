#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int search(int x, int v[], int n) {
	int high, low, mid;

	low = 0;
	high = n - 1;
	while (low <= high) {
		if (x == v[low]) {
			return low;
		}
			low = low + 1;
			high = high - 1;
	}
	return -1;
}