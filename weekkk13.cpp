#include <iostream>
using namespace std;
void setToHundred(int** p) {
**p=100;
}
int main() {
int x;
cin>>x;
int*ptr=&x;
setToHundred(&ptr);
cout<<x<<endl;
return 0;
}
//Problem 2
void swapRef(int& a,int& b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swapPtr(int* a, int* b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main() {
    int x,y;
    cin>>x>>y;
    swapRef(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}
//Problem 3
int countValid(int** arr,int size) {
    int count=0;
    int**p=arr;
    for(int i=0;i<size;i++) {
        if (*p !=nullptr) {
            ++count;

        }
    }
    return count;
}
int main() {
    int n;
    cin>>n;
    vector<int*> arr(n);
    for(int i=0;i<n;i++) {
        arr[i]=nullptr;
    }else {
        int val=stoi(s)
    }
}