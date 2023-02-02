#include "main.h"

/**
 * Converts a binary string to an unsigned int.
 */
unsigned int BinaryToUint(const char *b)
{
    unsigned int result = 0;
    for (; *b; ++b)
    {
        if (*b == '1')
        {
            result = (result << 1) | 1;
        }
        else if (*b == '0')
        {
            result <<= 1;
        }
        else
        {
            return 0;
        }
    }
    return result;
}

