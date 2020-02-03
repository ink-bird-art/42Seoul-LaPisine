/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jko <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 12:11:05 by jko               #+#    #+#             */
/*   Updated: 2020/02/02 18:17:03 by jko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	free_arrs(int **arrs);
int		**split_inputs(char *inputs);
void	print_error(char *str);
int		solve(int **inputs);

int		main(int argc, char *argv[])
{
	int **inputs;

	if (argc != 2)
	{
		print_error("Error");
		return (0);
	}
	inputs = split_inputs(argv[1]);
	if (inputs == 0)
	{
		print_error("Error");
		return (0);
	}
	if (solve(inputs) == 0)
		print_error("Error");
	free_arrs(inputs);
	return (0);
}