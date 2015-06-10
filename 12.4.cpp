#include <iostream>
using namespace std;
template <typename T>
bool isSorted(const T list[], int size);
int main(){
	const int list[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	cout << isSorted(list, 8) << endl;
	const double nlist[] = { 1.5, 1.8, 2.3, 3.8, 2.5, 6.5, 4.3, 5.7 };
	cout << isSorted(nlist, 8) << endl;
	const string slist[] = { "kate", "John", "marry", "sam", "Bill" };
	cout << isSorted(slist, 5) << endl;
}
template <typename T>
bool isSorted(const T list[], int size){
	bool sort=true;
	for (int i = 0; i < size - 1; i++){
		list[i];
		if (list[i]>list[i+1])
			sort = false;
	
	}
	return  sort;
}
