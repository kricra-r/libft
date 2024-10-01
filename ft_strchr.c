/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricra-r <kricra-r@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 18:37:02 by kricra-r          #+#    #+#             */
/*   Updated: 2024-09-28 18:37:02 by kricra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	a;

	a = c;// igualo la variable al valor de su parametro de entrada
	while (*s)// mientras el puntero a la cadena exista
	{
		if (*s == a)//si el puntero a la cadena a buscar sea igual al caracter a buscar
		{
			return ((char *) s);//devuelvo un char puntero a la coincidencia
		}
		s++;//contador para poder recorrer el string
	}
	if (a == '\0')//mientras el caracter sea igual a null.
		return ((char *)s);//devuelvo un char puntero a la coincidencia
	return (NULL);
}
