/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anschmit <anschmit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 13:29:53 by anschmit          #+#    #+#             */
/*   Updated: 2024/08/12 17:44:51 by anschmit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **arg)
{
	int	i;

	i = 0;
	while (arg[i] != NULL)
	{
		free(arg[i]);
		i++;
	}
}

void	ft_error(char *message)
{
	ft_putendl_fd(message, 2);
	exit (1);
}

int	ft_isnumber(char *nr)
{
	int	len;

	len = 0;
	if (nr[0] == '-')
		len++;
	while (nr[len])
	{
		if (nr[len] >= 48 && nr[len] <= 57)
			len++;
		else
			return (0);
	}
	return (1);
}

int	ft_same_nr(int nr, char **args, int i)
{
	i++;
	while (args[i])
	{
		if (ft_atoi(args[i]) == nr)
			return (0);
		i++;
	}
	return (1);
}

void	validation(int argc, char **argv)
{
	int		i;
	long	tmp;
	char	**args;

	i = 1;
	if (argc == 2)
		args = ft_split(argv[1], ' ');
	else
		args = argv;
	while (args[i])
	{
		tmp = ft_atoi(args[i]);
		if (!ft_isnumber(args[i]))
			ft_error("Error");
		if (!ft_same_nr(tmp, args, i))
			ft_error("Error");
		if (tmp > 2147483647 || tmp < -2147483648)
			ft_error("Error");
		i++;
	}
	if (argc == 2)
		free_split(args);
}
