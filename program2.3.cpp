#include <iostream>
using namespace std;
void minMax(const int a[], int n, int& min, int& max) {
    min = max = a[0];
    for(int i=1; i<n; i++) {
        if(a[i]<min) min=a[i];
        if(a[i]>max) max=a[i];
    }
}
void minMaxPtr(const int a[], int n, int* min, int* max) {
    *min = *max = a[0];
    for(int i=1; i<n; i++) {
        if(a[i]<*min) *min=a[i];
        if(a[i]>*max) *max=a[i];
    }
}
int main() {
    int a[]={7,2,9,4,1};
    int min,max;
    minMax(a,5,min,max);
    cout<<"min="<<min<<", max="<<max<<endl;
    minMaxPtr(a,5,&min,&max);
    cout<<"min="<<min<<", max="<<max<<endl;
    return 0;
}