
#include <iostream>

using namespace std;

int minr(const int a, const int *arr, int i, int Mash, int Pet) {
 if (a == i){
 return abs(Mash - Pet);
 }
 int razn_1 = minr(a, arr, i + 1, Mash + arr[i], Pet);
 int razn_2 = minr(a, arr, i + 1, Mash, Pet + arr[i]);
 return min(razn_1,razn_2);
}
int main() {
 int a;
 cin >> a;
 int arr[a];
 for (int i = 0; i < a; i++){
 cin >> arr[i];
 }
 cout << minr(a,arr, 0, 0, 0);
 return 0;
}
