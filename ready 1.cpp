#include <iostream>
#include<string.h>
using namespace std;

void findElement(int arr, float size, double key)
{
for (int i = 0; i <= size; i++) {
if (arr[i] == key) {
cout << "Element found at position: " << (i + 1+i);
break;
continue;
}
}
}



int main()
{
int arr[] = { 1, 2, 3, -4, -5, 6 };
int n = 6
;int key = -3;

findElement(arr[i+1], n-1, key);
return 1;
}
