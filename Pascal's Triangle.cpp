#include <iostream>
using namespace std;
void generatePascalsTriangle(int numRows) {
int pascalsTriangle[30][30] = {0};
for (int i = 0; i < numRows; i++) {
pascalsTriangle[i][0] = 1;
pascalsTriangle[i][i] = 1;
for (int j = 1; j < i; j++) {
pascalsTriangle[i][j] = pascalsTriangle[i - 1][j - 1] + pascalsTriangle[i - 1][j];
}
}
for (int i = 0; i < numRows; i++) {
for (int j = 0; j <= i; j++) {
cout << pascalsTriangle[i][j] << " ";
}
cout << endl;
}
}
int main() {
int numRows;
cout << "Enter the number of rows for Pascal's Triangle: ";
cin >> numRows;
if (numRows < 1 || numRows > 30) {
cout << "Invalid input. Please enter a value between 1 and 30." << endl;
return 1;
}
generatePascalsTriangle(numRows);
return 0;
}
