/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 20:39:13 by ofedota           #+#    #+#             */
/*   Updated: 2025/08/18 20:39:14 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int	j;
	
	i = 0;
	if (to_find[i] == 0)
		return str;
	while (str[i])
	{
		j = 0;
		while ((str[i + j]) && (str[i + j] == to_find[j]))
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	printf("total chars of origin line is: %d\n", i);
	printf("total chars of another line is: %d\n", j);

	return (str);
}

int	main(void)
{
	char str[] = "PowerPoint";
	char to_find[] = "Ramble";
	printf("%s",ft_strstr(str,to_find));
	return 0;
}