#include "inventory.h"


bool SortByWeight(const Item lWeight, const Item rWeight)
{
	return lWeight.weight < rWeight.weight;
}


bool SortByName(const Item lName, const Item rName)
{
	return lName.Name < rName.Name;
}

void PrintInventory(std::vector<Item>& _inventory)
{
	std::cout << "L'inventaire contient : " << std::endl;

	for (Item &i: _inventory)
	{
		std::cout << "Nom : " << i.Name << ", Poids : " << i.weight << std::endl;
	}
}
void AddElementInventory(std::vector<Item>& _inventory, std::string _name, int _weight)
{
	_inventory.push_back({ _name, _weight });
}

void DeleteElementInventory(std::vector<Item>& _inventory, std::string _name)
{

	_inventory.erase(std::remove_if(_inventory.begin(), _inventory.end(), [&_name](const Item& item) { return item.Name == _name; })); 

}

void GetElementInventory(std::vector<Item>& _inventory)
{
	std::string _name;

	std::cout << "Que voulez-vous chercher ?" << std::endl;

	std::cin >> _name;

	for (Item& i : _inventory)
	{
		if (i.Name == _name)
		{
			std::cout << "Nom : " << i.Name << ", Poids : " << i.weight << std::endl;		
		}

	}
}


void SortInventory(std::vector<Item>& _inventory)
{
	std::cout << "\nVoulez-vous trier par nom ou poids ?" << std::endl;

	std::string temp;

	std::cin >> temp;

	if (temp == "poids")
	{
		sort(_inventory.begin(), _inventory.end(), SortByWeight);
	}
	else if (temp == "nom")
	{
		sort(_inventory.begin(), _inventory.end(), SortByName);
	}

}

void PrintTotalWeight(std::vector<Item>& _inventory)
{
	int temp = 0;

	for (Item& i : _inventory)
	{
		temp += i.weight;
	}

	std::cout << "Le poids total est de : " << temp << std::endl;
}

void PrintAverageWeight(std::vector<Item>& _inventory)
{
	int temp = 0;

	for (Item& i : _inventory)
	{
		temp += i.weight;
	}

	temp = temp / _inventory.size();

	std::cout << "Le poids moyen est de : " << temp << std::endl;

}

void PrintElementHeavier(std::vector<Item>& _inventory)
{
	std::cout << "Vous voulez savoir le nombre d'objets ayant un poids supérieur a : " << std::endl;

	int _min = 0;	

	std::cin >> _min;

	int temp = 0;

	for (Item& i : _inventory)
	{
		if (i.weight > _min)
		{
			temp++;
		}
			
	}

	std::cout << "Le nombre d'objet ayant un poids supérieur a " <<_min << " est de " << temp << std::endl;

}

void DynamicSort(std::vector<Item>& _inventory)
{
	std::cout << "Selon quoi voulez-vous trier (poids_sup, poids_moins, lettre)" << std::endl;

	std::string temp;

	std::cin >> temp;

	std::cout << temp << std::endl;

	if (temp == "poids_sup")
	{
		std::cout << "Donnez le poids minimum" << std::endl;

		int poidsMoins;

		std::cin >> poidsMoins;

		_inventory.erase(std::remove_if(_inventory.begin(), _inventory.end(), [poidsMoins](const Item& item) { return item.weight < poidsMoins; }), _inventory.end());

		sort(_inventory.begin(), _inventory.end(), SortByWeight);

		PrintInventory(_inventory);

	} 
	else if (temp == "poids_moins")
	{
		std::cout << "Donnez le poids maximun" << std::endl;

		int poidsMax;

		std::cin >> poidsMax;

		_inventory.erase(std::remove_if(_inventory.begin(), _inventory.end(), [poidsMax](const Item& item) { return item.weight > poidsMax; }), _inventory.end());

		sort(_inventory.begin(), _inventory.end(), SortByWeight);

		PrintInventory(_inventory);

	}
	else if (temp == "lettre")
	{
		std::cout << "Vous voulez les items qui commencent par quel lettre ?" << std::endl;

		char lettre;

		std::cin >> lettre;

		_inventory.erase(std::remove_if(_inventory.begin(), _inventory.end(), [lettre](const Item& item) { return item.Name[0] != lettre;  }), _inventory.end());

		sort(_inventory.begin(), _inventory.end(), SortByName);

		PrintInventory(_inventory);

 	}


}




