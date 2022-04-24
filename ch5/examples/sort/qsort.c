// qsort: sort v[left]...v[right] into increasing order
void qsort(char *v[], int left, int right)
{
	int i;
	int last;

	void swap(char *v[], int i, int j);
	int strcmp(char *s, char *t);

	if (left >= right)
		return;
	swap(v, left, (left + right)/2);
	last = left;
	for (i = 0; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, last+1, right);
	qsort(v, left, last-1); 
}
