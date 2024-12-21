#include <iostream> using
namespace std; #define ll
long long
const int MAX_SIZE = 1000;
int repeatNumbers(int arr[],int size){
for(int t =0;t<size;t++){ int
count =0; for(int
i=0;i<size;i++){ if(arr[t] ==
arr[i]){ count++;
}
}
if(count >size/2){
return arr[t];
}
}
return -1; }
int main(){
int size; cin>>size;
if (size > MAX_SIZE) {
cout << "Error : Size above maximum"<< MAX_SIZE << endl;
return 1;
}
int arr[MAX_SIZE];
for (int i = 0; i < size; i++) {
cin >> arr[i];
}
cout<<repeatNumbers(arr,size);
return 0;
}
