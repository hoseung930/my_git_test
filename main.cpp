#include "sorting.h"
int sorted[10];
int sorted1[10];
int num = 0;
int main(){

    for(int i = 0 ; i<10; i++){
    cin >> num;
    sorted1[i] = num;
    }
    int N = sizeof(sorted)/sizeof(sorted[0]);
    merge_sort(sorted1,0,9);
    for(int i = 0; i<N; i++){
    cout<< sorted[i]<< " ";

    }
    return 0;
}