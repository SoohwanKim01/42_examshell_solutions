/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:35:41 by kgomera           #+#    #+#             */
/*   Updated: 2019/04/02 19:46:47 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_putchar('a');
    return 0;
}
