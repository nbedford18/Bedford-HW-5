#include <iostream>
#include <string>
#include <cstdlib>
#include<cstring>
using namespace std;
template <typename T>
int linearSearch(const T list[],T key, int arraySize);
int main(){
	int n[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	cout << linearSearch(n, 4, 8) << endl;
	double d[] = { 1.4, 4.5, 4.5, 2.8, 5.0, 4.5, 6.4,2.7 };
	cout << linearSearch(d, 4.5, 8) << endl;
	string name[] = { "andy", "noelle", "kate", "noelle", "Daniel", "larry", "simon", "larry" };
	string one = "larry";
	cout << linearSearch(name,one, 8) << endl;

}
template <typename T>

int linearSearch(const T list[], T key, int arraySize){
	for (int i = 0; i < arraySize; i++){
		if (key == list[i]){
			return i;
		}
	}
	return -1;
}