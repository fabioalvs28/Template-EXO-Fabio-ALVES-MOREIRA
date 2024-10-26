#include "projectiles.h"
#include "arrows.h"
#include "nono.h"
#include "Character.h"

int main()
{
	Projectiles<int> Arrow(5, 2, 3, 4, 1, 2, 0);
	Projectiles<float> Nono(1.2f, 10.5f, 8.3f, 4.5f, 20.0f, 2.0f, 10.0f);
	Projectiles<double> Rock(1.2, 2.5, 3.4, 8.5, 3.4, 3.5, 1);

	Arrow.PrintCoordinates();
	Nono.PrintCoordinates();
	Rock.PrintCoordinates();

	Arrow.Move();
	Nono.Move();
	Rock.Move();
	
	Character<int> Elouan(5, 0, 0);
	Character<int> AntoineB(5, 10, 10);
	Character<int> AntoineD(1, 7, 10);
	Character<int> NonoAsticot(100, 1, 1);
	Character<int> Romain(1000, 1000, 1000);



	int vie[] = {Elouan.HP,AntoineB.HP,AntoineD.HP,NonoAsticot.HP, Romain.HP};
	int sizeVie = sizeof(vie) / sizeof(vie[0]);
	float vieFloat[] = {0.7f ,5.9f , 47.2f ,4.5f ,7.9f};
	int sizeVieFloat = sizeof(vieFloat) / sizeof(vieFloat[0]);


	calculStatistique(vie, sizeVie);
	calculStatistique(vieFloat , sizeVieFloat);

	return 0;
};