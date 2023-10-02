#include "middle (1).h"
#include <iostream>

using namespace std;

int itc_min_num(long long number) {
	int minim;
	if (number < 0) number = number * -1;
	minim = number;
	while (number > 0) {
		if ((number % 10) < minim) minim = number % 10;
		number = number / 10;
	}
	return minim;
}

int itc_rev_num(long long number) {
	int rev, c;
	rev = 0;
	c = 0;
	if (number < 0) {
       number = number * -1;
       c = 1;
	}
	while (number > 0) {
		rev += number % 10;
		number = number / 10;
		if (number > 0) rev = rev * 10;
	}
	if (c == 1) rev = rev * -1;
	return rev;
}

int itc_null_count(long long number) {
	int countr;
	countr = 0;
	if (number == 0) return 1;
	if (number < 0) number = number * -1;
	while (number > 0) {
		if (number % 10 == 0) countr += 1;
		number = number / 10;
	}
	return countr;
}

bool itc_mirror_num(long long number) {
	if (itc_rev_num(number) == number) return true;
	return false;
}

int itc_mirror_count(long long number) {
	int res;
	res = 0;
	for (int i = 1; i <= number; i++) {
		if (itc_mirror_num(i) == true) res += 1;
	}
	return res;
}
