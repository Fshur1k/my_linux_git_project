/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedota <ofedota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 22:43:19 by ofedota           #+#    #+#             */
/*   Updated: 2025/08/20 12:30:04 by ofedota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char i;
	if (nb < 0)
	{
		nb  = nb * -1;
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		i = nb + '0';
		write(1, &i, 1);
	}
	else 
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
}

int main(void)
{
	ft_putnbr(123456);
	return 0;
}
