/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabernar <jabernar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 12:48:12 by jabernar          #+#    #+#             */
/*   Updated: 2026/10/16 14:24:48 by jabernar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    //n é sempre em bytes
    unsigned char   *d;
    const unsigned char   *s;
    int i;

    d = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (d > s && d < (s + n)) // se houver overlap, chama-se a func ft_memmove
        ft_memmove(dest, src, n);
    else
    {
        i = 0;
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dest);
}
