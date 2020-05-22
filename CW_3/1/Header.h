#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

#ifndef HEADER_H
#define HEADER_H
struct Box {
	float height;
	float width;
	float lenght;
	float volume;
	void CountVol() { volume = height * width * lenght; }
};

void insertionSort(Box arr[], int n) {
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i].volume;
		j = i - 1;
		while (j >= 0 && arr[j].volume > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1].volume = key;
	}
}
#endif
