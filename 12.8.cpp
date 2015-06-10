#include <iostream>
#include <vector>
#include<string>
using namespace std;
int main(){
	vector<int> V;
	vector<int>V3(5);
	vector<int>V4(5, 0);
	V.push_back(5);
	V.push_back(9);
	V.push_back(15);
	V.push_back(23);
	V.push_back(10);
	V.pop_back();
	cout<<V.size()<<endl;
	cout<<V.at(2)<<endl;
	cout<<V.empty()<<endl;
	V.clear();
	V.swap(V4);
}

