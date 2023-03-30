/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 *
 * Return: encoded string;
 */

char *leet(char *s)
{
	/*Declare where to start*/
	int plain_i, enc_i;
	/*Define the encoding string*/
	int plain[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int enc[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	/*Take each character from s */
	for (enc_i = 0; *(s + enc_i) != '\0'; enc_i++)
	{
		/*Go through encoder buffer*/
		for (plain_i = 0; plain_i < 10 ; plain_i++)
		{
			/*If Contains any characters to be encoded*/
			if (*(s + enc_i) == plain[plain_i])
				/*Then encode it with Respective code from b buffer*/
				*(s + enc_i) = enc[plain_i];
		}
	}
	/*Finally return encoded string*/
	return (s);
}

