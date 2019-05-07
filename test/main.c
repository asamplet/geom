#define CTEST_MAIN
#define CTEST_COLOR_OK
#include <ctest.h>
#include <foo.h>

int main(int argc, const char** argv)
{
    return ctest_main(argc, argv);
}

CTEST(area_test, result_test)
{
    // Given
    int x[1][9]={{0,0,1,0,0,0,0,0,1}};
    
   	

    // When
    const int result = plo(x[1]);

    // Then
    const int expected = 12;
    ASSERT_EQUAL(expected, result);
}/*
CTEST(area_testt, resultt_test)
{
    // Given
    char figure[10]="triangle";
    const float x1=12;
    const float y1=13;
    const float x2=4;
    const float y2=1;
    const float x3=7;
    const float y3=8;
    // When
    const float result = plo(figure,x1,y1,x2,y2,x3,y3,x1,y1);

    // Then
    const float expected = 10;
    ASSERT_EQUAL(expected, result);
}
CTEST(perimetr_test, result_test)
{
    // Given
    char figure[10]="circle";
    const float x1=0;
    const float y1=0;
    const float r= 6.5;

    // When
    const float result = per(figure,x1,y1,r,0,0,0,0,0);

    // Then
    const float expected = 40.8395;
    ASSERT_EQUAL(expected, result);
}
CTEST(perimetr_testt, resultt_test)
{
    // Given
    char figure[10]="triangle";
    const float x1=12;
    const float y1=13;
    const float x2=4;
    const float y2=1;
    const float x3=7;
    const float y3=8;
    // When
    const float result = per(figure,x1,y1,x2,y2,x3,y3,x1,y1);

    // Then
    const float expected = 22.109;
    ASSERT_EQUAL(expected, result);
}

CTEST(peres_test, peres_false)
{
const int k=1;
const float x1 = 0;
const float y1 = 6;
const float r1 = 2;
const float x2 = 7;
const float y2 = 6;
const float r2 = 3;

// When
const double result = peres(k, x1,y1,r1,x2,y2,r2,0,0,0);

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
