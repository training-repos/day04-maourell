int	ft_fibonacci(int index)
{
	int		result;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	result = ft_fibonacci(index - 2) + ft_fibonacci(index -1);
	return (result);
}
