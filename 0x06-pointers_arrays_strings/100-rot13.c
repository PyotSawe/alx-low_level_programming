/**
 * rot13 -  a   function that encodes a string using rot13 encoding scheme.
 * @msg: An input string to encode using rot13
 * Return: An encode string
 */

char *rot13(char *s)
{
	/**/
	char rot13enc[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y',
		     'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		     'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		     'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		     'J', 'K', 'L', 'M'};
	char alphabet[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			     'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
			     'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
			     'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			     'W', 'X', 'Y', 'Z'};
	int shared_i, s_index;
	for (s_index = 0; *(s + s_index) != '\0'; s_index++) /*loop through string*/
	{
		shared_i = 0;
		while (alphabet[shared_i] != '\0' && *(s + s_index) != alphabet[shared_i]) /*loop through rot13 arr*/
			shared_i++;

		if (*(s + s_index) == alphabet[shared_i]) /*if alpha matches, set to index in b arr*/
			*(s + s_index) = rot13enc[shared_i];
	}

	/*There exist other way to use rot13[53] array*/
	return (s);
}
