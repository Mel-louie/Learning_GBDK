/*################*/
/*#    My 1st    #*/
/*#    GB GAME   #*/
/*################*/

#include "../includes/game.h"

void	main(void) {

//	splash_screen();
//	HIDE_BKG;
//	title_screen();
//	clear_title_screen();

	sprites		pl;

	pl.o = 0;
	init_game();
	while (1) {
		game(&pl);
	}
}
