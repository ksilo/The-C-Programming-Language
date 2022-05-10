#include <string.h>
// qsort: sort v[left]...v[right] into increasing order
void mqsort(void *v[], int left, int right,
		int (*comp)(void *, void *))
{
	int i;
	int last;

	void swap(void *v[], int i, int j);
	int mstrcmp(char *, char *);

	if (left >= right)
		return;
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left+1; i <= right; i++)
		if ((*comp)(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	mqsort(v, last+1, right, comp);
	mqsort(v, left, last-1, comp); 
}
