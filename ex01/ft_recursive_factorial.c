int	ft_recursive_factorial(int nb)
{
	int		result;

	if (nb <= 0 || nb > 12)
		return (0);
	if (nb == 1)
		return (1);
	else
		result = ft_iterative_factorial(nb - 1) * nb;
	return (result);
}
