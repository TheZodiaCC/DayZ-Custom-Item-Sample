class CfgMods
{
	class NewItems
	{
	    dir = "NewItems";
	    picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
	    name = "NewItems";
	    credits = "";
	    author = "";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

	    dependencies[] = {"World"};

	    class defs
	    {
	        class worldScriptModule
            {
                value = "";
                files[] = {"NewItems\scripts\4_world"};
            };
        };
    };
};
class CfgPatches
{
	class NewItems
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data"};
	};
};

class CfgVehicles {
	/*extern*/ class SeaChest;

	class workbench: SeaChest {
		scope = 2;
		displayName = "WorkBench";
		descriptionShort = "Workbench";
		model = "Path to your model";
		hitpoints = 1000;
		heavyItem = 1;
		weight = 20000;
		itemBehaviour = 0;
		itemSize[] = {1, 2};
		itemsCargoSize[] = {6, 2};
		carveNavmesh = 1;
		canBeDigged = 0;
		rotationFlags = 2;
		repairableWithKits = {0};
		placement = "ForceSlopeOnTerrain";
		physLayer = "item_large";
	};
};