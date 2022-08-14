#include "$CurrentDir:\\mpmissions\\dayzOffline.fodland\\myextras.c"

void main()
{



	//INIT WEATHER BEFORE ECONOMY INIT------------------------
	Weather weather = g_Game.GetWeather();

	weather.MissionWeather(false);    // false = use weather controller from Weather.c

	//weather.GetOvercast().SetLimits( 1.0 , 1.0 );  // new................................................
	//weather.GetOvercast().SetForecastChangeLimits( 0.0, 0.0 );  // new ........................

	weather.GetOvercast().Set( 0.5, 0, 0);
	//weather.GetOvercast().Set( Math.RandomFloatInclusive(0.2, 0.3), 1, 0);
	weather.GetRain().Set( 0, 0, 0);
	weather.GetFog().Set( Math.RandomFloatInclusive(0.05, 0.08), 1, 0);

	//INIT ECONOMY--------------------------------------
// economy init
  Hive  MyHive = CreateHive();
//	GetHive().InitOffline();
     MyHive.InitOffline();



//	Hive ce = CreateHive();
//	if ( ce )
//	ce.InitOffline();


AddMyObjects();

//GetCEApi().ExportProxyData( "5000 0 5000", 8000 );  //Center of map, radius of how far to go out and find buildings.
//GetCEApi().ExportClusterData();

	//DATE RESET AFTER ECONOMY INIT-------------------------
	int year, month, day, hour, minute;
	int reset_month = 9, reset_day = 20;
	GetGame().GetWorld().GetDate(year, month, day, hour, minute);


//	hour = 8;
	


	if ((month == reset_month) && (day < reset_day))
	{
		GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
	}
	else
	{
		if ((month == reset_month + 1) && (day > reset_day))
		{
			GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
		}
		else
		{
			if ((month < reset_month) || (month > reset_month + 1))
			{
				GetGame().GetWorld().SetDate(year, reset_month, reset_day, hour, minute);
			}
		}
	}




}




class CustomMission: MissionServer
{
	void SetRandomHealth(EntityAI itemEnt)
	{
		if ( itemEnt )
		{
			int rndHlt = Math.RandomInt(55,100);
			itemEnt.SetHealth("","",rndHlt);
		}
	}

	override PlayerBase CreateCharacter(PlayerIdentity identity, vector pos, ParamsReadContext ctx, string characterName)
	{
		Entity playerEnt;
		playerEnt = GetGame().CreatePlayer(identity, characterName, pos, 0, "NONE");//Creates random player
		Class.CastTo(m_player, playerEnt);

		GetGame().SelectPlayer(identity, m_player);

		return m_player;
	}

	override void StartingEquipSetup(PlayerBase player, bool clothesChosen)
	{
		EntityAI itemTop;
		EntityAI itemEnt;
		ItemBase itemBs;
		float rand;

		itemTop = player.FindAttachmentBySlotName("Body");

		if ( itemTop )
		{
			itemEnt = itemTop.GetInventory().CreateInInventory("Rag");
			if ( Class.CastTo(itemBs, itemEnt ) )
				itemBs.SetQuantity(6);

			SetRandomHealth(itemEnt);


player.GetInventory().CreateInInventory("ChildBag_Blue"); // added items
player.GetInventory().CreateInInventory("TetracyclineAntibiotics"); // added items
player.GetInventory().CreateInInventory("SardinesCan"); // added items
player.GetInventory().CreateInInventory("CombatKnife"); // added items
player.GetInventory().CreateInInventory("CanOpener"); // added items
player.GetInventory().CreateInInventory("Glock19"); // added items
player.GetInventory().CreateInInventory("Mag_Glock_15Rnd"); // added items
player.GetInventory().CreateInInventory("AmmoBox_9x19_25rnd"); // added items
player.GetInventory().CreateInInventory("SodaCan_Pipsi"); // added items
player.GetInventory().CreateInInventory("Matchbox"); // added items
player.GetInventory().CreateInInventory("Bandage"); // added items

			SetRandomHealth(itemEnt);
		}
	}
};





Mission CreateCustomMission(string path)
{
	return new CustomMission();
}