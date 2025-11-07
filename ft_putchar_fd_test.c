#define _GNU_SOURCE
#include "libft.h"
#include "libtest.h"

int ft_putchar_fd_test(void)
{
	int		ok;
	int		fd;
	int		n;
	char	buf[50];

	ok = 1;
	fd = memfd_create("putchar", 0);
	ft_putchar_fd('X', fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 1 || memcmp(buf, "X", 1) != 0)
	{
		printf("ft_putchar_fd : ko!");
		ok = 0;
	}
	lseek(fd, 0, SEEK_SET);
	ftruncate(fd, 0);
	ft_putchar_fd('\0', fd);
	lseek(fd, 0, SEEK_SET);
	n = read(fd, buf, 50);
	if (n != 1 || memcmp(buf, "\0", 1) != 0)
	{
		printf("ft_putchar_fd : ko!");
		ok = 0;
	}
	close(fd);
	return (ok);
}
