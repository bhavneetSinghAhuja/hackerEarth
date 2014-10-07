/*
 * ChefAndGround.cpp
 *
 *  Created on: Oct 3, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>
#include <algorithm>

using namespace std;

void chefAndGround(){

	int t,n,m,a[100];
	int sum;
	cin>>t;

	for(int i=0; i<t;i++){
		sum=0;
		cin>>n;
		cin>>m;

		for(int j=0;j<n;j++){
			cin>>a[j];
		}

		int max=0;

		for(int j=0; j<n; j++)
			if(max<a[j]) max=a[j];


		for(int j=0;j<n;j++){
			sum+=(max-a[j]);
		}

		if(sum==m)
			cout<<"Yes"<<endl;
		else if(m<sum)
			cout<<"No"<<endl;
		else if(sum<m && ((m-sum)%n==0))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;

	}

}
//int main(){chefAndGround();return 0;}

