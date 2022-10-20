#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	for (auto i = int{ 0 }; i < n; ++i)
	{
		for (auto j = int{ 0 }; j < n * 5; ++j)
		{
			cout << '@';
		}
		cout << '\n';
	}

	for (auto i = int{ 0 }; i < n * 4; ++i)
	{
		for (auto j = int{ 0 }; j < n; ++j)
		{
			cout << '@';
		}
		cout << '\n';
	}

	return 0;
}