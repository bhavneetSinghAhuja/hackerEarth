/*
 * Factoriz.cpp
 *
 *  Created on: Sep 11, 2014
 *      Author: bhavneet.ahuja
 *      for problem:- http://www.codechef.com/SEPT14/problems/FACTORIZ
 */

#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

void factorizUtil(){

	long int n;
	cin>>n;
	long int s=(long int)sqrt((long double)n);
	int i=2;
	while(i<=s){
		if(n%i==0){
			cout<<"2"<<endl;
			long int div=n/i;
			printf("%ld\n",div);
			printf("%d\n",i);
			break;
		}
	}
	return;
}

void factoriz(){
	int t=0;
	scanf("%d",t);

	for(int i=0;i<t;i++){
		factorizUtil();
	}
return;
}

//int main() {factoriz();return 0;}
