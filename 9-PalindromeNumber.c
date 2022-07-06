#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x){
    //if number is negative, then false
    //if number is 0, then true
    //counter variable n
    //dividing by 10 removes alst digit from x
    //remainder divided by 10 gives you last digit of x
        
        
    if(x == 0)
    {
        return true;
    }
    if(x < 0 || x % 10 == 0)
    {
        return false;
    }
    
    int y = 0;

    while(x > y)
    {
        y = y * 10 + x % 10;
        x /= 10;
    }
    
    if(x == y || x == y/10)
    {
        return true;
    }
    else
    {
        return false;
    }
    
    //single digit: 5 --> 0 5 --> 0 == 5/10 --> 0 == 0 (TRUE)
    //multiple of 10: 10 --> 1 0 --> 0 1 --> 0 == 1/10 --> 0 == 0 (INCORRECT TRUE)
    //odd digits false case: 12345 --> 12 345
    //odd digits true case: 12321 --> 12 321 --> 12 == 123/10 --> 12 == 12
    //even digits true case: 43 43 (4334)
    //even digits false case: 43 34 (x still greater than y) --> 4 343 (4343)
}