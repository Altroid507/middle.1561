#include "middle.h"
#include <iostream>

using namespace std;

long long step(int num, int step) {
	int res;
	res = num;
	if (step == 0) return 1;
	for (int i = 2; i <= step; i++) {
		res = res * num;
	}
	return res;
}

void itc_num_print(int number) {
	cout << number;
}

int itc_len_num(long long number) {
	int l;
	l = 0;
	if (number == 0) return 1;
	if (number < 0) {
        while (number < 0) {
		number = number / 10;
		l += 1;
        }
	}
	else {
        while (number > 0) {
            number = number / 10;
            l += 1;
        }
	}
	return l;
}

int itc_sum_num(long long number) {
	int summa;
	summa = 0;
	if (number < 0){
        while (number < 0) {
            summa += number % 10;
            number = number / 10;
        }
        summa = summa * -1;
	}
	else {
        while (number > 0) {
            summa += number % 10;
            number = number / 10;
        }
	}
	return summa;
}

long long itc_multi_num(long long number) {
	long long multi;
	multi = 1;
	if (number == 0) return 0;
	if (number < 0) {
        while (number < 0) {
            multi = multi * (number % 10);
            number = number / 10;
        }
        multi = multi * -1;
	}
	else {
        while (number > 0) {
            multi = multi * (number % 10);
            number = number / 10;
        }
	}
	return multi;
}

int itc_max_num(long long number) {
	int maxim;
	maxim = 0;
	if (number < 0) number = number * -1;
    while (number > 0) {
        if ((number % 10) > maxim) maxim = number % 10;
        number = number / 10;
    }
	return maxim;
}
