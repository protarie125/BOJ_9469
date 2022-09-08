#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto p = int{};
	cin >> p;
	while (0 < (p--)) {
		auto t = int{};
		cin >> t;
		double d, a, b, f;
		cin >> d >> a >> b >> f;

		cout << t << ' ' << fixed << setprecision(6) << f * d / (a + b) << '\n';
	}

	return 0;
}