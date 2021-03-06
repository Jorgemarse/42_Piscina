/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 13:23:56 by jormarti          #+#    #+#             */
/*   Updated: 2021/04/23 14:01:23 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	n;
	char			a;

	if (nb < 0)
	{
		a = '-';
		write(1, &a, 1);
		nb = nb * (-1);
	}
	n = nb;
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		a = '0' + (n % 10);
		write(1, &a, 1);
	}
	else
	{
		a = '0' + n;
		write(1, &a, 1);
	}
}

/*int main (void)
{
	ft_putnbr(2147483647);
	return(0);
}*/