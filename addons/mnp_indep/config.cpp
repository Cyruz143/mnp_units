enum {
	 //  = 2,	// Error parsing: Empty enum name
	DESTRUCTENGINE = 2,
	DESTRUCTDEFAULT = 6,
	DESTRUCTWRECK = 7,
	DESTRUCTTREE = 3,
	DESTRUCTTENT = 4,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXESXYZ = 4,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	DESTRUCTNO = 0,
	STABILIZEDINAXESNONE = 0,
	DESTRUCTMAN = 5,
	DESTRUCTBUILDING = 1,
};

class CfgPatches {
	class MNP_MIXR_Config {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_Common", "A3_Characters_F", "A3_Weapons_F_Ammoboxes"};
	};
};

class CfgUnitInsignia
{
	class TestInsig
	{
		displayName = "Alpha test insignia"; // Name displayed in Arsenal
		author = "Killoch"; // Author displayed in Arsenal
		texture = "\MNP_INDEP\Data\1.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
};

class CfgFactionClasses{
	class MNP_I_Units
	{
		displayName = "MNP - Independant";
		author = "Killoch";
		icon="\MNP_INDEP\Data\Icon.paa";
		priority = 2;
		side = 3; // INDE
	};
};

class CfgGroups
{
	class Indep
	{
		name = "$STR_A3_CfgGroups_Indep0";
		
		class MNP_ASA_groups
		{
			Name = "Allied States of America";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_ASA_Squad
				{
					Name = "ASA Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_ASA_Patrol
				{
					Name = "ASA Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_ASA_AT_Patrol
				{
					Name = "ASA Anti-Tank Team";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_ASA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_IE_groups
		{
			Name = "Irish Defence Forces";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_IE_Squad
				{
					Name = "Infantry Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_Officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_S";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_Medic";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_IE_Patrol
				{
					Name = "Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_Officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_S";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_IE_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_Officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_RAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_IED_groups
		{
			Name = "Irish Defence Forces (D)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_IED_Squad
				{
					Name = "Infantry Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DOfficer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DS";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DMedic";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DRAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_D";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_D";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_D";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_D";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_IED_Patrol
				{
					Name = "Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DOfficer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DS";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_IED_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DOfficer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_RAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_DRAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Irish_Soldier_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_NPAT_groups
		{
			Name = "National Peoples Army";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_NPAT_Squad
				{
					Name = "NPA Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_D";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_D";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_D";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_D";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_NPAT_Patrol
				{
					Name = "NPA Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_NPAT_AT_Patrol
				{
					Name = "NPA Anti-Tank Team";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_DPM_Soldier_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_NPA_groups
		{
			Name = "National Peoples Army (D)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_NPA_Squad
				{
					Name = "NPA Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_D";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_D";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_D";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_D";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_NPA_Patrol
				{
					Name = "NPA Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_NPA_AT_Patrol
				{
					Name = "NPA Anti-Tank Team";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_LVM_groups
		{
			Name = "Local Volunteer Militia";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_LVM_Squad
				{
					Name = "Combat Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_SixCo_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_LVM_Patrol
				{
					Name = "Local Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_LVM_AT_Patrol
				{
					Name = "Militia Anti-Tank Team";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_RAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_ARC_groups
		{
			Name = "Altis Revolutionary Council";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_ARC_Squad
				{
					Name = "ARC Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_ARC_Patrol
				{
					Name = "ARC Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_ARC_AT_Patrol
				{
					Name = "ARC Anti-Tank Team";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Rev_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_FIN_GROUPS
		{
			Name = "Finnish Armed Forces";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_FIN_SQUAD
				{
					Name = "Finnish Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_FIN_Patrol
				{
					Name = "Finnish Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_FIN_Patrol_AT
				{
					Name = "Finnish AT Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_FIN_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_AFIN_GROUPS
		{
			Name = "Finnish Arctic Units";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_AFIN_SQUAD
				{
					Name = "Finnish Arctic Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_AFIN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_Md";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_AFIN_PATROL
				{
					Name = "Finnish Arctic Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_AFIN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_AFIN_PATROL_AT
				{
					Name = "Finnish Arctic AT Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_AFIN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_NZ_GROUPS
		{
			Name = "New Zealand Defence Forces";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_NZ_SQUAD
				{
					Name = "NZDF Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_Md";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_NZ_PATROL
				{
					Name = "NZDF Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_NZ_AT_PATROL
				{
					Name = "NZDF AT Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_NOR_GROUPS
		{
			Name = "Norwegian Armed Forces";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_NOR_SQUAD
				{
					Name = "Norwegian Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_Md";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_NOR_PATROL
				{
					Name = "Norwegian Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_NOR_AT_PATROL
				{
					Name = "Norwegian AT Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NOR_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_NOR_D_GROUPS
		{
			Name = "Norwegian Armed Forces (Desert)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_NOR_D_SQUAD
				{
					Name = "Norwegian Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_Md";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_NOR_D_PATROL
				{
					Name = "Norwegian Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_NOR_D_AT_PATROL
				{
					Name = "Norwegian AT Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_NOR_D_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_LVM_D_GROUPS
		{
			Name = "Desert Militiamen";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_LVM_D_SQUAD
				{
					Name = "Militia Group";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DM";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DRAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DF";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DF";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_LVM_D_PATROL
				{
					Name = "Militia Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DF";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_LVM_D_AT_PATROL
				{
					Name = "Militian Anti-Tank Group";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DRAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DRAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_Militia_Soldier_DF";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_CZ_GROUPS
		{
			Name = "Army of the Czech Republic";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_CZ_SQUAD
				{
					Name = "Czech Squad";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_Md";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_CZ_PATROL
				{
					Name = "Patrol";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_CZ_AT_PATROL
				{
					Name = "Anti-Tank Group";
					side = 2;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 2;
						vehicle = "MNP_CZ_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

	};
};

class CfgVehicleClasses{

	class MNP_Irish_Units{
		displayName = "Defence Forces Ireland"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the VehicleClass is different.
	};

	class MNP_MNP_Irish_Units_D{
		displayName = "Defence Forces Ireland (Desert)"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the VehicleClass is different.
	};
	
	class MNP_ASA_Units{
		displayName = "Allied States of America";
	};
	
	class MNP_NPA_Units{
		displayName = "National Peoples Army (Desert)";
	};
	
	class MNP_NPAT_Units{
		displayName = "National Peoples Army";
	};
	
	class MNP_LVM_Units{
		displayName = "Local Volunteer Militia";
	};

	class MNP_LVMD_Units{
		displayName = "Local Volunteer Militia (Desert)";
	};
	
	class MNP_ARC_Units{
		displayName = "Altain Revolutionary Council";
	};

	class MNP_NZ_Units{
		displayName = "New Zealand Defence Forces";
	};
	
	class MNP_Fin_Units{
		displayName = "Finnish Armed Forces";	
	};
	
	class MNP_AFIN_Units{
		displayName = "Finnish Arctic Units";
	};
	
	class MNP_NOR_Units{
		displayName = "Norwegian Army";
	};
	
	class MNP_NOR_D_Units{
		displayName = "Norwegian Army (Desert)";
	};
		
	class MNP_CZ_UNITS{
		displayName = "Army of the Czech Republic";
	};
	
	class MNP_INDEP_UNSORT{
		displayName= "Unsorted";
	};
	
	
};

class CfgVehicles {

	class B_Soldier_base_F;
	class B_soldier_AR_F;
	class B_G_Soldier_SL_F;
	class B_G_Soldier_lite_F;	
	class B_Helipilot_F;
		
	class O_officer_F;
	class O_Soldier_F;
	class O_Soldier_AR_F;
	class O_Soldier_LAT_F;
	class O_Soldier_GL_F;
	class O_Medic_F;
	
	class MNP_Irish_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Ireland"; //the uniform item
		
		backpack = "B_AssaultPack_rgr";
		
		weapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		respawnweapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_Irish_Units"; // Puts unit in the vehicleclass
		side = 2;
		linkedItems[] = { "FirstAidKit", "MNP_Helmet_Ireland", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_Ireland", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	
	};
	
	class MNP_Irish_Soldier_S : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Grenadier";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Ireland_S"; //the uniform item
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_TRG21_GL_MRCO_F", "Throw"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F", "Throw"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		side = 2;		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire.paa"};
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_Irish_Units"; // Puts unit in the vehicleclass
		linkedItems[] = {"MNP_Boonie_Ireland_T", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_Ireland_T", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";
	};

	class MNP_Irish_Soldier_AR : MNP_Irish_Soldier_S {
		
		displayName = "Automatic Rifleman";
		
		backpack = "B_Carryall_oli";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		side = 2;		
		linkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	};

	class MNP_Irish_Soldier_Officer : MNP_Irish_Soldier_S {
	
		displayName = "Team Leader";
	
		weapons[] = {"arifle_TRG21_GL_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		side = 2;		
		linkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	};

	class MNP_Irish_Soldier_RAT : MNP_Irish_Soldier_S {

		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_B_Titan_short_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"launch_B_Titan_short_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		side = 2;		
		magazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
	};

	class MNP_Irish_Soldier_Medic : MNP_Irish_Soldier_F {
		
		displayName = "Combat Medic";
		
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
		side = 2;		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		attendant = 1;
		linkedItems[] = {"MNP_Boonie_Ireland_T", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit",  "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_Ireland_T", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	
	
	class MNP_Irish_Soldier_D : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Irish Rifleman (D)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Ireland_D"; //the uniform item
		
			side = 2;
		
		backpack = "B_Kitbag_rgr";
		author = "Killoch";	
		weapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		respawnweapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire_D.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_MNP_Irish_Units_D"; // Puts unit in the vehicleclass
		
		linkedItems[] = {"MNP_Helmet_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Irish_Soldier_DS : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Grenadier";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Ireland_DS"; //the uniform item
		side = 2;	
		backpack = "B_Kitbag_rgr";
		author = "Killoch";	
		weapons[] = {"arifle_TRG21_GL_MRCO_F", "Throw"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F", "Throw"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire_D.paa"};
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_MNP_Irish_Units_D"; // Puts unit in the vehicleclass
		linkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Irish_Soldier_DAR : MNP_Irish_Soldier_DS{
		displayName = "Automatic Rifleman";
		
		backpack = "B_Carryall_oli";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
		linkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	
	};
	
	class MNP_Irish_Soldier_DOfficer : MNP_Irish_Soldier_DS{
		displayName = "Team Leader";
	
		weapons[] = {"arifle_TRG21_GL_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Beret_Ireland", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	
	};
	
	class MNP_Irish_Soldier_DRAT : MNP_Irish_Soldier_D{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_B_Titan_short_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"launch_B_Titan_short_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		
		magazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Ireland_D", "FirstAidKit", "MNP_Vest_Ireland", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
	
	};
	
	class MNP_Irish_Soldier_DMedic : MNP_Irish_Soldier_DS{
		displayName = "Combat Medic";
		
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		attendant = 1;
		linkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit",  "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_Ireland_D", "MNP_Vest_Ireland", "ItemMap", "Medikit", "FirstAidKit", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	// Allied States of America units. ( IRREGULARS )
	
	class I_G_Soldier_LAT_F;
	
	class MNP_ASA_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "RifleMan";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ASA_GC"; //the uniform item
		
		side = 2;
		
		backpack = "B_AssaultPack_rgr";
		
		weapons[] = {"arifle_MX_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_ASA_Units"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "H_Cap_blk", "MNP_Vest_ASA_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_Cap_blk", "MNP_Vest_ASA_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_ASA_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ASA_GC2"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T2.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_ASA_Units"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "H_Watchcap_blk", "MNP_Vest_ASA_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_Watchcap_blk", "MNP_Vest_ASA_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_ASA_Soldier_G : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Grenadier";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ASA_GC3"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T3.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_ASA_Units"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "H_MilCap_gry", "MNP_Vest_ASA_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_MilCap_gry", "MNP_Vest_ASA_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};	
	
	class MNP_ASA_Soldier_AT : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman (AT)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ASA_GC_B"; //the uniform item
		side = 2;
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_ASA_Units"; // Puts unit in the vehicleclass		

		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = { "FirstAidKit", "H_Booniehat_grn", "MNP_Vest_ASA_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_Booniehat_grn", "MNP_Vest_ASA_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};

	class MNP_ASA_Soldier_M : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Combat Medic";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ASA_GC2_B"; //the uniform item
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T2.paa"};
		side = 2;
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_ASA_Units"; // Puts unit in the vehicleclass		

		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		attendant = 1;
		linkedItems[] = { "FirstAidKit", "H_Bandanna_cbr", "MNP_Vest_ASA_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_Bandanna_cbr", "MNP_Vest_ASA_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};		
	
	class MNP_ASA_Soldier_AR : B_soldier_base_F {
		
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Automatic Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ASA_GC3_B"; //the uniform item
		side = 2;
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T3.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_ASA_Units"; // Puts unit in the vehicleclass		

		backpack = "B_AssaultPack_rgr";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = { "FirstAidKit", "H_Cap_blk", "MNP_Vest_ASA_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_Cap_blk", "MNP_Vest_ASA_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	// NPA Desert
	
	class MNP_US6co_Soldier_F;
	class MNP_US6co_Soldier_O;
	
	class MNP_SixCo_Soldier_D : MNP_US6co_Soldier_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Soldier";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		

		side = 2;
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NPA_Units"; // Puts unit in the vehicleclass
		linkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk",	"ItemWatch"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk", "ItemWatch"};
	};
	
	class MNP_SixCo_Soldier_O : MNP_US6co_Soldier_O{
		displayName = "Leader";
		side = 2;
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"H_Beret_blk", "V_TacVest_brn", "ItemWatch"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_brn", "ItemWatch"};
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NPA_Units"; // Puts unit in the vehicleclass
	};
	
	class MNP_SixCo_Soldier_AR : MNP_SixCo_Soldier_D{
		displayName = "Autorifleman";
		side = 2;
		
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
		linkedItems[] = {"H_ShemagOpen_khk", "V_BandollierB_khk",	"ItemWatch"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk", "V_BandollierB_khk", "ItemWatch"};


	};
	
	class MNP_SixCo_Soldier_AT : MNP_SixCo_Soldier_O{
		displayName = "Rifleman (AT)";
		side = 2;

		weapons[] = {"arifle_Mk20C_plain_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_F", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_F", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"H_ShemagOpen_khk", "V_TacVest_brn",	"ItemWatch"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk", "V_TacVest_brn", "ItemWatch"};

	};
	
	class MNP_SixCo_Soldier_G : MNP_SixCo_Soldier_D{
		displayName = "Grenadier";
		side = 2;
		
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk",	"ItemWatch"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk", "ItemWatch"};
	};
	
	class MNP_SixCo_Soldier_M : MNP_SixCo_Soldier_O{
		displayName = "Medic";
		side = 2;
		
		backpack = "B_FieldPack_ocamo_Medic";
		attendant = 1;
		linkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk",	"ItemWatch"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk", "ItemWatch"};
	};
	
	class MNP_SixCo_Soldier_Alternate : MNP_SixCo_Soldier_D {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Soldier (DPM & Shemagh)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NPA_Alt"; //the uniform item
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		side = 2;
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NPA_Units"; // Puts unit in the vehicleclass
		linkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk",	"ItemWatch"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk", "ItemWatch"};
	};
	
	class MNP_SixCo_Soldier_Alt_B : MNP_SixCo_Soldier_O {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Soldier (DPM)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NPA_Alt_B"; //the uniform item
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		side = 2;
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NPA_Units"; // Puts unit in the vehicleclass
		linkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk",	"ItemWatch"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk", "V_Chestrig_khk", "ItemWatch"};
	};
	
	// NPA Temperate
	
	class MNP_DPM_A;
	
	class MNP_DPM_Soldier_D : MNP_DPM_A {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Soldier";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_DPM"; //the uniform item
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		

		side = 2;
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NPAT_Units"; // Puts unit in the vehicleclass
		linkedItems[] = {"H_Shemag_olive", "V_Chestrig_rgr",	"ItemWatch"};
		respawnLinkedItems[] = {"H_Shemag_olive", "V_Chestrig_rgr", "ItemWatch"};
	};
	
	class MNP_DPM_Soldier_O : MNP_DPM_Soldier_D{
		displayName = "Leader";
		uniformClass = "MNP_CombatUniform_DPM_B"; //the uniform item
	
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		side = 2;
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NPAT_Units"; // Puts unit in the vehicleclass
		
		linkedItems[] = {"H_Beret_blk", "V_TacVest_camo", "ItemWatch"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_camo", "ItemWatch"};
	};
	
	class MNP_DPM_Soldier_AR : MNP_DPM_Soldier_D{
		displayName = "Autorifleman";
		
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
				side = 2;

		linkedItems[] = {"H_Shemag_olive", "V_BandollierB_rgr",	"ItemWatch"};
		respawnLinkedItems[] = {"H_Shemag_olive", "V_BandollierB_rgr", "ItemWatch"};

	};
	
	class MNP_DPM_Soldier_AT : MNP_DPM_Soldier_O{
		displayName = "Rifleman (AT)";

		weapons[] = {"arifle_Mk20C_plain_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "launch_RPG32_F", "Throw", "put"};
		side = 2;
		
		magazines[] = {"RPG32_F", "RPG32_F", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_F", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"H_Shemag_olive", "V_TacVest_camo",	"ItemWatch"};
		respawnLinkedItems[] = {"H_Shemag_olive", "V_TacVest_camo", "ItemWatch"};
	};
	
	class MNP_DPM_Soldier_G : MNP_DPM_Soldier_D{
		displayName = "Grenadier";
		
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		side = 2;
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"H_Shemag_olive", "V_Chestrig_rgr",	"ItemWatch"};
		respawnLinkedItems[] = {"H_Shemag_olive", "V_Chestrig_rgr", "ItemWatch"};
	};
	
	class MNP_DPM_Soldier_M : MNP_DPM_Soldier_O{
		displayName = "Medic";
		side = 2;
		
		backpack = "B_FieldPack_ocamo_Medic";
		attendant = 1;
		linkedItems[] = {"H_Shemag_olive", "V_Chestrig_rgr",	"ItemWatch"};
		respawnLinkedItems[] = {"H_Shemag_olive", "V_Chestrig_rgr", "ItemWatch"};
	};
	
	// Local Volunteer Militia
	
	class MNP_Militia_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_A"; //the uniform item
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\officer_strep_co.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVM_Units"; // Puts unit in the vehicleclass
		side = 2;
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"H_Beret_blk", "V_TacVest_camo", "ItemWatch"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_camo", "ItemWatch"};
	};
	
	class MNP_Militia_Soldier_G : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Grenadier";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_B"; //the uniform item
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\officer_strep2_co.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVM_Units"; // Puts unit in the vehicleclass
		
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		side = 2;		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"MNP_Boonie_TIG","V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_TIG","V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_AR : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Automatic Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_C"; //the uniform item
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		hiddenSelections[] = {"Camo1", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\officer_strep3_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVM_Units"; // Puts unit in the vehicleclass
		side = 2;
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
		linkedItems[] = { "MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_M : B_G_Soldier_lite_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Field Medic";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_E"; //the uniform item
		backpack = "B_AssaultPack_rgr_Medic";
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
	
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = { "\MNP_INDEP\Data\smock_t1_co.paa","\MNP_INDEP\Data\smocks_strepII_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVM_Units"; // Puts unit in the vehicleclass
		side = 2;
		linkedItems[] = {"MNP_Boonie_DPM", "V_TacVest_camo","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_DPM", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_RAT : B_G_Soldier_lite_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman (AT)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_F"; //the uniform item
		backpack = "B_Kitbag_rgr";
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
	
		weapons[] = {"launch_B_Titan_short_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_B_Titan_short_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = { "\MNP_INDEP\Data\smock_t2_co.paa", "\MNP_INDEP\Data\smocks_strepI_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
		side = 2;
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVM_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"MNP_Boonie_ERDL", "V_TacVest_camo","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_ERDL", "V_TacVest_camo", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_F : MNP_Militia_Soldier_RAT{
	
		displayName = "Rifleman";
	
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		side = 2;		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
	
	};
	
	// Desert Militiamen
	
	class MNP_Militia_Soldier_DO : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_DA"; //the uniform item
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		hiddenSelections[] = {"Camo1", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_LVM_D1.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVMD_Units"; // Puts unit in the vehicleclass
		side = 2;
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"H_Beret_blk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_DG : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Grenadier";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_DB"; //the uniform item
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		hiddenSelections[] = {"Camo1","insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_LVM_D2.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVMD_Units"; // Puts unit in the vehicleclass
		
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		side = 2;		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = {"H_ShemagOpen_khk","V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_ShemagOpen_khk","V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_DAR : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Automatic Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_DC"; //the uniform item
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		hiddenSelections[] = {"Camo1", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_LVM_D3.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVMD_Units"; // Puts unit in the vehicleclass
		side = 2;
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
		linkedItems[] = { "H_ShemagOpen_khk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "H_ShemagOpen_khk", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_DM : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Field Medic";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_DE"; //the uniform item
		backpack = "B_AssaultPack_rgr_Medic";
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = { "\MNP_INDEP\Data\C_LVM_D6.paa","\MNP_INDEP\Data\C_LVM_D4.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVMD_Units"; // Puts unit in the vehicleclass
		side = 2;
		linkedItems[] = {"MNP_Boonie_3CO", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_3CO", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_DRAT : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman (AT)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Militia_DF"; //the uniform item
		backpack = "B_Kitbag_rgr";
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
		weapons[] = {"launch_B_Titan_short_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_B_Titan_short_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = { "\MNP_INDEP\Data\C_LVM_D6.paa", "\MNP_INDEP\Data\C_LVM_D5.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};
		side = 2;
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_LVMD_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"MNP_Boonie_Jigsaw", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_Jigsaw", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Militia_Soldier_DF : MNP_Militia_Soldier_DRAT{
	
		displayName = "Rifleman";
	
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		side = 2;		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		linkedItems[] = {"MNP_Boonie_DDPM", "V_TacVest_brn","ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_DDPM", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	
	// Altain Revolutionary Council
	
	class MNP_Rev_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Revolutionary Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Rebel_B"; //the uniform item
		Model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		hiddenSelections[] = {"Camo1", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\rev_1.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_ARC_Units"; // Puts unit in the vehicleclass
		side = 2;
		weapons[] = {"arifle_TRG21_GL_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		linkedItems[] = { "MNP_MC_Rev", "V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "MNP_MC_Rev", "V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Rev_Soldier_AR : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Automatic Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Rebel_A"; //the uniform item
		
		Model = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\rev_2.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_ARC_Units"; // Puts unit in the vehicleclass
		side = 2;
		linkedItems[] = {"MNP_MC_Rev", "V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MC_Rev", "V_BandollierB_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};	
	
	class MNP_Rev_Soldier_AT : MNP_Rev_Soldier_AR{
	
		displayName = "Rifleman (AT)";
	
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_B_Titan_short_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"launch_B_Titan_short_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		
		magazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_Rev_Soldier_GR : MNP_Rev_Soldier_AR{
		displayName = "Grenadier";
	
	
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw", "put"};
			
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	};
	
	class MNP_Rev_Soldier_M : MNP_Rev_Soldier_AR{
		displayName = "Doctor";
		
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_Rev_Soldier_F : MNP_Rev_Soldier_AR{
		displayName = "Revolutionary";

		weapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		respawnweapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};

	
	// Fins
	
	class MNP_FIN_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "RifleMan";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Fin_A"; //the uniform item
		
		side = 2;
		
		backpack = "B_AssaultPack_rgr";
		
		weapons[] = {"arifle_MX_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_FIN_T.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_FIN_Units"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_FIN_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Finnish Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Fin_B"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_FIN_T.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_FIN_Units"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_T", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_FIN_Soldier_AR : MNP_FIN_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_FIN_Soldier_AT : MNP_FIN_Soldier_O{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_FIN_Soldier_G : MNP_FIN_Soldier_F{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
	
	class MNP_FIN_Soldier_MD : MNP_FIN_Soldier_O{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
		
	
	};
	
	// Cold Fins
	
	class MNP_AFIN_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "RifleMan";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Finarctic_A"; //the uniform item
		
		side = 2;
		
		backpack = "B_AssaultPack_rgr";
		
		weapons[] = {"arifle_MX_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_FIN_A.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_AFIN_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_AFIN_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Finarctic_B"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_FIN_A.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_AFIN_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_FIN_A", "MNP_Vest_Fin_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_AFIN_Soldier_AR : MNP_AFIN_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_AFIN_Soldier_AT : MNP_AFIN_Soldier_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_AFIN_Soldier_G : MNP_AFIN_Soldier_O{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
	
	class MNP_AFIN_Soldier_MD : MNP_AFIN_Soldier_O{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
		
	
	};
	
	// Kiwis
	
	class MNP_NZ_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "NZ RifleMan";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NZ_A"; //the uniform item
		
		side = 2;
		
		backpack = "B_AssaultPack_rgr";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NZ.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NZ_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_NZ_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "NZ Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NZ_B"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NZ.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NZ_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Boonie_NZ", "MNP_Vest_NZ_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_NZ_Soldier_AR : MNP_NZ_Soldier_O{
		displayName = "Automatic Rifleman";

		backpack = "B_Carryall_oli";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
	};
	
	class MNP_NZ_Soldier_AT : MNP_NZ_Soldier_O{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_NZ_Soldier_G : MNP_NZ_Soldier_O{
		displayName = "Grenadier";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_NZ_Soldier_Md : MNP_NZ_Soldier_O{
		displayName = "Combat Medic";

		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	// Norweegis
	
	class MNP_NOR_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "NOR RifleMan";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NOR_A"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NOR.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_NOR_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "NOR Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NOR_B"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NOR.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_grass", "MNP_Vest_NOR_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_NOR_Soldier_AR : MNP_NOR_Soldier_O{
		displayName = "Automatic Rifleman";

		backpack = "B_Carryall_oli";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
	};
	
	class MNP_NOR_Soldier_AT : MNP_NOR_Soldier_O{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_NOR_Soldier_G : MNP_NOR_Soldier_O{
		displayName = "Grenadier";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_NOR_Soldier_Md : MNP_NOR_Soldier_O{
		displayName = "Combat Medic";

		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	// Desert Norweegies
	
	class MNP_NOR_D_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "NOR RifleMan";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NOR_D_A"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NOR_D.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_D_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_NOR_D_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "NOR Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NOR_D_B"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NOR_D.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_D_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "H_HelmetB_light_sand", "MNP_Vest_NOR_D_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_NOR_D_Soldier_AR : MNP_NOR_D_Soldier_O{
		displayName = "Automatic Rifleman";

		backpack = "B_Carryall_oli";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
	};
	
	class MNP_NOR_D_Soldier_AT : MNP_NOR_D_Soldier_O{
		displayName = "Rifleman (AT)";

		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_NOR_D_Soldier_G : MNP_NOR_D_Soldier_O{
		displayName = "Grenadier";
		

		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_NOR_D_Soldier_Md : MNP_NOR_D_Soldier_O{
		displayName = "Combat Medic";

		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	// Czech Republic
	
	class MNP_CZ_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "CZ RifleMan";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_CZ_A"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_CZ.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_CZ_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "MNP_Helmet_CZ", "MNP_Vest_CZ_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_CZ", "MNP_Vest_CZ_1", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_CZ_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "CZ Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_CZ_B"; //the uniform item
		
		side = 2;
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_CZ.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_CZ_UNITS"; // Puts unit in the vehicleclass
		
		linkedItems[] = { "FirstAidKit", "MNP_Helmet_CZ", "MNP_Vest_CZ_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_CZ", "MNP_Vest_CZ_2", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		author = "Killoch";	
	};
	
	class MNP_CZ_Soldier_AR : MNP_CZ_Soldier_O{
		displayName = "Automatic Rifleman";

		backpack = "B_Carryall_oli";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		
	};
	
	class MNP_CZ_Soldier_AT : MNP_CZ_Soldier_F{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_CZ_Soldier_G : MNP_CZ_Soldier_F{
		displayName = "Grenadier";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_CZ_Soldier_Md : MNP_CZ_Soldier_O{
		displayName = "Combat Medic";

		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_Amerc_1F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Invisible Man";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_AMerc_1"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";		
		
		weapons[] = {};
		respawnweapons[] = {};
		
		magazines[] = {};
		respawnmagazines[] = {};
		
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_BushCam_A.paa", "\MNP_INDEP\Data\C_Beige_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\noPatch.rvmat"};
	
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_D_UNITS"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_Amerc_2F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Invisible Man";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_AMerc_2"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";		
		
		weapons[] = {};
		respawnweapons[] = {};
		
		magazines[] = {};
		respawnmagazines[] = {};
		
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Bushcam_A.paa", "\MNP_INDEP\Data\C_FrLiz_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\noPatch.rvmat"};
	
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_D_UNITS"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_Amerc_3F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Invisible Man";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_AMerc_3"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";		
		
		weapons[] = {};
		respawnweapons[] = {};
		
		magazines[] = {};
		respawnmagazines[] = {};
		
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Duck_A.paa", "\MNP_INDEP\Data\C_Beige_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\noPatch.rvmat"};
	
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_D_UNITS"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_Amerc_4F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Invisible Man";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_AMerc_4"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";		
		
		weapons[] = {};
		respawnweapons[] = {};
		
		magazines[] = {};
		respawnmagazines[] = {};
		
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_FrLiz_A.paa", "\MNP_INDEP\Data\C_FrLiz_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\noPatch.rvmat"};
	
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_D_UNITS"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_Amerc_5F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Invisible Man";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_AMerc_5"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";		
		
		weapons[] = {};
		respawnweapons[] = {};
		
		magazines[] = {};
		respawnmagazines[] = {};
		
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_SPLRain_A.paa", "\MNP_INDEP\Data\C_Beige_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\noPatch.rvmat"};
	
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_D_UNITS"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_Amerc_6F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Invisible Man";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_AMerc_6"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";		
		
		weapons[] = {};
		respawnweapons[] = {};
		
		magazines[] = {};
		respawnmagazines[] = {};
		
		linkedItems[] = {};
		respawnLinkedItems[] = {};
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Duck_A.paa", "\MNP_INDEP\Data\C_Duck_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\noPatch.rvmat"};
	
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_NOR_D_UNITS"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_PPU_Soldier_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "PPU MAN";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_PPU_A"; //the uniform item
		
		side = 2;
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_PPU.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_CZ_UNITS"; // Puts unit in the vehicleclass
		author = "Killoch";	
	};
	
	class MNP_PPU_Soldier_O : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "PPU Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_PPU_B"; //the uniform item
		
		side = 2;
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_PPU.paa"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		faction = MNP_I_Units; // Puts unit under new faction
		vehicleClass = "MNP_CZ_UNITS"; // Puts unit in the vehicleclass
		author = "Killoch";	
	};
	
	};

class cfgWeapons {

	class Uniform_Base;
	class UniformItem;
	class V_PlateCarrierIA1_dgtl;
	class V_PlateCarrierIA2_dgtl;
	class H_HelmetIA; 
	class ItemCore;
	class HeadgearItem;
	class Vest_Base;
	class VestItem;
	class U_O_OfficerUniform_ocamo ;
	class V_PlateCarrier3_rgr;
	class U_B_CombatUniform_mcam_tshirt;
	class U_B_CombatUniform_mcam_vest;
	class H_Booniehat_khk;
	class H_Beret_blk;
	class H_Beret_02;
	class U_O_CombatUniform_ocamo;
	class U_B_HeliPilotCoveralls;
	class H_MilCap_gry;
	class B_FieldPack_cbr;
	class B_Carryall_cbr;
	class B_FieldPack_oucamo_Medic;
	class B_FieldPack_cbr_AT;
	class B_Carryall_Base;
	class B_FieldPack_Base;
	class U_BG_Guerrilla_6_1;
	class U_I_OfficerUniform;
	
	class MNP_CombatUniform_Ireland : Uniform_Base {
		scope = 2;
		displayName = "MNP: Irish DPM Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_Irish_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Ireland_S : U_B_CombatUniform_mcam_vest {
		scope = 2;
		displayName = "MNP: Irish DPM Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_Irish_Soldier_S"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Ireland_D : Uniform_Base {
		scope = 2;
		displayName = "MNP: Irish DPM Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire_D.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_Irish_Soldier_D"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Ireland_DS : U_B_CombatUniform_mcam_vest {
		scope = 2;
		displayName = "MNP: Irish DPM Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Ire_D.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_Irish_Soldier_DS"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Beret_Ireland : H_Beret_02  {
		displayName = "MNP: Irish Beret";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\Beret_Ireland_P.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Beret_Flat.rvmat"};
    };  
	
	class MNP_Boonie_Ireland_T : H_Booniehat_khk  {
		displayName = "MNP: Irish DPM Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\Boonie_Ireland_T.paa"};
    }; 
	
	class MNP_Boonie_Ireland_D : H_Booniehat_khk  {
		displayName = "MNP: Irish DPM Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\Boonie_Ireland_D.paa"};
    }; 
	
	class MNP_Helmet_Ireland : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Irish DPM Helmet";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\H_Ire.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Helmet_Ireland_D : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Irish DPM Helmet (Desert)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\H_Ire_D.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	class MNP_Vest_Ireland : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Irish DPM Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_Ire.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	class MNP_Vest_Ireland_B : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Irish DPM Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_Ire.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
			containerClass = "Supply120";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	// NPA Uniforms
	
	class MNP_Boonie_Jigsaw : H_Booniehat_khk {
        displayName = "MNP: Desert Jigsaw Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\B_LVMD1.paa"};
    };  
	
	class MNP_Boonie_ASA : H_Booniehat_khk {
        displayName = "MNP: DMC Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\B_UEDP.paa"};
    }; 

	// REBELS WITHOUT A CAUSE ( LVM )
	
	class MNP_CombatUniform_Militia_A : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (Tigerstripe)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\officer_strep_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
			uniformClass = "MNP_Militia_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Militia_B : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (Woodland)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\officer_strep2_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
			uniformClass = "MNP_Militia_Soldier_G"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Militia_C : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (ATACS)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\officer_strep3_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
			uniformClass = "MNP_Militia_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Militia_E : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (ERDL, T-Shirt)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\smocks_strepI_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
			uniformClass = "MNP_Militia_Soldier_M"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Militia_F : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (DPM, T-Shirt)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\smocks_strepII_co.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
			uniformClass = "MNP_Militia_Soldier_RAT"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 80; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	// In the Desert
	
	class MNP_CombatUniform_Militia_DA : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (Desert Jigsaw)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_LVM_D1.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
			uniformClass = "MNP_Militia_Soldier_DO"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Militia_DB : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (Desert DPM)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_LVM_D2.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
			uniformClass = "MNP_Militia_Soldier_DG"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Militia_DC : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (3 Color Desert, Iranian DPM)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_LVM_D3.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
			uniformClass = "MNP_Militia_Soldier_DAR"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Militia_DE : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (3 Color Desert, T-Shirt)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_LVM_D4.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
			uniformClass = "MNP_Militia_Soldier_DM"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Militia_DF : U_O_CombatUniform_ocamo {
		scope = 2;
		displayName = "MNP: Rebel Gear (Desert T-Shirt)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_LVM_D5.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_guerrilla1_1.p3d";
			uniformClass = "MNP_Militia_Soldier_DRAT"; //would be same as our made soldier class
			containerClass = "Supply20"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	

	// REBELS WITH A CAUSE
		
	class MNP_CombatUniform_Rebel_A : U_O_CombatUniform_ocamo {
			scope = 2;
			displayName = "MNP: Revolutionary Jumper";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\rev_2.paa"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
				uniformClass = "MNP_Rev_Soldier_AR"; //would be same as our made soldier class
				containerClass = "Supply100"; //how much it can carry
				mass = 20; //how much it weights
				
				hiddenSelections[] = {"Camo"};

			};
		};
		
	class MNP_CombatUniform_Rebel_B : U_O_CombatUniform_ocamo {
			scope = 2;
			displayName = "MNP: Revolutionary Officer";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\rev_1.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_Rev_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply100"; //how much it can carry
				mass = 20; //how much it weights
				
				hiddenSelections[] = {"Camo"};

			};
		};
	
	// ASA Stuff
		
	class MNP_CombatUniform_ASA_GC : U_BG_Guerrilla_6_1 {
		scope = 2;
		displayName = "MNP: Irregular Fatigues (M81)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T.paa"};		
		
		class ItemInfo : UniformItem {
			uniformModel = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
			uniformClass = "MNP_ASA_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_ASA_GC_B : U_BG_Guerrilla_6_1 {
		scope = 2;
		displayName = "MNP: Irregular Fatigues (M81)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T.paa"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
			uniformClass = "MNP_ASA_Soldier_AT"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_ASA_GC2 : U_BG_Guerrilla_6_1 {
		scope = 2;
		displayName = "MNP: Irregular Fatigues (DMC)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
			uniformClass = "MNP_ASA_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_ASA_GC2_B : U_BG_Guerrilla_6_1 {
		scope = 2;
		displayName = "MNP: Irregular Fatigues (DMC)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T2.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
			uniformClass = "MNP_ASA_Soldier_M"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_ASA_GC3 : U_BG_Guerrilla_6_1 {
		scope = 2;
		displayName = "MNP: Irregular Fatigues (A-TACS)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T3.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
			uniformClass = "MNP_ASA_Soldier_G"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_ASA_GC3_B : U_BG_Guerrilla_6_1 {
		scope = 2;
		displayName = "MNP: Irregular Fatigues (A-TACS)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_ASA_T3.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "\A3\characters_f_bootcamp\Guerrilla\ig_guerrilla_6_1.p3d";
			uniformClass = "MNP_ASA_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_Olive_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: OD Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_ASA.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Vest_Olive_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: OD Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_ASA.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	class MNP_Vest_ASA_1 : MNP_Vest_Olive_1 {scope = 1;};
	class MNP_Vest_ASA_2 : MNP_Vest_Olive_2 {scope = 1;};
	
	// Finland

	class MNP_CombatUniform_Fin_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Finnish Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Fin_T.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_Fin_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Fin_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Finnish Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Fin_T.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_Fin_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Finarctic_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Finnish Fatigues (arctic)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Fin_A.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_AFIN_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 60; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Finarctic_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Finnish Fatigues (arctic)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Fin_A.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_AFIN_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	
	class MNP_Vest_FIN_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Finnish Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_FIN_T.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Vest_FIN_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Finnish Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_FIN_T.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	class MNP_Helmet_FIN_T : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Finnish MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\H_FIN_T.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Helmet_FIN_A : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Finnish MICH (arctic)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\H_FIN_A.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	
	class MNP_Boonie_AFIN : H_Booniehat_khk {
        displayName = "MNP: Finnish Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\B_FIN_A.paa"};
    }; 

	class MNP_Boonie_FIN : H_Booniehat_khk {
        displayName = "MNP: Finnish Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\B_FIN_T.paa"};
    };
	
	
	// New Zealand
	
	
	class MNP_CombatUniform_NZ_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: NZMCU Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NZ.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_NZ_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_NZ_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: NZMCU Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NZ.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_NZ_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_NZ_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: CBR Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_NZ.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Vest_NZ_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: CBR Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_NZ.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	class MNP_Helmet_NZ : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: NZMCU MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\H_NZ.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Boonie_NZ : H_Booniehat_khk {
        displayName = "MNP: NZMCU Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\B_NZ.paa"};
    };
	
	// Norway
	
	class MNP_CombatUniform_NOR_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Norwegian  Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NOR.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_NOR_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_NOR_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Norwegian Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NOR.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_NOR_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_NOR_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Norwegian Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_NOR.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Vest_NOR_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Norwegian Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_NOR.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	class MNP_Helmet_NOR : H_HelmetIA {
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "MNP: Norwegian helmet";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\H_NOR.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Boonie_NOR : H_Booniehat_khk {
        displayName = "MNP: Norwegian Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\B_NOR.paa"};
    };
	
	// Norway Desert
	
	class MNP_CombatUniform_NOR_D_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Norwegian  Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NOR_D.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_NOR_D_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_NOR_D_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Norwegian Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_NOR_D.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_NOR_D_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_NOR_D_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Norwegian Plate Carrier (Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_NOR_D.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Vest_NOR_D_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Norwegian Plate Carrier (Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_NOR_D.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	class MNP_Helmet_NOR_D : H_HelmetIA {
		scope = 1;
		weaponPoolAvailable = 1;
		displayName = "MNP: Norwegian helmet (Desert)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\H_NOR_D.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Boonie_NOR_D : H_Booniehat_khk {
        displayName = "MNP: Norwegian Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\B_NOR_D.paa"};
    };
	
	// Czech
	
	class MNP_CombatUniform_CZ_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Czech Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_CZ.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_CZ_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_CZ_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Czech Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_CZ.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_CZ_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_CZ_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Czech Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_CZ.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Vest_CZ_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Czech Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\V_CZ.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
			containerClass = "Supply140";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 20;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 20;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20;
					passThrough = 0.2;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.2;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};

	class MNP_Helmet_CZ : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Czech MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\H_CZ.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	class MNP_Boonie_CZ : H_MilCap_gry {
        displayName = "MNP: Czech Cap";
        hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\MC_CZ.paa"};
    };


	class MNP_CombatUniform_AMerc_1 : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: Bush Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Bushcam_A.paa", "\MNP_INDEP\Data\C_Beige_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_Amerc_1F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_AMerc_2 : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: Bush Uniform + Lizard";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Bushcam_A.paa", "\MNP_INDEP\Data\C_FrLiz_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_Amerc_2F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_AMerc_3 : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: 'Duck' Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Duck_A.paa", "\MNP_INDEP\Data\C_Beige_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_Amerc_3F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_AMerc_4 : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: Lizard Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_FrLiz_A.paa", "\MNP_INDEP\Data\C_FrLiz_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_Amerc_4F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_AMerc_5 : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: Splinter Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_SPLRain_A.paa", "\MNP_INDEP\Data\C_Beige_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_Amerc_5F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_AMerc_6 : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: 'Duck' Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_Duck_A.paa", "\MNP_INDEP\Data\C_Duck_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_Amerc_6F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_PPU_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Urban Digital Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_PPU.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_PPU_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_PPU_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Urban Digital Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_INDEP\Data\C_PPU.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_PPU_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
};