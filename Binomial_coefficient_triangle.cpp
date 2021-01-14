#include <iostream>

const int gnmax = 10;
const int ggroesse = ((gnmax * (gnmax + 1)) / 2);
int gfeld[ggroesse];

int pos(int n, int k) {
    return ((n * (n + 1)) / 2)+k;
}

void binomialkoeffizient()
{
	for (int n = 0; n <= gnmax; n++)
	{
		for (int t=0;t<gnmax-n; t++)
			std::cout << "  ";
		for (int k = 0; k <= n; k++) {
			if (n == k || k == 0) {
				gfeld[pos(n, k)] = 1;
				std::cout << gfeld[pos(n, k)] << "    ";
				continue;
			}
			gfeld[pos(n, k)] = gfeld[pos(n - 1, k - 1)] + gfeld[pos(n - 1, k)];

			std::cout << gfeld[pos(n, k)] << "     ";

		}
		std::cout << '\n' << std::endl;
	}

}

int main()
{
    binomialkoeffizient();
	return 0;
}
