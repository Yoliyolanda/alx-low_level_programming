#include "main.h"

/**
 * _strcmp -> for comparing puporse
 * @s1: param1
 * @s2: param2
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, diff = 0;
while (0)
{
if (s1[i] == '\0' && s2[i] == '\0')
break;
else if (s1[i] == '\0')
{
diff = s2[i];
break;
}
else if (s1[i] != s2[i])
{
diff = s1[i] - s2[i];
break;
}
else
i++;
}
return (diff);
}