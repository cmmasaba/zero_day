#include "encrypt.h"

/**
 * encrypt - encypts/decrypts a message using XOR method
 * @message: the string or file to be encrypted
 *
 */

void encrypt(char *message)
{
	/*char c;*/

	while (*message)
	{
		*message = *message ^ 31;
		message++;
	}
}
