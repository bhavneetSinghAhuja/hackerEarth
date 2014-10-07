/*
 * Prladdu.cpp
 *
 *  Created on: Oct 3, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void prladduUtil(){

	long int n,temp;
	cin>>n;
	vector<int> a;

	for(long int i=0;i<n;i++){
		cin>>temp;
		a.push_back(temp);
	}
	//cout<<endl;
	//cout<<endl;
	long int v=0,d=0;
	long long int grass=0;

	while(v<n || d<n){
		int flag=0;
		while(!(a[v]>0) && v<n){
			v++;
		}

		while(!(a[d]<0) && d<n){
			d++;
		}
		//cout<<v<<endl;
		//cout<<d<<endl;
		long int min;

		if(abs(a[d])<=abs(a[v]))
		{
			min=abs(a[d]);
			flag=1;
		}

		else{

			min=abs(a[v]);
			flag=0;
		}
		//cout<<min<<endl;
		grass+=abs(d-v)*min;

		if(flag==1){
			a[d]=0;
			a[v]=a[v]-min;
		}
		else{
			a[v]=0;
			a[d]+=min;
		}
		//cout<<flag<<endl;
		//cout<<a[v]<<endl;
		//cout<<a[d]<<endl;
		//cout<<endl;
		//cout<<endl;

	}
	cout<<grass<<endl;

}

void prladdu(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
		prladduUtil();
}

//int main(){prladdu();return 0;}
