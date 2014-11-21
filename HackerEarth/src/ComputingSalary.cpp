///*
// * ComputingSalary.cpp
// *
// *  Created on: Nov 1, 2014
// *      Author: bhavneet.ahuja
// */
//
//#include <iostream>
//#include <vector>
//#include <math.h>
////#define ULL unsigned long long int;
//
//
//using namespace std;
//
//vector<unsigned long long int> a;
//unsigned long long int count1=2;
//unsigned long long int mod=1000000007;
//
//
//void Util(){
//	unsigned long long int k;
//	unsigned long long int i;
//	cin>>k;
//	if(k==0){
//		cout<<"-1"<<endl;
//		return;
//	}
//	if(k==1){
//			cout<<"1"<<endl;
//			return;
//		}
//	if(k==2){
//			cout<<"8"<<endl;
//			return;
//		}
//	if(k<=count1){
//		cout<<a[k]<<endl;
//		//cout<<"I am in if()"<<endl;
//	}
//	else{
//		//cout<<a[0]<<" "<<a[1]<<endl;
//		for(i=count1+1;i<=k;i++){
//			a.push_back(( (2*a[i-1]) + (3*a[i-2]) + (unsigned long long int)pow(3,i) )%mod);
//		}
//		count1=k;
//		cout<<a[k]<<endl;
//	}
//}
//void com(){
//	long int t;
//	cin>>t;
//	for(long int i=0;i<t;i++)
//		Util();
//}
////int main(){a.push_back(-1);a.push_back(1);a.push_back(8);com();return 0;}

