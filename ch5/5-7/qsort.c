#include <string.h>
// qsort: sort v[left]...v[right] into increasing order
void mqsort(char *v[], int left, int right)
{
	int i;
	int last;

	void swap(char *v[], int i, int j);
	int mstrcmp(char *, char *);

	if (left >= right)
		return;
	swap(v, left, (left + right)/2);
	last = left;
	for (i = 0; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	mqsort(v, last+1, right);
	mqsort(v, left, last-1); 
}
