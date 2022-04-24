// swap: interchange v[i] and v[j]
void swap(char *v[], int i, char j)
{
	char *temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
