#include <iostream>
#include <cctype>
#include <algorithm>
#include <cmath>
using namespace std;

// 进制转换
long long convert(string n, long long radix) {
  long long sum = 0;
  int index = 0, temp = 0;
  for (auto it = n.rbegin(); it != n.rend(); it++) {
    temp = isdigit(*it) ? *it - '0' : *it - 'a'  + 10;
    sum += temp * pow(radix, index++);
  }
  return sum;
}

// 二分法查找radix
long long find_radix(string n, long long num) {
  char it = *max_element(n.rbegin(), n.rend());
  long long low = (isdigit(it) ? it - '0' : it - 'a' + 10) + 1; // radix最小为数中的最大数+1
  long long high = max(low, num);
  while(low <= high) {
    long long mid = (low + high) / 2;
    long long t = convert(n, mid);
    if (t < 0 || t > num)
      high = mid - 1;
    else if (t == num) 
      return mid;
    else
      low = mid + 1;
  }
  return -1;
}



int main() {

  string n1, n2;
  long long tag = 0, radix = 0, res = 0;
  cin >> n1 >> n2 >> tag >> radix;
  res = tag == 1 ? find_radix(n2, convert(n1, radix)) : find_radix(n1, convert(n2, radix));
  if(res != -1)
    printf("%lld", res);
  else
    printf("Impossible");

  return 0;
}
