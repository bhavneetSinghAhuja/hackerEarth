///*
// * SelectionOfCities.cpp
// *
// *  Created on: Oct 31, 2014
// *      Author: bhavneet.ahuja
// */
//
//#include <stdio.h>
//unsigned long long int mod=1000000007;
//
//unsigned long long int russianPeasant(unsigned long long int a, unsigned long long int b)
//{
//	unsigned long long int res = 0;  // initialize result
//
//    // While second number doesn't become 1
//    while (b > 0)
//    {
//         // If second number becomes odd, add the first number to result
//         if (b & 1)
//             res = res + a;
//
//         // Double the first number and halve the second number
//         a = a << 1;
//         b = b >> 1;
//     }
//     return res;
//}
//
//unsigned long long int multiply(unsigned long long int n){
//
//	unsigned long long int temp1=(multiply(n/2))%mod;
//		unsigned long long int temp2=(multiply(n/2 + 1))%mod;
//		unsigned long long int ans1=russianPeasant(temp1, temp1) %mod;
//		unsigned long long int ans2=russianPeasant(temp1, temp2) %mod;
//	if(n==1) return 2;
//	else if(n%2==0)
//		return ans1;
//	else
//		return ans2;
//	//else return ( ( ( russianPeasant(multiply(n/2))%mod),((multiply(n/2 + 1))%mod))%mod);
//	//else return ((((multiply(n/2))%mod)*((multiply(n/2 + 1))%mod))%mod);
//}
//void cityUtil(){
//	unsigned long long int n, ans=1;
//	scanf("%llu",&n);
//
////	while(n>0){
////		ans=(ans*2)%mod;
////		n--;
////	}
//	printf("%llu\n",multiply(n)-1);
//}
//void city(){
//
//	unsigned long long int t,i;
//	scanf("%llu",&t);
//	for(i=0;i<t;i++)
//		cityUtil();
//}
////int main(){city();return 0;}

