#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void)
{
    bool bIsConditionOk = true // mistake for jenkins demo
    
    if (bIsConditionOk)
    {
        printf("Condition Ok");
    }
    else
    {
        printf("Condition Not Ok");
    }
    
    return 0;
}//end main
   
