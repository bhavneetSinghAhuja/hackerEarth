/*
 * costOfData.cpp
 *
 *  Created on: Sep 9, 2014
 *      Author: bhavneet.ahuja
 */
//for question:- http://www.hackerearth.com/problem/algorithm/cost-of-data-11/
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int findDiff(string s1, string s2){
	int i;
	int length=s1.size();
	if(length>s2.size()) length = s2.size();
	for(i=0; i<length;i++){
		if(s1.at(i)!=s2.at(i)) break;
	}
	return (s2.size()-i);
}

void calculateCostFinal(){

	long int n;
		cin>>n;
		string a[100009];
	for(long int i=0; i<n ; i++)
		cin>>a[i];
		sort(a,a+n);
		long long int sum=1;
		//sum+=a[0].size();
		for(long int j=1;j<=n ; j++){
			sum+=findDiff(a[j],a[j-1]);
		}
	cout<<sum;
}

int main(){calculateCostFinal();return 0;}
