#include <iostream>
#include <cstdlib>
#include <ctime>
#include<random>
#include <vector>
using namespace std;
template<typename T>
void shuffle(vector<T>& v);
int main(){
	vector<int> turn;
	turn.push_back(8);
	turn.push_back(17);
	turn.push_back(10);
	turn.push_back(5);
	turn.push_back(7);
	turn.push_back(12);
	turn.push_back(54);
	turn.push_back(40);
	turn.push_back(3);
	turn.push_back(26);
	shuffle(turn);
}
template<typename T>
void shuffle(vector<T>& v){
	srand(time(NULL));

	for (int i = 0; i < v.size(); i++){
		int r = i+rand() % (v.size()-i);
		swap(v.at(i), v.at(r));

	}
	for (int i = 0; i < v.size(); i++){
		cout << v.at(i) << endl;
	}

}