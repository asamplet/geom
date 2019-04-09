#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const double PI = 3.14159265;
const int N = 50;

void pip(int r);
void pip(int *x);

void pip(int r){
	int pl,pr;
	pl=PI*r*r;
	pr=PI*2*r;
	printf("Ploshad - %d \nPerimetr - %d\n",pl,pr);
}

void pip(int *x){
	float p,pl,s1,s2,s3,pr;
	s1=sqrt(pow((x[0]-x[2]),2)+pow((x[1]-x[3]),2));
	s2=sqrt(pow((x[2]-x[4]),2)+pow((x[3]-x[5]),2));
	s3=sqrt(pow((x[4]-x[6]),2)+pow((x[5]-x[7]),2));
	pr=s1+s2+s3;
	p=pr/2;
	pl=p*(p-s1)*(p-s2)*(p-s3);
	printf("Ploshad - %f \nPerimetr - %f\n",p,pr);
}


int main()
{
    int i = 0, p = 0, k = 0, ix[2], it[8];
    double r,c, rad[N];
    char A[] = "circle(", B[] = "triangle(", s[80], s1[80] = {0}, emp[] = "\0", exit[] = "exit";
    
    while(1){
    scanf("%s", s);
    if (strcmp(exit,s)==0) break;
    if (strncmp(A, s, 7) == 0){
    i=7;
    p=0;
    k=7;
    while (p < 2) {
        if (s[i] == ',') {
            ix[p] = atoi(s1);
            strcpy(s1, emp);
            
            p++;
            k++;
        } else {
            strncat(s1, s + k, 1);
            k++;
        }
            i++;
        }
        while (p != 0) {
            if (s[i] == ')') {
                r = atof(s1);
                strcpy(s1, emp);
                k = 7;
                p = 0;
                i = 6;
            } else {
                strncat(s1, s + k, 1);
                k++;
            }
            i++;
        }
pip(r);
}

    if (strncmp(B, s, 9) == 0){
    i=9;
    p=0;
    k=9;
    while (p < 7) {
        if (s[i] == ',') {
            it[p] = atoi(s1);
            strcpy(s1, emp);
            p++;
            k++;
        } else {
            strncat(s1, s + k, 1);
            k++;
        }
            i++;
        }
        while (p != 0) {
            if (s[i] == ')') {
                it[p] = atoi(s1);
                strcpy(s1, emp);
                k = 7;
                p = 0;
                i = 6;
            } else {
                strncat(s1, s + k, 1);
                k++;
            }
            i++;
        }
pip(it);
}
}
printf(" %d",it[7]);

    return 0;
}
