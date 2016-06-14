/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   black_jack_hand.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qhonore <qhonore@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/10 14:58:37 by qhonore           #+#    #+#             */
/*   Updated: 2016/06/10 16:03:16 by qhonore          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int		black_jack_hand(char *hand)
{
	int		val;
	int		ace;

	val = 0;
	ace = 0;
	while (*hand)
	{
		if (*hand >= '1' && *hand <= '9')
			val += *hand - '0';
		else if (*hand == 'T' || *hand == 'J' || *hand == 'D' || *hand == 'K')
			val += 10;
		else if (*hand == 'A')
			ace++;
		hand++;
	}
	while (ace)
	{
		if (val + ace * 11 <= 21)
			return (val + ace * 11);
		val++;
		ace--;
	}
	return (val);
}

// int main(void)
// {
//     printf("%d\n", black_jack_hand("24"));
//     printf("%d\n", black_jack_hand("D8"));
//     printf("%d\n", black_jack_hand("A4"));
//     printf("%d\n", black_jack_hand("AT"));
//     printf("%d\n", black_jack_hand("AAT"));
//     printf("%d\n", black_jack_hand("AA8"));
//     printf("%d\n", black_jack_hand("339A6"));
//     printf("%d\n", black_jack_hand("TAAAT"));
//     return (0);
// }
