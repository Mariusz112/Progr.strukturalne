#include <stdio.h>

int porownaj ( char* str_1, wchar_t* str_2 )
{
	int i;

	for ( i = 0 ; str_1[ i ] != 0 && str_2[ i ] != 0 ; i += 1 )
	{
		if ( str_1[ i ] != str_2[ i ] )
		{
			return 0;
		}
	}

	if ( str_1[ i ] == str_2[ i ] )
	{
		return 1;
	}

	return 0;
}
int porownaj1 ( char* str_1, char* str_2 )
{
	int i;

	for ( i = 0 ; str_1[ i ] != 0 && str_2[ i ] != 0 ; i += 1 )
	{
		if ( str_1[ i ] != str_2[ i ] )
		{
			return 0;
		}
	}

	if ( str_1[ i ] == str_2[ i ] )
	{
		return 1;
	}

	return 0;
}


int main ()
{
    printf ("char \n");
	printf ( "%i \n", porownaj1( "Tekst", "inny_tekst" ) );
	printf ( "%i \n", porownaj1( "Tekst", "Tekst" ) );
	printf ("wchar_t \n");
	printf ( "%i \n", porownaj( "Tekst", "inny_tekst" ) );
    printf ( "%i \n", porownaj( "Tekst", "Tekst" ) );
	return 0;
}
