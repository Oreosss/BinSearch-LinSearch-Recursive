#include <iostream>
using namespace std;




int binsearch(float a[], int f, int e ,float srch4) { // Recursive
	
	int m = 0 ; // middle Index

	m = (f + e) / 2; 


	while (e >= f) { // while the end index is greater than or equal to the first index

		m = (e + f) / 2; // (first index + end index / 2) == middle index

		if (a[m] == srch4) { // if middle index element is == to the  element being searched for
			return m; // return middle index
		}
		if (srch4 < a[m]) { // if number looking for is less than middle number
			e = m - 1;// search top of the list by making the end of the list number right before the middle
			return binsearch(a, f, e, srch4);
		}
		else { // if number is greater then middle index search bottom part of the list
			f= m + 1; // change the first index to number right after the middle index hence  (m + 1)
			return binsearch(a, f, e, srch4);
		}
	}

	return -1; // not found
}



int linsearch(float a[], int num, float srch4) { // iterative method
	for (int i = 0; i < num; i++) {
		if (a[i] == srch4) {
			return i;
		}
	}
	return -1;
}

int linsearch(float a[], int num, int i, float srch4) { // recursive method
	if (i == num) {
		return -1;
	}

	if (a[i] == srch4) {
		return i;
	}

	return linsearch(a, num, i + 1, srch4);
}