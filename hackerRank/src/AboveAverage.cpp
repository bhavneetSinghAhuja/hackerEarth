//============================================================================
// Name        : hackerRank.cpp
// Author      : Bhavneet Singh Ahuja
// Version     :
// Copyright   : Your copyright notice
// Description : Code sprint 2014, qualification 1st round, problem above average
//============================================================================

#include <iostream>
#include <stdio.h>
using namespace std;

void listAboveAverage(){
	int n;
	scanf("%d",&n);
	int a[100];
	int sum=0;

	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	int avg=sum/n;
	int count=0;
	for(int i=0;i<n;i++){
		if (a[i]>avg)
			count++;
	}
	printf("%d\n",count);
	return;
}
void aboveAverage(){
	int t,n,i;
	scanf("%d",&t);
	for(i=0;i<t;i++){

		listAboveAverage();
	}
	return;
}
//int main() {aboveAverage();return 0;}
