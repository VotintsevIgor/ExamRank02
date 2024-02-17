#include <unistd.h>

void	ft_write_number(int number);
{
	if (number > 9)
		ft_write_number(number / 10);
	write(1, &"0123456789"[number % 10], 1)
}
