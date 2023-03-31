/**
 * rot13 -  a   function that encodes a string using rot13 encoding scheme.
 * @msg: An input string to encode using rot13
 * Return: An encode string
 */

char *rot13(char *msg)
{
	/*Prepare Encoding bytes and alphabets*/
	char rot13enc[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x',
		'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
		'l', 'm', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
		'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
		     'J', 'K', 'L', 'M'};
	char alphabet[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
		'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
		'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
		'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
		'W', 'X', 'Y', 'Z'};
	/*Mark where to start*/
	int shared_i, msg_index;

	/*For each msg character*/
	for (msg_index = 0; *(msg + msg_index) != '\0'; msg_index++)
	{
		/*repeat correlating with rot13enc*/
		shared_i = 0;
		while (alphabet[shared_i] != '\0' && *(msg + msg_index)
				!= alphabet[shared_i])
			shared_i++;
		/*encode msg char using codec char*/
		if (*(msg + msg_index) == alphabet[shared_i])
			*(msg + msg_index) = rot13enc[shared_i];
	}
	return (msg);
}
