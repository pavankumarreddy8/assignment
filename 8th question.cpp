#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int N = 5;
    int X = 3;
    int index = -1;
    
    for(int i=0; i<N; i++) {
        if(arr[i] == X) {
            index = i;
            break;
        }
    }
    
    if(index == -1) {
        printf("Element not found.\n");
    } else {
        printf("Element found at index %d.\n", index);
    }
    
    return 0;
}

