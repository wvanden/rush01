/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/17 20:55:43 by wvan-den          #+#    #+#             */
/*   Updated: 2020/09/17 20:59:02 by wvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	m;

	if (nb < 0)
	{
		m = (nb * -1);
		write(1, "-", 1);
	}
	else
		m = nb;
	if (m >= 10)
	{
		ft_putnbr(m / 10);
	}
	m = m % 10 + '0';
	write(1, &m, 1);
}
