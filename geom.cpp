#include<stdio.h>
#include<stdlib.h>
int main(){
	char a[100],b[100];
	int i;
	for(i=0;i<100;i++){
		if(a[i]=="(") break;
		b[i]=a[i];
	}
	scanf("%s",&a);
	printf("%s",b);
	return 0;
}
