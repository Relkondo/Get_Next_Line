
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	**line;
	char	*line2;
	int		i;
	int		fd;
  	//int		fd2;
  //	int		fd3;
	int		check;
 // 	int		check2;
  //	int		check3;

	if (argc < 2)
		return (0);
//	(void)argv;
//	(void)argc;
	line2 =  NULL;
	line = &line2;
	i = 0;
	while (++i < argc)
	{
		check = 1;
		fd = open(argv[i], O_RDONLY);
 // 	fd2 = open(argv[2], O_RDONLY);
 // 	fd3 = -1;

		while (check > 0/* || check2 > 0 || check3 > 0*/)
		{
			check = get_next_line(fd, line);
			printf("\nfd : %d, result : %d : %s\n", fd, check, *line);
//  			check2 = get_next_line(fd2, line);
//			printf("\nfd2 : %d, result : %d : %s\n\n\n", fd2, check2, *line);
//			check3 = get_next_line(fd3, line);
//			printf("\nfd3 : %d, result : %d : %s\n\n\n", fd3, check3, *line);
		}
	}
	free(*line);
	return (0);
}
