#include <iostream>
#include <algorithm>
#include <numeric> // Include this header for accumulate
#include <cstring>
using namespace std;
bool canAssign(int jobs[], int n, int k, int workerLoad[], int maxTime, int index) {
if (index == n) return true;
for (int i = 0; i < k; i++) {
if (workerLoad[i] + jobs[index] <= maxTime) {
workerLoad[i] += jobs[index];
if (canAssign(jobs, n, k, workerLoad, maxTime, index + 1)) return true;
workerLoad[i] -= jobs[index];
}
if (workerLoad[i] == 0) break;
}
return false;
}
int findMinimumTime(int jobs[], int n, int k) {
int low = *max_element(jobs, jobs + n); int
high = accumulate(jobs, jobs + n, 0);
int result = high; while (low <= high) { mid = low + (high - low) / 2; int
workerLoad[k]; memset(workerLoad, 0,
sizeof(workerLoad)); if (canAssign(jobs, n, k,
workerLoad, mid, 0)) { result = mid;
high = mid - 1;
} else {
low = mid + 1;
}
} return
result;
}
int main() { int n, k;
cin >> n >> k; int
jobs[n]; for (int i = 0; i <
n; i++) { cin >>
jobs[i];
}
cout << findMinimumTime(jobs, n, k) << endl;
return 0;}
