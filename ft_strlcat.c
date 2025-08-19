/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:39:23 by ofedota           #+#    #+#             */
/*   Updated: 2025/08/19 11:09:13 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while(src[i])
	{
		while(dest[j] && size > 0)
		{
			j++;
			size--;
		}
		dest[j+i] = src[i];
		i++;
	}
	dest[i+j] = '\0';
	return (i+j);
}

int	main(void)
{
	char src[] = " world!";
	char dest[] = "Hello";
	printf("%d\n",ft_strlcat(src,dest,15));
	printf("%s\n", dest);
	return 0;
}