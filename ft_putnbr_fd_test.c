#define _GNU_SOURCE
#include "libft.h"
#include "libtest.h"

int	ft_putnbr_fd_test(void)
{
	int		ok;
	int		fd;
	int		n;
	char	buf[50];

	ok = 1;
	fd = memfd_create("putnbr", 0);
	ft_putnbr_fd(0, fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 1 || memcmp(buf, "0", 1) != 0)
	{
		printf("ft_putnbr_fd 0: ko!\n");
		ok = 0;
	}
	lseek(fd, 0, SEEK_SET);
	ftruncate(fd, 0);
	ft_putnbr_fd(42, fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 2 || memcmp(buf, "42", 2) != 0)
	{
		printf("ft_putnbr_fd 42: ko!\n");
		ok = 0;
	}
	lseek(fd, 0, SEEK_SET);
	ftruncate(fd, 0);
	ft_putnbr_fd(10, fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 2 || memcmp(buf, "10", 2) != 0)
	{
		printf("ft_putnbr_fd 10: ko!\n");
		ok = 0;
	}
	lseek(fd, 0, SEEK_SET);
	ftruncate(fd, 0);
	ft_putnbr_fd(-42, fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 3 || memcmp(buf, "-42", 3) != 0)
	{
		printf("ft_putnbr_fd -42: ko!\n");
		ok = 0;
	}
	lseek(fd, 0, SEEK_SET);
	ftruncate(fd, 0);
	ft_putnbr_fd(2147483647, fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 10 || memcmp(buf, "2147483647", 10) != 0)
	{
		printf("ft_putnbr_fd 2147483647: ko!\n");
		ok = 0;
	}
	lseek(fd, 0, SEEK_SET);
	ftruncate(fd, 0);
	ft_putnbr_fd(-2147483648, fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 11 || memcmp(buf, "-2147483648", 11) != 0)
	{
		printf("ft_putnbr_fd -2147483648: ko!\n");
		ok = 0;
	}	
	close(fd);
	return (ok);
}
