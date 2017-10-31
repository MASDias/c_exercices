#include <stdio.h>

int fC(int i, int j){	
	int h = 0;
	
	if (i == j){
		h = i - j;
	}
	else{
		h = i + j;
	}
	return h;
}

int f2C(int i, int j){
	int h = 0;
	
	if (i <= j){
		i = i + 1;
	}
	else{
		j = j + 1;
	}
	
	h = i * j;
	
	return h;
}

int f3C(int i, int j){
	int h = 0;
	int r = 0;
	int g = 0;
	
	if (i >= j) {
		h = i + j;
		g = i + 1;
	}
	else {
		h = i * j;
		g = i + j + 2;
	}
	
	r = h / g;
	return r;
}

int f4C(int i, int j){
	int h = 0;
	
	if (i + j > 10)
		h = 2 * i;
	else
		h = j / 3;
	return h;
}
