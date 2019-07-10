#include <stdio.h>
#include <string.h>
void sifrele( int n, char *desifre)
{
	char suan;
	int i;

	for (i = 0; i < strlen(desifre); i++)
	{//Scans each letter of the message.
		suan= desifre[i];
		if (suan >= 'A' && suan <= 'Z')
		{
			suan = ((suan-'A')+n)%26+'A';
			desifre[i] = suan;
		}
		if (suan >= 'a' && suan <= 'z')
		{//Shifts all lowercase letters.
			suan = ((suan-'a')+n)%26+'a';
			desifre[i] = suan;
		}
	}
}


int main()
{

	char mesaj[100];
	int anahtar;


	printf("Sifrelemek istediginiz mesaji giriniz: ");
	scanf("%[^\n]s",&mesaj);
	printf("\nAnahtar degeri(Kaydirma miktari): ");
	scanf("%i",&anahtar);

	if (anahtar < 1 | anahtar > 25)
	{
		printf("Anahtar degerinin 1-25 arasinda oldugundan emin olun. Cikmak icin herhangi bir tusa basiniz.");
		getch();
		return 1;
	}


	sifrele(2, mesaj );


	printf("\nSifrelenmis mesaj: %s \nCikmak icin herhangi bir tusa basiniz.",mesaj);


	getch();
	return 0;
}



