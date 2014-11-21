/*
 * Aaryan.cpp
 *
 *  Created on: Oct 25, 2014
 *      Author: bhavneet.ahuja
 */

#include <iostream>
//#include <vector>
using namespace std;

void aaryan(){

	long int n;
	cin>>n;
	//vector<long long int> a;
	long long int temp,ans;
	cin>>ans;
	for(long int i=0;i<(n-1);i++){
		cin>>temp;
		ans=ans|temp;
	}
	cout<<ans<<endl;

}

//int main(){aaryan();return 0;}
