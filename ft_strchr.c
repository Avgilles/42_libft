/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gavraam <gavraam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:09:03 by gavraam           #+#    #+#             */
/*   Updated: 2025/11/09 12:01:45 by gavraam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedChar)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] == (char)searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	if ((char)searchedChar == '\0')
		return ((char *)&string[i]);
	return (NULL);

}
/*
char	*ft_strchr(const char *s, int c)
{
    while (*s)
    {
        if (*s == (char)c)
            return ((char *)s);
        s++;
    }
    if ((char)c == '\0')
        return ((char *)s);
    return (NULL);
}

int main() {

	char * source = "The C Language";
	char * destination;
	char * pointer;
	int length = ft_strlen(source);
	
	destination = (char *) malloc( sizeof( char) * (length+1) );
	ft_strcpy( destination, source );
	while ((pointer = ft_strchr( destination, 'a' ))  != NULL ) {
		*pointer = 'A';
		pointer++;
	}
	printf( "Result : %s\n", destination );
	
	free( destination );
	
	return 0;
}

void test_ft_strchr()
{
    printf("=== Test ft_strchr ===\n\n");
    
    // Test 1: Trouver un caractère qui existe
    printf("Test 1: Trouver 'o' dans \"Hello World\"\n");
    char *str1 = "Hello World";
    char *result1 = ft_strchr(str1, 'o');
    char *expected1 = strchr(str1, 'o');
    printf("ft_strchr: %s\n", result1 ? result1 : "NULL");
    printf("strchr:    %s\n", expected1 ? expected1 : "NULL");
    printf("%s Test 1\n\n", (result1 == expected1) ? "✓" : "✗");
    
    // Test 2: Caractère au début
    printf("Test 2: Trouver 'H' dans \"Hello World\"\n");
    char *result2 = ft_strchr(str1, 'H');
    char *expected2 = strchr(str1, 'H');
    printf("ft_strchr: %s\n", result2 ? result2 : "NULL");
    printf("strchr:    %s\n", expected2 ? expected2 : "NULL");
    printf("%s Test 2\n\n", (result2 == expected2) ? "✓" : "✗");
    
    // Test 3: Caractère à la fin
    printf("Test 3: Trouver 'd' dans \"Hello World\"\n");
    char *result3 = ft_strchr(str1, 'd');
    char *expected3 = strchr(str1, 'd');
    printf("ft_strchr: %s\n", result3 ? result3 : "NULL");
    printf("strchr:    %s\n", expected3 ? expected3 : "NULL");
    printf("%s Test 3\n\n", (result3 == expected3) ? "✓" : "✗");
    
    // Test 4: Caractère inexistant
    printf("Test 4: Trouver 'z' dans \"Hello World\"\n");
    char *result4 = ft_strchr(str1, 'z');
    char *expected4 = strchr(str1, 'z');
    printf("ft_strchr: %s\n", result4 ? result4 : "NULL");
    printf("strchr:    %s\n", expected4 ? expected4 : "NULL");
    printf("%s Test 4\n\n", (result4 == expected4) ? "✓" : "✗");
    
    // Test 5: Chercher '\0'
    printf("Test 5: Trouver '\\0' dans \"Hello\"\n");
    char *str5 = "Hello";
    char *result5 = ft_strchr(str5, '\0');
    char *expected5 = strchr(str5, '\0');
    printf("ft_strchr pointe vers fin: %s\n", (result5 == str5 + 5) ? "OUI" : "NON");
    printf("strchr pointe vers fin:    %s\n", (expected5 == str5 + 5) ? "OUI" : "NON");
    printf("%s Test 5\n\n", (result5 == expected5) ? "✓" : "✗");
    
    // Test 6: Remplacement de tous les 'a'
    printf("Test 6: Remplacer tous les 'a' par 'A' dans \"banana\"\n");
    char test6[20] = "banana";
    char *ptr = test6;
    while ((ptr = ft_strchr(ptr, 'a')) != NULL) {
        *ptr = 'A';
        ptr++;
    }
    printf("Résultat: %s\n", test6);
    printf("%s Test 6\n\n", strcmp(test6, "bAnAnA") == 0 ? "✓" : "✗");
    
    // Test 7: Chaîne vide
    printf("Test 7: Chercher 'a' dans chaîne vide\n");
    char *str7 = "";
    char *result7 = ft_strchr(str7, 'a');
    char *expected7 = strchr(str7, 'a');
    printf("ft_strchr: %s\n", result7 ? "FOUND" : "NULL");
    printf("strchr:    %s\n", expected7 ? "FOUND" : "NULL");
    printf("%s Test 7\n\n", (result7 == expected7) ? "✓" : "✗");
    
    // Test 8: Chercher '\0' dans chaîne vide
    printf("Test 8: Chercher '\\0' dans chaîne vide\n");
    char *result8 = ft_strchr(str7, '\0');
    char *expected8 = strchr(str7, '\0');
    printf("ft_strchr: %s\n", (result8 == str7) ? "Pointe vers \\0" : "NULL");
    printf("strchr:    %s\n", (expected8 == str7) ? "Pointe vers \\0" : "NULL");
    printf("%s Test 8\n\n", (result8 == expected8) ? "✓" : "✗");
    
    printf("=== Fin des tests ===\n");
}
*/