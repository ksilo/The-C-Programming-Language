// binsearch: find x in v[0] <= v[1] <= ... <= v[n-1]
int binsearch(int x, int *v, int size)
{
	int low = 0;
	int high = size - 1;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return v[mid];
	}
	return -1;
}	
