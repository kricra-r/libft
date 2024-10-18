/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricra-r <kricra-r@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:14:22 by kricra-r          #+#    #+#             */
/*   Updated: 2024/10/17 19:17:25 by kricra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(char c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*int main(void)
{
	int c;
	int c2;
	
	c = '9';
	c2 = 'A';
	printf("+======= ft_isalnum =======+\n");
	printf("\tchar: %c isalnum: %d\n", c, ft_isalnum(c));
	printf("\tchar: %c isalnum: %d\n\n", c2, ft_isalnum(c2));
}*/