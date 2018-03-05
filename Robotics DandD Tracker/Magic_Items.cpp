#include "stdafx.h"
#include "Magic_Items.h"


Magic_Items::Magic_Items()
{
}


Magic_Items::~Magic_Items()
{
}

void Magic_Items::Set_MagicItem_A()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 50)
	{
		magicItem_A = "a potion of healing";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 60)
	{
		magicItem_A = "a spell scroll of a cantrip";
	}
	else if (Dice_Roll >= 61 && Dice_Roll <= 70)
	{
		magicItem_A = "a potion of climbing";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 90)
	{
		magicItem_A = "a spell scroll of 1st level";
	}
	else if (Dice_Roll >= 91 && Dice_Roll <= 94)
	{
		magicItem_A = "a spell scroll of 2nd level";
	}
	else if (Dice_Roll >= 95 && Dice_Roll <= 98)
	{
		magicItem_A = "a potion of greater healing";
	}
	else if (Dice_Roll == 99)
	{
		magicItem_A = "a bag of holding";
	}
	else if (Dice_Roll == 100)
	{
		magicItem_A = "a driftglobe";
	}
}
void Magic_Items::Set_MagicItem_B()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 15)
	{
		magicItem_B = "a potion of greater healing";
	}
	else if (Dice_Roll >= 16 && Dice_Roll <= 22)
	{
		magicItem_B = "a potion of fire breath";
	}
	else if (Dice_Roll >= 23 && Dice_Roll <= 29)
	{
		magicItem_B = "a potion of resistance";
	}
	else if (Dice_Roll >= 30 && Dice_Roll <= 34)
	{
		magicItem_B = "ammunition of +1";
	}
	else if (Dice_Roll >= 35 && Dice_Roll <= 39)
	{
		magicItem_B = "a potion of animal friendship";
	}
	else if (Dice_Roll >= 40 && Dice_Roll <= 44)
	{
		magicItem_B = "a potion of hill giant strength";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 49)
	{
		magicItem_B = "a potion of growth";
	}
	else if (Dice_Roll >= 50 && Dice_Roll <= 54)
	{
		magicItem_B = "a potion of waterbreathing";
	}
	else if (Dice_Roll >= 55 && Dice_Roll <= 59)
	{
		magicItem_B = "a spell scroll of 2nd level";
	}
	else if (Dice_Roll >= 60 && Dice_Roll <= 64)
	{
		magicItem_B = "a spell scroll of 3rd level";
	}
	else if (Dice_Roll >= 65 && Dice_Roll <= 67)
	{
		magicItem_B = "a bag of holding";
	}
	else if (Dice_Roll >= 68 && Dice_Roll <= 70)
	{
		magicItem_B = "Keogthtom's Ointment";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 73)
	{
		magicItem_B = "oil of slipperiness";
	}
	else if (Dice_Roll >= 74 && Dice_Roll <= 75)
	{
		magicItem_B = "Dust of Disapperance";
	}
	else if (Dice_Roll >= 76 && Dice_Roll <= 77)
	{
		magicItem_B = "Dust of Dryness";
	}
	else if (Dice_Roll >= 78 && Dice_Roll <= 79)
	{
		magicItem_B = "Dust of Sneezing and Choking";
	}
	else if (Dice_Roll >= 80 && Dice_Roll <= 81)
	{
		magicItem_B = "an Elemental Gem";
	}
	else if (Dice_Roll >= 82 && Dice_Roll <= 83)
	{
		magicItem_B = "a Philter of Love";
	}
	else if (Dice_Roll == 84)
	{
		magicItem_B = "an Alchemy Jug";
	}
	else if (Dice_Roll == 85)
	{
		magicItem_B = "a cap of water breathing";
	}
	else if (Dice_Roll == 86)
	{
		magicItem_B = "a cloak of the manta ray";
	}
	else if (Dice_Roll == 87)
	{
		magicItem_B = "a driftglobe";
	}
	else if (Dice_Roll == 88)
	{
		magicItem_B = "goggles of night";
	}
	else if (Dice_Roll == 89)
	{
		magicItem_B = "a Helm of comprehend languages";
	}
	else if (Dice_Roll == 90)
	{
		magicItem_B = "an immovable rod";
	}
	else if (Dice_Roll == 91)
	{
		magicItem_B = "a lantern of revealing";
	}
	else if (Dice_Roll == 92)
	{
		magicItem_B = "mariner's armor";
	}
	else if (Dice_Roll == 93)
	{
		magicItem_B = "mithral armor";
	}
	else if (Dice_Roll == 94)
	{
		magicItem_B = "a potion of poison";
	}
	else if (Dice_Roll == 95)
	{
		magicItem_B = "a ring of swimming";
	}
	else if (Dice_Roll == 96)
	{
		magicItem_B = "a robe of useful items";
	}
	else if (Dice_Roll == 97)
	{
		magicItem_B = "a rope of climbing";
	}
	else if (Dice_Roll == 98)
	{
		magicItem_B = "a saddle of the cavalier";
	}
	else if (Dice_Roll == 99)
	{
		magicItem_B = "a wand of magic detection";
	}
	else if (Dice_Roll == 100)
	{
		magicItem_B = "a wand of secrets";
	}
}
void Magic_Items::Set_MagicItem_C()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 15)
	{
		magicItem_C = "a potion of superior healing";
	}
	else if (Dice_Roll >= 16 && Dice_Roll <= 22)
	{
		magicItem_C = "a spell scroll of 4th level";
	}
	else if (Dice_Roll >= 23 && Dice_Roll <= 27)
	{
		magicItem_C = "ammunition of +2";
	}
	else if (Dice_Roll >= 28 && Dice_Roll <= 32)
	{
		magicItem_C = "a potion of clairvoyance";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 37)
	{
		magicItem_C = "a potion of diminution";
	}
	else if (Dice_Roll >= 38 && Dice_Roll <= 42)
	{
		magicItem_C = "a potion of gaseous form";
	}
	else if (Dice_Roll >= 43 && Dice_Roll <= 47)
	{
		magicItem_C = "a potion of frost giant strength";
	}
	else if (Dice_Roll >= 48 && Dice_Roll <= 52)
	{
		magicItem_C = "a potion of stone giant strength";
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 57)
	{
		magicItem_C = "a potion of heroism";
	}
	else if (Dice_Roll >= 58 && Dice_Roll <= 62)
	{
		magicItem_C = "a potion of invulnerability";
	}
	else if (Dice_Roll >= 63 && Dice_Roll <= 67)
	{
		magicItem_C = "a potion of mind reading";
	}
	else if (Dice_Roll >= 68 && Dice_Roll <= 72)
	{
		magicItem_C = "a spell scroll of 5th level";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 75)
	{
		magicItem_C = "elixer of health";
	}
	else if (Dice_Roll >= 76 && Dice_Roll <= 78)
	{
		magicItem_C = "Oil of etherealness";
	}
	else if (Dice_Roll >= 79 && Dice_Roll <= 81)
	{
		magicItem_C = "a potion of fire giant strength";
	}
	else if (Dice_Roll >= 82 && Dice_Roll <= 84)
	{
		magicItem_C = "Quaal's feather token";
	}
	else if (Dice_Roll >= 85 && Dice_Roll <= 87)
	{
		magicItem_C = "a scroll of protection";
	}
	else if (Dice_Roll >= 88 && Dice_Roll <= 89)
	{
		magicItem_C = "a bag of beans";
	}
	else if (Dice_Roll >= 90 && Dice_Roll <= 91)
	{
		magicItem_C = "a bead of force";
	}
	else if (Dice_Roll == 92)
	{
		magicItem_C = "a chime of opening";
	}
	else if (Dice_Roll == 93)
	{
		magicItem_C = "a decanter of endless water";
	}
	else if (Dice_Roll == 94)
	{
		magicItem_C = "eyes of minute seeing";
	}
	else if (Dice_Roll == 95)
	{
		magicItem_C = "a folding boat";
	}
	else if (Dice_Roll == 96)
	{
		magicItem_C = "Heward's handy haversack";
	}
	else if (Dice_Roll == 97)
	{
		magicItem_C = "horseshoes of speed";
	}
	else if (Dice_Roll == 98)
	{
		magicItem_C = "necklace of fireballs";
	}
	else if (Dice_Roll == 99)
	{
		magicItem_C = "periapt of health";
	}
	else if (Dice_Roll == 100)
	{
		magicItem_C = "sending stones";
	}
}
void Magic_Items::Set_MagicItem_D()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 20)
	{
		magicItem_D = "a potion of supreme healing";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 30)
	{
		magicItem_D = "a potion of invisibility";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 40)
	{
		magicItem_D = "a potion of speed";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 50)
	{
		magicItem_D = "a spell scroll of 6th level";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 57)
	{
		magicItem_D = "a spell scroll of 7th level";
	}
	else if (Dice_Roll >= 58 && Dice_Roll <= 62)
	{
		magicItem_D = "ammunition of +3";
	}
	else if (Dice_Roll >= 63 && Dice_Roll <= 67)
	{
		magicItem_D = "oil of sharpness";
	}
	else if (Dice_Roll >= 68 && Dice_Roll <= 72)
	{
		magicItem_D = "a potion of flying";
	}
	else if (Dice_Roll >= 73 && Dice_Roll <= 77)
	{
		magicItem_D = "a potion of cloud giant strength";
	}
	else if (Dice_Roll >= 78 && Dice_Roll <= 82)
	{
		magicItem_D = "a potion of longevity";
	}
	else if (Dice_Roll >= 83 && Dice_Roll <= 87)
	{
		magicItem_D = "a potion of vitality";
	}
	else if (Dice_Roll >= 88 && Dice_Roll <= 92)
	{
		magicItem_D = "a spell scroll of 8th level";
	}
	else if (Dice_Roll >= 93 && Dice_Roll <= 95)
	{
		magicItem_D = "horseshoes of a zephyr";
	}
	else if (Dice_Roll >= 96 && Dice_Roll <= 98)
	{
		magicItem_D = "Nolzul's marvelous pigments";
	}
	else if (Dice_Roll == 99)
	{
		magicItem_D = "a bag of devouring";
	}
	else if (Dice_Roll == 100)
	{
		magicItem_D = "a portable hole";
	}
}
void Magic_Items::Set_MagicItem_E()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 30)
	{
		magicItem_E = "a spell scroll of 8th level";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 55)
	{
		magicItem_E = "a potion of storm giant strength";
	}
	else if (Dice_Roll >= 56 && Dice_Roll <= 70)
	{
		magicItem_E = "a potion supreme healing";
	}
	else if (Dice_Roll >= 71 && Dice_Roll <= 85)
	{
		magicItem_E = "a spell scroll of 9th level";
	}
	else if (Dice_Roll >= 86 && Dice_Roll <= 93)
	{
		magicItem_E = "universal solvent";
	}
	else if (Dice_Roll >= 94 && Dice_Roll <= 98)
	{
		magicItem_E = "an arrow of slaying";
	}
	else if (Dice_Roll >= 99 && Dice_Roll <= 100)
	{
		magicItem_E = "sovereign glue";
	}
}
void Magic_Items::Set_MagicItem_F()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 15)
	{
		magicItem_F = "a weapon of +1";
	}
	else if (Dice_Roll >= 16 && Dice_Roll <= 18)
	{
		magicItem_F = "a shield of +1";
	}
	else if (Dice_Roll >= 19 && Dice_Roll <= 21)
	{
		magicItem_F = "a sentinal shield";
	}
	else if (Dice_Roll >= 22 && Dice_Roll <= 23)
	{
		magicItem_F = "an amulet of proof against detection and location";
	}
	else if (Dice_Roll >= 24 && Dice_Roll <= 25)
	{
		magicItem_F = "boots of elvenkind";
	}
	else if (Dice_Roll >= 26 && Dice_Roll <= 27)
	{
		magicItem_F = "boots of striding and sprinting";
	}
	else if (Dice_Roll >= 28 && Dice_Roll <= 29)
	{
		magicItem_F = "bracers of archery";
	}
	else if (Dice_Roll >= 30 && Dice_Roll <= 31)
	{
		magicItem_F = "brooch of shielding";
	}
	else if (Dice_Roll >= 32 && Dice_Roll <= 33)
	{
		magicItem_F = "broom of flying";
	}
	else if (Dice_Roll >= 34 && Dice_Roll <= 35)
	{
		magicItem_F = "a cloak of elvenkind";
	}
	else if (Dice_Roll >= 36 && Dice_Roll <= 37)
	{
		magicItem_F = "a cloak of protection";
	}
	else if (Dice_Roll >= 38 && Dice_Roll <= 39)
	{
		magicItem_F = "guantlets of ogre power";
	}
	else if (Dice_Roll >= 40 && Dice_Roll <= 41)
	{
		magicItem_F = "a hat of disquise";
	}
	else if (Dice_Roll >= 42 && Dice_Roll <= 43)
	{
		magicItem_F = "a javelin of lightning";
	}
	else if (Dice_Roll >= 44 && Dice_Roll <= 45)
	{
		magicItem_F = "a pearl of power";
	}
	else if (Dice_Roll >= 46 && Dice_Roll <= 47)
	{
		magicItem_F = "a rod of the pact keeper, +1";
	}
	else if (Dice_Roll >= 48 && Dice_Roll <= 49)
	{
		magicItem_F = "slippers of spider climbing";
	}
	else if (Dice_Roll >= 50 && Dice_Roll <= 51)
	{
		magicItem_F = "a staff of the adder";
	}
	else if (Dice_Roll >= 52 && Dice_Roll <= 53)
	{
		magicItem_F = "a staff of the python";
	}
	else if (Dice_Roll >= 54 && Dice_Roll <= 55)
	{
		magicItem_F = "a sword of vengeance";
	}
	else if (Dice_Roll >= 56 && Dice_Roll <= 57)
	{
		magicItem_F = "a trident of fish command";
	}
	else if (Dice_Roll >= 58 && Dice_Roll <= 59)
	{
		magicItem_F = "a wand of magic missiles";
	}
	else if (Dice_Roll >= 60 && Dice_Roll <= 61)
	{
		magicItem_F = "a wand of the warmage, +1";
	}
	else if (Dice_Roll >= 62 && Dice_Roll <= 63)
	{
		magicItem_F = "a wand of web";
	}
	else if (Dice_Roll >= 64 && Dice_Roll <= 65)
	{
		magicItem_F = "a weapon of warning";
	}
	else if (Dice_Roll == 66)
	{
		magicItem_F = "adamantine armor (chain mail)";
	}
	else if (Dice_Roll == 67)
	{
		magicItem_F = "adamantine armor (chain shirt)";
	}
	else if (Dice_Roll == 68)
	{
		magicItem_F = "adamantine armor (scale mail)";
	}
	else if (Dice_Roll == 69)
	{
		magicItem_F = "bag of tricks (gray)";
	}
	else if (Dice_Roll == 70)
	{
		magicItem_F = "bag of tricks (rust)";
	}
	else if (Dice_Roll == 71)
	{
		magicItem_F = "bag of tricks (tan)";
	}
	else if (Dice_Roll == 72)
	{
		magicItem_F = "boots of the winterlands";
	}
	else if (Dice_Roll == 73)
	{
		magicItem_F = "circlet of blasting";
	}
	else if (Dice_Roll == 74)
	{
		magicItem_F = "deck of illusions";
	}
	else if (Dice_Roll == 75)
	{
		magicItem_F = "eversmoking bottle";
	}
	else if (Dice_Roll == 76)
	{
		magicItem_F = "eyes of charming";
	}
	else if (Dice_Roll == 77)
	{
		magicItem_F = "eyes of the eagle";
	}
	else if (Dice_Roll == 78)
	{
		magicItem_F = "figurine of wonderous power (silver raven)";
	}
	else if (Dice_Roll == 79)
	{
		magicItem_F = "gem of brightness";
	}
	else if (Dice_Roll == 80)
	{
		magicItem_F = "gloves of missile snaring";
	}
	else if (Dice_Roll == 81)
	{
		magicItem_F = "gloves of swimming and climbing";
	}
	else if (Dice_Roll == 82)
	{
		magicItem_F = "gloves of thievery";
	}
	else if (Dice_Roll == 83)
	{
		magicItem_F = "headband of intellect";
	}
	else if (Dice_Roll == 84)
	{
		magicItem_F = "helm of telepathy";
	}
	else if (Dice_Roll == 85)
	{
		magicItem_F = "instrument of the bards (doss lute)";
	}
	else if (Dice_Roll == 86)
	{
		magicItem_F = "instrument of the bards (fochlucan bandore)";
	}
	else if (Dice_Roll == 87)
	{
		magicItem_F = "instrument of the bards (mac-fuimidh cittern)";
	}
	else if (Dice_Roll == 88)
	{
		magicItem_F = "medallion of thoughts";
	}
	else if (Dice_Roll == 89)
	{
		magicItem_F = "necklace of adaptation";
	}
	else if (Dice_Roll == 90)
	{
		magicItem_F = "peript of wound closure";
	}
	else if (Dice_Roll == 91)
	{
		magicItem_F = "pipes of haunting";
	}
	else if (Dice_Roll == 92)
	{
		magicItem_F = "pipes of the sewer";
	}
	else if (Dice_Roll == 93)
	{
		magicItem_F = "ring of jumping";
	}
	else if (Dice_Roll == 94)
	{
		magicItem_F = "ring of mind shielding";
	}
	else if (Dice_Roll == 95)
	{
		magicItem_F = "ring of warmth";
	}
	else if (Dice_Roll == 96)
	{
		magicItem_F = "ring of water walking";
	}
	else if (Dice_Roll == 97)
	{
		magicItem_F = "quiver of Ehlonna";
	}
	else if (Dice_Roll == 98)
	{
		magicItem_F = "stone of good luck";
	}
	else if (Dice_Roll == 99)
	{
		magicItem_F = "wind fan";
	}
	else if (Dice_Roll == 100)
	{
		magicItem_F = "winged boots";
	}
}
void Magic_Items::Set_MagicItem_G()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 11)
	{
		magicItem_G = "a weapon of +1";
	}
	else if (Dice_Roll >= 12 && Dice_Roll <= 14)
	{
		magicItem_G = "figurine of wonderous power (";

		int Dice_RollT;
		const int Dice_MaxT = 7;

		Dice_RollT = (rand() % Dice_MaxT) + 1;

		if (Dice_RollT == 1)
		{
			magicItem_G += "Bronze Griffon)";
		}
		else if (Dice_RollT == 2)
		{
			magicItem_G += "Ebony Fly)";
		}
		else if (Dice_RollT == 3)
		{
			magicItem_G += "Golden Lions)";
		}
		else if (Dice_RollT == 4)
		{
			magicItem_G += "Ivory Goats)";
		}
		else if (Dice_RollT == 5)
		{
			magicItem_G += "Marble Elephants)";
		}
		else if (Dice_RollT == 6 || Dice_RollT == 7)
		{
			magicItem_G += "Onyx Dog)";
		}
		else if (Dice_RollT == 8)
		{
			magicItem_G += "Serpentine Owl)";
		}
	}
	else if (Dice_Roll == 15)
	{
		magicItem_G = "adamantine armor (breastplate)";
	}
	else if (Dice_Roll == 16)
	{
		magicItem_G = "adamantine armor (splint)";
	}
	else if (Dice_Roll == 17)
	{
		magicItem_G = "amulet of health";
	}
	else if (Dice_Roll == 18)
	{
		magicItem_G = "Armor of vulnerability";
	}
	else if (Dice_Roll == 19)
	{
		magicItem_G = "arrow-catching shield";
	}
	else if (Dice_Roll == 20)
	{
		magicItem_G = "belt of dwarvenkind";
	}
	else if (Dice_Roll == 21)
	{
		magicItem_G = "belt of hill giant strength";
	}
	else if (Dice_Roll == 22)
	{
		magicItem_G = "berserker axe";
	}
	else if (Dice_Roll == 23)
	{
		magicItem_G = "boots of levitation";
	}
	else if (Dice_Roll == 24)
	{
		magicItem_G = "boots of speed";
	}
	else if (Dice_Roll == 25)
	{
		magicItem_G = "bowl of commanding water elementals";
	}
	else if (Dice_Roll == 26)
	{
		magicItem_G = "bracers of defense";
	}
	else if (Dice_Roll == 27)
	{
		magicItem_G = "brazier of commanding fire elementals";
	}
	else if (Dice_Roll == 28)
	{
		magicItem_G = "cape of mountebank";
	}
	else if (Dice_Roll == 29)
	{
		magicItem_G = "censer of commanding air elementals";
	}
	else if (Dice_Roll == 30)
	{
		magicItem_G = "armor, +1 chainmail";
	}
	else if (Dice_Roll == 31)
	{
		magicItem_G = "armor of resistance (chain mail)";
	}
	else if (Dice_Roll == 32)
	{
		magicItem_G = "armor, +1 chain shirt";
	}
	else if (Dice_Roll == 33)
	{
		magicItem_G = "armor of resistance (chain shirt)";
	}
	else if (Dice_Roll == 34)
	{
		magicItem_G = "cloak of displacement";
	}
	else if (Dice_Roll == 35)
	{
		magicItem_G = "cloak of the bat";
	}
	else if (Dice_Roll == 36)
	{
		magicItem_G = "cube of force";
	}
	else if (Dice_Roll == 37)
	{
		magicItem_G = "Daern's instant fortress";
	}
	else if (Dice_Roll == 38)
	{
		magicItem_G = "dagger of venom";
	}
	else if (Dice_Roll == 39)
	{
		magicItem_G = "dimensional shackles";
	}
	else if (Dice_Roll == 40)
	{
		magicItem_G = "dragon slayer";
	}
	else if (Dice_Roll == 41)
	{
		magicItem_G = "elven chain";
	}
	else if (Dice_Roll == 42)
	{
		magicItem_G = "flame tongue";
	}
	else if (Dice_Roll == 43)
	{
		magicItem_G = "gem of seeing";
	}
	else if (Dice_Roll == 44)
	{
		magicItem_G = "giant slayer";
	}
	else if (Dice_Roll == 45)
	{
		magicItem_G = "glamoured studded leather";
	}
	else if (Dice_Roll == 46)
	{
		magicItem_G = "helm of teleportation";
	}
	else if (Dice_Roll == 47)
	{
		magicItem_G = "horn of blasting";
	}
	else if (Dice_Roll == 48)
	{
		magicItem_G = "horn of valhalla (silver or brass)";
	}
	else if (Dice_Roll == 49)
	{
		magicItem_G = "instrument of the bards (canaith mandolin)";
	}
	else if (Dice_Roll == 50)
	{
		magicItem_G = "instrument of the bards (cli lyre)";
	}
	else if (Dice_Roll == 51)
	{
		magicItem_G = "ioun stone (awareness)";
	}
	else if (Dice_Roll == 52)
	{
		magicItem_G = "ioun stone (protection)";
	}
	else if (Dice_Roll == 53)
	{
		magicItem_G = "ioun stone (reserve)";
	}
	else if (Dice_Roll == 54)
	{
		magicItem_G = "ioun stone (sustenance)";
	}
	else if (Dice_Roll == 55)
	{
		magicItem_G = "iron bands of Bilarro";
	}
	else if (Dice_Roll == 56)
	{
		magicItem_G = "armor, +1 leather";
	}
	else if (Dice_Roll == 57)
	{
		magicItem_G = "armor of resistance (leather)";
	}
	else if (Dice_Roll == 58)
	{
		magicItem_G = "mace of disruption";
	}
	else if (Dice_Roll == 59)
	{
		magicItem_G = "mace of smiting";
	}
	else if (Dice_Roll == 60)
	{
		magicItem_G = "mace of terror";
	}
	else if (Dice_Roll == 61)
	{
		magicItem_G = "mantle of spell resistance";
	}
	else if (Dice_Roll == 62)
	{
		magicItem_G = "necklace of prayer beads";
	}
	else if (Dice_Roll == 63)
	{
		magicItem_G = "periapt of proof against poison";
	}
	else if (Dice_Roll == 64)
	{
		magicItem_G = "ring of animal influance";
	}
	else if (Dice_Roll == 65)
	{
		magicItem_G = "ring of evasion";
	}
	else if (Dice_Roll == 66)
	{
		magicItem_G = "ring of feather falling";
	}
	else if (Dice_Roll == 67)
	{
		magicItem_G = "ring of free action";
	}
	else if (Dice_Roll == 68)
	{
		magicItem_G = "ring of protection";
	}
	else if (Dice_Roll == 69)
	{
		magicItem_G = "ring of resistance";
	}
	else if (Dice_Roll == 70)
	{
		magicItem_G = "ring of spell storing";
	}
	else if (Dice_Roll == 71)
	{
		magicItem_G = "ring of the ram";
	}
	else if (Dice_Roll == 72)
	{
		magicItem_G = "ring of x-ray vision";
	}
	else if (Dice_Roll == 73)
	{
		magicItem_G = "robe of eyes";
	}
	else if (Dice_Roll == 74)
	{
		magicItem_G = "rod of rulership";
	}
	else if (Dice_Roll == 75)
	{
		magicItem_G = "rod of the pact keeper, +2";
	}
	else if (Dice_Roll == 76)
	{
		magicItem_G = "rope of entanglement";
	}
	else if (Dice_Roll == 77)
	{
		magicItem_G = "armor, +1 scale mail";
	}
	else if (Dice_Roll == 78)
	{
		magicItem_G = "armor of resistance (scale mail)";
	}
	else if (Dice_Roll == 79)
	{
		magicItem_G = "shield, +2";
	}
	else if (Dice_Roll == 80)
	{
		magicItem_G = " shield of missile attraction";
	}
	else if (Dice_Roll == 81)
	{
		magicItem_G = "staff of charming";
	}
	else if (Dice_Roll == 82)
	{
		magicItem_G = "staff of healing";
	}
	else if (Dice_Roll == 83)
	{
		magicItem_G = "staff of the woodlands";
	}
	else if (Dice_Roll == 84)
	{
		magicItem_G = "staff of withering";
	}
	else if (Dice_Roll == 85)
	{
		magicItem_G = "staff of swarming insects";
	}
	else if (Dice_Roll == 86)
	{
		magicItem_G = "stone of commanding earth elementals";
	}
	else if (Dice_Roll == 87)
	{
		magicItem_G = "sun blade";
	}
	else if (Dice_Roll == 88)
	{
		magicItem_G = "sword of life stealing";
	}
	else if (Dice_Roll == 89)
	{
		magicItem_G = "sword of wounding";
	}
	else if (Dice_Roll == 90)
	{
		magicItem_G = "tentacle rod";
	}
	else if (Dice_Roll == 91)
	{
		magicItem_G = "vicious weapon";
	}
	else if (Dice_Roll == 92)
	{
		magicItem_G = "wand of binding";
	}
	else if (Dice_Roll == 93)
	{
		magicItem_G = "wand of enemy detection";
	}
	else if (Dice_Roll == 94)
	{
		magicItem_G = "wand of fear";
	}
	else if (Dice_Roll == 95)
	{
		magicItem_G = "wand of fireballs";
	}
	else if (Dice_Roll == 96)
	{
		magicItem_G = "wand of lightning bolts";
	}
	else if (Dice_Roll == 97)
	{
		magicItem_G = "wand of paralysis";
	}
	else if (Dice_Roll == 98)
	{
		magicItem_G = "wand of the warmage, +2";
	}
	else if (Dice_Roll == 99)
	{
		magicItem_G = "wand of wonder";
	}
	else if (Dice_Roll == 100)
	{
		magicItem_G = "wings of flying";
	}
}
void Magic_Items::Set_MagicItem_H()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 10)
	{
		magicItem_H = "a weapon of +3";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 12)
	{
		magicItem_H = "amulet of the planes";
	}
	else if (Dice_Roll >= 13 && Dice_Roll <= 14)
	{
		magicItem_H = "carpet of flying";
	}
	else if (Dice_Roll >= 15 && Dice_Roll <= 16)
	{
		magicItem_H = "crystal ball (very rare verson)";
	}
	else if (Dice_Roll >= 17 && Dice_Roll <= 18)
	{
		magicItem_H = "ring of regeneration";
	}
	else if (Dice_Roll >= 19 && Dice_Roll <= 20)
	{
		magicItem_H = "ring of shooting stars";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 22)
	{
		magicItem_H = "ring of telekinesis";
	}
	else if (Dice_Roll >= 23 && Dice_Roll <= 24)
	{
		magicItem_H = "robe of scintillating order";
	}
	else if (Dice_Roll >= 25 && Dice_Roll <= 26)
	{
		magicItem_H = "robe of stars";
	}
	else if (Dice_Roll >= 27 && Dice_Roll <= 28)
	{
		magicItem_H = "rod of absorption";
	}
	else if (Dice_Roll >= 29 && Dice_Roll <= 30)
	{
		magicItem_H = "rod of alertness";
	}
	else if (Dice_Roll >= 31 && Dice_Roll <= 32)
	{
		magicItem_H = "rod of security";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 34)
	{
		magicItem_H = "rod of the pact keeper, +3";
	}
	else if (Dice_Roll >= 35 && Dice_Roll <= 36)
	{
		magicItem_H = "scimitar of speed";
	}
	else if (Dice_Roll >= 37 && Dice_Roll <= 38)
	{
		magicItem_H = "shield +3";
	}
	else if (Dice_Roll >= 39 && Dice_Roll <= 40)
	{
		magicItem_H = "staff of fire";
	}
	else if (Dice_Roll >= 41 && Dice_Roll <= 42)
	{
		magicItem_H = "staff of frost";
	}
	else if (Dice_Roll >= 43 && Dice_Roll <= 44)
	{
		magicItem_H = "staff of power";
	}
	else if (Dice_Roll >= 45 && Dice_Roll <= 46)
	{
		magicItem_H = "staff of shrinking";
	}
	else if (Dice_Roll >= 47 && Dice_Roll <= 48)
	{
		magicItem_H = "staff of thunder and lightning";
	}
	else if (Dice_Roll >= 49 && Dice_Roll <= 50)
	{
		magicItem_H = "sword of sharpness";
	}
	else if (Dice_Roll >= 51 && Dice_Roll <= 52)
	{
		magicItem_H = "wand of polymorph";
	}
	else if (Dice_Roll >= 53 && Dice_Roll <= 54)
	{
		magicItem_H = "wand of the warmage, +3";
	}
	else if (Dice_Roll == 55)
	{
		magicItem_H = "adamantine armor (half plate)";
	}
	else if (Dice_Roll == 56)
	{
		magicItem_H = "adamantine armor (plate)";
	}
	else if (Dice_Roll == 57)
	{
		magicItem_H = "animated shield";
	}
	else if (Dice_Roll == 58)
	{
		magicItem_H = "belt of fire giant strength";
	}
	else if (Dice_Roll == 59)
	{
		magicItem_H = "belt of stone (or frost) giant strength";
	}
	else if (Dice_Roll == 60)
	{
		magicItem_H = "armor, +1 breastplate";
	}
	else if (Dice_Roll == 61)
	{
		magicItem_H = "armor of resistance (breastplate)";
	}
	else if (Dice_Roll == 62)
	{
		magicItem_H = "candle of invocation";
	}
	else if (Dice_Roll == 63)
	{
		magicItem_H = "armor, +2 chain mail";
	}
	else if (Dice_Roll == 64)
	{
		magicItem_H = "armor, +2 chain shirt";
	}
	else if (Dice_Roll == 65)
	{
		magicItem_H = "cloak of anaconda";
	}
	else if (Dice_Roll == 66)
	{
		magicItem_H = "dancing sword";
	}
	else if (Dice_Roll == 67)
	{
		magicItem_H = "demon armor";
	}
	else if (Dice_Roll == 68)
	{
		magicItem_H = "dragon scale mail";
	}
	else if (Dice_Roll == 69)
	{
		magicItem_H = "dwarven plate";
	}
	else if (Dice_Roll == 70)
	{
		magicItem_H = "dwarven thrower";
	}
	else if (Dice_Roll == 71)
	{
		magicItem_H = "efreeti bottle";
	}
	else if (Dice_Roll == 72)
	{
		magicItem_H = "figurine of wonderous power (obsidian steed)";
	}
	else if (Dice_Roll == 73)
	{
		magicItem_H = "frost brand";
	}
	else if (Dice_Roll == 74)
	{
		magicItem_H = "helm of brilliance";
	}
	else if (Dice_Roll == 75)
	{
		magicItem_H = "horn of valhalla (bronze)";
	}
	else if (Dice_Roll == 76)
	{
		magicItem_H = "instrument of the bards (anstruth harp)";
	}
	else if (Dice_Roll == 77)
	{
		magicItem_H = "ioun stone (agility)";
	}
	else if (Dice_Roll == 78)
	{
		magicItem_H = "ioun stone (absorption)";
	}
	else if (Dice_Roll == 79)
	{
		magicItem_H = "ioun stone (fortitude)";
	}
	else if (Dice_Roll == 80)
	{
		magicItem_H = "ioun stone (insight)";
	}
	else if (Dice_Roll == 81)
	{
		magicItem_H = "ioun stone (intellect)";
	}
	else if (Dice_Roll == 82)
	{
		magicItem_H = "ioun stone (leadership)";
	}
	else if (Dice_Roll == 83)
	{
		magicItem_H = "ioun stone (strength)";
	}
	else if (Dice_Roll == 84)
	{
		magicItem_H = "armor, +2 leather";
	}
	else if (Dice_Roll == 85)
	{
		magicItem_H = "manual of bodily health";
	}
	else if (Dice_Roll == 86)
	{
		magicItem_H = "manual of golems";
	}
	else if (Dice_Roll == 87)
	{
		magicItem_H = "manual of gainful exercise";
	}
	else if (Dice_Roll == 88)
	{
		magicItem_H = "maunal of quickness of action";
	}
	else if (Dice_Roll == 89)
	{
		magicItem_H = "mirror of life trapping";
	}
	else if (Dice_Roll == 90)
	{
		magicItem_H = "nine lives stealer";
	}
	else if (Dice_Roll == 91)
	{
		magicItem_H = "oathbow";
	}
	else if (Dice_Roll == 92)
	{
		magicItem_H = "armor, +2 scale mail";
	}
	else if (Dice_Roll == 93)
	{
		magicItem_H = "spellguard armor";
	}
	else if (Dice_Roll == 94)
	{
		magicItem_H = "armor, +1 splint";
	}
	else if (Dice_Roll == 95)
	{
		magicItem_H = "armor of resistance (splint)";
	}
	else if (Dice_Roll == 96)
	{
		magicItem_H = "armor, +1 studded leather";
	}
	else if (Dice_Roll == 97)
	{
		magicItem_H = "armor of resistance (studded leather)";
	}
	else if (Dice_Roll == 98)
	{
		magicItem_H = "tome of clear thought";
	}
	else if (Dice_Roll == 99)
	{
		magicItem_H = "tome of leadership and influence";
	}
	else if (Dice_Roll == 100)
	{
		magicItem_H = "tome of understanding";
	}
}
void Magic_Items::Set_MagicItem_I()
{
	int Dice_Roll;
	const int Dice_Max = 99;

	Dice_Roll = (rand() % Dice_Max) + 1;

	if (Dice_Roll >= 1 && Dice_Roll <= 5)
	{
		magicItem_I = "defender";
	}
	else if (Dice_Roll >= 6 && Dice_Roll <= 10)
	{
		magicItem_I = "hammer of thunderbolts";
	}
	else if (Dice_Roll >= 11 && Dice_Roll <= 15)
	{
		magicItem_I = "luck blade";
	}
	else if (Dice_Roll >= 16 && Dice_Roll <= 20)
	{
		magicItem_I = "sword of answering";
	}
	else if (Dice_Roll >= 21 && Dice_Roll <= 23)
	{
		magicItem_I = "holy avenger";
	}
	else if (Dice_Roll >= 24 && Dice_Roll <= 26)
	{
		magicItem_I = "ring of djinni summoning";
	}
	else if (Dice_Roll >= 27 && Dice_Roll <= 29)
	{
		magicItem_I = "ring of invisibility";
	}
	else if (Dice_Roll >= 30 && Dice_Roll <= 32)
	{
		magicItem_I = "ring of spell turning";
	}
	else if (Dice_Roll >= 33 && Dice_Roll <= 35)
	{
		magicItem_I = "rod of lordly might";
	}
	else if (Dice_Roll >= 36 && Dice_Roll <= 38)
	{
		magicItem_I = "staff of the magi";
	}
	else if (Dice_Roll >= 39 && Dice_Roll <= 41)
	{
		magicItem_I = "vorpal sword";
	}
	else if (Dice_Roll >= 42 && Dice_Roll <= 43)
	{
		magicItem_I = "belt of cloud giant strength";
	}
	else if (Dice_Roll >= 44 && Dice_Roll <= 45)
	{
		magicItem_I = "armor, +2 breastplate";
	}
	else if (Dice_Roll >= 46 && Dice_Roll <= 47)
	{
		magicItem_I = "armor, +3 chain mail";
	}
	else if (Dice_Roll >= 48 && Dice_Roll <= 49)
	{
		magicItem_I = "armor, +3 chain shirt";
	}
	else if (Dice_Roll >= 50 && Dice_Roll <= 51)
	{
		magicItem_I = "cloak of invisibility";
	}
	else if (Dice_Roll >= 52 && Dice_Roll <= 53)
	{
		magicItem_I = "crystal ball (legendary version)";
	}
	else if (Dice_Roll >= 54 && Dice_Roll <= 55)
	{
		magicItem_I = "armor, +1 half plate";
	}
	else if (Dice_Roll >= 56 && Dice_Roll <= 57)
	{
		magicItem_I = "iron flask";
	}
	else if (Dice_Roll >= 58 && Dice_Roll <= 59)
	{
		magicItem_I = "armor, +3 leather";
	}
	else if (Dice_Roll >= 60 && Dice_Roll <= 61)
	{
		magicItem_I = "armor, +1 plate";
	}
	else if (Dice_Roll >= 62 && Dice_Roll <= 63)
	{
		magicItem_I = "robe of the aerchmage";
	}
	else if (Dice_Roll >= 64 && Dice_Roll <= 65)
	{
		magicItem_I = "rod of resurrection";
	}
	else if (Dice_Roll >= 66 && Dice_Roll <= 67)
	{
		magicItem_I = "armor, +1 scale mail";
	}
	else if (Dice_Roll >= 68 && Dice_Roll <= 69)
	{
		magicItem_I = "scarab of protection";
	}
	else if (Dice_Roll >= 70 && Dice_Roll <= 71)
	{
		magicItem_I = "armor, +2 splint";
	}
	else if (Dice_Roll >= 72 && Dice_Roll <= 73)
	{
		magicItem_I = "armor, +2 studded leather";
	}
	else if (Dice_Roll >= 74 && Dice_Roll <= 75)
	{
		magicItem_I = "well of many worlds";
	}
	else if (Dice_Roll == 76)
	{
		magicItem_I = "magic armor (";

		int Dice_RollT;
		const int Dice_MaxT = 11;

		Dice_RollT = (rand() % Dice_MaxT) + 1;

		if (Dice_RollT == 1 || Dice_RollT == 2)
		{
			magicItem_G += "+2 half plate)";
		}
		else if (Dice_RollT == 3 || Dice_RollT == 4)
		{
			magicItem_G += "+2 plate)";
		}
		else if (Dice_RollT == 5 || Dice_RollT == 6)
		{
			magicItem_G += "+3 studded leather)";
		}
		else if (Dice_RollT == 7 || Dice_RollT == 8)
		{
			magicItem_G += "+3 breastplate)";
		}
		else if (Dice_RollT == 9 || Dice_RollT == 10)
		{
			magicItem_G += "+3 splint)";
		}
		else if (Dice_RollT == 11)
		{
			magicItem_G += "+3 half plate)";
		}
		else if (Dice_RollT == 12)
		{
			magicItem_G += "+3 plate)";
		}
	}
	else if (Dice_Roll == 77)
	{
		magicItem_I = "apperatus of Kwalish";
	}
	else if (Dice_Roll == 78)
	{
		magicItem_I = "armor of invulnerability";
	}
	else if (Dice_Roll == 79)
	{
		magicItem_I = "belt of storm giant strenght";
	}
	else if (Dice_Roll == 80)
	{
		magicItem_I = "cubic gate";
	}
	else if (Dice_Roll == 81)
	{
		magicItem_I = "deck of many things";
	}
	else if (Dice_Roll == 82)
	{
		magicItem_I = "efreeti chain";
	}
	else if (Dice_Roll == 83)
	{
		magicItem_I = "armor of resistance (half plate)";
	}
	else if (Dice_Roll == 84)
	{
		magicItem_I = "horn of valhalla (iron)";
	}
	else if (Dice_Roll == 85)
	{
		magicItem_I = "instrument of the bards (ollamh harp)";
	}
	else if (Dice_Roll == 86)
	{
		magicItem_I = "ioun stone (greater absorption)";
	}
	else if (Dice_Roll == 87)
	{
		magicItem_I = "plate armor of etherealness";
	}
	else if (Dice_Roll == 88)
	{
		magicItem_I = "plate armor of resistance";
	}
	else if (Dice_Roll == 89)
	{
		magicItem_I = "ring of air elemental command";
	}
	else if (Dice_Roll == 90)
	{
		magicItem_I = "ring of earth elemental command";
	}
	else if (Dice_Roll == 91)
	{
		magicItem_I = "ring of fire elemental command";
	}
	else if (Dice_Roll == 92)
	{
		magicItem_I = "ring of water elemental command";
	}
	else if (Dice_Roll == 93)
	{
		magicItem_I = "ring of three wishes";
	}
	else if (Dice_Roll == 94)
	{
		magicItem_I = "sphere of annihilation";
	}
	else if (Dice_Roll == 95)
	{
		magicItem_I = "talisman of the sphere";
	}
	else if (Dice_Roll == 96)
	{
		magicItem_I = "talisman of pure good";
	}
	else if (Dice_Roll == 97)
	{
		magicItem_I = "talisman of ultimate evil";
	}
	else if (Dice_Roll == 98)
	{
		magicItem_I = "tome of the stiled tongue";
	}
	else if (Dice_Roll == 99)
	{
		magicItem_I = "ioun stone (mastery)";
	}
	else if (Dice_Roll == 100)
	{
		magicItem_I = "ioun stone (regeneration)";
	}
}

string Magic_Items::Get_magicItem_A()
{
	return magicItem_A;
}
string Magic_Items::Get_magicItem_B()
{
	return magicItem_B;
}
string Magic_Items::Get_magicItem_C()
{
	return magicItem_C;
}
string Magic_Items::Get_magicItem_D()
{
	return magicItem_D;
}
string Magic_Items::Get_magicItem_E()
{
	return magicItem_E;
}
string Magic_Items::Get_magicItem_F()
{
	return magicItem_F;
}
string Magic_Items::Get_magicItem_G()
{
	return magicItem_G;
}
string Magic_Items::Get_magicItem_H()
{
	return magicItem_H;
}
string Magic_Items::Get_magicItem_I()
{
	return magicItem_I;
}
