#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <foo.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const double PI = 3.14159265;

int per(int* x);
int plo(int* x);

int per(int* x) {
	int pr1, r;
	float s1, s2, s3, pr;
	if (x[8] == 1) {
		r = x[2];
		// pl = PI * r * r;
		pr1 = PI * 2 * r;
		pr = pr1;
	}

	if (x[8] == 2) {
		s1 = sqrt(pow((x[0] - x[2]), 2) + pow((x[1] - x[3]), 2));
		s2 = sqrt(pow((x[2] - x[4]), 2) + pow((x[3] - x[5]), 2));
		s3 = sqrt(pow((x[4] - x[6]), 2) + pow((x[5] - x[7]), 2));
		pr = s1 + s2 + s3;
		// p = pr / 2;
		// pl = p * (p - s1) * (p - s2) * (p - s3);}
		pr = (int)pr;
	}
	return pr;
}

int plo(int* x) {
	int pl1, r;
	float p, pl, s1, s2, s3, pr;
	if (x[8] == 1) {
		r = x[2];
		pl1 = PI * r * r;
		// pr1 = PI * 2 * r;
		pl = pl1;
	}

	if (x[8] == 2) {
		s1 = sqrt(pow((x[0] - x[2]), 2) + pow((x[1] - x[3]), 2));
		s2 = sqrt(pow((x[2] - x[4]), 2) + pow((x[3] - x[5]), 2));
		s3 = sqrt(pow((x[4] - x[6]), 2) + pow((x[5] - x[7]), 2));
		pr = s1 + s2 + s3;
		p = pr / 2;
		pl = p * (p - s1) * (p - s2) * (p - s3);
	}
	pl = (int)pl;
	return pl;
}

CTEST(area_test, result_test_circle) {
	// Given
	int x[1][9] = {{1, 1, 2, 1, 1, 1, 1, 1, 1}};

	// When
	const int result = plo(x[0]);

	// Then
	const int expected = 12;
	ASSERT_EQUAL(expected, result);
}
CTEST(area_testt, resultt_test_triangle) {
	// Given
	int x[1][9] = {{1, 1, 2, 2, 3, 1, 1, 1, 2}};

	// When
	const int result = plo(x[0]);

	// Then
	const int expected = 1;
	ASSERT_EQUAL(expected, result);
}
CTEST(perimetr_test, result_test_circle) {
	// Given
	int x[1][9] = {{1, 1, 2, 1, 1, 1, 1, 1, 1}};

	// When
	const int result = per(x[0]);

	// Then
	const int expected = 12;
	ASSERT_EQUAL(expected, result);
}
CTEST(perimetr_testt, resultt_test_triangle) {
	// Given
	int x[1][9] = {{1, 1, 1, 4, 5, 1, 1, 1, 2}};

	// When
	const int result = per(x[0]);

	// Then
	const int expected = 12;
	ASSERT_EQUAL(expected, result);
}
/*
CTEST(peres_test, peres_false) {
	int x[3][9] = {{1, 1, 1, 6, 3, 1, 1, 1, 2},
		       {2, 3, 4, 5, 4, 3, 2, 3, 2},
		       {5, 5, 2, 0, 0, 0, 0, 0, 1}};

	;

	// When
	pip(x);
	const double result = 0;

	// Then
	ASSERT_FALSE(result);
}

 CTEST(peresech_test, peresech_true)
 {
 const int k=1;
 const float x1 = 0;
 const float y1 = 6;
 const float r1 = 2;
 const float x2 = 7;
 const float y2 = 6;
 const float r2 = 5.2;

 // When
 const double result = peres(k, x1,y1,r1,x2,y2,r2,0,0,0);

 // Then
 ASSERT_TRUE(result);
 }
*/
int main(int argc, const char** argv) { return ctest_main(argc, argv); }

