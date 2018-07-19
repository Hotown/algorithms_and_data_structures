#include <cstdio>
using namespace std;
int main() {
	char c[4] = {"WTL"};
	double ans = 1.0;
	for(int i = 0; i < 3; i++) {
		double m_value = 0.0;
		int m_char = 0;
		for(int j = 0; j < 3; j++) {
			double temp;
			scanf("%lf", &temp);
			if(m_value <= temp) {
				m_value = temp;
				m_char = j;
			}
		}
		ans *= m_value;
		printf("%c ", c[m_char]);
	}
	printf("%.2f", (ans * 0.65 - 1) * 2);
	return 0;
}