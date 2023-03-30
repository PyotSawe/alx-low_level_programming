/**
 * rot13 -  a   function that encodes a string using rot13 encoding scheme.
 * @msg: An input string to encode using rot13
 * Return: An encode string
 */

char *rot13(char *msg)
{
	int msg_i = 0;

	/*Repeat getting a character from str until encounter null characters*/
	while (*(msg + msg_i) != '\0')
	{
		/*Repeat checking the character*/
		while ((*(msg + msg_i) >= 'a' && *(msg + msg_i) <= 'z') ||
				(*(msg + msg_i) >= 'A' && *(msg + msg_i) <= 'Z'))
		{
			/*If its between a - m or A - M */
			if ((*(msg + msg_i) >= 'a' && *(msg + msg_i) <= 'm') ||
					(*(msg + msg_i) >= 'A' && *(msg + msg_i) <= 'M'))
				/*Then encode character to rot13*/
				*(msg + msg_i) += 13;
			else
				/*Otherwise decode it*/
				*(msg + msg_i) -= 13;
			msg_i++;
		}
		msg_i++;
	}
	/*There exist other way to use rot13[53] array*/
	return (msg);
}
