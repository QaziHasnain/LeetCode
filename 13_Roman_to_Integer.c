#include <string.h>

int getValue(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int romanToInt(char * s){
    int total = 0;
    int n = strlen(s);
    int i = 0;
    
    while(i < n) {
        int current = getValue(s[i]);
        if(i == n -1) {
            total += current;
            break;
        }
        int next = getValue(s[i+1]);
        if(current < next) {
            total += next - current;
            i += 2;
        } else {
            total += current;
            i += 1;
        }
    }
    return total;
}