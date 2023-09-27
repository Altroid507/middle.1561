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

int itc_rev_bin_num(long long number) {
	int res, cntr;
	res = 0;
	cntr = 0;
	if (number < 2) return number;
	while (number > 0) {
		res += (number % 10) * step(2, cntr);
		number = number / 10;
		cntr++;
	}
	return res;
}

int itc_rev_oct_num(long long number) {
	int res, cntr;
	res = 0;
	cntr = 0;
	if (number < 8) return number;
	while (number > 0) {
		res += (number % 10) * step(8, cntr);
		number = number / 10;
		cntr++;
	}
	return res;
}

int itc_covert_num(long long number, int ss) {
	long long res;
	res = 0;
	if (number >= ss) {
		for (int i = 0; number >= ss; i++) {
			if (i != 0) {
				res += (number % ss) * step(10, i);
			}
			else res += number % ss;
			if ((number / ss) < ss) res += (number / ss) * step(10, i + 1);
			number = number / ss;
		}
		return res;
	}
	return number;
}

int itc_rev_covert_num(long long number, int ss) {
	int res, cntr;
	res = 0;
	cntr = 0;
	if (number < ss) return number;
	while (number > 0) {
		res += (number % 10) * step(ss, cntr);
		number = number / 10;
		cntr++;
	}
	return res;
}
