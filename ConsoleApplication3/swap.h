#include<iostream>
using namespace std;

void swap(int* a, int* b) {
	int c = *a;
	*a = *b;
	*b = c;
}