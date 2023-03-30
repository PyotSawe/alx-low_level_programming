/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * @msg: ptr to msg
 *
 * Return: Converted msg to ALL UPPERCASE.
 */

char *string_toupper(char *msg)
{
	/*Mark the character of msg to start from*/
	int msg_index = 0;

	/*Start and Repeat Processing all characters of msg UNTIL '\0'*/
	while (*(msg + msg_index) != '\0')
	{
		/*Only if character is lowercase Alphabet*/
		if (*(msg + msg_index) >= 'a' && *(msg + msg_index) <= 'z')
			/*Then Capitalize it*/
			*(msg + msg_index) = *(msg + msg_index) ^ 32;
		/*Move to next character*/
		msg_index++;
	}
	/*Return UPPERCASED msg*/
	return (msg);
}
