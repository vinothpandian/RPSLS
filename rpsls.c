#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * number_to_name(int number)
{
  switch(number)
  {
    case 0: return "rock";

    case 1: return "Spock";

    case 2: return "paper";

    case 3: return "lizard";

    case 4: return "scissors";

    default: return "Error";

  }
}

int name_to_number(char *name)
{
  if(strcmp(name,"rock") == 0)
  return 0;
  if(strcmp(name,"Spock") == 0)
	return 1;
  if(strcmp(name,"paper") == 0)
	return 2;
  if(strcmp(name,"lizard") == 0)
	return 3;
  if(strcmp(name,"scissors") == 0)
	return 4;
  else
  {
	printf("Error");
	return 5;
  }

}

void rpsls(char *guess)
{
 int player_number = name_to_number(guess);

 int comp_number = rand() % 5;

 printf("\nPlayer chooses : %s\n",number_to_name(player_number));
 printf("Computer chooses : %s\n",number_to_name(comp_number));

 if(player_number == 5)
	printf("Your choice is wrong.. Try again");
 else if(comp_number == player_number)
	printf("Computer and player ties\n");
 else if ((comp_number - player_number) % 5 < 3)
	printf("Computer wins\n");
 else
	printf("Player wins\n");

}

void main()
{
 char *player_choice;
 clrscr();

 printf("\nEnter your Choice : rock,Spock,paper,lizard,scissors CASE SENSITIVE\n\n");
 scanf("%s",player_choice);
 rpsls(player_choice);

 /* //test
 rpsls("rock");
 rpsls("Spock");
 rpsls("paper");
 rpsls("lizard");
 rpsls("scissors");
  */
 getch();
}