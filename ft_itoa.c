/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricra-r <kricra-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:10:52 by kricra-r          #+#    #+#             */
/*   Updated: 2024/10/15 19:58:22 by kricra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_digits(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
	{
		len += 2;
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*put_nbr(char *s, int n, int i)
{
	if (n == -2147483648)
	{
		s[0] = '-';
		s[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
	}
	while (n >= 10)
	{
		s[i] = n % 10 + '0';
		n /= 10;
		i--;
	}
	s[i] = n + '0';
	return (s);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*src;

	len = num_digits(n);
	src = (char *) malloc(len + 1);
	if (!src)
		return (NULL);
	src = put_nbr(src, n, len - 1);
	src[len] = '\0';
	return (src);
}
