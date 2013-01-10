#include<stdio.h>
/*sakuseisya:1T2(40) masudatokimi*/
/*kdaimei:kadai05_1*/
struct data {
	char name[256];
	double height;
	double weight;
};

void main(void) {
	struct data sd = {"iwasakidejita",175.5,73.2};
	printf("sokuteikextuka:\n");
	printf("%s  %fcmA%fkg\n",sd.name,sd.height,sd.weight);
	printf("mojiretu\n");
	printf("dayo\n");
	printf("suuretu\n");
	printf("seisuu\n");
}