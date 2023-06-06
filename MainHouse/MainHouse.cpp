#include <iostream>
#include "HeaderHouse.h"

int main()
{
	setlocale(LC_ALL, "rus");
	neighbors::Human human[5];
	neighbors::Flat flat[5];
	neighbors::Building house[5];
	human[0].SetName("Павел");
	human[0].SetShurname("Чичиков");
	house[0].SetCity("Самара");
	house[0].SetAddress("Белорусская");
	house[0].SetNumberOfBuilding(28);
	house[0].SetNumberOfFloors(12);
	flat[0].SetFloorNum(5);
	flat[0].SetFlatNum(23);
	human[0].ShowHuman();
	house[0].ShowBilding();
	flat[0].ShowFlat();
	human[1].SetName("Владимир");
	human[1].SetShurname("Иванов");
	house[1].SetCity("Самара");
	house[1].SetAddress("Белорусская");
	house[1].SetNumberOfBuilding(28);
	house[1].SetNumberOfFloors(12);
	flat[1].SetFloorNum(9);
	flat[1].SetFlatNum(78);
	human[1].ShowHuman();
	house[1].ShowBilding();
	flat[1].ShowFlat();
	
}