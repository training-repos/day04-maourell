int	ft_iterative_factorial(int nb)
{
	int		result;
	int		i;

	i = 1;
	result = 1;
	if (nb <= 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
