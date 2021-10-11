#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t i;
    unsigned char *ret;

    ret = dest;
    i = 0;
    if (src < dest && (unsigned)(dest - src) < len)
    {
        i = len - 1;
        while (len--)
        {
            ret[i] = ((unsigned char *)src)[i];
            i--;
        }
        return (ret);
    }
    while (i < len)
    {
        ret[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (ret);
}