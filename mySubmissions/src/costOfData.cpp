/*
 * costOfData.cpp
 *
 *  Created on: Sep 9, 2014
 *      Author: bhavneet.ahuja
 */
//for question:- http://www.hackerearth.com/problem/algorithm/cost-of-data-11/
#include <iostream>
#include <string>

using namespace std;

void calculateCost(){
	long int a[26][30]={0};
	long int n;
	cin>>n;

	for(long int i=0; i<n;i++){
		int flag=0;
		string s;
		cin>>s;
		int length=s.size();
		for(int j=0;j<length; j++){

			if(flag==1){
				a[s[j]-'a'][j]++;
			}

			else if(a[s[j]-'a'][j]==0){
				flag=1;
				a[s[j]-'a'][j]++;
			}
		}
	}
	long long int sum=0;

	for(int m=0; m<26;m++){
		for(int n=0; n<30; n++){
			sum+=a[m][n];
		}
	}
	sum++;
	cout<<sum;

}

int main(){calculateCost();return 0;}
