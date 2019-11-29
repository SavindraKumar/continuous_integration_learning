#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int main(void)
{
    bool bIsConditionOk = false;
    
    if (bIsConditionOk)
    {
        printf("Condition Ok");
    }
    else
    {
        printf("Condition Not Ok") // Error creation for jenkins ci testing
    }
    
    return 0;
}//end main
   
