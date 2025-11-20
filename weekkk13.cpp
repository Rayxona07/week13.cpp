#include <iomanip>
#include <iostream>
#include <vector>
#include <string>
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
        int val=stoi(s);
arr[0]=new int(val);
    }
}
int result=countValid(arr,data(),n);
cout<<result<<endl;
for(int i=0;i<n;i++) {
delete arr[i];
}
return 0;
}
//problem 4
void fixNeg(int*arr,int size) {
    int*p=arr;
    for (int i=0;i<size;++i) {
        if (*p<0) {
            *p=0;
        }
    }
}
int main () {
int x;
cin>>x;
vector<int*> arr(x);
for (int i=0;i<x;++i) {
cin>>arr[i];
}
fixNeg(a.data(), x);
for (int i=0;i<x;++i) {
if (i) cout<<" ";
cout<<arr[i];
}
return 0;
}
//Problem 5
int sum2D(int** m,int r,int c) {
    int sum=0;
    int** rowPtr=m;
    for (int i=0;i<r;++i) {
        int* colPtr=rowPtr;
        for (int j=0;j<c;++j) {
            sum+=*colPtr;
        }
        return sum;
    }
    int main () {
        int x,y;
        cin>>x>>y;
        int**m=new int*[r];
        for (int i=0; i<r;++i) {
            cin>>m[i][j];
        }
    }
    cout<<sum2D(m,r,c);
    for (int i=0; i<r; ++i) {
        delete[] m[i];
    }
    delete[] m;
    return 0;
}
//Problem 6
void printIfvalid(int* p) {
    if (p==nullptr) {
        cout<<"null";
    }else {
        cout<<*p<<" ";
    }
}
int main() {
    string s;
    bool first=true;
    while (cin>>s) {
        if (first) cout<<" {
            first=false;
        if (s==" ") {
            int* =nullptr;
            printIfValid(p);
        } else {
            int val=stoi(s);
            printIfValid(p);
        }
    }
    return 0;
}
void reverseArr(int** arr,int size) {
    int* left=*arr;
    int* right= *arr+size-1;
    while (left<right) {

    }
    //Problem 9
    void avg(const double* arr,int size,double* resuslt) {
        if (size<=0) {
            *result=0.0;
            return;
        }
        double sum= 0.0;
        const double*p=arr;
        for (int i=0;i<size;++i,++p) {
            sum+=*p;
        }
        *result=sum/size;
    }
    double res;
    avg(a.data(),n,&res);
    cout<<fixed<<setprecision(8)<<res<<endl;
    return 0;
}
//problem 10
void