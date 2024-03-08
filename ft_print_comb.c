/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muibrokh <muibrokh@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:52:00 by muibrokh          #+#    #+#             */
/*   Updated: 2024/03/08 18:29:35 by muibrokh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	save_number(char v[]);

int	main(void)
{
	ft_print_comb();
}

void	ft_print_comb(void)
{
	char	v[5];

	v[0] = 48;
	v[3] = 44;
	v[4] = 32;
	while (v[0] <= 55)
	{
		v[1] = v[0] + 1;
		while (v[1] <= 56)
		{
			v[2] = v[1] + 1;
			while (v[2] <= 57)
			{
				save_number(v);
				v[2]++;
			}
			v[1]++;
		}
		v[0]++;
	}
}

void	save_number(char v[])
{
	if (v[0] == 55 && v[1] == 56 && v[2] == 57)
	{
		write(1, v, 3);
		write(1, "\n", 2);
	}
	else
	{
		write(1, v, 5);
	}
}
