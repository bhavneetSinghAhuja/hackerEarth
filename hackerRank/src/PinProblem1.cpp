/*
 * PinProblem1.cpp
 *
 *  Created on: Sep 17, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <set>

using namespace std;

void pinProblemUtil(){
	int n,m;
	cin>>n;cin>>m;
	set<int> a;
	set<int>::iterator it;
	int token;
	for (int i=0;i<m;i++){
		cin>>token;
		a.insert(token);
	}


	int flag;
	int count=0;
	for(int i=1;i<=n;i++){
		flag=1;
		for(it=a.begin();it!=a.end();++it){
			token=*it;
			if(i%token!=0){
				flag=0;
				break;
			}

		}
		if(flag==1)count++;
	}
	printf("%d\n", count);
	return;
}

void pinProblem(){

	int t;
	cin>>t;
	for(int i=0;i<t;i++)
		pinProblemUtil();
	return;
}
//int main(){pinProblem();return 0;}
