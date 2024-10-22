#include "tournament.h"


bool SortByWeight(const Player lScore, const Player rScore)
{
	return lScore.score < rScore.score;
}


bool SortByName(const Player lName, const Player rName)
{
	return lName.name < rName.name;
}

void PrintPlayers(std::vector<Player>& _players)
{
	for (Player& i : _players)
	{
		std::cout << "Joueur " << i.name << " avec un score de " << i.score << std::endl;
	}
}

void AddPlayer(std::vector<Player>& _players, std::string _name, int _score)
{

	for (Player& i : _players)
	{
		if (i.name == _name || i.score == _score)
		{
			std::cout << "Doublon detecte ! Veuillez rentrer un score et un nom unique" << std::endl;
			return;
		}
	}
	
	_players.push_back({ _name, _score });

}

void DeletePlayer(std::vector<Player>& _players)
{
	std::cout << "Voulez vous enlever un joueur selon son score ou son nom ?" << std::endl;

	std::string temp;

	std::cin >> temp;

	if (temp == "nom")
	{
		std::cout << "Veuillez rentrer le nom du joueur que vous voulez supprimer" << std::endl;

		std::string name;

		std::cin >> name;

		_players.erase(std::remove_if(_players.begin(), _players.end(), [&name](const Player& player) { return player.name == name; }));
	}
	else if (temp == "score")
	{
		std::cout << "Veuillez rentrer le score" << std::endl;

		int score;

		std::cin >> score;

		_players.erase(std::remove_if(_players.begin(), _players.end(), [&score](const Player& player) { return player.score == score; }));
	}
}
void GetPlayer(std::vector<Player>& _players)
{
	std::cout << "Vous voulez connaitre les informations de quel joueur ?" << std::endl;

	std::string name;

	std::cin >> name;

	for (Player& i : _players)
	{
		if (i.name == name)
		{
			std::cout << "Nom : " << i.name << " Score : " << i.score << std::endl;
		}

	}

}
void DynamicSort(std::vector<Player>& _players)
{

	std::cout << "\nVoulez-vous trier par nom ou score ?" << std::endl;

	std::string temp;

	std::cin >> temp;

	if (temp == "score")
	{
		sort(_players.begin(), _players.end(), SortByWeight);
	}
	else if (temp == "nom")
	{
		sort(_players.begin(), _players.end(), SortByName);
	}


}