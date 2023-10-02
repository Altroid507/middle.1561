#include "middle.h"
#include <iostream>

using namespace std;

int itc_second_max_num(long long number) {
	int maxim, maxim2;
	maxim = 0;
	maxim2 = 0;
	if (number < 0) number = number * -1;
	if (number / 10 == 0) return -1;
	while (number > 0) {
		if ((number % 10) > maxim2 && (number % 10) <= maxim) maxim2 = (number % 10);
		if ((number % 10) > maxim) {
			maxim2 = maxim;
			maxim = number % 10;
		}
		number = number / 10;
	}
	return maxim2;
}

int itc_second_simple_max_num(long long number) {
	int maxim, maxim2;
	maxim = 0;
	maxim2 = 0;
	if (number < 0) number = number * -1;
	if (number / 10 == 0) return -1;
	while (number > 0) {
		if ((number % 10) > maxim2 && (number % 10) <= maxim) maxim2 = (number % 10);
		if ((number % 10) > maxim) {
			maxim2 = maxim;
			maxim = number % 10;
		}
		number = number / 10;
	}
	if (maxim == maxim2) return -1;
	return maxim2;
}

long long itc_bin_num(long long number) {
	long long res;
	res = 0;
	if (number >= 2) {
		for (int i = 0; number >= 2; i++) {
			if (i != 0) {
				res += (number % 2) * step(10, i);
			}
			else res += number % 2;
			if ((number / 2) < 2) res += (number / 2) * step(10, i + 1);
			number = number / 2;
		}
		return res;
	}
	return number;
}

long long itc_oct_num(long long number) {
	long long res;
	res = 0;
	if (number >= 8) {
		for (int i = 0; number >= 8; i++) {
			if (i != 0) {
				res += (number % 8) * step(10, i);
			}
			else res += number % 8;
				if ((number / 8) < 8) res += (number / 8) * step(10, i + 1);
				number = number / 8;
		}
		return res;
	}
	return number;
}
