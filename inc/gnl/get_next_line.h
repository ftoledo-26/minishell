/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Curro TLP <franciscomanueltoledo@gmail.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:13:13 by Curro TLP         #+#    #+#             */
/*   Updated: 2026/01/19 17:13:13 by Curro TLP        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/*════════════════════════════ [  LIBS ] ═════════════════════════════════════*/
# include <stddef.h>

/*════════════════════════════ [  MACROS ] ═══════════════════════════════════*/
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

/*═════════════════════════ [  FUNCTIONS ] ═══════════════════════════════════*/

char	*get_next_line(int fd);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
void	fill_str(char *res, char *s1, char *s2);

#endif
