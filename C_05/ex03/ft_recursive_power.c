/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormarti <jormarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 23:12:03 by jorge             #+#    #+#             */
/*   Updated: 2021/04/29 12:39:09 by jormarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	else if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*int	main (void)
{
	int	a;

	a = ft_recursive_power(-2151, -776);
	printf("%d\n", a);
	return (0);
}*/
