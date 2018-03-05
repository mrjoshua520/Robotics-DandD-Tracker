#include "stdafx.h"
#include "Single_Items.h"


Single_Items::Single_Items()
{
}


Single_Items::~Single_Items()
{
}

void Single_Items::Set_Tool()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{
		tool = "an abacus";
	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 8)
	{
		tool = "a broom";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 12)
	{
		tool = "a bell";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 16)
	{
		tool = "a bucket";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 20)
	{
		tool = "10 feet of chain";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 24)
	{
		tool = "a crowbar";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 28)
	{
		tool = "a grappling hook";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		tool = "a hammer";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		tool = "a sledge hammer";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		tool = "an hourglass";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 44)
	{
		tool = "a hunting trap";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 48)
	{
		tool = "a 10 foot ladder";
	}
	else if (Dice_Roll >= 49 && Dice_Roll <= 52)
	{
		tool = "a lock";
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 56)
	{
		tool = "a magnifying glass";
	}
	else if (Dice_Roll >= 57 && Dice_Roll <= 60)
	{
		tool = "manacles";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 64)
	{
		tool = "a mirror";
	}
	else if (Dice_Roll >= 65 && Dice_Roll <= 68)
	{
		tool = "a pickaxe";
	}
	else if (Dice_Roll >= 69 && Dice_Roll <= 72)
	{
		tool = "a 10 foot pole";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 76)
	{
		tool = "a portable ram";
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 80)
	{
		tool = "50ft of hemp rope";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 84)
	{
		tool = "50ft of silk rope";
	}
	else if (Dice_Roll >= 85 && Dice_Roll <= 88)
	{
		tool = "a shovel";
	}
	else if (Dice_Roll >= 89 && Dice_Roll <= 92)
	{
		tool = "a spyglass";
	}
	else if (Dice_Roll >= 93 && Dice_Roll <= 96)
	{
		tool = "a tinderbox";
	}
	else if (Dice_Roll >= 97 && Dice_Roll <= 100)
	{
		tool = "a waterskin";
	}
}
void Single_Items::Set_Armor()
{
	int Dice_Roll;
	const int Dice_Max = 103;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 8)
	{
		armor = "padded armor";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 16)
	{
		armor = "leather armor";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 24)
	{
		"armor = studded leather";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 32)
	{
		armor = "hide armor";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 40)
	{
		armor = "a chain shirt";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 48)
	{
		armor = "scale mail";
	}
	else if (Dice_Roll >= 49 && Dice_Roll <= 56)
	{
		armor = "a breastplate";
	}
	else if (Dice_Roll >= 57 && Dice_Roll <= 64)
	{
		armor = "halfplate";
	}
	else if (Dice_Roll >= 65 && Dice_Roll <= 72)
	{
		armor = "ring mail";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 80)
	{
		armor = "chain mail";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 88)
	{
		armor = "splint armor";
	}
	else if (Dice_Roll >= 89 && Dice_Roll <= 96)
	{
		armor = "full plate";
	}
	else if (Dice_Roll >= 97 && Dice_Roll <= 104)
	{
		armor = "shield";
	}
}
void Single_Items::Set_Weapon()
{
	int Dice_Roll;
	const int Dice_Max = 148;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{
		weapon = "a club";
	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 8)
	{
		weapon = "a dagger";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 12)
	{
		weapon = "a greatclub";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 16)
	{
		weapon = "a handaxe";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 20)
	{
		weapon = "a javelin";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 24)
	{
		weapon = "a light hammer";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 28)
	{
		weapon = "a mace";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		weapon = "a quarterstaff";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		weapon = "a sickle";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		weapon = "a spear";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 44)
	{
		weapon = "a light crossbow";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 48)
	{
		weapon = "a dart";
	}
	else if (Dice_Roll >= 49 && Dice_Roll <= 52)
	{
		weapon = "a shortbow";
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 56)
	{
		weapon = "a sling";
	}
	else if (Dice_Roll >= 57 && Dice_Roll <= 60)
	{
		weapon = "a battleaxe";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 64)
	{
		weapon = "a flail";
	}
	else if (Dice_Roll >= 65 && Dice_Roll <= 68)
	{
		weapon = "a glaive";
	}
	else if (Dice_Roll >= 69 && Dice_Roll <= 72)
	{
		weapon = "a greataxe";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 76)
	{
		weapon = "a greatsword";
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 80)
	{
		weapon = "a halberd";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 84)
	{
		weapon = "a lance";
	}
	else if (Dice_Roll >= 85 && Dice_Roll <= 88)
	{
		weapon = "a longsword";
	}
	else if (Dice_Roll >= 89 && Dice_Roll <= 92)
	{
		weapon = "a maul";
	}
	else if (Dice_Roll >= 93 && Dice_Roll <= 96)
	{
		weapon = "a morningstar";
	}
	else if (Dice_Roll >= 97 && Dice_Roll <= 100)
	{
		weapon = "a pike";
	}
	else if (Dice_Roll >= 101 && Dice_Roll <= 105)
	{
		weapon = "a rapier";
	}
	else if (Dice_Roll >= 106 && Dice_Roll <= 109)
	{
		weapon = "a scimitar";
	}
	else if (Dice_Roll >= 110 && Dice_Roll <= 113)
	{
		weapon = "a shortsword";
	}
	else if (Dice_Roll >= 114 && Dice_Roll <= 117)
	{
		weapon = "a trident";
	}
	else if (Dice_Roll >= 118 && Dice_Roll <= 121)
	{
		weapon = "a war pick";
	}
	else if (Dice_Roll >= 122 && Dice_Roll <= 125)
	{
		weapon = "a warhammer";
	}
	else if (Dice_Roll >= 126 && Dice_Roll <= 129)
	{
		weapon = "a whip";
	}
	else if (Dice_Roll >= 130 && Dice_Roll <= 133)
	{
		weapon = "a blowgun";
	}
	else if (Dice_Roll >= 134 && Dice_Roll <= 137)
	{
		weapon = "a heavy crossbow";
	}
	else if (Dice_Roll >= 138 && Dice_Roll <= 141)
	{
		weapon = "a hand crossbow";
	}
	else if (Dice_Roll >= 142 && Dice_Roll <= 145)
	{
		weapon = "a longbow";
	}
	else if (Dice_Roll >= 146 && Dice_Roll <= 149)
	{
		weapon = "a net";
	}
}
void Single_Items::Set_Potion()
{
	int Dice_Roll;
	const int Dice_Max = 112;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{
		potion = "a potion of healing";
	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 8)
	{
		potion = "a potion of climbing";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 12)
	{
		potion = "a potion of greater healing";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 16)
	{
		potion = "a potion of fire breath";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 20)
	{
		potion = "a potion of resistance";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 24)
	{
		potion = "a potion of animal friendship";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 28)
	{
		potion = "a potion of hill giant strength";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		potion = "a potion of growth";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		potion = "a potion of water breathing";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		potion = "a potion of poison";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 44)
	{
		potion = "a potion of superior healing";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 48)
	{
		potion = "a potion of clairvoyance";
	}
	else if (Dice_Roll >= 49 && Dice_Roll <= 52)
	{
		potion = "a potion of diminution";
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 56)
	{
		potion = "a potion of gaseous form";
	}
	else if (Dice_Roll >= 57 && Dice_Roll <= 60)
	{
		potion = "a potion of frost giant strength";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 64)
	{
		potion = "a potion of stone giant strength";
	}
	else if (Dice_Roll >= 65 && Dice_Roll <= 68)
	{
		potion = "a potion of heroism";
	}
	else if (Dice_Roll >= 69 && Dice_Roll <= 72)
	{
		potion = "a potion of invulnerability";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 76)
	{
		potion = "a potion of mind reading";
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 80)
	{
		potion = "a potion of fire giant strength";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 84)
	{
		potion = "a potion of supreme healing";
	}
	else if (Dice_Roll >= 85 && Dice_Roll <= 88)
	{
		potion = "a potion of invisibility";
	}
	else if (Dice_Roll >= 89 && Dice_Roll <= 92)
	{
		potion = "a potion of speed";
	}
	else if (Dice_Roll >= 93 && Dice_Roll <= 96)
	{
		potion = "a potion of flying";
	}
	else if (Dice_Roll >= 97 && Dice_Roll <= 100)
	{
		potion = "a potion of cloud giant strength";
	}
	else if (Dice_Roll >= 101 && Dice_Roll <= 105)
	{
		potion = "a potion of longevity";
	}
	else if (Dice_Roll >= 106 && Dice_Roll <= 109)
	{
		potion = "a potion of vitality";
	}
	else if (Dice_Roll >= 110 && Dice_Roll <= 113)
	{
		potion = "a potion of storm giant strength";
	}
}
void Single_Items::Set_Kit()
{
	int Dice_Roll;
	const int Dice_Max = 144;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{
		kit = "alchemist's supplies";
	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 8)
	{
		kit = "brewer's supplies";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 12)
	{
		kit = "calligrapher's supplies";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 16)
	{
		kit = "carpenter's tools";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 20)
	{
		kit = "cartographer's tools";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 24)
	{
		kit = "cobbler's tools";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 28)
	{
		kit = "cook's tools";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		kit = "glassblower's tools";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		kit = "jewelers's tools";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		kit = "leatherworker's tools";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 44)
	{
		kit = "mason's tools";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 48)
	{
		kit = "painter's supplies";
	}
	else if (Dice_Roll >= 49 && Dice_Roll <= 52)
	{
		kit = "potter's tools";
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 56)
	{
		kit = "smith's tools";
	}
	else if (Dice_Roll >= 57 && Dice_Roll <= 60)
	{
		kit = "tinker's tools";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 64)
	{
		kit = "weaver's tools";
	}
	else if (Dice_Roll >= 65 && Dice_Roll <= 68)
	{
		kit = "woodcarver's tools";
	}
	else if (Dice_Roll >= 69 && Dice_Roll <= 72)
	{
		kit = "a disguise kit";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 76)
	{
		kit = "a forgery kit";
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 80)
	{
		kit = "a herbalism kit";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 84)
	{
		kit = "a dice set";
	}
	else if (Dice_Roll >= 85 && Dice_Roll <= 88)
	{
		kit = "a dragonchess set";
	}
	else if (Dice_Roll >= 89 && Dice_Roll <= 92)
	{
		kit = "a playing card set";
	}
	else if (Dice_Roll >= 93 && Dice_Roll <= 96)
	{
		kit = "bagpipes";
	}
	else if (Dice_Roll >= 97 && Dice_Roll <= 100)
	{
		kit = "navigator's tools";
	}
	else if (Dice_Roll >= 101 && Dice_Roll <= 105)
	{
		kit = "a poisoner's kit";
	}
	else if (Dice_Roll >= 106 && Dice_Roll <= 109)
	{
		kit = "theives' tools";
	}
	else if (Dice_Roll >= 110 && Dice_Roll <= 113)
	{
		kit = "a drum";
	}
	else if (Dice_Roll >= 114 && Dice_Roll <= 117)
	{
		kit = "a flute";
	}
	else if (Dice_Roll >= 118 && Dice_Roll <= 121)
	{
		kit = "a lute";
	}
	else if (Dice_Roll >= 122 && Dice_Roll <= 125)
	{
		kit = "a lyre";
	}
	else if (Dice_Roll >= 126 && Dice_Roll <= 129)
	{
		kit = "a horn";
	}
	else if (Dice_Roll >= 130 && Dice_Roll <= 133)
	{
		kit = "a pan flute";
	}
	else if (Dice_Roll >= 134 && Dice_Roll <= 137)
	{
		kit = "a shawm";
	}
	else if (Dice_Roll >= 138 && Dice_Roll <= 141)
	{
		kit = "a viol";
	}
	else if (Dice_Roll >= 142 && Dice_Roll <= 145)
	{
		kit = "a dulcimer";
	}
}
void Single_Items::Set_Food()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{
		food = "apples";
	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 8)
	{
		food = "bread";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 12)
	{
		food = "leeks";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 16)
	{
		food = "a potatos";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 20)
	{
		food = "carrots";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 24)
	{
		food = "salted beef";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 28)
	{
		food = "salted lamb";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		food = "dried lamb";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		food = "dried beef";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		food = "rotten apples";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 44)
	{
		food = "rotten carrots";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 48)
	{
		food = "rotten potatoes";
	}
	else if (Dice_Roll >= 49 && Dice_Roll <= 52)
	{
		food = "salted boar ribs";
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 56)
	{
		food = "roasted beef";
	}
	else if (Dice_Roll >= 57 && Dice_Roll <= 60)
	{
		food = "roased boar";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 64)
	{
		food = "roasted lamb";
	}
	else if (Dice_Roll >= 65 && Dice_Roll <= 68)
	{
		food = "salted venison";
	}
	else if (Dice_Roll >= 69 && Dice_Roll <= 72)
	{
		food = "roasted venison";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 76)
	{
		food = "dried venison";
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 80)
	{
		food = "rotten venison";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 84)
	{
		food = "rotten beef";
	}
	else if (Dice_Roll >= 85 && Dice_Roll <= 88)
	{
		food = "rotten lamb";
	}
	else if (Dice_Roll >= 89 && Dice_Roll <= 92)
	{
		food = "poached duck";
	}
	else if (Dice_Roll >= 93 && Dice_Roll <= 96)
	{
		food = "berries";
	}
	else if (Dice_Roll >= 97 && Dice_Roll <= 100)
	{
		food = "cheese";
	}
}
void Single_Items::Set_Drink()
{
	int Dice_Roll;
	const int Dice_Max = 79;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{
		drink = "ale";
	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 8)
	{
		drink = "grog";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 12)
	{
		drink = "milk";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 16)
	{
		drink = "spoiled milk";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 20)
	{
		drink = "turnip wine";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 24)
	{
		drink = "spiced ale";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 28)
	{
		drink = "sandkeg ale";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		drink = "rice wine";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		drink = "bacon beer";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		drink = "peach wine";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 44)
	{
		drink = "dwearven ale";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 48)
	{
		drink = "trollbane ale";
	}
	else if (Dice_Roll >= 49 && Dice_Roll <= 52)
	{
		drink = "willow tea";
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 56)
	{
		drink = "apple cider";
	}
	else if (Dice_Roll >= 57 && Dice_Roll <= 60)
	{
		drink = "water";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 64)
	{
		drink = "plum leaf tea";
	}
	else if (Dice_Roll >= 65 && Dice_Roll <= 68)
	{
		drink = "cranberry cider";
	}
	else if (Dice_Roll >= 69 && Dice_Roll <= 72)
	{
		drink = "spiced ale";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 76)
	{
		drink = "goblin spit ale";
	}
	else if (Dice_Roll >= 77 && Dice_Roll <= 80)
	{
		drink = "moonshine";
	}
}
void Single_Items::Set_Gem_10gp()
{
	int Dice_Roll;
	const int Dice_Max = 47;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{
		gem_10gp = "an azurite (10gp)";
	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 8)
	{
		gem_10gp = "a banded agate (10gp)";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 12)
	{
		gem_10gp = "a blue quartz (10gp)";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 16)
	{
		gem_10gp = "a eye agate (10gp)";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 20)
	{
		gem_10gp = "a hematite (10gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 24)
	{
		gem_10gp = "a lapis lazuli (10gp)";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 28)
	{
		gem_10gp = "a malachite (10gp)";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		gem_10gp = "a moss agate (10gp)";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		gem_10gp = "an obsidian (10gp)";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		gem_10gp = "a rhodochrosite (10gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 44)
	{
		gem_10gp = "a tiger eye (10gp)";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 48)
	{
		gem_10gp = "a turquoise (10gp)";
	}
}
void Single_Items::Set_Gem_50gp()
{
	int Dice_Roll;
	const int Dice_Max = 109;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 52)
	{
		gem_50gp = "a bloodstone (50gp)";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 20)
	{
		gem_50gp = "a carnelian (50gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		gem_50gp = "a chalcedony (50gp)";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		gem_50gp = "a chrysoprase (50gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		gem_50gp = "a citrine (50gp)";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		gem_50gp = "a jasper (50gp)";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		gem_50gp = "a moonstone (50gp)";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 80)
	{
		gem_50gp = "an onyx (50gp)";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 90)
	{
		gem_50gp = "a quartz (50gp)";
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		gem_50gp = "a star rose quartz (50gp)";
	}
	else if (Dice_Roll >= 101 && Dice_Roll <= 110)
	{
		gem_50gp = "a zircon (50gp)";
	}
}
void Single_Items::Set_Gem_100gp()
{
	int Dice_Roll;
	const int Dice_Max = 100;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 10)
	{
		gem_100gp = "an amber (100gp)";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 20)
	{
		gem_100gp = "a amethyst (100gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		gem_100gp = "a chysoberyl (100gp)";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		gem_100gp = "a coral (100gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		gem_100gp = "a garnet (100gp)";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		gem_100gp = "a jade (100gp)";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		gem_100gp = "a jet (100gp)";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 80)
	{
		gem_100gp = "a pearl (100gp)";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 90)
	{
		gem_100gp = "a spinel (100gp)";
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		gem_100gp = "a tourmaline (100gp)";
	}
}
void Single_Items::Set_Gem_500gp()
{
	int Dice_Roll;
	const int Dice_Max = 59;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 10)
	{
		gem_500gp = "an alexandrite (500gp)";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 20)
	{
		gem_500gp = "an aquamarine (500gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		gem_500gp = "a black pearl (500gp)";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		gem_500gp = "a blue spinel (500gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		gem_500gp = "a peridot (500gp)";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		gem_500gp = "a topaz (500gp)";
	}
}
void Single_Items::Set_Gem_1000gp()
{
	int Dice_Roll;
	const int Dice_Max = 79;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 10)
	{
		gem_1000gp = "a black opal (1000gp)";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 20)
	{
		gem_1000gp = "a blue sapphire (1000gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		gem_1000gp = "an emerald (1000gp)";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		gem_1000gp = "a fire opal (1000gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		gem_1000gp = "a opal (1000gp)";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		gem_1000gp = "a star ruby (1000gp)";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		gem_1000gp = "an star sapphire (1000gp)";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 80)
	{
		gem_1000gp = "a yellow sapphire (1000gp)";
	}
}
void Single_Items::Set_Gem_5000gp()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

		if (Dice_Roll >= 1 && Dice_Roll <= 25)
		{
			gem_5000gp = "a black sapphire (5000gp)";
		}
		else if (Dice_Roll >= 26 && Dice_Roll <= 50)
		{
			gem_5000gp = "a diamond (5000gp)";
		}
		else if (Dice_Roll >= 51 && Dice_Roll <= 75)
		{
			gem_5000gp = "a jacinth (5000gp)";
		}
		else if (Dice_Roll >= 76 && Dice_Roll <= 100)
		{
			gem_5000gp = "a ruby (5000gp)";
		}
}
void Single_Items::Set_Art_25gp()
{
	int Dice_Roll;
	const int Dice_Max = 39;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 4)
	{
		art_object_25gp = "a silver ewer (25gp)";
	}
	else if (Dice_Roll >= 5 && Dice_Roll <= 8)
	{
		art_object_25gp = "a carved bone statue (25gp)";
	}
	else if (Dice_Roll >= 9 && Dice_Roll <= 12)
	{
		art_object_25gp = "a small gold bracelet (25gp)";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 16)
	{
		art_object_25gp = "a cloth-of-gold vestments (25gp)";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 20)
	{
		art_object_25gp = "a black velvet mask stitched with a silver thread (25gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 24)
	{
		art_object_25gp = "a copper chalice with silver filigree (25gp)";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 28)
	{
		art_object_25gp = "a pair of engraved bone dice (25gp)";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 32)
	{
		art_object_25gp = "a small mirror set in a painted wooden frame (25gp)";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 36)
	{
		art_object_25gp = "an embroidered silk handkerchief (25gp)";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 40)
	{
		art_object_25gp = "a gold locket with a painted portrait inside (25gp)";
	}
}
void Single_Items::Set_Art_250gp()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 10)
	{
		art_object_250gp = "a gold ring set with bloodstones (250gp)";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 20)
	{
		art_object_250gp = "a carved ivory statuette (250gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		art_object_250gp = "a large gold bracelet (250gp)";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		art_object_250gp = "a silver necklace with a gemstone pendant (250gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		art_object_250gp = "a bronze crown (250gp)";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		art_object_250gp = "a silk robe with gold embroidery (250gp)";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		art_object_250gp = "a large well-made tapestry (250gp)";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 80)
	{
		art_object_250gp = "a brass mug with jade inlay (250gp)";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 90)
	{
		art_object_250gp = "a box of turquoise animal figures (250gp)";
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		art_object_250gp = "an gold bird cage with electrum filigree (250gp)";
	}
}
void Single_Items::Set_Art_750gp()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 10)
	{
		art_object_750gp = "a silver chalice set with moonstone (750gp)";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 20)
	{
		art_object_750gp = "a silver-plated steel longsword with jet set in hilt (750gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		art_object_750gp = "a carved harp of exotic wood with ivory inlay and zircon gems (750gp)";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		art_object_750gp = "a small gold idol (750gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		art_object_750gp = "a gold dragon comb set with red garnets as eyes (750gp)";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		art_object_750gp = "a bottle stopper cork embossed with gold leaf and set with amethysts (750gp)";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		art_object_750gp = "a ceremonial electrum dagger with a black peral in the pommel (750gp)";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 80)
	{
		art_object_750gp = "a silver and gold brooch (750gp)";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 90)
	{
		art_object_750gp = "an obsidian statuette with gold fittings and inlay (750gp)";
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		art_object_750gp = "a painted gold war mask (750gp)";
	}
}
void Single_Items::Set_Art_2500gp()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 10)
	{
		art_object_2500gp = "a fine gold chain set with fire opal (2500gp)";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 20)
	{
		art_object_2500gp = "a old masterpiece painting (2500gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		art_object_2500gp = "a embroidered silk and velvet mantle set with numerous moonstones (2500gp)";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		art_object_2500gp = "a platinum bracelet set with sapphire (2500gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		art_object_2500gp = "a embroidered glove set with jewel chips (2500gp)";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		art_object_2500gp = "an jeweled anklet (2500gp)";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		art_object_2500gp = "a gold music box (2500gp)";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 80)
	{
		art_object_2500gp = "a gold circlet set with four aquamarines (2500gp)";
	}
	else if (Dice_Roll >= 81 && Dice_Roll <= 90)
	{
		art_object_2500gp = "a eye patch with a mock eye set in blue sapphire and moonstone (2500gp)";
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 100)
	{
		art_object_2500gp = "a necklace string of small pink pearls (2500gp)";
	}
}
void Single_Items::Set_Art_7500gp()
{
	int Dice_Roll;
	const int Dice_Max = 79;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 10)
	{
		art_object_7500gp = "a jeweled gold crown (7500gp)";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 20)
	{
		art_object_7500gp = "a jeweled platinum ring (7500gp)";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		art_object_7500gp = "a small gold statuette set with rubies (7500gp)";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		art_object_7500gp = "a gold cup set with emeralds (7500gp)";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		art_object_7500gp = "a gold jewelry box with platinum filigree (7500gp)";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		art_object_7500gp = "a painted gold child's sarchophagus (7500gp)";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		art_object_7500gp = "a jade game board with solid gold playing pieces (7500gp)";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 80)
	{
		art_object_7500gp = "a bejeweled ivory drinking horn with gold filigree (7500gp)";
	}
}

string Single_Items::Get_Tool()
{
	return tool;
}
string Single_Items::Get_Armor()
{
	return armor;
}
string Single_Items::Get_Weapon()
{
	return weapon;
}
string Single_Items::Get_Potion()
{
	return potion;
}
string Single_Items::Get_Kit()
{
	return kit;
}
string Single_Items::Get_Food()
{
	return food;
}
string Single_Items::Get_Drink()
{
	return drink;
}
string Single_Items::Get_Gem_10gp()
{
	return gem_10gp;
}
string Single_Items::Get_Gem_50gp()
{
	return gem_50gp;
}
string Single_Items::Get_Gem_100gp()
{
	return gem_100gp;
}
string Single_Items::Get_Gem_500gp()
{
	return gem_500gp;
}
string Single_Items::Get_Gem_1000gp()
{
	return gem_1000gp;
}
string Single_Items::Get_Gem_5000gp()
{
	return gem_5000gp;
}
string Single_Items::Get_Art_25gp()
{
	return art_object_25gp;
}
string Single_Items::Get_Art_250gp()
{
	return art_object_250gp;
}
string Single_Items::Get_Art_750gp()
{
	return art_object_750gp;
}
string Single_Items::Get_Art_2500gp()
{
	return art_object_2500gp;
}
string Single_Items::Get_Art_7500gp()
{
	return art_object_7500gp;
}
