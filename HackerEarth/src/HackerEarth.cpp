//============================================================================
// Name        : HackerEarth.cpp
// Author      : Bhavneet Singh Ahuja
// Version     :
// Copyright   : Your copyright notice
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct post{

	long long int oldScore;
	long long int newScore;
	long long int id;
	long long int increment;
};

bool acompare(post lhs, post rhs) {

	if(lhs.increment==rhs.increment)
		return lhs.id<rhs.id;
	else
		return lhs.increment<rhs.increment;
}


void trendingTopics(){

	long int n;
	cin>>n;
	vector<post> posts;
	post p1;
	long long int temp, p , l, c, s, inc;
	for(long int i=0;i<n;i++){
		cin>>temp;
		p1.id=temp;
		cin>>temp;
		p1.oldScore=temp;
		cin>>p;
		cin>>l;
		cin>>c;
		cin>>s;
		inc=p*50+l*5+c*10+s*20;

		p1.newScore=inc;
		p1.increment=inc-temp;
		posts.push_back(p1);
	}

	sort(posts.begin(), posts.end(), acompare);
	int count=0;
	for(long int i=(n-1);count<5;i--, count++){
		cout<<posts[i].id<<" "<<posts[i].newScore<<endl;
	}

	return;

}

//int main() {trendingTopics();return 0;}
