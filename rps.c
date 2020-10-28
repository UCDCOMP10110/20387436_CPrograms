#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i;
int randNum;
int seed;
int num;
int u;
int c;
u = 0;
c = 0;

printf("Please enter the random number generator seed.\n");

scanf("%d", &seed);
srand(seed);

for (i=0;i<10;i++)
{
printf("Please choose 1 for ROCK, 2 for PAPER or 3 for SCISSORS\n");
scanf("%d", &num);

randNum = rand()%3+1;


if (num == 1)
{
  printf("User choice is ROCK.\n");
}
else if(num == 2)
{
  printf("User choice is PAPER.\n");
}
else if (num == 3)
{
  printf("User choice is SCISSORS\n");
}

else
{
i = i - 1;
}

if (randNum == 1)
{
  printf("Computer choice is ROCK.\n");
}
else if (randNum == 2)
{
  printf("Computer choice is PAPER.\n");
}
else if (randNum == 3)
{
  printf("Computer choice is SCISSORS.\n");
}

if (randNum == num)
{
  printf("It's a draw. ");
  if (randNum == 1)
  {
    printf("Computer chose ROCK and User also chose ROCK.\n");
  }
  else if (randNum == 2)
  {
    printf("Computer chose PAPER and User also chose PAPER.\n");
  }
  else
  {
    printf("Computer chose SCISSORS and User also chose PAPER.\n");
  }
}
if (randNum == 1 && num == 3)
{
  c = c + 1;
  printf("Computer wins because ROCK beats SCISSORS.\n");
}
else if(randNum == 2 && num == 1)
{
  c = c + 1;
  printf("Computer wins because PAPER beats ROCK.\n");
}
else if(randNum == 3 && num == 2)
{
  c = c + 1;
  printf("Computer wins because SCISSORS beats PAPER.\n");
}
if (randNum == 1 && num == 2)
{
  u = u + 1 ;
  printf("User wins because PAPER beats ROCK.\n");
}
else if(randNum == 2 && num == 3)
{
 u = u + 1;
 printf("User wins because SCISSORS bests PAPER.\n");
}
else if(randNum == 3 && num == 1)
{
  u = u + 1;
  printf("User wins because PAPER beats ROCK.\n");
}

}
printf("In 10 games, computer won %d times and user won %d times.\n", c, u);

  return 0;
}
