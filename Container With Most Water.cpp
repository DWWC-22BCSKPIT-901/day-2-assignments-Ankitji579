#include <iostream> 
using namespace std; 
int maxArea(int height[], int
n) {
int left = 0; int
right = n - 1; int
max_area = 0; while
(left < right) { int
width = right - left;
int area = min(height[left], height[right]) * width;
max_area = max(max_area, area);
if (height[left] < height[right]) {
left++;
} else {
right--;
}
}
return max_area;
}
int main() {
int n;
cin >> n;
cout << "Enter the number of elements: ";
if (n < 2 || n > 100000) {
cout << "Invalid input. Number of elements should be between 2 and 100000." << endl;
return 1;
}
int height[n]; cout <<
"Enter the heights: "; i = 0; i < n; i++) { height[i];
for (int
cin >>
if (height[i] < 0 || height[i] > 10000) {
cout << "Invalid input. Heights should be between 0 and 10000." << endl;
return 1;
}
}
int result = maxArea(height, n);
cout << "Maximum area of water the container can store: " << result << endl;
}
return 0;
