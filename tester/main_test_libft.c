#include <stdio.h>	//for printf scanf
#include <stdlib.h> // pour atoi
#include <limits.h> // pour INT_MAX et INT_MIN
#include <string.h> //for zero
#include "libft.h"
#include <ctype.h> //for isalpha, etc


int ft_atoi(const char *str);
void	ft_test_upper_every3(unsigned int i, char *c);

int main(void)
{
	size_t	z;
	int		i;
	
	printf("-------------------------------------------------\n");
	printf("               		FT_ATOI 		            \n");
	printf("-------------------------------------------------\n");
/*
DESCRIPTION
The atoi() function converts the initial portion of the string pointed 
to by str to int representation.
*/
	const char *tests_atoi[] = {
		"42",
		"-42",
		"+42",
		"   42",
		"   -42",
		"\t\n  123",
		"123abc",
		"abc",
		"+",
		"-",
		"0000123",
		"9999999999",
		"-9999999999",
		"",
		"   ",
		"  +  123",
		"\v\f\r123",
		NULL
	};

	i = 0;

	while (tests_atoi[i])
	{
		int std = atoi(tests_atoi[i]);
		int mine = ft_atoi(tests_atoi[i]);
		printf("Test %-15s | atoi = %-12d | ft_atoi = %-12d | %s\n",
			tests_atoi[i],
			std,
			mine,
			(std == mine) ? "✅ OK" : "❌ KO");
		i++;
	}

	printf("-------------------------------------------------\n");
	printf("              		 FT_BZERO		             \n");
	printf("-------------------------------------------------\n");
/*
DESCRIPTION
The bzero() function writes n zeroed bytes to the string s. If n is zero, 
bzero() does nothing.
*/
	char	str1_1[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str1_2[] = "Hello world!! Welcome to the 42 campus !!!";
	
	printf("\nYou are testing || ft_bzero ||.");
	printf("Here an exemple of memory value (here a string) "
		"to work on: \n\n>>>\t%s\t<<<\n\n", str1_1);
	z = 15;
	
	printf("ANSWER\n======");
	bzero(str1_1, z);
	printf("\n\t str after  bzero   : %s", str1_1);
	printf("\n(You should get nothing as printf stops after '\\0', but ...)");
	printf("\n\t> str[] diplayed with write function:\t");
	i = 0;
	while (i < 42)
	{
		printf("%c", str1_1[i]);
		i++;
	}

	ft_bzero(str1_2, z);
	printf("\n\n\t str after ft_bzero : %s", str1_2);

	printf("\n\t> str[] diplayed with write function:\t");
	i = 0;
	while (i < 42)
	{
		printf("%c", str1_2[i]);
		i++;
	}
	printf("\n");
	if (strcmp(str1_1, str1_2) == 0)
		printf(" \n\t\t RESULT FT_BZERO :✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT FT_BZERO : ❌ KO\n\n");
	fflush(stdout);


	printf("-------------------------------------------------\n");
	printf("              		 FT_CALLOC		             \n");
	printf("-------------------------------------------------\n");

	char	*str2_1;
	char	*str2_2;
	int		*tab1;
	int		*tab2;

	//test on str -> fill with '\0'
	str2_1 = (char *)calloc(6, sizeof(char));
	str2_2 = (char *)ft_calloc(6, sizeof(char));

	if (!str2_2 || !str2_2)
		return (-1);

	printf("\nHere is the str (calloc version)   : %s", str2_2);
	printf("\nHere is the str (ft_calloc version): %s\n", str2_2);

	printf("\n");
	if (strcmp(str2_1, str2_2) == 0)
		printf(" \n\t\t RESULT avec Str :✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT avec Str : ❌ KO\n\n");

	// Test on integer tab
	tab1 = (int *)calloc(5, sizeof(int));
	tab2 = (int *)ft_calloc(5, sizeof(int));

	if (!tab1 || !tab2)
		return(-1);

	printf("\nHere is the tab (calloc version)   : ");
	z = 0;
	while (z < 5)
		printf("%d ", tab1[z++]);

	printf("\nHere is the tab (ft_calloc version): ");
	z = 0;
	while (z < 5)
		printf("%d ", tab2[z++]);
	printf("\n");

	if (memcmp(tab1, tab2, 5*sizeof(int)) == 0)
		printf(" \n\t\t RESULT avec tab :✅ OK\n\n");
	else
		printf(" \n\t\t RESULT avec tab : ❌ KO\n\n");

	free(str2_1);
	free(str2_2);
	free(tab1);
	free(tab2);
	fflush(stdout);


	printf("-------------------------------------------------\n");
	printf("             		 FT_ISALNUM     		    \n");
	printf("-------------------------------------------------\n");
	/*
	DESCRIPTION
	The isalnum() function checks whether a character is alphanumeric,
	i.e., a letter (A–Z, a–z) or a digit (0–9).
	It returns nonzero if true, 0 otherwise.
	*/

	const int tests[] = {
		'A', 'Z', 'a', 'z', '0', '9',   // alphanum
		'@', '[', '`', '{', '/', ':',   // non alphanum, autour des lettres
		' ', '\t', '\n',                 // espaces
		'~', '#', '!',                   // symboles
		0                                // caractère nul
	};
	i = 0;

	while (i < (int)(sizeof(tests) / sizeof(tests[0])))
	{
		int c = tests[i];
		int std = !!isalnum(c);
		int mine = !!ft_isalnum(c);

		if (c == 0)
			printf("Test '\\0' (nul)      | isalnum = %-2d | ft_isalnum = %-2d | %s\n",
				std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		else if (c == '\n')
			printf("Test '\\n' (newline)  | isalnum = %-2d | ft_isalnum = %-2d | %s\n",
				std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		else if (c == '\t')
			printf("Test '\\t' (tab)      | isalnum = %-2d | ft_isalnum = %-2d | %s\n",
				std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		else if (c == ' ')
			printf("Test ' ' (space)      | isalnum = %-2d | ft_isalnum = %-2d | %s\n",
				std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		else
			printf("Test '%c'               | isalnum = %-2d | ft_isalnum = %-2d | %s\n",
				c, std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		i++;
	}

	printf("-------------------------------------------------\n");
	printf("             		 FT_ISALPHA        			 \n");
	printf("-------------------------------------------------\n");
	i = 0;
	while (i < (int)(sizeof(tests) / sizeof(tests[0])))
	{
		int c = tests[i];
		int std = !!isalpha(c);
		int mine = !!ft_isalpha(c);

		if (c == 0)
			printf("Test '\\0' (nul)      | isalpha = %-2d | ft_isalpha = %-2d | %s\n", std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		else if (c == '\n')
			printf("Test '\\n' (newline)  | isalpha = %-2d | ft_isalpha = %-2d | %s\n", std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		else if (c == '\t')
			printf("Test '\\t' (tab)      | isalpha = %-2d | ft_isalpha = %-2d | %s\n", std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		else if (c == ' ')
			printf("Test ' ' (space)      | isalpha = %-2d | ft_isalpha = %-2d | %s\n", std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		else
			printf("Test '%c'               | isalpha = %-2d | ft_isalpha = %-2d | %s\n", c, std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		i++;
	}


	printf("\n-------------------------------------------------\n");
	printf("             		 FT_ISDIGIT    			     \n");
	printf("-------------------------------------------------\n");
	i = 0;
	while (i < (int)(sizeof(tests) / sizeof(tests[0])))
	{
		int c = tests[i];
		int std = !!isdigit(c);
		int mine = !!ft_isdigit(c);
		printf("Test '%c'               | isdigit = %-2d | ft_isdigit = %-2d | %s\n",
			(c ? c : '0'), std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		i++;
	}


	printf("\n-------------------------------------------------\n");
	printf("             	  FT_ISALNUM   				      \n");
	printf("-------------------------------------------------\n");
	i = 0;
	while (i < (int)(sizeof(tests) / sizeof(tests[0])))
	{
		int c = tests[i];
		int std = !!isalnum(c);
		int mine = !!ft_isalnum(c);
		printf("Test '%c'               | isalnum = %-2d | ft_isalnum = %-2d | %s\n",
			(c ? c : '0'), std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		i++;
	}


	printf("\n-------------------------------------------------\n");
	printf("             T		FT_ISASCII     			    \n");
	printf("-------------------------------------------------\n");
	const int tests_ascii[] = {-10, -1, 0, 1, 65, 127, 128, 255};
	i = 0;
	while (i < (int)(sizeof(tests_ascii) / sizeof(tests_ascii[0])))
	{
		int c = tests_ascii[i];
		int std = !!isascii(c);
		int mine = !!ft_isascii(c);
		printf("Test %-3d              | isascii = %-2d | ft_isascii = %-2d | %s\n",
			c, std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		i++;
	}


	printf("\n-------------------------------------------------\n");
	printf("             		 vs FT_ISPRINT     			    \n");
	printf("-------------------------------------------------\n");
	const int tests_print[] = {31, 32, 33, 64, 90, 97, 122, 126, 127};
	i = 0;
	while (i < (int)(sizeof(tests_print) / sizeof(tests_print[0])))
	{
		int c = tests_print[i];
		int std = !!isprint(c);
		int mine = !!ft_isprint(c);
		printf("Test %-3d ('%c')        | isprint = %-2d | ft_isprint = %-2d | %s\n",
			c, (isprint(c) ? c : '.'), std, mine, (std == mine) ? "✅ OK" : "❌ KO");
		i++;
	}

	printf("\n-------------------------------------------------\n");
	printf("                TESTS FT_ITOA                    \n");
	printf("-------------------------------------------------\n");
	/*
	DESCRIPTION
	The itoa() function converts an integer to a null-terminated string.
	Your ft_itoa() must handle negative numbers, zero, and INT_MIN.
	*/

	const int tests_itoa[] = {
		0,
		42,
		-42,
		12345,
		-12345,
		INT_MAX,
		INT_MIN
	};
	i = 0;

	while (i < (int)(sizeof(tests_itoa) / sizeof(tests_itoa[0])))
	{
		int n = tests_itoa[i];
		char *mine = ft_itoa(n);

		printf("Test %-12d | ft_itoa = %-15s | ", n, mine);
		// Vérification en comparant avec sprintf
		char expected[50];
		sprintf(expected, "%d", n);

		if (mine && strcmp(mine, expected) == 0)
			printf("✅ OK\n");
		else
			printf("❌ KO (expected: %s)\n", expected);

		free(mine);
		i++;
	}

	printf("\n-------------------------------------------------\n");
	printf("              		 ft_memchr		             \n");
	printf("-------------------------------------------------\n");
/*
DESCRIPTION
the memchr() function locates the first occurence of c (convered to an unsigned 
char) in string s.
RETURN VALUES
The memchr() function returns a pointer to the byte located, or NULL if no such 
byte exists within n bytes.*/

	char	str3_1[] = "Hello world!! Welcome to the 42 campus !!!";
	char	c;
	void	*ptr1;
	void	*ptr2;

	
	printf("\nYou are testing || ft_memchr ||.");
	printf("Here an exemple of memory value (here a string) "
		"to work on: \n\n>>>\t%s\t<<<", str3_1);
	c = 'm';
	z = 40 ;
	printf("\n Let's search the char 'm' on 42 bytes\n\n");

	printf("ANSWER\n======");
	ptr1 = memchr(str3_1, c, z);
	printf("\n\t with memchr    : %p", ptr1);
	ptr2 = ft_memchr(str3_1, c, z);
	printf("\n\t with ft_memchr : %p\n", ptr2);

		printf("\n");
	if (strcmp(ptr1, ptr2) == 0)
		printf(" \n\t\t RESULT ft_memchr :✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT ft_memchr : ❌ KO\n\n");
	fflush(stdout);

	printf("\n-------------------------------------------------\n");
	printf("              		 FT_MEMCMP		             \n");
	printf("-------------------------------------------------\n");

/*
DESCRIPTION
The memcmp() function compares byte string s1 against byte string s2.
Both strings are assumed to be n bytes long.
RETURN VALUES
The memcmp() function returns zero if the two strings are identical, 
otherwise returns the difference between the first two differing bytes 
(treated as unsigned char values, so that '\200' is greater than '\0', 
for example).
*/

	char	s4_1[50] = "Hello 42 Vienna, What's up?!";
	char	s4_2[50] = "Hello 43 Vienna, What's up?!";
	
	printf("\nYou are testing || ft_memcmp ||.");
	printf("\nlet test the program with memory allocated for strings\n");
	
	printf("\ns1 = Hello 42 Vienna, Whats up?!");
	
	printf("\ns2 = Hello 43 Vienna, Whats up?!");


	z = 20;
	printf("ANSWER\n======");
	

	printf("\n\t with memcmp    : %d", memcmp(s4_1, s4_2, z));

	printf("\n\t with ft_memcmp : %d\n", ft_memcmp(s4_1, s4_2, z));

	if ( memcmp(s4_1, s4_2, z) == ft_memcmp(s4_1, s4_2, z))
		printf(" \n\t\t RESULT FT_MEMCMP :✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT FT_MEMCMP : ❌ KO\n\n");
	fflush(stdout);


	printf("\n-------------------------------------------------\n");
	printf("              		 FT_MEMCPY		             \n");
	printf("-------------------------------------------------\n");

/*
DESCRIPTION
The memcpy() function copies n bytes from memory area src to memory area dst. 
If dstt and src overlap, behavior is undefined. Applications in which dst and 
src might overlap should use memove(3) instead.
RETURN VALUES
The memcpy() function returns the original value of dst
*/

	char	str51[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str52[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str53[] = "******************************************";
	
	printf("\nYou are testing || ft_memcpy ||.");
	printf("\n\t Destination : %s", str51);
	printf("\n\t source      : %s", str53);
	z = 13;
	printf("\nANSWER\n======");
	memcpy(str51, str53, z);
	printf("\n\t whith memcpy   : %s", str51);
	ft_memcpy(str52, str53, z);
	printf("\n\t with ft_memcpy : %s\n", str52);

	printf("\n");
	if (strcmp(str51, str52) == 0)
		printf(" \n\t\t RESULT FT_MEMCPY :✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT FT_MEMCPY : ❌ KO\n\n");
	fflush(stdout);



	printf("\n-------------------------------------------------\n");
	printf("              		 FT_MEMMOVE		             \n");
	printf("-------------------------------------------------\n");


/*
DESCRIPTION
The memmove() function copies len bytes from string src to string dst.
The two strings may overlap; the copy is always done in a non-destructive manner.
RETURN VALUES
The memmove() function returns the original value of dst.
*/

	char	str61[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str62[] = "Hello world!! Welcome to the 42 campus !!!";
//	char	str63[] = "******************************************";
	
	printf("\nYou are testing || ft_memmove ||.");
	printf("\n\t Destination : %s", str61);
	printf("\n\t source      : %s", (str61 + 4));
	z = 13;
	printf("\nANSWER\n======");
	memmove(str61, (str61 + 4), z);
	printf("\n\t whith memmove   : %s", str61);
	ft_memmove(str62, (str62 + 4), z);
	printf("\n\t with ft_memmove : %s\n", str62);


	if (strcmp(str61, str62) == 0)
		printf(" \n\t\t RESULT FT_MEMMOVE :✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT FT_MEMMOVE : ❌ KO\n\n");
	fflush(stdout);



	printf("\n-------------------------------------------------\n");
	printf("              		 FT_MEMSET		             \n");
	printf("-------------------------------------------------\n");

/*
DESCRIPTION
The memset() function writes len bytes of value c (converted to an 
unsigned char) to the string b.
RETURN VALUES
    The memset() function returns its first argument.
*/

	char	str71[] = "Hello world!! Welcome to the 42 campus !!!";
	char	str72[] = "Hello world!! Welcome to the 42 campus !!!";
	
	printf("\nYou are testing || ft_memset ||.");
	printf("Here an exemple of memory value (here a string) "
		"to work on: \n\n>>>\t%s\t<<<", str71);
	printf("\nlet set the char -4- to the 15 first byte\n\n");

	c = '4';
	z = 13;
	printf("ANSWER\n======");
//	printf("\n\t Before memset   : %s", str1);
	memset(str71, c, z);
	printf("\n\t After  memset   : %s", str71);
	ft_memset(str72, c, z);
	printf("\n\t with  ft_memset : %s\n", str72);

	if (strcmp(str71, str72) == 0)
		printf(" \n\t\t RESULT FT_MEMSET :✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT FT_MEMSET : ❌ KO\n\n");
	fflush(stdout);


	printf("\n-------------------------------------------------\n");
	printf("              		 FT_PUCHAR		             \n");
	printf("-------------------------------------------------\n");

	int tests_putnbr[] = {
		0,
		5,
		-5,
		42,
		-42,
		12345,
		-12345,
		INT_MAX,
		INT_MIN
	};
	i = 0;

	while (i < (int)(sizeof(tests_putnbr) / sizeof(tests_putnbr[0])))
	{
		int n = tests_putnbr[i];

		printf("Test %-12d | printf = ", n);
		printf("%d", n);
		printf(" | ft_putnbr_fd = ");
		fflush(stdout);          // assure que printf écrit avant ft_putnbr_fd
		ft_putnbr_fd(n, 1);      // écrit directement sur la sortie standard
		printf(" 🟧 CHECK IF NBR ARE THE SAME\n");

		i++;
	}

	printf("\n-------------------------------------------------\n");
	printf("              		 FT_PUTSTR		             \n");
	printf("-------------------------------------------------\n");

	const char *tests_putstr[] = {
		"Hello",
		"",
		"42",
		"   leading spaces",
		"trailing spaces   ",
		"Hello\nWorld",
		NULL
	};

	i = 0;
	while (tests_putstr[i])
	{
		printf("Test %-20s \n", tests_putstr[i]);
		printf("\tprintf       = %s\n", tests_putstr[i]);
		fflush(stdout);          // flush pour ordre correct
		printf("\tft_putstr_fd = ");
		fflush(stdout);          // flush pour ordre correct
		ft_putstr_fd((char *)tests_putstr[i], 1);
		printf(" 🟧 CHECK IF STRINGS MATCH\n");
		i++;
	}


	printf("\n-------------------------------------------------\n");
	printf("              		 FT_PUTENDL		             \n");
	printf("-------------------------------------------------\n");

	const char *tests_putendl[] = {
		"Hello",
		"",
		"42",
		"Hello\nWorld",
		"  spaces  ",
		NULL
	};

	i = 0;
	while (tests_putendl[i])
	{

		printf("Test %-20s \n", tests_putendl[i]);
		printf("\tprintf       = %s\n", tests_putendl[i]);
		fflush(stdout);          // flush pour ordre correct
		printf("\tft_putstr_fd = ");
		fflush(stdout);          // flush pour ordre correct
		ft_putstr_fd((char *)tests_putendl[i], 1);
		printf(" 🟧 CHECK IF STRINGS MATCH\n");
		i++;

	}


	printf("\n-------------------------------------------------\n");
	printf("              		 FT_SPLIT		             \n");
	printf("-------------------------------------------------\n");

	char	**array_of_str_split;
	char	*str_split = "Hello;world;;;!;";
	c = ';';

	array_of_str_split = ft_split(str_split, c);
;
	printf("Initial string : %s\n", str_split);
	printf("Separation char: %c\n", c);
	printf("ANSWER\n======\n");
	i = 0;
	while (array_of_str_split[i])
	{
		printf("Part %d: %s\n",i , array_of_str_split[i]);
		i++;
	}

	if (i == 3)
		printf(" \n\t\t RESULT FT_SPLIT cutting : ✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT FT_SPLIT cutting : ❌ KO\n\n");
	fflush(stdout);
	printf(" 🟧 CHECK IF STRINGS MATCH with\n");
	printf("Part 0: Hello\nPart 1: world\nPart 2: !\n");




	printf("\n-------------------------------------------------\n");
	printf("              		 FT_STRCHR		             \n");
	printf("-------------------------------------------------\n");

/*
DESCRIPTION
The strchr() function locates the first occurence of c (converted to a char)
 in the string pointed to by s. The terminating null character is considered 
to be part of the string; therefor if c is '\0', the function locate 
the terminating '\0'.
RETURN VALUES
The function strchr() return a pointer to the located character, 
or NULL if the character does not appear in the string.
*/

	char	str81[] = "Hello world!! Welcome to the 42 campus !!!";
	c = 'm';

	printf("ANSWER\n======\n");
	ptr1 = strchr(str81, c);
	ptr2 = ft_strchr(str81, c);
	printf("\n\tReturn with strchr   : %p \n", ptr1);
	printf("\n\tReturn with ft_strchr: %p \n", ptr2);

	if (ptr1 == ptr2)
		printf(" \n\t\t RESULT FT_STRCHR : ✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT FT_STRCHR: ❌ KO\n\n");
	fflush(stdout);




	printf("\n-------------------------------------------------\n");
	printf("              		 FT_STRDUP		             \n");
	printf("-------------------------------------------------\n");


/*
DESCRIPTION
The strdup() function allocates sufficient memory for a copy of the 
string s1, does the copy, and returns a pointer to it. 
*/

	char	*str91 = "Hello world!! Welcome to the 42 campus !!!";
	char	*str92;
	char	*str93;

	printf("\nthe string to be copied : %s\n\n", str91);

	str92= strdup(str91);
	str93 = ft_strdup(str91);

	printf("Duplicate string with strup    : %s\n", str92);
	printf("Duplicate string with ft_strup : %s\n", str93);

	if (strcmp(str92, str93) == 0)
		printf(" \n\t\t RESULT FT_STRDUP : ✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT FT_STRDUP: ❌ KO\n\n");
	fflush(stdout);

	free(str92);
	free(str93);




	printf("\n-------------------------------------------------\n");
	printf("              		 ft_striteri		             \n");
	printf("-------------------------------------------------\n");


/*
DESCRIPTION
Applies the function ’f’ to each character of the
string passed as argument, passing its index as
the first argument. Each character is passed by
address to ’f’ so it can be modified if necessary. 
*/

	char str101[] = "Hello world";
	char *str102 = "HelLo WorLd";

	printf("original str : %s\n", str101);
	ft_striteri(str101, ft_test_upper_every3);
	printf("after ft_striteri: %s\n", str101);
	printf("expected str     : %s\n", str102);


	if (strcmp(str101, str102) == 0)
		printf(" \n\t\t RESULT ft_striteri : ✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT ft_striteri: ❌ KO\n\n");
	fflush(stdout);



	printf("\n-------------------------------------------------\n");
	printf("              		 ft_strjoin		             \n");
	printf("-------------------------------------------------\n");


/*
DESCRIPTION
Allocates memory (using malloc(3)) and returns a
new string, which is the result of concatenating
’s1’ and ’s2’.
*/

	char *str111 = "Hello ";
	char *str112 = "world!";
	char *str113;
	char *str114 = "Hello world!";

	printf("original str1 and str2 :--  %s  -- %s  -- \n", str111, str112);
	str113 = ft_strjoin(str111, str112);
	printf("concatenates string with ft_strjoin : %s\n", str113);

	printf("expected str                        : %s\n", str114);



	if (strcmp(str113, str114) == 0)
		printf(" \n\t\t RESULT ft_strjoin : ✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT ft_strjoin: ❌ KO\n\n");
	free(str113);

	fflush(stdout);


	printf("\n-------------------------------------------------\n");
	printf("              		 ft_strlcat		             \n");
	printf("-------------------------------------------------\n");


/*
DESCRIPTION
       The  strlcpy()  and  strlcat()  functions  copy and concatenate strings respectively.  They are designed to be safer, more consistent, and less error prone replacements for
       strncpy(3) and strncat(3).  Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result
       (as long as size is larger than 0 or, in the case of strlcat(), as long as there is at least one byte free in dst).  Note that a byte for the  NUL  should  be  included  in
       size.  Also note that strlcpy() and strlcat() only operate on true “C” strings.  This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and dst
       must be NUL-terminated.

       The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

       The strlcat() function appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.

RETURN VALUES
       The strlcpy() and strlcat() functions return the total length of the string they tried to create.  For strlcpy() that means the length of src.  For strlcat() that means the
       initial length of dst plus the length of src.  While this may seem somewhat confusing, it was done to make truncation detection simple.

       Note,  however,  that if strlcat() traverses size characters without finding a NUL, the length of the string is considered to be size and the destination string will not be
       NUL-terminated (since there was no space for the NUL).  This keeps strlcat() from running off the end of a string.  In practice this should not happen (as it means that ei‐
       ther size is incorrect or that dst is not a proper “C” string).  The check exists to prevent potential security problems in incorrect code.


*/
	char dts1[50];
	char dts2[50];
	char src1[50];

	strcpy(dts1, "Hello");
	strcpy(dts2, "Hello");
	strcpy(src1, "world !");
	z = 50 ;

	
	printf("ANSWER\n======\n");
	size_t z2 = ft_strlcat(dts1, src1, z);
	size_t z3 = strlcat(dts2, src1, z);

	printf("\n\tReturn value with ft_strlcat: %zu \n", z2);
	printf("\tNew dst string with ft_strlcat: %s \n", dts1);

	printf("\n\tReturn value with strlcat: %zu \n", z3);
	printf("\tNew dst string with ft_strlcat: %s \n", dts2);

	if (strcmp(dts1, dts2) == 0)
		printf(" \n\t\t RESULT str ft_strlcat : ✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT str ft_strlcat: ❌ KO\n\n");
	
	if (z2 == z3)
		printf(" \n\t\t RESULT return ft_strlcat : ✅ OK\n\n");
	else 
		printf(" \n\t\t RESULT return ft_strlcat: ❌ KO\n\n");






	fflush(stdout);

	return 0;
}



void	ft_test_upper_every3(unsigned int i, char *c)
{
	char	new_char;

	new_char = *c;
	if (i % 3 == 0 && ( 97 <= new_char &&  new_char <= 122 ))
		new_char = new_char - 32;
	*c = new_char;
}