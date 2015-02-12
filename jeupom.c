  1 #include<stdio.h>
  2 #include<stdlib.h>
  3 #include<time.h>
  4
  5
  6
  7 // Proposer enregistrement du nom des joueurs au debut de partie..
  8 // Faire un compteur.
  9 // Ajouter une IA a l'ordinateur sur ONE Player.
 10 // Et enregistrer le nombre de coups
 11 // Enregistrement meilleurs performances du niveau correspondant pour joueur enregistre.
 12
 13 void    ft_menu()
 14 {
 15         int choixmenu = 0;
 16
 17         printf("\n=== Welcome to the POM game. ===\n\n");
 18         printf("= Please choose an option below. =\n\n");
 19         printf("-1- Game's rules.\n");
 20         printf("-2- ONE Player.\n");//Proposer selection de niveau "easy""medium""difficult".
 21         printf("-3- VS Computer\n");
 22         printf("-4- TWO Players.\n");//"easy""medium""difficult"--cacher nbrentre-- voir en ligne sur website plus tard
 23         printf("-5- Best scores.\n");
 24         printf("-6- QUIT Game.\n\n");
 25
 26         scanf("%d", &choixmenu);
 27         printf("You picked the %d option.\n\n", &choixmenu);
 28
 29
 30 // Comment indiquer sur quelle fonction engager pour acceder a l'option choisie??!
 31 }
 32
 33 void    ft_guess()  // Pour le One Player en Medium
 34 {
 35         int nmbentre = 0, nbrmystere = 0;
 36         int const MIN = 1, MAX = 100;
 37
 38         srand ( time (NULL) ) ;
 39         nbrmystere = ( rand() % ( MAX - MIN + 1)) + MIN;
 40
 41
 42         do
 43         {
 44                 printf("Guess what is the correct number between 1 et 100 ?\n");
 45                 scanf("%d", &nmbentre);
 46                 if ( nmbentre < 1)
 47                 {
 48                         printf("You are out of scope!\n");
 49                 }
 50                 else if ( nmbentre > 100)
 51                 {
 52                         printf("You are out of scope!\n");
 53                 }
 54                 else if ( nmbentre > nbrmystere )
 55                 {
 56                         printf("Sorry! The correct number is smaller.\n");
 57                 }
 58                 else if (nmbentre < nbrmystere )
 59                 {
 60                         printf("Sorry! The correct number is bigger.\n");
 61                 }
 62                 else
 63                 printf("Congratulation! This is the correct number.\n");
 64
 65         }
 66         while ( nmbentre != nbrmystere );
 67
 68 }
 69
 70
 71 int     main(int argc, char* argv[])
 72 {
 73
 74         ft_menu();
 75         ft_guess();
 76         return 0;
 77 }
 78
