/**
 * cap_string - converts all First letters of String given to Capital letters
 * @s: input string to have all words capitalized
 *
 * Return: String with first Word capitalized
 */

char *cap_string(char *s)
{
	char words_sep[] = {' ', '\t', '\n', ',', ';', '.', '!'
		, '?', '"', '(', ')', '{', '}'};
	int words_sep_index;
	int s_index = 0;
	/**
	 * Start and Repeat Processing each character of string s
	 * given '\0' indicates the end of string
	 */
	while (*(s + s_index) != '\0')
	{
		/*For each character*/
		for (words_sep_index = 0; words_sep_index < 13; words_sep_index++)
		{
			/*Check if it is word separator character*/
			if (*(s + s_index) == words_sep[words_sep_index])
			{
				/*And if the Next character right next to it is lower alpha*/
				if ((*(s + (s_index + 1)) >= 'a') && (*(s + (s_index + 1)) <= 'z'))
					/*Then it means its Starting letter of Word And Can capitalize it*/
					/*By Xoring it with 32 to Make it UPPERCASE*/
					*(s + (s_index + 1)) = *(s + (s_index + 1)) ^ 32;
				/*Otherwise Get the next character to process*/
				break;
			}
		}
		s_index++;
	}
	return (s);
}
