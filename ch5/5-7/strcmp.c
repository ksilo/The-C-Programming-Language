// strcmp: return <0 if d<s, 0 if d==s, >0 if d>s
int mstrcmp(char *d, char *s)
{
	for ( ; *d == *s; *d++, *s++)
		if (*d == '\0')
			return 0;
	return *d - *s;
}
