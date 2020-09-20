/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvan-den <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/20 12:28:40 by wvan-den          #+#    #+#             */
/*   Updated: 2020/09/20 14:00:50 by wvan-den         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_argv_int(char **argv)
{
    int sight[4][4];
	int j;
	int i;
    int n;
    
    n = 0;
	i = 0;
    while (i < 4)
    {
        j = 0;
        while (((n % 8) != 0) || (i == (n / 8)))
        {
            sight[i][j] = argv[1][n] - 48;
            n += 2;
            j++;
        }
        i++;
    }
	return (**sight);
}