/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   0-0____ft_countdown.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evgenkarlson <RTFM@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 12:33:14 by evgenkarlson      #+#    #+#             */
/*   Updated: 2021/02/16 23:44:58 by evgenkarlson     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* ************************************************************************** */
/* ************************************************************************** **


Assignment name  : ft_countdown
Expected files   : ft_countdown.c
Allowed functions: write
--------------------------------------------------------------------------------

Напишите программу, которая отображает все цифры в порядке убывания, а затем 
печатает новую строку.

Пример:

$> ./ft_countdown | cat -e
9876543210$
$>


** ************************************************************************** */
/* ************************************************************************** */


#include <unistd.h>

int		main(void)
{
	char i;
	
	i = '9';
	while (i >= '0')
	{
		write(1, &i, 1);
		i--;
	}
	write(1, "\n", 1);
	return (0);
}


/* ************************************************************************** */
/* ************************************************************************** */


int		main(void)
{
	write (1, "9876543210\n", 11);
	return (0);
}


/* ************************************************************************** */
/* ************************************************************************** */
