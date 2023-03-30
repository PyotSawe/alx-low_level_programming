/**
 * _strcmp - compares two given strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: int defining difference btw first characters of the string
 */

int _strcmp(char *s1, char *s2)
{
	/*Mark index of both strings to start from*/
	int shared_index = 0;
	/*Start processing the strings*/
	while (*(s1 + shared_index) != '\0')
	{
		/*If their characters at this index are not same*/
		if (*(s1 + shared_index) != *(s2 + shared_index))/*Then return their differences*/
			return (*(s1 + shared_index) - *(s2 + shared_index));
		/*Move to next character*/
		shared_index++;
	}
	/*Always return zero for all other cases*/
	return (0);
}
