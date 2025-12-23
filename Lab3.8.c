#include <stdio.h>

int main() {
    int h, m, s, next_min;

    scanf("%d:%d:%d", &h, &m, &s);
    printf("Hour:%d\nMinute:%d\nsecond:%d\n", h, m, s);

   
    printf("Next minutes: ");
    scanf("%d", &next_min);

    
    m = m + next_min;  
    
    h = h + (m / 60); 
    m = m % 60; 
    
    h = h % 24;         

    
    printf("Hour:%d\nMinute:%d\nsecond:%d\n", h, m, s);

    return 0;
}