/*
 * SeptemberLunchTimeChefAndEasyProblem.cpp
 *
 *  Created on: Sep 28, 2014
 *      Author: bhavneet.ahuja
 *      Problem link:-
 *       http://www.codechef.com/LTIME16/problems/CHEFA
 */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void chefAndEasyProblemUtil(){

	int n,temp;
	cin>>n;
	vector<long long int> a;

	for(long int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}

	sort(a.begin(), a.end(), greater<int>());

	long long int sum=0;

	for(long int i=0;i<n;i+=2){
		sum+=a[i];
	}

	cout<<sum<<endl;
}

void chefAndEasyProblem(){

	int t;

	cin>>t;

	for(int i=0;i<t;i++)
		chefAndEasyProblemUtil();
	return;
}

//int main(){chefAndEasyProblem();return 0;}
