/*
 * OctoberSky.cpp
 *
 *  Created on: Oct 25, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;
void sky(){
	long int n;
	scanf("%ld", &n);
	vector<long long int> a;
	long long int temp;
	long int maxLength=1, count=0;
	for(long int i=0;i<n;i++){
		scanf("%lld", &temp);
		a.push_back(temp);
		if(temp>=0) count++;
	}


	for(long int i=0;i<(n-1);i++){
		for(long int j=i+1; j<n;j++){


		}
	}
}
//int main(){sky(); return 0;}

