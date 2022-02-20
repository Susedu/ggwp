/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emyuksel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:53:33 by emyuksel          #+#    #+#             */
/*   Updated: 2022/02/19 16:53:34 by emyuksel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	while (src[y] != '\0' && nb != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
		nb--;
	}
	dest[x++] = '\0';
	return (dest);
}
