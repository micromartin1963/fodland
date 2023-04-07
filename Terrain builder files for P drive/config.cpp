class CfgPatches
{
	class fodland
	{
		units[]={"Land_FodssmokingBarrel"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Surfaces"	
		};
	
		author="Fod";
		name="Map";
		url="";
		inputs = "fodland/scripts/inputs.xml";
	};
};


class CfgMods
{
	class fodland
	{
		dir="fodland";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="fodland";
		credits="";
		author="Brew";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game","World"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"fodland/scripts/3_Game","fodland/scripts/4_World"
				};
			};
		};
	};
};



class CfgWorlds
{
	class DefaultLighting;
	class CAWorld;
	class ChernarusPlus: CAWorld
	{
		class Grid;
	};
	class fodland: ChernarusPlus
	{
		worldId=2;
		cutscenes[]={};
		//access=3;
		description="FodsLand";
		icon="";
		worldName="fodland\fodland.wrp";
		pictureMap="";
		pictureShot="";
		oceanMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanNiceMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanStormMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";

		plateFormat="ML$ - #####";
		plateLetters="ABCDEGHIKLMNOPRSTVXZ";
		longitude=-40;
		latitude=-40;


		mapTextureLegend = "";
                userMapPath = "fodland\data\layers";

		class AISpawnerParams
		{
		};

		class OutsideTerrain
		{
			satellite="DZ\rocks\Data\MainTextures\terrain\cp_grass_co.paa";
			enableTerrainSynth="true";
			class Layers
			{
				class Layer0
				{
					nopx="DZ\surfaces\data\terrain\cp_gravel_nopx.paa";
					texture="DZ\surfaces\data\terrain\cp_gravel_ca.paa";
				};
			};
		};

		class Grid: Grid
		{
			offsetX=0;
			offsetY=-15360;
			class Zoom1
			{
				zoomMax=0.5;
				format="XY";
				formatX="Aa";
				formatY="00";
				stepX=200;
				stepY=200;
			};
			class Zoom2
			{
				zoomMax=1e+030;
				format="XY";
				formatX="A";
				formatY="0";
				stepX=2000;
				stepY=2000;
			};
		};

		startTime="16:30";
		startDate="01/05/1985";
		startWeather=0.1;
		startFog=0;
		forecastWeather=0.0;
		forecastFog=0;
		seagullPos[]={1272.842,150,14034.962};
		centerPosition[]={2500,2500,300};
		ilsPosition[]={2545,3000};
		ilsDirection[]={0,0.079999998,1};
		ilsTaxiIn[]={};
		ilsTaxiOff[]={};
		drawTaxiway=0;





		class ReplaceObjects
		{
		};

		class Sounds
		{
			sounds[]={};
		};
		class Animation
		{
			vehicles[]={};
		};

		class Lighting: DefaultLighting
		{
		};





		clutterGrid=1;  // 1.11
		clutterDist=125;    //125 (25)
		noDetailDist=40;   //40  (40)
		fullDetailDist=35;  //15 (35)
		minTreesInForestSquare=3;  //4
		minRocksInRockSquare=4;    // 3


		class Names
		{
                #include "fodland.hpp"
		};




		class Subdivision
		{
			class Fractal
			{
				rougness=5;
				maxRoad=0.02;
				maxTrack=0.5;
				maxSlopeFactor=0.050000001;
			};
			class WhiteNoise
			{
				rougness=2;
				maxRoad=0.0099999998;
				maxTrack=0.050000001;
				maxSlopeFactor=0.0024999999;
			};
			minY=-0;
			minSlope=0.02;
		};
		class Ambient
		{
		};


		class Navmesh
		{
			navmeshName="\fodland\nm\navmesh.nm";
			class GenParams
			{
				tileWidth=50;
				cellSize1=0.25;
				cellSize2=0.1;
				cellSize3=0.1;
				filterIsolatedIslands = true;
				seedPosition[] = {5000, 0, 5000};
				class Agent
				{
					diameter=0.60000002;
					standHeight=1.5;
					crouchHeight=1;
					proneHeight=0.5;
					maxStepHeight=0.45;
					maxSlope=60;
				};
			
	
				class Links
				{	
					class ZedJump387_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = 0.3;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66ff0000;
					};
					class ZedJump388_050
					{
						jumpLength = 1.50;
						jumpHeight = 0.50;
						minCenterHeight = -0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66dd5500;
					};
					class ZedJump387_110
					{
						jumpLength = 3.90;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x66008000;
					};
					class ZedJump420_160
					{
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"jumpOver"};
						color = 0x660000ff;
					};
					class ZedJump265_210
					{
						jumpLength = 2.45;
						jumpHeight = 2.5;
						minCenterHeight = 1.8;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump0";
						flags[] = {"climb"};
						color = 0x669400d3;
					};
					class Fence50_110deer
					{
						typeId = 100;
						jumpLength = 8.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump2";
						flags[] = {"jumpOver"};
						color = 0x66aaaaFF;
					};
					class Fence110_160deer 
					{
						typeId = 101;
						jumpLength = 8.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 1.0;
						jumpDropdownMax = -1.0;
						areaType="jump3";
						flags[] = {"jumpOver"};
						color = 0x6624fff8;
					};
					class Fence50_110hen
					{
						typeId = 110;
						jumpLength = 4.0;
						jumpHeight = 1.1;
						minCenterHeight = 0.5;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};
					class Fence110_160hen
					{
						typeId = 111;
						jumpLength = 4.0;
						jumpHeight = 1.6;
						minCenterHeight = 1.1;
						jumpDropdownMin = 0.5;
						jumpDropdownMax = -0.5;
						areaType="jump4";
						flags[] = {"jumpOver"};
						color = 0xFFFFAA00;
					};

				};
			};
		};
	};
};





class CfgVehicles
{
	class HouseNoDestruct;
	class Land_FodssmokingBarrel : HouseNoDestruct
	{
		scope = 2;
		displayName = "Fods Smoking Barrel";
		descriptionShort = "Smoking_Barrel";
		model="fodland\models\red_canister.p3d";
		color="Green";
	};
};

	





class CfgWorldList
{
	class fodland
	{
	};
};



