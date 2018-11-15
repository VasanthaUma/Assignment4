/* Assignment -4 PIG LATIN */
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string.h>
#include<ctype.h>
#include <cstring>
using namespace std;
void transilatePigLatin(char word[50]);
int main()
{
	system("color F0");
	char word[50];
	char pig[50] = "";
	char three[4] = "";
	char two[3] = "";
	char one[2] = "";
	int len;
	char answer;

	int i;
	len = strlen(word);
	do
	{
		cout << "Enter a word please:  	";
		cin.getline(word, 50);

		// converting word in to lower case
		for (i = 0; i < len; i++)
		{
			word[i] = tolower(word[i]);
		}
		cout << word << endl;
		transilatePigLatin(word);
		cout << "do you want to enter another word? enter Y to continue :   ";
		cin >> answer;

		// need to clear teh input buffer before asking for another word
		cin.ignore();
		cin.clear();

	} while (answer == 'Y' || answer == 'y');
	cout << endl;
	cout << "good bye!" << endl;
	cout << endl;
	system("pause");
	return 0;
}
void transilatePigLatin(char word[50])
{
	//char word[50];
	char pig[50] = "";
	char three[4] = "";
	char two[3] = "";
	char one[2] = "";
	int len;

	int i;
	len = strlen(word);
	/*compare two strings both need to be strings -
			so terminating with Null Character*/
	strncpy(one, word, 1);
	one[1] = '\0';
	strncpy(two, word, 2);
	two[2] = '\0';
	strncpy(three, word, 3);
	three[3] = '\0';
	if (isalpha(word[0]))
	{
		if (strcmp(two, "to") == 0 || strcmp(two, "of") == 0 ||
			strcmp(two, "or") == 0 || strcmp(two, "so") == 0 ||
			strcmp(two, "as") == 0 || strcmp(two, "on") == 0 ||
			strcmp(two, "an") == 0 || strcmp(two, "at") == 0 ||
			strcmp(three, "the") == 0 || strcmp(three, "nor") == 0 ||
			strcmp(three, "yet") == 0 || strcmp(three, "for") == 0 ||
			strcmp(three, "but") == 0 || strcmp(three, "and") == 0)
		{
			//cout << two << endl;
			//cout <<three<<endl;
		}
		else if (strcmp(two, "to") != 0 || strcmp(two, "of") != 0 ||
			strcmp(two, "or") != 0 || strcmp(two, "so") != 0 ||
			strcmp(two, "as") != 0 || strcmp(two, "on") != 0 ||
			strcmp(two, "an") != 0 || strcmp(two, "at") != 0 ||
			strcmp(three, "the") != 0 || strcmp(three, "nor") != 0 ||
			strcmp(three, "yet") != 0 || strcmp(three, "for") != 0 ||
			strcmp(three, "but") != 0 || strcmp(three, "and") != 0)
		{

			if (word[0] == 'a' || word[0] == 'e' ||
				word[0] == 'i' || word[0] == 'o' ||
				word[0] == 'u')
			{
				strcpy(pig, word);
				strcat(pig, "ay");
				cout << pig << endl;
			}
			else if (word[0] != 'a' || word[0] != 'e' ||
				word[0] != 'i' || word[0] != 'o' ||
				word[0] != 'u')
			{
				strcpy(pig, &word[1]);
				strncpy(one, word, 1);
				one[1] = '\0';
				strcat(pig, one);
				strcat(pig, "ay");
				cout << pig << endl;
				cout << endl;
			}

		}

	}
	else
		/*Checking the word starting with number or alphabet
		if number is going to display following message */
		cout << "Its start with number- Its not valid" << endl;
}