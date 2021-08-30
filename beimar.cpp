#include <iostream>
#include <cmath>

using namespace std;

int f(int j) {
	return (j&1) ? -1 : 1;
}

int main() {
	int x;
	cin >> x;
    clock_t startTime = clock();
	x += 1;
	using ll = long long;
	ll a = (2 * x - 1 + f(x)) / 6;
	ll m = (sqrtl((2*x-1+f(x))/2 - 2) + 1e-6 + 1) / 3;
	ll n = a - 1;
	ll sum = 0;
	for (ll j = 8; j <= n; ++j) {
		for (ll i = 1; i <= m; ++i) {
			ll r = 4 * j - f(j) + f(i + j) - f(i) + 2*i*(f(i+j) + f(i)) - (12*i*i) + 5;
			ll s = 12 * i + 6 - 2 * f(i);
			if (r > 0 && r % s == 0) {
				sum += 1;
				break;
			}
		}
	}
	ll ans = (2*x + f(x) - 6 * sum + 5) / 6;
	cout << ans << '\n';
    cout << double( clock() - startTime ) / (double)CLOCKS_PER_SEC<< " Segundos." << endl;
	return 0;
}