/*
 * BrokenKeyboard.cpp
 *
 *  Created on: Sep 13, 2014
 *      Author: bhavneet.ahuja
 */

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void minKeys(){
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int a[26];
	for(int i=0; i<26; i++){a[i]=-1;}
	for(int i=0;i<s1.length();i++){
		a[s1.at(i)-'a']=0;
	}

	for(int i=0;i<s2.length();i++){
		if(a[s2.at(i)-'a']==0)
			a[s2.at(i)-'a']=1;
	}

	int count=0;
	for(int i=0; i<26;i++){
		if(a[i]==1) count++;
	}
	printf("%d\n",count);
	return;
}
void brokenKeyboard(){
	long int t;
	scanf("%ld",&t);
	for(long int i=0; i<t; i++)
		minKeys();
	return;
}
//int main(){brokenKeyboard();return 0;}
