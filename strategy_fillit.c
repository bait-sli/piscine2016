#ifendef FILLIT_STRUCTS
typedef struct s_tetri
{
	char **tetriminos;
	struct tetrininos *next;
	struct tetriminos *previous;
}				t_tetri;//it will be used to manipulate tetriminos//

typedef	struct	s_pose
{
	int x;
	int y;
}				t_pose;//it will be used to manipulate and place letter in square//
#endif

#ifendef FILE_CHEK_H
char **cpy_buff_21(int fd, char *file);//copy file content in an array of size 21*x_bloc//
		return (**tab)
int	bloc_nb(char **tab); //check the number of blocs in the array, must be <= 27//
int count_char(char *bloc, c);//it will be used to count the numbers of char, in every bloc, # = 4, \n = 5, and . = 12 in last bloc \n = 4//
		return(c_int);
char	**ft_strsplit(*tab, \n);
	return(bloc_in_array);
	then ft_strlen of every str in array must return (4);
if every of these condition is valid the global file is valid and ready to check validity form of tetri
#endif

#ifendef CHECK_TETRI_FORMAT
char **split_every_bloc(*tab);
	return(str[16]);
char **strstr_form_in_bloc(*tab); //must find a valid form tetriminos in every bloc//
	if these test valid return clean liste of form founded 
		return (t_tetri);
#endif

#ifendef RESOLVE_PROBLEM
int	find_position_of_sharp
char **map_builde(int size);
	return (map[size][size]);
char **place_one_tetri_forme_in_map(t_tetri, map);
int try_to_place_list_tetri_in_map(*t_list, map); //return 1 if success else 0//
char **recursive_to_find_best_map;
		return the best map;
void print_solution(best_map);
#endif
		