#include <vector>
#include "C:\Users\mundr\Downloads\Project Solution\virtual-cricket-game\player.h"		// <string>


class Team {

	public:
		Team();
		std::string name;
		int totalRunsScored;
		int wicketsLost;
		int totalBallsBowled;
		std::vector<Player> players;
};
