#include "get_next_line.h"
int main(int argc, char **argv)
{
	(void)argc;
	char *line = NULL;
	int fd = open(argv[1], O_RDONLY);

	int ret;
	while ((ret = get_next_line(fd, &line)))
	{
		if (ret == -1)
		{
			printf("Error main");
			return (0);
		}
		printf("%s\n", line);
	}
}
