#include <iostream>

using namespace std;

bool CheakAnagram(char a[], char g[])
{
	int sizeA = sizeof(a);
	int sizeG = sizeof(g);

	if (sizeA != sizeG)
	{
		return false;
	}

	char ana[sizeof(a)];
	char gram[sizeof(g)];

	int i,k;

	for (i = 0; i < sizeA; i++)
		ana[i] = a[i];
	for (i = 0; i < sizeG; i++)
		gram[i] = g[i];

	for (i = 0; i < sizeA; i++)
	{
		for (k = i; k < sizeG; k++)
		{
			if (ana[i] == gram[k])
			{
				gram[k] = gram[i];
				break;
			}
		}
		if (k == sizeG)
			return false;
	}

	return true;
}

int main()
{
	char ana[] = "rata";
	char gram[] = "agtr";

	cout<< CheakAnagram(ana, gram);

}