#include <stdio.h> 
#include <string.h>
int select(char a[], int len);  
int main() 
{ 
    int n, i, sum = 0; 
    char arr[100]; scanf("%d", &n); 
    for(i = 0; i < n; i++) 
    { 
        scanf("%s", arr); 
        sum += select(arr, strlen(arr)); 
    } 
    printf("%d", sum); 
    return 0; 
} 
int select(char a[], int len) 
{ 
    int i, j; 
    int key = 0; for(i = 0; i < len; i++) 
    { 
        for(j = 0; j < len; j++) 
        { 
            if(a[i] == a[j]) 
            { 
                key = j - i; 
                if(key > 1) 
                {
                    if(a[j-1] != a[j]) 
                    {
                        return 0;
                    }
                }
            } 
        } 
    } 
    
    return 1; 
}