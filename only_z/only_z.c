/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 19:51:15 by kgomera           #+#    #+#             */
/*   Updated: 2019/04/02 19:53:23 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(void)
{
    ft_putchar('z');
    return 0;
}
