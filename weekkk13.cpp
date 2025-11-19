#include <iostream>
#include <string>
#include <vector>
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
arr[i]=new int(val);
    }
}
int result = countValid(arr.data(),n);
cout<<result<<endl;
for(int i=0;i<n;i++) {
    delete arr[i];

}
return 0;
}
//Problem 4
void fixNeg(int* arr, int size) {
    int* p=arr;
    for(int i=0;i<size;++i,++p) {
        if (*p<0) {
            *p=0;
        }
        int main () {
            int n;
            cin>>n;
            vector<int> a(n);
            for (int i=0;i<n;++i) {
                cin>>a[i];
            }
            fixNeg(a.data(),n);
            for (int i=0;i<n;++i) {
                if (i) cout <<'';
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
    //Problem 5
    int sum2D(int** m,int r,int c) {
        int sum=0;
        int** rowPtr=m;
        for(int i=0;i<r;++i,++rowPtr) {
            int* colPtr=*rowPtr;
            for(int j=0;j<c;++j,++colPtr) {
                sum+=*colPtr;
            }
        }
        return sum;
    }
    int main () {
        int r,c;
        cin>>r>>c;
        int**m=new int*[r];
        for(int i=0;i<r;++i) {
            m[i]=new int[c];
            for(int j=0;j<c;++j) {
                cin>>m[i][j]=0;
            }
        }
        cout<<sum2D(m,r,c)<<endl;
        for(int j=0;j<c;++j) {
            delete m[i][j];
        }
        delete m[i];
        return 0;
    }
}
//Problem  6
#include <iostream>
#include <string>
using namespace std;

void printIfValid(int* p) {
    if (p == nullptr) {
        cout << "null";
    } else {
        cout << *p;
    }
}

int main() {
    string s;
    bool first = true;

    while (cin >> s) {
        if (!first) cout << ", ";   // to match style "5, null"
        first = false;

        if (s == "n") {
            int* p = nullptr;
            printIfValid(p);
        } else {
            int val = stoi(s);
            int* p = &val;          // pointer to local int
            printIfValid(p);
        }
    }
    return 0;
}
//Problem 7
#include <iostream>
#include <vector>
using namespace std;

int* findMax(int* arr, int size) {
    if (size <= 0) return nullptr;

    int* maxPtr = arr;
    int* p = arr + 1;

    for (int i = 1; i < size; ++i, ++p) {
        if (*p > *maxPtr) {
            maxPtr = p;
        }
    }
    return maxPtr;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int* maxPtr = findMax(a.data(), n);
    if (maxPtr != nullptr) {
        cout << *maxPtr;    // prints max value
    }
    return 0;
}
//Problem 10
#include <iostream>
#include <vector>
using namespace std;

void mergeSorted(const int* a, int n, const int* b, int m, int* out) {
    const int* pa = a;
    const int* pb = b;
    int* pout = out;

    const int* endA = a + n;
    const int* endB = b + m;

    while (pa < endA && pb < endB) {
        if (*pa <= *pb) {
            *pout = *pa;
            ++pa;
        } else {
            *pout = *pb;
            ++pb;
        }
        ++pout;
    }

    while (pa < endA) {
        *pout = *pa;
        ++pa;
        ++pout;
    }
    while (pb < endB) {
        *pout = *pb;
        ++pb;
        ++pout;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; ++i) cin >> b[i];

    vector<int> out(n + m);
    mergeSorted(a.data(), n, b.data(), m, out.data());

    for (int i = 0; i < n + m; ++i) {
        if (i) cout << ' ';
        cout << out[i];
    }
    return 0;
}

