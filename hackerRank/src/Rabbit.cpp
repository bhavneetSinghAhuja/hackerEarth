/*
 * Rabbit.cpp
 *
 *  Created on: Sep 17, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>

using namespace std;

long int sum(int x){

	return (long int)((x*(x+1))/2);
}

void rabbitUtil1(long int p){

	int l=1;
	int h=14142;
	int m=(l+h)/2;

	while(l<h){
		if(sum(m)<=p&&(sum(m)+m+1)>=p){
			cout<<m<<endl;
			//cout<<"1"<<endl;
			return;
		}

		else if(sum(m)<p){
			//cout<<"2"<<endl;
			l=m+1;
			m=(l+h)/2;
		}
		else{
			//cout<<"3"<<endl;
			h=m-1;
			m=(l+h)/2;
		}
	}


}

void rabbitUtil(){

	long int p;
	cin>>p;

	rabbitUtil1(p);
}

void rabbit(){

	int t;
	cin>>t;
	for(int i=0;i<t;i++)
		rabbitUtil();
}

//int main(){rabbit();return 0;}

