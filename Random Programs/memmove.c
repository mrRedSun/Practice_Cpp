#include "stdlib.h"
#include "stdio.h"
#include "string.h"
#define _CRT_SECURE_NO_WARNINGS

struct array
{
	float * v;
	int size;
	int capacity;
};

struct array * arrInit();

void extend(struct array * arr);
void arrAdd(struct array * arr, float value);

void arrInsert(struct array * arr, float value, int index);

void arrDel(struct array * arr, int index);

int arrFind(struct array * arr, double element);

struct array * arrConcat(struct array * arr0, struct array * arr1);



int main()
{	// Testbench

	//endof Testbench

	FILE * myfile;

	myfile = fopen(myfile, "in.txt", "r");

	struct array * numbers = arrInit();

	for (int i = 0; i < 10; i++) {
		arrAdd(numbers, i);
	}

	arrDel(numbers, 0);
	arrInsert(numbers, 3.14, 0);


	for (int i = 0; i < numbers->size; i++) {
		printf("%f \n", numbers->v[i]);
	}

	getch();



	return 0;
}

struct array * arrInit()
{
	struct array * I = malloc(100);

	I->size = 0;
	I->v = (float*) malloc(10 * sizeof(float));
	I->capacity = 10;

	return I;
}


void arrAdd(struct array * arr, float value)
{
	//arr->v = realloc(arr->v, arr->size * sizeof(float) + sizeof(float));
	if (arr->size == arr->capacity) extend(arr);
	arr->v[arr->size] = value;

	arr->size++;
}

void arrInsert(struct array * arr, float value, int index)
{
	/*arr->v = realloc(arr->v, arr->size * sizeof(float) + sizeof(float));
	arr->size++;

	for (int i = arr->size - 1; i > index; i--) {
		arr->v[i] = arr->v[i - 1];
	}

	arr->v[index] = value;
	*/

	if (arr->size == arr->capacity) extend(arr);

	memcpy(arr->v + index + 1, arr->v + index, (arr->size - index) * sizeof(float));
	arr->size += 1;

	arr->v[index] = value;
}

void arrDel(struct array * arr, int index)
{

	/* Slow, memory-efficient version
	for (int i = index; i < arr->size - 1; i++) {
		arr->v[i] = arr->v[i + 1];
	}

	arr->size--;
	arr->v = realloc(arr->v, arr->size * sizeof(float));
	*/

	memcpy(arr->v + index - 1, arr->v + index, (arr->size - index) * sizeof(float));
	arr->size -= 1;
}

int arrFind(struct array * arr, double element)
{
	for (int i = 0; i < arr->size; i++) {
		if (arr->v[i] == element) {
			return i;
		}
	}
	return -1;
}

struct array * arrConcat(struct array * arr0, struct array * arr1)
{
	struct array * temp = arrInit();
	temp->v = realloc(temp->v, (arr0->size + arr1->size) * sizeof(float));
	temp->size = arr0->size + arr1->size;
	for (int i = 0; i < arr0->size; i++) {
		temp->v[i] = arr0->v[i];
	}

	for (int i = arr0->size; i < (arr0->size + arr1->size); i++) {
		temp->v[i] = arr1->v[i - arr0->size];
	}

	return temp;
}

void extend(struct array * arr) {
	arr->capacity = arr->capacity + arr->capacity / 2;
	arr->v = realloc(arr->v, arr->capacity * sizeof(float));
}
