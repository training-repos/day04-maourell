int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 1)
		return (1);
	result = ft_iterative_power(result, (power - 1)) * nb;
	return (result);
}
