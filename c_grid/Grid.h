#if !defined(GRID_H_INCLUDED)
#define GRID_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<vector<int>> grid;

/**
 * A grid object allows players to place token on the grid, and checks when three tokens are aligned.
 * 
 * \author Anatole de Chauveron
 * \date 09.06.2021
*/
class Grid {
    public:

        /**
         * Construct a tic_tac_toe_grid.
         * 
         * \author Anatole de Chauveron
         * \date 09.06.2021
        */
        Grid();

        /**
         * Function that checks if the location (x, y) is available, if a player has not already placed a token on it.
         * \param x The x axes
         * \param y The y axes
         * \return True if available, False if not
         * 
         * \author Anatole de Chauveron
         * \date 09.06.2021
        */
        bool is_available_location(int x, int y);

        /**
         * Place a token at the (x, y) position
         * \param x The x axes
         * \param y The y axes
         * \param player_token The player token
         * \return True if action was done, False if not
         * 
         * \author Anatole de Chauveron
         * \date 09.06.2021
        */
        bool make_action(int x, int y, int player_token);
        
        /**
         * Check on a grid if three tokens are aligned
         * \return True if game over, False if not
         * 
         * \author Anatole de Chauveron
         * \date 09.06.2021
        */
        bool is_game_over() const;
        
        /**
         * Print a grid
         * 
         * \author Anatole de Chauveron
         * \date 09.06.2021
        */
        void print() const;

    private:

        grid ttt_grid;
        int nb_actions_done;
};

#endif // GRID_H_INCLUDED
