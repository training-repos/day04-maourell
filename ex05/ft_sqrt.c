int	ft_sqrt(int nb)
{
	int		result;

	result = 2;
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (result * result < nb)
		result++;
	if (nb % result == 0)
		return (result);
	return (0);
}
