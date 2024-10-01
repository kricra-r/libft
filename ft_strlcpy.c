/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricra-r <kricra-r@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-27 16:09:02 by kricra-r          #+#    #+#             */
/*   Updated: 2024-09-27 16:09:02 by kricra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (size < 1)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*int main()
{
    char src[] = "Hola, mundo!";
    char dst[10];
    size_t len;

    len = ft_strlcpy(dst, src, sizeof(dst));

    printf("Cadena fuente: %s\n", src);
    printf("Cadena copiada: %s\n", dst);
    printf("Longitud de la fuente: %zu\n", len);

    return 0;
}*/