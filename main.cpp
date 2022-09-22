#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <set>
#include <queue>
#include <ctime>
#include <random>
#include <numeric>

using namespace std;

typedef long long ll;

const ll mod = 1e9 + 7;

vector < vector <ll> > matr, ed;

vector < vector <ll> > umn (vector < vector <ll> > a, vector < vector <ll> > b) {
	int n = a.size();
	int m = b.size();
	int k = b[0].size();
	vector < vector <ll> > c(n, vector <ll> (k, 0));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int x = 0; x < m; x++) {
				c[i][j] += a[i][x] * b[x][j];
				c[i][j] %= mod;
			}
		}
	}
	return c;
}

vector < vector <ll> > bin_pow (vector <vector <ll> > x, ll y) {
	if (!y) {
		return ed;
	}
	else if (y % 2 == 1) {
		return umn(bin_pow(x, y-1), x);
	}
	else {
		vector < vector <ll> > tt = bin_pow(x, y/2);
		return umn(tt, tt);
	}
}

int main(){
	
}