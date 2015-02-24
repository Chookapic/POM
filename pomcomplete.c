#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int	main(int argc, char* argv[])
{
	int nbchoisi = 0, nbmyster = 0, nbchoisi1 = 0, nbchoisi2 = 0, nbmyster1 = 0, nbmyster2 = 0;;
	int Min = 1, Max = 100;
	int replay = 1, quit = 1, menu = 0, smenu = 0;
	int level = 0, y = 0;
	int y1 = 0, y2 = 0;
	int nb2joueurs = 0, J1 = 0, J2 = 0;

/*
	int nbchoisi1 = 0, nbchoisi2 = 0, nbmyster1 = 0, nbmyster2 = 0;
	int Min = 1, Max = 100;
	int smenu = 0, quit = 1, replay = 1;
	int level = 0, y1 = 0, y2 = 0;
	int nb2joueurs = 0, J1 = 0, J2 = 0;


*/

	
	while ( quit != 0)
	{
		printf("\n===Menu===\n");
		printf("----------\n");
		printf("-1- One player\n");
		printf("-2- Two players\n");
		printf("-3- Quit\n");
		printf("\nPlease select an option by its number:\n");
		scanf("%d", &menu);


		switch ( menu )
		{

/*ONE PLAYER*/		case 1:
				printf("You selected ONE Player!\n");
				printf("Be ready!\n\n");
				printf("What level would yould you like to play?\n");
				printf("-1- Press 1 for Easy\n");
				printf("-2- Press 2 for Medium\n");
				printf("-3- Press 3 for Hard\n");
	/*Selecting level*/			scanf("%d", &level);
					switch (level)
					{
				/*Easy*/	case 1:
							//CODE
							
							while ( replay != 0)
							{
								srand(time(NULL));
								nbmyster = (rand() % (Max - Min + 1)) + Min;
								printf("\nWelcome to level EASY\n");
								do
								{
									printf("\nFind the mystery number between 1 & 100:\n\n");
									scanf("%d", &nbchoisi);
									y++;
									if ( (nbchoisi < 1) || (nbchoisi > 100))
										printf("You are out of scope!\n");
									else if ( nbchoisi > nbmyster)
										printf("It is smaller.\n");
									else if ( nbchoisi < nbmyster)
										printf("It is bigger.\n");
									else
									{
										printf("Good! You found it.\n");
										printf("You found it in %d shot(s).\n", y);
										y = 0;
									}	
								}
								while ( nbchoisi != nbmyster);		
								printf("\nWould you like to replay?\n");
								printf("-0- No\n");
								printf("-1- Yes\n");
								scanf("%d", &replay);
							}
						break;

				/*Medium*/	case 2:
							//CODE
							Min = 1;
							Max = 1000;
							replay = 1;
							while ( replay != 0)
							{
								srand(time(NULL));
								nbmyster = (rand() % (Max - Min + 1)) + Min;
								printf("\nWelcome to level Medium\n");
								do
								{
									printf("\nFind the mystery number between 1 & 1000:\n\n");
									scanf("%d", &nbchoisi);
									y++;
									if ( (nbchoisi < 1) || (nbchoisi > 1000))
										printf("You are out of scope!\n");
									else if ( nbchoisi > nbmyster)
										printf("It is smaller.\n");
									else if ( nbchoisi < nbmyster)
										printf("It is bigger.\n");
									else
									{
										printf("Good! You found it.\n");
										printf("You found it in %d shot(s).\n", y);
										y = 0;
									}	
								}
								while ( nbchoisi != nbmyster);		
								printf("\nWould you like to replay?\n");
								printf("-0- No\n");
								printf("-1- Yes\n");
								scanf("%d", &replay);
							}
						break;


				/*Hard*/	case 3:
							//CODE
							Min = 1;
							Max = 10000;
							replay = 1;
							while ( replay != 0)
							{
								srand(time(NULL));
								nbmyster = (rand() % (Max - Min + 1)) + Min;
								printf("\nWelcome to level Hard\n");
								do
								{
									printf("\nFind the mystery number between 1 & 10000:\n\n");
									scanf("%d", &nbchoisi);
									y++;
									if ( (nbchoisi < 1) || (nbchoisi > 10000))
										printf("You are out of scope!\n");
									else if ( nbchoisi > nbmyster)
										printf("It is smaller.\n");
									else if ( nbchoisi < nbmyster)
										printf("It is bigger.\n");
									else
									{
										printf("Good! You found it.\n");
										printf("You found it in %d shot(s).\n", y);
										y = 0;
									}	
								}
								while ( nbchoisi != nbmyster);		
								printf("\nWould you like to replay?\n");
								printf("-0- No\n");
								printf("-1- Yes\n");
								scanf("%d", &replay);
							}
						break;

						
				/*O K U*/	default:
							printf("Please pick a correct choice.\n\n");
						break;
					}

			break;


/*TWO PLAYERS*/		case 2:
				printf("You guys picked TWO players!\n");
				printf("Let's rumble!\n\n");
					{
							while ( quit != 0)
	{
		printf("\nWelcome to the 2 players mode:\n\n");
		printf("You will play one after the other...\n");
		printf("And then at the end we will tell you who won...\n");
		printf("\n");
		
		
		printf("First pick your level:\n\n");
		printf("-1- For Easy\n");
		printf("-2- For Medium\n");
		printf("-3- For Hard\n");
		scanf("%d", &level);


/*2P LEVELs*/		switch ( level )
		{
/*2P easy*/			case 1:
			{
				printf("Welcome guys in the EASY level\n");
				printf("You guys will have to each pick a secret number between 1 and 100\n");
				printf("And your opponent will have to find this mystery number\n");
				printf("Good luck to you two!\n\n");
		
				//printf("Player 1, please select any number between 1 and 100:\n");
				//scanf("%d", nbchoisi1);
				do
				{
/* P1 pick, P2 look*/printf("*Player 1*, please select any number between 1 and 100:\n\n");
					scanf("%d", &nbmyster1);
					system("clear");
					y2 = 0;


					if ( nbmyster1 > 100 || nbmyster1 < 1 )
						printf(" You have to pick a number between 1 & 100 please.\n\n");
					else
					{
						while ( nbchoisi2 != nbmyster1 )
						{
							printf("**Player 2**, please find the mystery number between 1 and 100:\n\n");
							scanf("%d", &nbchoisi2);
							y2++;
							
							if ( nbchoisi2 > nbmyster1 )
								printf("Mystery number picked by *Player 1* is smaller.\n\n");
							else if ( nbchoisi2 < nbmyster1 )
								printf("Mystery number picked by *Player 1* is bigger\n\n");
							else if ( nbchoisi2 > 100 || nbchoisi2 < 1)
								printf("**Player 2** you are not between the limits.\n\n");
							else
							{
								printf("--Well done **Player 2**! You found it.\n\n");
								printf("You recquired %d shot(s) to find it.--\n\n", y2);
							}
						}
					}
					
/*P2 pick, P1 look*/			printf("**Player 2**, please select any number between 1 and 100:\n\n");
					scanf("%d", &nbmyster2);
					system("clear");
					y1 = 0;

					if ( nbmyster2 > 100 || nbmyster2 < 1 )
						printf(" You have to pick a number between 1 & 100 please.\n\n");
					else
					{
						while ( nbchoisi1 != nbmyster2 )
						{
							printf("*Player 1*, please find the mystery number between 1 and 100:\n\n");
							scanf("%d", &nbchoisi1);
							y1++;
							
							if ( nbchoisi1 > nbmyster2 )
								printf("Mystery number picked by **Player 2** is smaller.\n\n");
							else if ( nbchoisi1 < nbmyster2 )
								printf("Mystery number picked by **Player 2** is bigger\n\n");
							else if ( nbchoisi1 > 100 || nbchoisi1 < 1)
								printf("*Player 1* you are not between the limits.\n\n");
							else
							{
								
								printf("--Well done *Player 1*! You found it.\n\n");
								printf("You recquired %d shot(s)to find it.--\n\n", y1);
							}
						}
					}					
				//comparer resultats et proposer revanche

/*Compar results*/			if ( y1 < y2 )
						printf("\t-Congratulations! *Player 1* won.-\n\n");
					else if ( y1 > y2 )
						printf("\t-Congratulations! **Player 2** won.-\n\n");
					else
						printf("-- Hahaha!\n You guys are even.--\n\n");

					printf("Would you like to replay?\n");
					printf("-0- No it's enough for now.\n");
					printf("-1- Yes, lets rumble even further.\n");
					scanf("%d", &replay);
				}
				while ( replay != 0); 
	
			}
			break;


/*2P medium*/			case 2:
			{
				printf("Welcome guys in the MEDIUM level\n");
				printf("You guys will have to each pick a secret number between 1 and 1000\n");
				printf("And you opponent will have to find this number\n");
				printf("Good luck to you two!\n");

				do
				{
/* P1 pick, P2 look*/printf("*Player 1*, please select any number between 1 and 1000:\n\n");
					scanf("%d", &nbmyster1);
					system("clear");
					y2 = 0;


					if ( nbmyster1 > 1000 || nbmyster1 < 1 )
						printf(" You have to pick a number between 1 & 100 please.\n\n");
					else
					{
						while ( nbchoisi2 != nbmyster1 )
						{
							printf("**Player 2**, please find the mystery number between 1 and 100:\n\n");
							scanf("%d", &nbchoisi2);
							y2++;
							
							if ( nbchoisi2 > nbmyster1 )
								printf("Mystery number picked by *Player 1* is smaller.\n\n");
							else if ( nbchoisi2 < nbmyster1 )
								printf("Mystery number picked by *Player 1* is bigger\n\n");
							else if ( nbchoisi2 > 1000 || nbchoisi2 < 1)
								printf("**Player 2** you are not between the limits.\n\n");
							else
							{
								printf("--Well done **Player 2**! You found it.\n\n");
								printf("You recquired %d shot(s) to find it.--\n\n", y2);
							}
						}
					}
					
/*P2 pick, P1 look*/			printf("**Player 2**, please select any number between 1 and 1000:\n\n");
					scanf("%d", &nbmyster2);
					system("clear");
					y1 = 0;

					if ( nbmyster2 > 1000 || nbmyster2 < 1 )
						printf(" You have to pick a number between 1 & 1000 please.\n\n");
					else
					{
						while ( nbchoisi1 != nbmyster2 )
						{
							printf("*Player 1*, please find the mystery number between 1 and 1000:\n\n");
							scanf("%d", &nbchoisi1);
							y1++;
							
							if ( nbchoisi1 > nbmyster2 )
								printf("Mystery number picked by **Player 2** is smaller.\n\n");
							else if ( nbchoisi1 < nbmyster2 )
								printf("Mystery number picked by **Player 2** is bigger\n\n");
							else if ( nbchoisi1 > 1000 || nbchoisi1 < 1)
								printf("*Player 1* you are not between the limits.\n\n");
							else
							{
								
								printf("--Well done *Player 1*! You found it.\n\n");
								printf("You recquired %d shot(s)to find it.--\n\n", y1);
							}
						}
					}					
				//comparer resultats et proposer revanche

/*Compar results*/			if ( y1 < y2 )
						printf("\t-Congratulations! *Player 1* won.-\n\n");
					else if ( y1 > y2 )
						printf("\t-Congratulations! **Player 2** won.-\n\n");
					else
						printf("-- Hahaha!\n You guys are even.--\n\n");

					printf("Would you like to replay?\n");
					printf("-0- No it's enough for now.\n");
					printf("-1- Yes, lets rumble even further.\n");
					scanf("%d", &replay);
				}
				while ( replay != 0); 
	
			}
			break;



/*2P hard*/			case 3:
			{
				printf("Welcome guys in the HARD level\n");
				printf("You guys will have to each pick a secret number between 1 and 10000\n");
				printf("And your opponent will have to find this number\n");
				printf("Good luck to you two!\n");


				do
				{
/* P1 pick, P2 look*/printf("*Player 1*, please select any number between 1 and 10000:\n\n");
					scanf("%d", &nbmyster1);
					system("clear");
					y2 = 0;


					if ( nbmyster1 > 10000 || nbmyster1 < 1 )
						printf(" You have to pick a number between 1 & 10000 please.\n\n");
					else
					{
						while ( nbchoisi2 != nbmyster1 )
						{
							printf("**Player 2**, please find the mystery number between 1 and 10000:\n\n");
							scanf("%d", &nbchoisi2);
							y2++;
							
							if ( nbchoisi2 > nbmyster1 )
								printf("Mystery number picked by *Player 1* is smaller.\n\n");
							else if ( nbchoisi2 < nbmyster1 )
								printf("Mystery number picked by *Player 1* is bigger\n\n");
							else if ( nbchoisi2 > 10000 || nbchoisi2 < 1)
								printf("**Player 2** you are not between the limits.\n\n");
							else
							{
								printf("--Well done **Player 2**! You found it.\n\n");
								printf("You recquired %d shot(s) to find it.--\n\n", y2);
							}
						}
					}
					
/*P2 pick, P1 look*/			printf("**Player 2**, please select any number between 1 and 10000:\n\n");
					scanf("%d", &nbmyster2);
					system("clear");
					y1 = 0;

					if ( nbmyster2 > 10000 || nbmyster2 < 1 )
						printf(" You have to pick a number between 1 & 10000 please.\n\n");
					else
					{
						while ( nbchoisi1 != nbmyster2 )
						{
							printf("*Player 1*, please find the mystery number between 1 and 10000:\n\n");
							scanf("%d", &nbchoisi1);
							y1++;
							
							if ( nbchoisi1 > nbmyster2 )
								printf("Mystery number picked by **Player 2** is smaller.\n\n");
							else if ( nbchoisi1 < nbmyster2 )
								printf("Mystery number picked by **Player 2** is bigger\n\n");
							else if ( nbchoisi1 > 10000 || nbchoisi1 < 1)
								printf("*Player 1* you are not between the limits.\n\n");
							else
							{
								
								printf("--Well done *Player 1*! You found it.\n\n");
								printf("You recquired %d shot(s)to find it.--\n\n", y1);
							}
						}
					}					
				//comparer resultats et proposer revanche

/*Compar results*/			if ( y1 < y2 )
						printf("\t-Congratulations! *Player 1* won.-\n\n");
					else if ( y1 > y2 )
						printf("\t-Congratulations! **Player 2** won.-\n\n");
					else
						printf("-- Hahaha!\n You guys are even.--\n\n");

					printf("Would you like to replay?\n");
					printf("-0- No it's enough for now.\n");
					printf("-1- Yes, lets rumble even further.\n");
					scanf("%d", &replay);
				}
				while ( replay != 0); 
	

			}
			break;
	


			default:
				printf("Pick a correct number please!\n\n");
		}
	

		printf("Would you like to stay on the 2 Players Mode?\n");
		printf("-0- No, have  better things to do...\n");
		printf("-1- Sure, that is very fun mode.\n");
		scanf("%d", &quit);
	}



			break;


/*QUIT*/		case 3:
				printf("You obviously wanna get a life...\n");
				printf("Are you sure ?\n\n");
				printf("If you are sure select\n");
				printf("-0- To enjoy life for real\n");
				printf("-1- To keep playing\n");
				scanf("%d", &quit);				
			break;


/*Exception INT*/	default:
				printf("This is not a correct option.\n");
				printf("Please select a correct choice.\n\n");
			break;

		}
		
	}
	return 0;
}
}
