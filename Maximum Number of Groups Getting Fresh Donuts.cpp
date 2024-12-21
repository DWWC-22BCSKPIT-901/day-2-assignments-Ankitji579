#include <iostream>
#include <cstring>
using namespace std;
int solve(int batchSize, int remainders[], int remainderSum) {
int happyGroups = 0; happyGroups += remainders[0];
remainders[0] = 0;
for (int i = 1; i < batchSize; i++) {
if (remainders[i] > 0) { int
complement = batchSize - i; if
(complement < batchSize) {
int pairs = min(remainders[i], remainders[complement]);
happyGroups += pairs; remainders[i] -= pairs;
remainders[complement] -= pairs;
}
}
}
bool extra = false; i < batchSize; i++) { (remainders[i] > 0) { true; happyGroups++;
break;
}
for (int i = 1;
if
extra =
}
return happyGroups;
}
int maxHappyGroups(int batchSize, int groups[], int n) {
int remainders[batchSize];
memset(remainders, 0, sizeof(remainders));
for (int i = 0; i < n; i++) {
remainders[groups[i] % batchSize]++;
}
return solve(batchSize, remainders, n);
}
int main() { int
batchSize, n;
cout << "Enter batch size: ";
cin >> batchSize;
cout << "Enter number of groups: ";
cin >> n;
int groups[n]; cout <<
"Enter group sizes: "; i = 0; i < n; i++) {
cin >> groups[i];
for (int
}
endl;
return 0;
}
