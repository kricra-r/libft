/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricra-r <kricra-r@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-24 16:21:01 by kricra-r          #+#    #+#             */
/*   Updated: 2024-09-24 16:21:01 by kricra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL && dest == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d >= s)
	{
		while (n--)
		{
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(d, s, n);
	return (dest);
}
/*#include <stdio.h>
int	main()
{
	char str[] = "HOLA QUE HACE";
	char buffer[50];

	printf("Original: %s\n", str);

	memmove(buffer , str, strlen(str) +1);
	printf("Copiado a buffer: %s\n", buffer);

	memmove(str + 2, str, 9);
	printf("Movido dentro de str: %s\n", str);

	return(0);
}
*/