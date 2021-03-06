/*
 * MiceV1.cpp
 *
 *  Created on: Sep 13, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

void micev1Util(){

	int n;
	cin>>n;
	vector<int> mouse;
	vector<int> hole;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		mouse.push_back(x);
	}
	for(int i=0;i<n;i++){
			int x;
			cin>>x;
			hole.push_back(x);
		}
	sort(mouse.begin(),mouse.end());
	sort(hole.begin(),hole.end());
	int max=0;
	for(int i=0;i<n;i++){
		if(max<abs(mouse.at(i)-hole.at(i)))
			max=abs(mouse.at(i)-hole.at(i));
	}
	printf("%d\n",max);
}

void micev1(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
		micev1Util();
	return;
}

//int main(){micev1();return 0;}
