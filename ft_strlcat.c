/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kricra-r <kricra-r@student.42.fr>          #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-09-28 16:50:34 by kricra-r          #+#    #+#             */
/*   Updated: 2024-09-28 16:50:34 by kricra-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen; //variable para guardar la longitud de dest
	size_t	srclen; //variable para guardar la longitud de origen
	size_t	i; //variable iterador
	dstlen = ft_strlen(dst); //mide y almacena la longitud de dst
	srclen = ft_strlen(src); //mide y almacena la longitud de origen
	i = 0; //inicio el iterador a cero
	if (size == 0) //control de errores : si el numero de caracteres a copiar es 0
		return (srclen); //devuelve la longitud de origen
	if (size <= dstlen) //si el tamaño de mi buffer es menor o igual a la longitud de mi dest
		return (srclen += size);//devuelvo la longitud de mi origen + el tamaño del buffer
	else //si no  
		srclen += dstlen; // devuelvo el tramaño de la longitud de origen + el tamaño de la longitud de dst
	while (src[i] != '\0' && dstlen < size -1 && dst != src) // mientras el origen en la posicion i llege al final y la longitud del destino sea menor al tamaño de buffer menos 1 y destino sea diferente al origen
	{
		dst[dstlen] = src[i];
		i++;
		dstlen++;
	}
	dst[dstlen] = '\0';
	return (srclen);//la longitud de la cadena que intento crear en dest
}
