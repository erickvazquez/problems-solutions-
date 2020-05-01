#include <bits/stdc++.h>
using namespace std;
vector<int>number;
double fact(int n){
	if(n == 2) return 2;
	else if(n > 2) return n * fact(n-1);
	else return -1;
}
int main(void){
	int cases;
	double out;
	cin >> cases;
	for(int i = 0, input = 0; i < cases; i++){
		cin >> input;
		out = fact(input);
		while(out >= 1){
			number.push_back(fmod(out, 10));
			out /= 10;
		}
		for(int j = number.size()-1; j >= 0; j--)
			cout << number[j];
		cout << endl;
		number.clear();
	}
	return 0;
}