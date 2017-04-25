#include <iostream>
#include <stdlib.h>
#include <time.h>

#pragma once

using namespace std;

void output_matrix(int ** matrix, int m, int n);

int ** read_matrix(int m, int n);

bool primarity_test(int number);

int the_primest(int ** matrix, int m, int n);

int quantity_of_prime(int * group, int group_size);

void output_group(int * group, int group_size);

void trash_cleaner(int ** matrix, int m);