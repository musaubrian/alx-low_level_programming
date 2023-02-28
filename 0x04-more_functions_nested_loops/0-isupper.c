#include "main.h"
/*
* _isupper: checks if an arg is uppercase or lowerecase
* Return:
*   1 if is upper
*   0 if is lower
*/

int _isupper(int c)
{
    if ((c >= 'A') && (c <= 'Z'))
    {
            return(1);
    }
    if ((c >= 'a') && (c <= 'z'))
    {
        return (0);
    }
}
