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
	class STOP_BLUFOR_Config {
		units[] = {"MNP_US3co_MD", "MNP_US3co_O", "MNP_US3co_AT", "MNP_US3co_AR", "MNP_US3co_G", "MNP_US3co_F", "MNP_TIG_MD", "MNP_TIG_O", "MNP_TIG_AT", "MNP_TIG_AR", "MNP_TIG_G", "MNP_TIG_A", "MNP_USMCX_MD", "MNP_USMCX_O", "MNP_USMCX_AT", "MNP_USMCX_AR", "MNP_USMCX_G", "MNP_USMCX_A", "MNP_POPO_H", "MNP_POPO_A", "MNP_ISR_MD", "MNP_ISR_O", "MNP_ISR_AT", "MNP_ISR_AR", "MNP_ISR_G", "MNP_ISR_A", "MNP_ROKMC_MD", "MNP_ROKMC_O", "MNP_ROKMC_AT", "MNP_ROKMC_AR", "MNP_ROKMC_G", "MNP_ROKMC_A", "MNP_DDPM_MD", "MNP_DDPM_O", "MNP_DDPM_AT", "MNP_DDPM_AR", "MNP_DDPM_G", "MNP_DDPM_A", "MNP_DPM_MD", "MNP_DPM_O", "MNP_DPM_AT", "MNP_DPM_AR", "MNP_DPM_G", "MNP_DPM_A", "MNP_UKR_MD", "MNP_UKR_O", "MNP_UKR_AT", "MNP_UKR_AR", "MNP_UKR_G", "MNP_UKR_A", "MNP_USW_MD", "MNP_USW_TL", "MNP_USW_GR", "MNP_USW_AT", "MNP_USW_AR", "MNP_USW_A", "MNP_3Co_Soldier_M2", "MNP_3Co_Soldier_AT2", "MNP_3Co_Soldier_G2", "MNP_3Co_Soldier_AR2", "MNP_3Co_Soldier_O2", "MNP_3Co_Soldier_F2", "MNP_Scorpion_Soldier_M", "MNP_Scorpion_Soldier_AT", "MNP_Scorpion_Soldier_G", "MNP_Scorpion_Soldier_O", "MNP_Scorpion_Soldier_AR", "MNP_Scorpion_Soldier_F", "MNP_DS_Soldier_M", "MNP_DS_Soldier_AT", "MNP_DS_Soldier_G", "MNP_DS_Soldier_AR", "MNP_DS_Soldier_O", "MNP_DS_Soldier_F", "MNP_TS_Soldier_M", "MNP_TS_Soldier_AT", "MNP_TS_Soldier_G", "MNP_TS_Soldier_O", "MNP_TS_Soldier_AR", "MNP_TS_Soldier_F", "MNP_AMCU_Soldier_MD", "MNP_AMCU_Soldier_G", "MNP_AMCU_Soldier_AT", "MNP_AMCU_Soldier_AR", "MNP_AMCU_Soldier_O", "MNP_AMCU_Soldier_F", "MNP_US6Co_Soldier_MD", "MNP_US6Co_Soldier_G", "MNP_US6Co_Soldier_AT", "MNP_US6Co_Soldier_AR", "MNP_US6co_Soldier_O", "MNP_US6co_Soldier_F", "MNP_US6Co_Soldier_MD2", "MNP_US6Co_Soldier_G2", "MNP_US6Co_Soldier_AT2", "MNP_US6Co_Soldier_AR2", "MNP_US6co_Soldier_O2", "MNP_US6co_Soldier_F2", "MNP_US6co_MD", "MNP_US6co_O", "MNP_US6co_AT", "MNP_US6co_AR", "MNP_US6co_G", "MNP_US6co_F", "MNP_US3Co_Soldier_MD", "MNP_US3Co_Soldier_G", "MNP_US3Co_Soldier_AT", "MNP_US3Co_Soldier_AR", "MNP_US3Co_Soldier_O", "MNP_US3Co_Soldier_F", "MNP_US3Co_Soldier_MD2", "MNP_US3Co_Soldier_G2", "MNP_US3Co_Soldier_AT2", "MNP_US3Co_Soldier_AR2", "MNP_US3Co_Soldier_O2", "MNP_US3Co_Soldier_F2", "MNP_US3co_MD", "MNP_US3co_O", "MNP_US3co_AT", "MNP_US3co_AR", "MNP_US3co_G", "MNP_US3co_F","MNP_TIGER_AT_Patrol", "MNP_TIGER_Patrol", "MNP_TIGER_Squad", "MNP_ROKMC_AT_Patrol", "MNP_ROKMC_Patrol", "MNP_ROKMC_Squad", "MNP_UKDDPM_AT_Patrol", "MNP_UKDDPM_Patrol", "MNP_UKDDPM_Squad", "MNP_UKDPM_AT_Patrol", "MNP_UKDPM_Patrol", "MNP_UKDPM_Squad", "MNP_AMCU_AT_Patrol", "MNP_AMCU_Patrol", "MNP_AMCU_Squad", "MNP_TPAT_AT_Patrol", "MNP_TPAT_Patrol", "MNP_TPAT_Squad", "MNP_ISR_AT_Patrol", "MNP_ISR_Patrol", "MNP_ISR_Squad", "MNP_UKR_AT_Patrol", "MNP_UKR_Patrol", "MNP_UKR_Squad", "MNP_TS_AT_Patrol", "MNP_TS_Patrol", "MNP_TS_Squad", "MNP_DS_AT_Patrol", "MNP_DS_Patrol", "MNP_DS_Squad", "MNP_Scorpion_AT_Patrol", "MNP_Scorpion_Patrol", "MNP_Scorpion_Squad", "MNP_AUS_AT_Patrol", "MNP_AUS_Patrol", "MNP_AUS_Squad", "MNP_GER_D_AT_Patrol", "MNP_GER_D_Patrol", "MNP_GER_D_Squad", "MNP_GER_AT_Patrol", "MNP_GER_Patrol", "MNP_GER_Squad", "MNP_CAND_AT_Patrol", "MNP_CAND_Patrol", "MNP_CAND_Squad", "MNP_CAN_AT_Patrol", "MNP_CAN_Patrol", "MNP_CAN_Squad", "MNP_USR_D_AT_Patrol", "MNP_USR_Patrol", "MNP_USR_Squad", "MNP_USA_AT_Patrol", "MNP_USA_Patrol", "MNP_USA_Squad", "MNP_USMC_D_AT_Patrol", "MNP_USMC_D_Patrol", "MNP_USMC_D_Squad", "MNP_USMC_AT_Patrol", "MNP_USMC_Patrol", "MNP_USMC_Squad", "MNP_USMC_Soldier_F", "MNP_USMC_Soldier_O", "MNP_USMC_Soldier_AR", "MNP_USMC_Soldier_AT", "MNP_USMC_Soldier_Med", "MNP_USMC_Soldier_G", "MNP_USMC_Soldier_DF", "MNP_USMC_Soldier_DO", "MNP_USMC_Soldier_DAR", "MNP_USMC_Soldier_DAT", "MNP_USMC_Soldier_DMed", "MNP_USMC_Soldier_DG", "MNP_Canada_Soldier_F", "MNP_Canada_Soldier_S", "MNP_Canada_Soldier_AR", "MNP_Canada_Soldier_G", "MNP_Canada_Soldier_M", "MNP_Canada_Soldier_AT", "MNP_Canada_Soldier_DF", "MNP_Canada_Soldier_DS", "MNP_Canada_Soldier_DAR", "MNP_Canada_Soldier_DG", "MNP_Canada_Soldier_DM", "MNP_Canada_Soldier_DAT", "MNP_GER_Soldier_F", "MNP_GER_Soldier_S", "MNP_GER_Soldier_AR", "MNP_GER_Soldier_AT", "MNP_GER_Soldier_MED", "MNP_GER_Soldier_GR", "MNP_GER_Soldier_DF", "MNP_GER_Soldier_DS", "MNP_GER_Soldier_AR_D", "MNP_GER_Soldier_AT_D", "MNP_GER_Soldier_MED_D", "MNP_GER_Soldier_GR_D", "MNP_USR_Soldier_F", "MNP_USR_Soldier_AR", "MNP_USR_Soldier_GR", "MNP_USR_Soldier_M", "MNP_USR_Soldier_O", "MNP_USR_Soldier_AT", "MNP_USR_Soldier_DMR", "MNP_USA_Soldier_F", "MNP_USA_Soldier_O", "MNP_USA_Soldier_AR", "MNP_USA_Soldier_AT", "MNP_USA_Soldier_GR", "MNP_USA_Soldier_DMR", "MNP_USA_Soldier_MED", "MNP_AUS_Soldier_F","MNP_AUS_Soldier_S","MNP_AUS_Soldier_AR","MNP_AUS_Soldier_AT","MNP_AUS_Soldier_G","MNP_AUS_Soldier_MD", "MNP_OD_AT_PATROL" , "MNP_OD_PATROL" ,  "MNP_OD_SQUAD" ,  "MNP_3C0_AT_Patrol" , "MNP_3Co_Patrol" ,  "MNP_3Co_SQUAD" ,  "MNP_M81_AT_Patrol" , "MNP_M81_Patrol" ,  "MNP_M81_Squad" ,  "MNP_ROK_AT_Patrol" ,  "MNP_ROK_Patrol" , "MNP_ROK_Squad" , "MNP_USMCA_AT_Patrol" , "MNP_USMCA_Patrol" , "MNP_USMCA_Squad" , "MNP_USMCA_Soldier_MD" , "MNP_USMCA_Soldier_G" , "MNP_USMCA_Soldier_AT" , "MNP_USMCA_Soldier_AR" , "MNP_USMCA_Soldier_O" , "MNP_USMCA_Soldier_F" , "MNP_3Co_Soldier_Md" , "MNP_3Co_Soldier_G" , "MNP_3Co_Soldier_AT" , "MNP_3Co_Soldier_AR" , "MNP_3Co_Soldier_O2" , "MNP_3Co_Soldier_F2" , "MNP_OD_Soldier_Md" , "MNP_OD_Soldier_G" , "MNP_OD_Soldier_AT" , "MNP_OD_Soldier_AR" , "MNP_OD_Soldier_O" , "MNP_OD_Soldier_F" , "MNP_M81_Soldier_Md" , "MNP_M81_Soldier_G" , "MNP_M81_Soldier_AT" , "MNP_M81_Soldier_AR" , "MNP_Wood_Soldier_O" , "MNP_Wood_Soldier_F" , "MNP_ROK_Soldier_M" , "MNP_ROK_Soldier_AT" , "MNP_ROK_Soldier_G" , "MNP_ROK_Soldier_AR" , "MNP_ROK_Soldier_O" , "MNP_ROK_Soldier_F" };
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_Common", "A3_Characters_F"};
	};
};

class CfgUnitInsignia
{
	class MedA
	{
		displayName = "Medic Patch (Word)"; // Name displayed in Arsenal
		author = "Killoch"; // Author displayed in Arsenal
		texture = "\MNP_BLUFOR\Data\MedA.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	
	class MedB
	{
		displayName = "Medic Patch (Round)"; // Name displayed in Arsenal
		author = "Killoch"; // Author displayed in Arsenal
		texture = "\MNP_BLUFOR\Data\MedB.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	
	class MedC
	{
		displayName = "Medic Patch (Crystal)"; // Name displayed in Arsenal
		author = "Killoch"; // Author displayed in Arsenal
		texture = "\MNP_BLUFOR\Data\MedC.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	
	class MedD
	{
		displayName = "Medic Patch (Word & Symbol)"; // Name displayed in Arsenal
		author = "Killoch"; // Author displayed in Arsenal
		texture = "\MNP_BLUFOR\Data\MedD.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	
	class MedE
	{
		displayName = "Medic Patch (B&W Cross)"; // Name displayed in Arsenal
		author = "Killoch"; // Author displayed in Arsenal
		texture = "\MNP_BLUFOR\Data\MedE.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	
	class MedF
	{
		displayName = "Medic Patch (Morale)"; // Name displayed in Arsenal
		author = "Killoch"; // Author displayed in Arsenal
		texture = "\MNP_BLUFOR\Data\MedF.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	
	class MedG
	{
		displayName = "Medic Patch (SOL)"; // Name displayed in Arsenal
		author = "Killoch"; // Author displayed in Arsenal
		texture = "\MNP_BLUFOR\Data\MedG.paa"; // Image path
		textureVehicle = ""; // Does nothing currently, reserved for future use
	};
	
};

class CfgGroups
{
	class West
	{
		name = "$STR_A3_CfgGroups_West0";
		
		class MNP_USMC_groups
		{
			Name = "USMC";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_USMC_Squad
				{
					Name = "USMC Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_Med";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_USMC_Patrol
				{
					Name = "USMC Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_USMC_AT_Patrol
				{
					Name = "USMC Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_USMC_D_groups
		{
			Name = "USMC (Desert)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_USMC_D_Squad
				{
					Name = "USMC Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DMed";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DF";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DF";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_USMC_D_Patrol
				{
					Name = "USMC Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DF";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_USMC_D_AT_Patrol
				{
					Name = "USMC Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMC_Soldier_DF";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
	
		class MNP_USA_groups
		{
			Name = "US Army";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_USA_Squad
				{
					Name = "Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_MED";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_USA_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_USA_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_USR_groups
		{
			Name = "US Army Rangers";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_USR_Squad
				{
					Name = "Ranger Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_USR_Patrol
				{
					Name = "Ranger Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_USR_D_AT_Patrol
				{
					Name = "Ranger Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USR_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_CAN_groups
		{
			Name = "Canadian Rifles";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_CAN_Squad
				{
					Name = "Rifle Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_CAN_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_CAN_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_CAND_groups
		{
			Name = "Canadian Rifles (Desert)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_CAND_Squad
				{
					Name = "Rifle Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DM";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DF";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DF";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_CAND_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DF";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_CAND_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Canada_Soldier_DF";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_GER_groups
		{
			Name = "Germany";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_GER_Squad
				{
					Name = "Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_MED";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_GER_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_CAND_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_GER_D_groups
		{
			Name = "Germany (Desert)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_GER_D_Squad
				{
					Name = "Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AR_D";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_GR_D";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_MED_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AT_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DF";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DF";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_GER_D_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AR_D";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_GR_D";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DF";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DF";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_GER_D_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DS";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AR_D";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AT_D";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_AT_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_GER_Soldier_DF";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_AUS_groups
		{
			Name = "Australia";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_AUS_Squad
				{
					Name = "Squad";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_AUS_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_Units_BLU";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_AUS_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_S";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_AUS_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_USMCA_Groups
		{
			Name = "US Arctic Warfare Command";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_USMCA_Squad
				{
					Name = "Arctic Warfare Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_USMCA_Patrol
				{
					Name = "Arctic Warfare Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_USMCA_AT_Patrol
				{
					Name = "Arctic Warfare AT Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMCA_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_ROK_Groups
		{
			Name = "Republic of Korea";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_ROK_Squad
				{
					Name = "ROK Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_ROK_Patrol
				{
					Name = "ROK Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_ROK_AT_Patrol
				{
					Name = "ROK Anti-Tank Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ROK_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_M81_Groups
		{
			Name = "US Woodland";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_M81_Squad
				{
					Name = "Woodland Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_Md";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_M81_Patrol
				{
					Name = "Woodland Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_M81_AT_Patrol
				{
					Name = "Woodland AT-Group";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_M81_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Wood_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_3Co_Groups
		{
			Name = "US Desert";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_3Co_SQUAD
				{
					Name = "Desert Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_O2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_Md";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_F2";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_F2";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_F2";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_F2";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_3Co_Patrol
				{
					Name = "Desert Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_O2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_F2";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_F2";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_3C0_AT_Patrol
				{
					Name = "Desert AT Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_O2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_3Co_Soldier_F2";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_6co_groups
		{
			Name = "USMC '91";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_6co_Squad
				{
					Name = "USMC Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_US6co_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_US6co_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_US6co_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_US6co_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_US6co_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_US6co_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_US6co_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_US6co_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_US6co_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_6co_Patrol
				{
					Name = "USMC Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_US6co_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_US6co_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_US6co_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_US6co_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_US6co_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_6co_AT_Patrol
				{
					Name = "USMC Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_US6co_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_US6co_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_US6co_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_US6co_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_US6co_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_OD_Groups
		{
			Name = "OD Security";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_OD_SQUAD
				{
					Name = "Security Group";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_Md";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_OD_PATROL
				{
					Name = "Security Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_OD_AT_PATROL
				{
					Name = "Security Anti-Tank";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_OD_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
	
		class MNP_Scorpion_groups
		{
			Name = "US Army Scorpion W2";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_Scorpion_Squad
				{
					Name = "Rifle Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_Scorpion_Patrol
				{
					Name = "Combat Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_Scorpion_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_Scorpion_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
	
		class MNP_DS_groups
		{
			Name = "US Army (Multicam)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_DS_Squad
				{
					Name = "Multicam Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_DS_Patrol
				{
					Name = "Multicam Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_DS_AT_Patrol
				{
					Name = "Multicam Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DS_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_TS_groups
		{
			Name = "Dark Multicam";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_TS_Squad
				{
					Name = "Multicam Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_TS_Patrol
				{
					Name = "Multicam Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_TS_AT_Patrol
				{
					Name = "Multicam Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_TS_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_UKR_groups
		{
			Name = "Ukrainian Army";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_UKR_Squad
				{
					Name = "UA Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_UKR_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_UKR_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_UKR_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_UKR_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_UKR_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_UKR_A";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_UKR_A";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_UKR_A";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_UKR_A";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_UKR_Patrol
				{
					Name = "UA Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_UKR_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_UKR_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_UKR_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_UKR_A";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_UKR_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_UKR_AT_Patrol
				{
					Name = "Multicam Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_UKR_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_UKR_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_UKR_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_UKR_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_UKR_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_ISR_groups
		{
			Name = "Israeli Defence Forces";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_ISR_Squad
				{
					Name = "Israeli Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ISR_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ISR_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ISR_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ISR_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ISR_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_ISR_A";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_ISR_A";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_ISR_A";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_ISR_A";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_ISR_Patrol
				{
					Name = "Israeli Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ISR_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ISR_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ISR_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ISR_A";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ISR_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_ISR_AT_Patrol
				{
					Name = "Israeli Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ISR_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ISR_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ISR_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ISR_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ISR_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
	
		class MNP_T_Pat_groups
		{
			Name = "USMC T-Pattern";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_TPAT_Squad
				{
					Name = "Rifle Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMCX_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMCX_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMCX_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMCX_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMCX_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_USMCX_A";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_USMCX_A";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_USMCX_A";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_USMCX_A";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_TPAT_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMCX_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMCX_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMCX_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMCX_A";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMCX_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_TPAT_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_USMCX_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_USMCX_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_USMCX_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_USMCX_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_USMCX_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_AMCU_groups
		{
			Name = "Australian Multicam";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_AMCU_Squad
				{
					Name = "Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_AMCU_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_AMCU_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_AMCU_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_UKDPM_groups
		{
			Name = "United Kingdom (2Para)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_UKDPM_Squad
				{
					Name = "Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DPM_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DPM_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DPM_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DPM_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DPM_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_DPM_A";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_DPM_A";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_DPM_A";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_DPM_A";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_UKDPM_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DPM_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DPM_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DPM_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DPM_A";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DPM_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_UKDPM_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DPM_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DPM_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DPM_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DPM_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DPM_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_UKDDPM_groups
		{
			Name = "United Kingdom (Desert DPM)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_UKDDPM_Squad
				{
					Name = "Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DDPM_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DDPM_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DDPM_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DDPM_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DDPM_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_DDPM_A";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_DDPM_A";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_DDPM_A";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_DDPM_A";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_UKDDPM_Patrol
				{
					Name = "Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DDPM_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DDPM_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DDPM_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DDPM_A";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DDPM_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_UKDDPM_AT_Patrol
				{
					Name = "Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_DDPM_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_DDPM_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_DDPM_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_DDPM_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_DDPM_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_ROKMC_groups
		{
			Name = "ROK Marines";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_ROKMC_Squad
				{
					Name = "ROK Marine Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ROKMC_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ROKMC_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ROKMC_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ROKMC_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ROKMC_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_ROKMC_A";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_ROKMC_A";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_ROKMC_A";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_ROKMC_A";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_ROKMC_Patrol
				{
					Name = "ROK Marine Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ROKMC_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ROKMC_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ROKMC_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ROKMC_A";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ROKMC_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_ROKMC_AT_Patrol
				{
					Name = "ROK Marine Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_ROKMC_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_ROKMC_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_ROKMC_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_ROKMC_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_ROKMC_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
	
		class MNP_TIGER_groups
		{
			Name = "Advisors";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_TIGER_Squad
				{
					Name = "Advice Squad";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_TIG_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_TIG_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_TIG_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_TIG_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 1;
						vehicle = "MNP_TIG_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 1;
						vehicle = "MNP_TIG_A";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 1;
						vehicle = "MNP_TIG_A";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 1;
						vehicle = "MNP_TIG_A";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 1;
						vehicle = "MNP_TIG_A";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_TIGER_Patrol
				{
					Name = "Advice Patrol";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_TIG_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_TIG_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_TIG_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_TIG_A";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_TIG_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_TIGER_AT_Patrol
				{
					Name = "Advice Anti-Tank Team";
					side = 1;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 1;
						vehicle = "MNP_TIG_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 1;
						vehicle = "MNP_TIG_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 1;
						vehicle = "MNP_TIG_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 1;
						vehicle = "MNP_TIG_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 1;
						vehicle = "MNP_TIG_A";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
	
	};
};

class CfgFactionClasses{
	class MNP_Units_BLU
	{
		displayName = "MNP - BLUFOR";
		author = "Killoch";
		icon="\MNP_BLUFOR\Data\Icon.paa";
		priority = 2;
		side = 1; // Blufor
	};
};

class CfgVehicleClasses{
	
	class MNP_USR_Units{
		displayName = "US Army Rangers";
	};
	
	class MNP_USMC_Units{
		displayName = "USMC";
	};
	
	class MNP_USMC_D_Units{
		displayName = "USMC Desert";
	};
	
	class MNP_Can_Units{
		displayName = "Canadian Army";
	};
	
	class MNP_Can_D_Units{
		displayName = "Canadian Army (Desert)";
	};
	
	class MNP_USA_Units{
		displayName = "US Army";
	};
	
	class MNP_USAW_Units{
		displayName = "US Army (Scorpion)";
	};
	
	class MNP_USAD_Units{
		displayName = "US Army (Woodland Scorpion)";
	};
	
	class MNP_Ger_Units{
		displayName = "Bundeswehr";
	};
		
	class MNP_Ger_D_Units{
		displayName = "Bundeswehr (Desert)";
	};
	
	class MNP_Aus_Units{
		displayName = "Australian Defence Forces";
	};

	class MNP_ROK_Units{
		displayName = "Republic of Korea";
	};
	
	class MNP_OD_Units{
		displayName = "Security Forces";
	};
	
	class MNP_USMCA_Units{
		displayName = "USMC arctic Warfare";
	};
	
	class MNP_Wood_Units{
		displayName = "M81 Woodland";
	};
	
	class MNP_USDesert_Units{
		displayName = "3 Color Desert";
	};
	
	class MNP_unsort_blue{
		displayName = "Unsorted";
	};
	
	class MNP_USW_Units{
		displayName = "US Army M81";
	};
	
	class MNP_SCP_Units{
		displayName = "US Army Scorpion W2";
	};
	
	class MNP_USMC91_Units{
		displayName = "USMC Desert Storm";
	};
	
	class MNP_POLICE_Units{
		displayName = "Police";
	};
	
	class MNP_TS_Units{
		displayName = "Multicam (Dark)";
	};
	
	class MNP_DS_Units{
		displayName = "US Army Multicam";
	};
	
	class MNP_UKR_Units{
		displayName = "Ukrainian Army";
	};
	
	class MNP_ROKMC_Units{
		displayName = "ROK Marines";
	};
	
	class MNP_DPM_Units{
		displayName = "United Kingdom (DPM)";
	};
	
	class MNP_DDPM_Units{
		displayName = "United Kingdom (Desert DPM)";
	};
	
	class MNP_ISR_Units{
		displayName = "Israeli Defence Forces";
	};
	
	class MNP_TPAT_Units{
		displayName = "USMC T-Pattern";
	};
	
	class MNP_TIGR_Units{
		displayName = "Tiger Stripe";
	};
	
	class MNP_AMCU_Units{
		displayName = "Australian Multicam";
	};
	
	class MNP_6coIrregulars_Units{
		displayName = "Desert Irregulars";
	};
	
};

class CfgVehicles {

	class B_Soldier_base_F;
	
	// USMC Greens
	
	class MNP_USMC_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_USMC_T"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"MNP_BLUFOR\Data\noPatch.rvmat","MNP_BLUFOR\Data\noPatch_injury.rvmat","MNP_BLUFOR\Data\noPatch_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		hiddenSelections[] = {"Camo", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};//
	
		linkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMC_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_USMC_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_USMC_ST"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"MNP_BLUFOR\Data\noPatch.rvmat","MNP_BLUFOR\Data\noPatch_injury.rvmat","MNP_BLUFOR\Data\noPatch_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		
		hiddenSelections[] = {"Camo", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};		

		linkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMC_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
	};
	
	class MNP_USMC_Soldier_AR : MNP_USMC_Soldier_O {
		
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
		
		linkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	class MNP_USMC_Soldier_AT : MNP_USMC_Soldier_O {
		
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
		linkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	class MNP_USMC_Soldier_Med : MNP_USMC_Soldier_F {
		
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
		
		linkedItems[] = {"MNP_Boonie_USMC", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_USMC", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	class MNP_USMC_Soldier_G : MNP_USMC_Soldier_O {
		
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		linkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	// USMC Tans
	
	class MNP_USMC_Soldier_DF : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_USMC_D"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		hiddenSelections[] = {"Camo", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		linkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMC_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_USMC_Soldier_DO : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_USMC_SD"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		
		hiddenSelections[] = {"Camo", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};		

		linkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMC_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
	};
	
	class MNP_USMC_Soldier_DAR : MNP_USMC_Soldier_DO {
		
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
		
		linkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	class MNP_USMC_Soldier_DAT : MNP_USMC_Soldier_DO {
		
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
		linkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	class MNP_USMC_Soldier_DMed : MNP_USMC_Soldier_DF {
		
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
		attendant = 1;
		linkedItems[] = {"MNP_Boonie_USMC_D", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_USMC_D", "MNP_Vest_USMC", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	class MNP_USMC_Soldier_DG : MNP_USMC_Soldier_DO {
		
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		linkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC_D", "MNP_Vest_USMC_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	// Canadian Rifles
	
	class MNP_Canada_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Canada"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_AssaultPack_rgr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_CANADA_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};		
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Can_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		
		
		linkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Canada_Soldier_S : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Canada_S"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_CANADA_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};		
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Can_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Canada_T", "MNP_Vest_Canada_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Canada_Soldier_AR : MNP_Canada_Soldier_S{
		displayName = "Automatic Rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	};
	
	class MNP_Canada_Soldier_G : MNP_Canada_Soldier_S{

		displayName = "Grenadier";
	
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	};
	
	class MNP_Canada_Soldier_M : MNP_Canada_Soldier_F{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
		
	};
	
	class MNP_Canada_Soldier_AT : MNP_Canada_Soldier_S{
	
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	};
	
	// Canadian Desert Rifles
	
	class MNP_Canada_Soldier_DF : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Canada_D"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_AssaultPack_rgr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_CANADA_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};		
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Can_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		
		
		linkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Canada_Soldier_DS : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Canada_DS"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_CANADA_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};		
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Can_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Canada_D", "MNP_Vest_Canada_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_Canada_Soldier_DAR : MNP_Canada_Soldier_DS{
		displayName = "Automatic Rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	};
	
	class MNP_Canada_Soldier_DG : MNP_Canada_Soldier_DS{

		displayName = "Grenadier";
	
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	};
	
	class MNP_Canada_Soldier_DM : MNP_Canada_Soldier_DF{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
		
	};
	
	class MNP_Canada_Soldier_DAT : MNP_Canada_Soldier_DS{
	
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	};
	
	// GERMANY
	
	class MNP_GER_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Germany"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_GER_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};

		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Ger_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_Germany", "MNP_Vest_Germany", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Germany", "MNP_Vest_Germany", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_GER_Soldier_S : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Germany_S"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_GER_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};

		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Ger_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_Germany", "MNP_Vest_Germany_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Germany", "MNP_Vest_Germany_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_GER_Soldier_AR : MNP_GER_Soldier_S{
		displayName = "Automatic Rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	};
	
	class MNP_GER_Soldier_AT : MNP_GER_Soldier_S{
	
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	};
	
	class MNP_GER_Soldier_MED : MNP_GER_Soldier_F{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
		
	};
	
	class MNP_GER_Soldier_GR : MNP_GER_Soldier_F{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	};
	
	// German Desert
	
	class MNP_GER_Soldier_DF : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Germany_D"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_GER_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Ger_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_Germany_D", "MNP_Vest_Germany_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Germany_D", "MNP_Vest_Germany_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_GER_Soldier_DS : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Germany_SD"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_GER_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Ger_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Boonie_GER_D", "MNP_Vest_Germany_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_GER_D", "MNP_Vest_Germany_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_GER_Soldier_AR_D : MNP_GER_Soldier_DS{
		displayName = "Automatic Rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	};
	
	class MNP_GER_Soldier_AT_D : MNP_GER_Soldier_DS{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_GER_Soldier_MED_D : MNP_GER_Soldier_DF{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
		
	
	};
	
	class MNP_GER_Soldier_GR_D : MNP_GER_Soldier_DF{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
		
	// US army Ranger units, UCP
	
	class MNP_USR_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Ranger_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USR.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
	
		linkedItems[] = {"MNP_Helmet_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_USR_Soldier_AR : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Autorifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Ranger_B"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USR.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";

		linkedItems[] = {"H_Helmet_Kerry", "V_PlateCarrier2_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Helmet_Kerry", "V_PlateCarrier2_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_USR_Soldier_GR : MNP_USR_Soldier_F {
		uniformClass = "MNP_CombatUniform_Ranger_E"; //the uniform item

		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USR_2.paa"};
		
		displayName = "Grenadier";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"H_HelmetB_desert", "V_PlateCarrier1_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_HelmetB_desert", "V_PlateCarrier1_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	};
	
	class MNP_USR_Soldier_M : MNP_USR_Soldier_AR {

		uniformClass = "MNP_CombatUniform_Ranger_C"; //the uniform item

		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USR_2.paa"};
	
		displayName = "Combat Medic";

		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

		
		linkedItems[] = {"MNP_Boonie_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_USR_Soldier_O : MNP_USR_Soldier_AR {

		displayName = "Team Leader";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"H_Helmet_Kerry", "V_PlateCarrier1_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Helmet_Kerry", "V_PlateCarrier1_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	};
	
	class MNP_USR_Soldier_AT : MNP_USR_Soldier_GR {
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

		linkedItems[] = { "FirstAidKit", "MNP_Helmet_ACU", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = { "FirstAidKit", "MNP_Helmet_ACU", "V_PlateCarrier1_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_USR_Soldier_DMR : MNP_USR_Soldier_AR{
	
		displayName = "Designated Marksman";
		
		weapons[] = {"srifle_EBR_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"srifle_EBR_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};

		linkedItems[] = {"MNP_Boonie_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_ACU", "V_PlateCarrier3_rgr", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
	};
	
	// US Army Regulars
	
	class MNP_USA_Soldier_F : MNP_USR_Soldier_GR{
		displayName = "Rifleman";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
		linkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		vehicleClass = "MNP_USA_Units"; // Puts unit in the vehicleclass

	};
	
	class MNP_USA_Soldier_AR : MNP_USR_Soldier_M{
		displayName = "Team Leader";
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
		linkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_ACU", "MNP_Vest_ACU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		vehicleClass = "MNP_USA_Units"; 
	};
	
	class MNP_USA_Soldier_O : MNP_USA_Soldier_AR{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_USA_Soldier_AT : MNP_USA_Soldier_O{
		displayName = "Rifleman (AT)";
	
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
	
	class MNP_USA_Soldier_GR : MNP_USA_Soldier_F{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	};
	
	class MNP_USA_Soldier_MED : MNP_USA_Soldier_O{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

		
	};
	
	class MNP_USA_Soldier_DMR : MNP_USA_Soldier_F{
		displayName = "Marksman";
	
		weapons[] = {"srifle_EBR_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"srifle_EBR_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag", "20Rnd_762x51_Mag"};

	};
	
	// Dark Multicam
	
	class MNP_TS_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_TS_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_TS.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
	
		linkedItems[] = {"MNP_Helmet_TS", "MNP_Vest_TS_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_TS", "MNP_Vest_TS_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USAW_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_TS_Soldier_AR : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Autorifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_TS_B"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_TS.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";

		linkedItems[] = {"MNP_Helmet_TS", "MNP_Vest_TS_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_TS", "MNP_Vest_TS_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USAW_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_TS_Soldier_O : MNP_TS_Soldier_F{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_TS_Soldier_G : MNP_TS_Soldier_AR{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
	
	class MNP_TS_Soldier_AT : MNP_TS_Soldier_F{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

	};
	
	class MNP_TS_Soldier_M : MNP_TS_Soldier_AR{
		displayName = "Combat Medic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
	
	// US Multicam
	
	class MNP_DS_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_DS_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_SD.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
	
		linkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USAD_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_DS_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Autorifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_DS_B"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_SD.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";

		linkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_DS", "MNP_Vest_DS_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USAD_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};

	class MNP_DS_Soldier_AR : MNP_DS_Soldier_F{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_DS_Soldier_G : MNP_DS_Soldier_O{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
	
	class MNP_DS_Soldier_AT : MNP_DS_Soldier_F{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

	};
	
	class MNP_DS_Soldier_M : MNP_DS_Soldier_O{
		displayName = "Combat Medic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
	
	// Australia
	
	class MNP_AUS_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Australia"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_AUS.paa"};

		
		linkedItems[] = {"MNP_Helmet_Australia", "MNP_Vest_Australia", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Australia", "MNP_Vest_Australia", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Aus_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_AUS_Soldier_S : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Australia_S"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		weapons[] = {"arifle_Mk20_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_AUS.paa"};

		
		linkedItems[] = {"MNP_Boonie_AUS", "MNP_Vest_Australia", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_AUS", "MNP_Vest_Australia", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Aus_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_AUS_Soldier_AR : MNP_AUS_Soldier_S{
		
		displayName = "Automatic Rifleman";

		backpack = "B_Carryall_oli";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
			
	
	};
	
	class MNP_AUS_Soldier_G : MNP_AUS_Soldier_F{
		displayName = "Grenadier";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		respawnweapons[] = {"arifle_Mk20_GL_plain_F", "Throw"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	};
	
	class MNP_AUS_Soldier_AT : MNP_AUS_Soldier_S{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	
	};
	
	class MNP_AUS_Soldier_MD : MNP_AUS_Soldier_S{
		displayName = "Combat Medic";

		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
	};

	// Republic of Korea
	
	class MNP_ROK_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ROK_B"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_ROK.paa"};

		
		linkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_ROK_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_ROK_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ROK_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_ROK.paa"};

		
		linkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_ROK", "G_Aviator", "MNP_Vest_ROK_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_ROK_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_ROK_Soldier_AR : MNP_ROK_Soldier_F{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_ROK_Soldier_G : MNP_ROK_Soldier_F{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
	
	class MNP_ROK_Soldier_AT : MNP_ROK_Soldier_F{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

	};
	
	class MNP_ROK_Soldier_M : MNP_ROK_Soldier_O{
		displayName = "Combat Medic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
	
	// US M81 Woodland
	
	class MNP_Wood_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Wood_B"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		backpack = "B_AssaultPack_rgr";
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_B.paa"};

		
		linkedItems[] = {"MNP_Helmet_M81", "MNP_Vest_Light_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_M81", "MNP_Vest_Light_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Wood_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_Wood_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Wood_A"; //the uniform item
	
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	
		backpack = "B_Kitbag_rgr";	
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_B.paa"};

		
		linkedItems[] = {"MNP_Helmet_M81", "MNP_Vest_Light_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_M81", "MNP_Vest_Light_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_Wood_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_M81_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman (Alternate)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_M81_rg"; //the uniform item
		
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_A.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Officer.rvmat"};

		
		linkedItems[] = {"MNP_Helmet_M81", "MNP_Vest_M81b", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_M81", "MNP_Vest_M81b", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_wood_units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_M81_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader (Alternate)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_M81_Sh"; //the uniform item
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_A.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		linkedItems[] = {"MNP_MC_M81", "MNP_Vest_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MC_M81", "MNP_Vest_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_wood_units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_M81_Soldier_AR : MNP_Wood_Soldier_O{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_M81_Soldier_AT : MNP_Wood_Soldier_O{
		displayName = "Rifleman (AT)";

		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	
	};
	
	class MNP_M81_Soldier_G : MNP_Wood_Soldier_O{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_M81_Soldier_Md : MNP_Wood_Soldier_F{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
	
	// US Army Scorpion
	
	class MNP_Scorpion_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Scorpion_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_Scorpion.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
	
		linkedItems[] = {"MNP_Helmet_Scorpion", "MNP_Vest_Scorpion_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Scorpion", "MNP_Vest_Scorpion_1", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_SCP_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_Scorpion_Soldier_AR : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Scorpion_B"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_Scorpion.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";

		linkedItems[] = {"MNP_Helmet_Scorpion", "MNP_Vest_Scorpion_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Scorpion", "MNP_Vest_Scorpion_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_SCP_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_Scorpion_Soldier_O : MNP_Scorpion_Soldier_F{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_Scorpion_Soldier_G : MNP_Scorpion_Soldier_F{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
	
	class MNP_Scorpion_Soldier_AT : MNP_Scorpion_Soldier_F{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

	};
	
	class MNP_Scorpion_Soldier_M : MNP_Scorpion_Soldier_O{
		displayName = "Combat Medic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
	
	// Generic OD
	
	class MNP_OD_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "OD Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_OD_rg"; //the uniform item
		
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_OD.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Officer.rvmat"};

		
		linkedItems[] = {"MNP_Helmet_OD", "MNP_Vest_OD_A", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_OD", "MNP_Vest_OD_A", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_OD_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_OD_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "OD Rifleman (Shemagh)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_OD_Sh"; //the uniform item
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_OD.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		
		linkedItems[] = {"MNP_MC_OD", "MNP_Vest_OD_B", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MC_OD", "MNP_Vest_OD_B", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_OD_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_OD_Soldier_AR : MNP_OD_Soldier_F{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_OD_Soldier_AT : MNP_OD_Soldier_F{
		displayName = "Rifleman (AT)";

		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
	
	class MNP_OD_Soldier_G : MNP_OD_Soldier_F{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_OD_Soldier_Md : MNP_OD_Soldier_O{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	
	};
	
	// US Desert
	
	class MNP_3Co_Soldier_F2 : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_3Co_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		backpack = "B_Kitbag_cbr";	
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3Co_Desert.paa"};

		
		linkedItems[] = {"MNP_Helmet_3Co", "MNP_Vest_Light_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_3Co", "MNP_Vest_Light_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USDesert_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_3Co_Soldier_O2 : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_3Co_B"; //the uniform item
	
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	
		backpack = "B_Kitbag_cbr";		
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3Co_Desert.paa"};

		
		linkedItems[] = {"MNP_Helmet_3Co", "MNP_Vest_Light_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_3Co", "MNP_Vest_Light_M81", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USDesert_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_3Co_Soldier_AR2 : MNP_3Co_Soldier_F2{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_3Co_Soldier_G2 : MNP_3Co_Soldier_F2{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
	
	class MNP_3Co_Soldier_AT2 : MNP_3Co_Soldier_F2{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

	};
	
	class MNP_3Co_Soldier_M2 : MNP_3Co_Soldier_O2{
		displayName = "Combat Medic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
		
	// US Arctic Warfare
	
	class MNP_USMCA_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_USMC_arctic"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		hiddenSelections[] = {"Camo", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_A.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		linkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_1", "G_Balaclava_lowprofile", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_1", "G_Balaclava_lowprofile", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMCA_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_USMCA_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_USMC_arctic_B"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		
		hiddenSelections[] = {"Camo", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_A.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};		

		linkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_2", "G_Balaclava_lowprofile", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC_arctic", "MNP_Vest_ACU_2", "G_Balaclava_lowprofile", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMCA_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
	};
	
	class MNP_USMCA_Soldier_AR : MNP_USMCA_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_USMCA_Soldier_AT : MNP_USMCA_Soldier_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_USMCA_Soldier_G : MNP_USMCA_Soldier_F{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_USMCA_Soldier_MD : MNP_USMCA_Soldier_O{
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
	
	// Secret? -------------------___________________________--------------------------___________________________--------------------------_
	
	class MNP_Tac_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Worlds Greatest Secret Agent";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Tacneck_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\Tac_Turtle.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
	
		linkedItems[] = {"NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USAD_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_Tac_Soldier_AR : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Worlds Other Greatest Secret Agent";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Tacneck_B"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\Tac_Turtle.paa"};
		// hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";

		linkedItems[] = {"NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USAD_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	
	class MNP_USW_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_USW"; //the uniform item
		
		backpack = "MNP_B_WD_FP";
		
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_A.paa", "\MNP_BLUFOR\Data\C_USW_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		linkedItems[] = {"MNP_Helmet_PAGST_M81", "MNP_V_M81_Harness" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_M81", "MNP_V_M81_Harness" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USW_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_USW_AR : MNP_USW_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_USW_AT : MNP_USW_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_USW_GR : MNP_USW_A{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	
	};
	
	class MNP_USW_TL : MNP_USW_A{
		displayName = "Team Leader";		
		
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	};
	
	class MNP_USW_MD : MNP_USW_A{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	
	};

	// Ukrainian 
	
	class MNP_UKR_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Ukrainian"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		backpack = "B_FieldPack_khk";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_UKR_A.paa", "\MNP_BLUFOR\Data\C_UKR_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		linkedItems[] = {"MNP_Helmet_PAGST_UKR", "MNP_Vest_UKR_A" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_UKR", "MNP_Vest_UKR_A" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_UKR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_UKR_G : MNP_UKR_A{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_UKR_AR : MNP_UKR_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_UKR_AT : MNP_UKR_A{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_UKR_O : MNP_UKR_A{
		displayName = "Team Leader";
	
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_UKR_MD : MNP_UKR_A{
		displayName = "Field Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};

	
	// UK DPM
	
	class MNP_DPM_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_DPMR"; //the uniform item
		
		backpack = "B_FieldPack_oli";
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_DPM_A.paa", "\MNP_BLUFOR\Data\C_DPM_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		linkedItems[] = {"MNP_Beret_2PARA", "MNP_Vest_Light_DPM" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Beret_2PARA", "MNP_Vest_Light_DPM" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_DPM_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_DPM_G : MNP_DPM_A{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_DPM_AR : MNP_DPM_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_DPM_AT : MNP_DPM_A{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_DPM_O : MNP_DPM_A{
		displayName = "Section Leader";
	
		backpack = "B_FieldPack_oli";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_DPM_MD : MNP_DPM_A{
		displayName = "Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
	
	// UK Desert DPM
	
	class MNP_DDPM_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_DDPMR"; //the uniform item
		
		backpack = "B_Kitbag_cbr";
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_DDPM_A.paa", "\MNP_BLUFOR\Data\C_DDPM_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		linkedItems[] = {"MNP_Beret_2PARA", "MNP_Vest_Light_DPM_D" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Beret_2PARA", "MNP_Vest_Light_DPM_D" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_DDPM_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_DDPM_G : MNP_DDPM_A{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_DDPM_AR : MNP_DDPM_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_DDPM_AT : MNP_DDPM_A{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_DDPM_O : MNP_DDPM_A{
		displayName = "Section Leader";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_DDPM_MD : MNP_DDPM_A{
		displayName = "Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
	
	// ROK Marines
	
	class MNP_ROKMC_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "ROKMCoodland test Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ROKMC"; //the uniform item
		
		Backpack = "B_AssaultPack_rgr";
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_ROKMC_A.paa", "\MNP_BLUFOR\Data\C_ROKMC_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		linkedItems[] = {"MNP_Helmet_ROKMC", "MNP_Vest_ROKMC_2" , "G_Aviator", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_ROKMC", "MNP_Vest_ROKMC_2" , "ItemMap", "G_Aviator", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_ROKMC_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_ROKMC_G : MNP_ROKMC_A{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_ROKMC_AR : MNP_ROKMC_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_ROKMC_AT : MNP_ROKMC_A{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_ROKMC_O : MNP_ROKMC_A{
		displayName = "Team Leader";
	
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_ROKMC_MD : MNP_ROKMC_A{
		displayName = "Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
	
	// Israeli Army
		
	class MNP_ISR_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "USAFoodland test Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_ISR"; //the uniform item
		
		Backpack = "B_AssaultPack_rgr";
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		weapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_ISR_A.paa", "\MNP_BLUFOR\Data\C_ISR_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		linkedItems[] = {"H_Cap_oli_hs", "MNP_Vest_ISRKahki_1" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Cap_oli_hs", "MNP_Vest_ISRKahki_1" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_ISR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_ISR_G : MNP_ISR_A{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_TRG21_GL_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_TRG21_GL_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
	
	
	};
	
	class MNP_ISR_AR : MNP_ISR_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
	
	};
	
	class MNP_ISR_AT : MNP_ISR_A{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
	};
	
	class MNP_ISR_O : MNP_ISR_A{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_TRG21_ARCO_pointer_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG21_ARCO_pointer_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
	};
	
	class MNP_ISR_MD : MNP_ISR_A{
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
	
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
	};
	
	// Policeman
	
	class MNP_POPO_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Police Officer";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_POPO"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		weapons[] = {"SMG_02_F", "hgun_ACPC2_F", "Throw", "put"};
		respawnweapons[] = {"SMG_02_F", "hgun_ACPC2_F", "Throw", "put"};
		
		magazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
		respawnmagazines[] = {"30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "30Rnd_9x21_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag", "9Rnd_45ACP_Mag"};
		
		
		linkedItems[] = {"H_Beret_blk", "V_TacVest_blk_POLICE" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_blk_POLICE" , "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_POPO_A.paa", "\MNP_BLUFOR\Data\C_POPO_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_POLICE_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
		class MNP_POPO_H : MNP_POPO_A{
		displayName = "Police (Heavy)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

		linkedItems[] = {"MNP_Helmet_PAGST_BK", "G_Balaclava_blk", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_BK", "G_Balaclava_blk", "V_PlateCarrier1_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	// USMC Experimental Urban
	
	class MNP_USMCX_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_USMC_Xtreme"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		backpack = "B_AssaultPack_blk";
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Helmet_USMC_Xtreme", "MNP_Vest_USMC_Xtreme_A", "G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_USMC_Xtreme", "MNP_Vest_USMC_Xtreme_A", "G_Bandanna_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_URB.paa", "\MNP_BLUFOR\Data\C_USMC_URB_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_TPAT_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_USMCX_G : MNP_USMCX_A{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_USMCX_AR : MNP_USMCX_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_USMCX_AT : MNP_USMCX_A{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_USMCX_O : MNP_USMCX_A{
		displayName = "Team Leader";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_USMCX_MD : MNP_USMCX_A{
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
	
	// Tiger stripe
	
	class MNP_TIG_A : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Tiger Stripe test Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_TIG"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		backpack = "B_AssaultPack_blk";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Beret_Green", "MNP_V_M81_Harness", "ItemMap", "ItemCompass", "ItemWatch"};
		respawnLinkedItems[] = {"MNP_Beret_Green", "MNP_V_M81_Harness", "ItemMap", "ItemCompass", "ItemWatch"};
		
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_TIG_A.paa", "\MNP_BLUFOR\Data\C_TIG_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_TIGR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_TIG_G : MNP_TIG_A{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_TIG_AR : MNP_TIG_A{
		displayName = "Automatic rifleman";
		
		backpack = "B_TacticalPack_blk";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_TIG_AT : MNP_TIG_A{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_TIG_O : MNP_TIG_A{
		displayName = "Team Leader";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_TIG_MD : MNP_TIG_A{
		displayName = "Combat Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
	
	// 3 Co Replacements
	// Uniform
	
	class MNP_US3co_F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_US3Co"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		backpack = "B_TacticalPack_blk";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Helmet_PAGST_US3Co", "MNP_Vest_Light_M81", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_US3Co", "MNP_Vest_Light_M81", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
	
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3co_A.paa", "\MNP_BLUFOR\Data\C_3co_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};

	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USDesert_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_US3co_G : MNP_US3co_F{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_US3co_AR : MNP_US3co_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_TacticalPack_blk";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_US3co_AT : MNP_US3co_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_US3co_O : MNP_US3co_F{
		displayName = "Team Leader";
	
		backpack = "B_TacticalPack_blk";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_US3co_MD : MNP_US3co_F{
		displayName = "Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};

	// Fatigues
	
	class MNP_US3Co_Soldier_F2 : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_US3Co_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		backpack = "B_TacticalPack_blk";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Helmet_PAGST_US3Co", "MNP_Vest_M81", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_US3Co", "MNP_Vest_M81", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3co_B.paa"};


		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USDesert_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_US3Co_Soldier_O2 : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_US3Co_B"; //the uniform item
	
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		backpack = "B_TacticalPack_blk";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Helmet_PAGST_US3Co", "MNP_Vest_M81", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_US3Co", "MNP_Vest_M81", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
	
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3Co_B.paa"};

		
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USDesert_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_US3Co_Soldier_AR2 : MNP_US3Co_Soldier_F2{
		displayName = "Automatic rifleman";
		
		backpack = "B_TacticalPack_blk";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_US3Co_Soldier_AT2 : MNP_US3Co_Soldier_O2{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_US3Co_Soldier_G2 : MNP_US3Co_Soldier_F2{
		displayName = "Grenadier";
	
		backpack = "B_TacticalPack_blk";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_US3Co_Soldier_MD2 : MNP_US3Co_Soldier_O2{
		displayName = "Medic";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
	
	// BDU
	
	class MNP_US3Co_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman (Alternate)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_US3Co_Rg"; //the uniform item
		
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "B_TacticalPack_blk";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Boonie_3CO", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_3CO", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3Co_A.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Officer.rvmat"};

		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USDesert_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_US3Co_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader (Alternate)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_US3Co_Sh"; //the uniform item
		
		hiddenSelections[] = {"Camo1", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3Co_A.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		backpack = "B_TacticalPack_blk";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Boonie_3CO", "B_TacticalPack_blk", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_3CO", "B_TacticalPack_blk", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USDesert_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_US3Co_Soldier_AR : MNP_US3Co_Soldier_F{
		displayName = "Automatic rifleman";
		scope = 1;
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_US3Co_Soldier_AT : MNP_US3Co_Soldier_O{
		displayName = "Rifleman (AT)";
		scope = 1;
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_US3Co_Soldier_G : MNP_US3Co_Soldier_F{
		displayName = "Grenadier";
		scope = 1;
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_US3Co_Soldier_MD : MNP_US3Co_Soldier_O{
		displayName = "Field Medic";
		scope = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
	
	
	class MNP_3Co_Soldier_F : MNP_US3Co_Soldier_F {scope = 1;};
	class MNP_3Co_Soldier_O : MNP_US3Co_Soldier_O {scope = 1;};
	class MNP_3Co_Soldier_AR : MNP_US3Co_Soldier_AR{scope = 1;};
	class MNP_3Co_Soldier_AT : MNP_US3Co_Soldier_AT{scope = 1;};
	class MNP_3Co_Soldier_G : MNP_US3Co_Soldier_G{scope = 1;};
	class MNP_3Co_Soldier_Md : MNP_US3Co_Soldier_MD{scope = 1;};
	
	// 6co
	//Uniform
	
	class MNP_US6co_F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_US6co"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		
		backpack = "B_Kitbag_cbr";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Helmet_PAGST_US6co", "MNP_Vest_6co_A", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_US6co", "MNP_Vest_6co_A", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
	
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_A.paa", "\MNP_BLUFOR\Data\C_6co_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};

	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMC91_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_US6co_G : MNP_US6co_F{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	
	
	};
	
	class MNP_US6co_AR : MNP_US6co_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_US6co_AT : MNP_US6co_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_US6co_O : MNP_US6co_F{
		displayName = "Team Leader";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_US6co_MD : MNP_US6co_F{
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};

	//Fatigues

	class MNP_US6co_Soldier_F2 : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_US6co_A"; //the uniform item
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		backpack = "MNP_B_WD_FP";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Beret_Green", "MNP_Vest_6co_A", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_Beret_Green", "MNP_Vest_6co_A", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
	
	
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_B.paa"};


		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMC91_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_US6co_Soldier_O2 : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_US6co_B"; //the uniform item
	
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		backpack = "MNP_B_WD_FP";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_Beret_Green", "MNP_Vest_6co_A", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_Beret_Green", "MNP_Vest_6co_A", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
	
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_B.paa"};

		
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_USMC91_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_US6Co_Soldier_AR2 : MNP_US6co_Soldier_F2{
		displayName = "Automatic rifleman";
		
		backpack = "MNP_B_WD_FP";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_US6Co_Soldier_AT2 : MNP_US6co_Soldier_O2{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_US6Co_Soldier_G2 : MNP_US6co_Soldier_F2{
		displayName = "Grenadier";
	
		backpack = "MNP_B_WD_FP";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_US6Co_Soldier_MD2 : MNP_US6co_Soldier_O2{
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
		
	//BDU
	
	class MNP_US6co_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_6CO"; //the uniform item
		
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_WD_FP";		
		
		side = 2;		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_MC_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_MC_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
	
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_A.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Officer.rvmat"};

		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_6coIrregulars_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_US6co_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_6CO_B"; //the uniform item
		side = 2;		
		
		hiddenSelections[] = {"Camo1", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_A.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		backpack = "MNP_B_WD_FP";		
		
		weapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
		linkedItems[] = {"MNP_MC_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		respawnLinkedItems[] = {"MNP_MC_US6co", "MNP_V_OD_Harness", "ItemMap", "ItemCompass", "ItemWatch", "itemRadio"};
		
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_6coIrregulars_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_US6Co_Soldier_AR : MNP_US6co_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
	
	};
	
	class MNP_US6Co_Soldier_AT : MNP_US6co_Soldier_O{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"launch_NLAW_F", "arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
	};
	
	class MNP_US6Co_Soldier_G : MNP_US6co_Soldier_F{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_cbr";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_US6Co_Soldier_MD : MNP_US6co_Soldier_O{
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		attendant = 1;
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};	
	};
		
	// Australian Multicam
	
	class MNP_AMCU_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_AMCU_T"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"MNP_BLUFOR\Data\noPatch.rvmat","MNP_BLUFOR\Data\noPatch_injury.rvmat","MNP_BLUFOR\Data\noPatch_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_Kitbag_sgg";
		
		weapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		respawnweapons[] = {"arifle_TRG21_ARCO_pointer_F", "Throw"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		
		hiddenSelections[] = {"Camo", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_AMCU.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};//
	
		linkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_AMCU_Units"; // Puts unit in the vehicleclass
		author = "Killoch";
	};
	
	class MNP_AMCU_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_AMCU_ST"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"MNP_BLUFOR\Data\noPatch.rvmat","MNP_BLUFOR\Data\noPatch_injury.rvmat","MNP_BLUFOR\Data\noPatch_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		backpack = "B_Kitbag_sgg";
		
		weapons[] = {"arifle_TRG21_GL_MRCO_F", "Throw"};
		respawnweapons[] = {"arifle_TRG21_GL_MRCO_F", "Throw"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		model = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
		
		hiddenSelections[] = {"Camo", "Insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_AMCU.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};		

		linkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_AMCU", "MNP_Vest_AMCU_2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	
		faction = MNP_Units_BLU; // Puts unit under new faction
		vehicleClass = "MNP_AMCU_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
	};
	
	class MNP_AMCU_Soldier_AR : MNP_AMCU_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_sgg";
		
		weapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Mk200_MRCO_F", "hgun_P07_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "16Rnd_9x21_Mag", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box", "200Rnd_65x39_cased_Box"};
	
	};
	
	class MNP_AMCU_Soldier_AT : MNP_AMCU_Soldier_O{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"launch_B_Titan_short_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"launch_B_Titan_short_F", "arifle_TRG20_Holo_F", "Throw", "put"};
		
		magazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"Titan_AT", "Titan_AP", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		};
	
	class MNP_AMCU_Soldier_G : MNP_AMCU_Soldier_F{
		displayName = "Grenadier";
	
		backpack = "B_Kitbag_sgg";
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};		
	};
	
	class MNP_AMCU_Soldier_MD : MNP_AMCU_Soldier_O{
		displayName = "Corpsman";
	
		backpack = "B_AssaultPack_rgr_Medic";
		weapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
		respawnweapons[] = {"arifle_TRG20_Holo_F", "Throw", "put"};
	
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		attendant = 1;
	};
	
	// _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ - _ -
	
	class B_AssaultPack_blk;
	class B_Kitbag_rgr;
	
	class MNP_B_ACU_AP : B_AssaultPack_blk{
		displayName = "MNP: ACU Assault Pack";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_ACU_AP.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_ROK_AP : B_AssaultPack_blk{
		displayName = "MNP: ROK Assault Pack";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_ROK_AP.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_WB_AP : B_AssaultPack_blk{
		displayName = "MNP: USMC Winter Assault Pack";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_WB_AP.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_ACU_KB : B_Kitbag_rgr{
		displayName = "MNP: ACU Kitbag";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_ACU_KB.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_ROK_KB : B_Kitbag_rgr{
		displayName = "MNP: ROK Kitbag";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_ROK_KB.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_WB_KB : B_Kitbag_rgr{
		displayName = "MNP: USMC Winter Kitbag";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_WB_KB.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class B_Carryall_Base;
	class B_FieldPack_Base;
	
	class MNP_B_WD_FP : B_FieldPack_Base{
		displayName = "MNP: M81 Woodland Field Pack";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\FP_USW.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_WD_CA : B_Carryall_Base{
		displayName = "MNP: M81 Woodland CarryAll";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\CA_USW.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
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
	class VestItem;
	class V_PlateCarrier3_rgr;
	class U_B_CombatUniform_mcam_tshirt;
	class U_B_CombatUniform_mcam_vest;
	class H_Booniehat_khk;
	class U_O_CombatUniform_ocamo;
	class U_O_OfficerUniform_ocamo;
	class H_MilCap_gry;
	class V_press_F;
	
	// USMC Gear
	
	class MNP_CombatUniform_USMC_T : Uniform_Base {
		scope = 2;
		displayName = "MNP: MARPAT Combat Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};


		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "MNP_USMC_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_USMC_ST : Uniform_Base {
		scope = 2;
		displayName = "MNP: MARPAT Combat Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};


		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "MNP_USMC_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_USMC : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: MARPAT MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_USMC_T.paa"};
		
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
	
	// USMC Desert
	
	class MNP_CombatUniform_USMC_D : Uniform_Base {
		scope = 2;
		displayName = "MNP: MARPAT Combat Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};


		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "MNP_USMC_Soldier_DF"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_USMC_SD : Uniform_Base {
		scope = 2;
		displayName = "MNP: MARPAT Combat Fatigues(Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};


		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "MNP_USMC_Soldier_DO"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_USMC_D : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: MARPAT MICH(Desert)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_USMC_D.paa"};
		
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
	
	class MNP_Vest_USMC : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: USMC Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_USMC.paa"};
		
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
	
	class MNP_Vest_USMC_2 : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: USMC Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_USMC.paa"};
		
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
	
	// CANADA GEAR
	
	class MNP_CombatUniform_Canada : Uniform_Base {
		scope = 2;
		displayName = "MNP: CADPAT Combat Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_CANADA_T.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "MNP_Canada_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Canada_S : Uniform_Base {
		scope = 2;
		displayName = "MNP: CADPAT Combat Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_CANADA_T.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "MNP_Canada_Soldier_S"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_Canada_T : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: CADPAT MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_CANADA_T.paa"};
		
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

	class MNP_Vest_Canada_T : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: CADPAT Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_CANADA_T.paa"};
		
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
	
	class MNP_Vest_Canada_T2 : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: CADPAT Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_CANADA_T.paa"};
		
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
	
	// Desert
	
	class MNP_CombatUniform_Canada_D : Uniform_Base {
		scope = 2;
		displayName = "MNP: CADPAT Combat Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_CANADA_D.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "MNP_Canada_Soldier_DF"; //would be same as our made soldier class
			containerClass = "Supply70"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Canada_DS : Uniform_Base {
		scope = 2;
		displayName = "MNP: CADPAT Combat Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_CANADA_D.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "MNP_Canada_Soldier_DS"; //would be same as our made soldier class
			containerClass = "Supply70"; //how much it can carry
			mass = 40; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_Canada_D : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: CADPAT MICH (Desert)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_CANADA_D.paa"};
		
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

	class MNP_Vest_Canada_D : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: CADPAT Plate Carrier (Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_CANADA_D.paa"};
		
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
	
	class MNP_Vest_Canada_D2 : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: CADPAT Plate Carrier (Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_CANADA_D.paa"};
		
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
	
	// GERMAN GEAR
	
	class MNP_CombatUniform_Germany : Uniform_Base {
		scope = 2;
		displayName = "MNP: Flecktarn Combat Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_GER_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};


		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "MNP_GER_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Germany_S : Uniform_Base {
		scope = 2;
		displayName = "MNP: Flecktarn Combat Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_GER_T.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "MNP_GER_Soldier_S"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_Germany : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Flecktarn MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_GER_T.paa"};
		
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

	class MNP_Vest_Germany : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Flecktarn Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_GER_T.paa"};
		
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
	
	class MNP_Vest_Germany_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Flecktarn Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_GER_T.paa"};
		
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
	
	// Desert
	
	class MNP_CombatUniform_Germany_D : Uniform_Base {
		scope = 2;
		displayName = "MNP: Flecktarn Combat Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_GER_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "MNP_GER_Soldier_DF"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Germany_SD : Uniform_Base {
		scope = 2;
		displayName = "MNP: Flecktarn Combat Fatigues (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\BLUFOR\b_soldier_02.p3d";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_GER_D.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "-";
			uniformClass = "MNP_GER_Soldier_DS"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_Germany_D : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Flecktarn MICH (Desert)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_GER_D.paa"};
		
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

	class MNP_Vest_Germany_D : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Flecktarn Plate Carrier (Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_GER_D.paa"};
		
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
	
	class MNP_Vest_Germany_D2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Flecktarn Plate Carrier (Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_GER_D.paa"};
		
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
	
	//Misc Headgear
	
	class MNP_Helmet_UN : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: UN MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_UN.paa"};
		
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

	class MNP_Helmet_Dslyecxi : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Dslyecxi's Visage";
		
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_DSLY_K.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F\Common\headgear_helmet_heli_shield";
			mass = 130;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};	
	
	class MNP_Helmet_STPilot : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Imperial Helmet";
		
		model = "\A3\Characters_F\Common\headgear_helmet_heli_shield";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_ST.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F\Common\headgear_helmet_heli_shield";
			mass = 60;
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
				class Face
				{
					hitpointName = "HitFace";
					armor = 4;
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"camo"};
		};
	};
	
	// Boonies
	
	class MNP_Boonie_USMC_D : H_Booniehat_khk {
        displayName = "MNP: MARPAT Boonie(Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_USMC_D.paa"};
    };  
	
	class MNP_Boonie_USMC : H_Booniehat_khk {
        displayName = "MNP: MARPAT Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_USMC.paa"};
    };  
	
	class MNP_Boonie_UN : H_Booniehat_khk {
        displayName = "MNP: UN Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_UN.paa"};
    };  
	
	class MNP_Boonie_CAN : H_Booniehat_khk {
        displayName = "MNP: CADPAT Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_CAN_T.paa"};
    };  

	class MNP_Boonie_CAN_D : H_Booniehat_khk {
        displayName = "MNP: CADPAT Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_CAN_D.paa"};
    };  

	class MNP_Boonie_GER_T : H_Booniehat_khk {
        displayName = "MNP: Flecktarn Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_GER_T.paa"};
    };  

	class MNP_Boonie_GER_D : H_Booniehat_khk {
        displayName = "MNP: Flecktarn Boonie(Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_GER_D.paa"};
    };  

	class MNP_Boonie_ACU : H_Booniehat_khk {
        displayName = "MNP: ACU Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_ACU.paa"};
    };  

	class MNP_Boonie_AUS : H_Booniehat_khk {
        displayName = "MNP: AUSCAM Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_AUS.paa"};
    }; 
	
	// ARMY + RANGERS
	
	class MNP_Vest_ACU_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: ACU Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_ACU.paa"};
		
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
	
	class MNP_Vest_ACU_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: ACU Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_ACU.paa"};
		
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

	class MNP_Helmet_ACU : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: ACU MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_ACU.paa"};
		
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
	
	class MNP_CombatUniform_Ranger_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Scorpion Fatigues (Ranger)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USR.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_USR_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Ranger_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Scorpion Fatigues (Ranger)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USR.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_USR_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Ranger_C : Uniform_Base {
		scope = 2;
		displayName = "MNP: ACU Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USR_2.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_USR_Soldier_M"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Ranger_E : Uniform_Base {
		scope = 2;
		displayName = "MNP: ACU Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USR_2.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_USR_Soldier_GR"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	// Dark Multicam
	
	class MNP_Vest_TS_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Multicam Plate Carrier(Dark)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_TS.paa"};
		
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

	class MNP_Vest_TS_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Multicam Plate Carrier(Dark)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_TS.paa"};
		
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

	class MNP_Helmet_TS : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Multicam MICH (Dark)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_TS.paa"};
		
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
	
	class MNP_CombatUniform_TS_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Multicam Fatigues (Dark)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_TS.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_TS_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_TS_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Multicam Fatigues (Dark)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_TS.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_TS_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	// Multicam
	
	class MNP_CombatUniform_DS_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Multicam Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_SD.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_DS_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_DS_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Multicam Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_SD.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_DS_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_DS_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Multicam Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_SD.paa"};
		
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

	class MNP_Vest_DS_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Multicam Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_SD.paa"};
		
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

	class MNP_Helmet_DS : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Multicam MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_SD.paa"};
		
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
	
	// Aystrakia
	
	class MNP_CombatUniform_Australia : Uniform_Base {
		scope = 2;
		displayName = "MNP: AUSCAM Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_AUS.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_AUS_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Australia_S : Uniform_Base {
		scope = 2;
		displayName = "MNP: AUSCAM Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_AUS.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_AUS_Soldier_S"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_Australia : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: AUSCAM MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_AUS.paa"};
		
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

	class MNP_Vest_Australia : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: AUSCAM Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_AUS.paa"};
		
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
	
	class MNP_Vest_Australia_B : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: AUSCAM Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_AUS.paa"};
		
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
	
	// ROK Army
	
	class MNP_CombatUniform_ROK_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: GRANITE-B Fatigues(ROK)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_ROK.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_ROK_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_ROK_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: GRANITE-B Fatigues(ROK)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_ROK.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_ROK_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Vest_ROK_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: GRANITE-B Plate Carrier(ROK)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_ROK.paa"};
		
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
	
	class MNP_Vest_ROK_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: GRANITE-B Plate Carrier(ROK)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_ROK.paa"};
		
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

	class MNP_Helmet_ROK : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: GRANITE-B MICH(ROK)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_ROK.paa"};
		
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
	
	class MNP_Boonie_ROK : H_Booniehat_khk {
        displayName = "MNP: GRANITE-B Boonie(ROK)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_ROK.paa"};
    };  
	
	// M81
	
	class MNP_CombatUniform_M81_Sh : U_O_CombatUniform_ocamo {
			scope = 2;
			displayName = "MNP: M81 Woodland BDU (Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_A.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_M81_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo"};

			};
		};

	class MNP_CombatUniform_M81_Rg : U_O_OfficerUniform_ocamo {
		scope = 2;
		displayName = "MNP: M81 Woodland BDU";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_A.paa"};
		hiddenSelectionsMaterials[]= {"\MNP_BLUFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_M81_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_M81 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: M81 Woodland Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_M81.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
			containerClass = "Supply120";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 18;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 18;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 18;
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
	
	class MNP_Vest_M81b : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: M81 Woodland Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_M81.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
			containerClass = "Supply120";
			mass = 40;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 18;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 18;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 18;
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
	
	class MNP_Helmet_BLK : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Black MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_BLK.paa"};
		
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
	
	
	class MNP_CombatUniform_Wood_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: M81 Woodland Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_Wood_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_Wood_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: M81 Woodland Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_Wood_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	// OD
	
	class MNP_CombatUniform_OD_Sh : U_O_CombatUniform_ocamo {
			scope = 2;
			displayName = "MNP: Olive Drab BDU";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_OD.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_OD_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo"};

			};
	};

	class MNP_CombatUniform_OD_Rg : U_O_OfficerUniform_ocamo {
		scope = 2;
		displayName = "MNP: Olive Drab BDU";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_OD.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_OD_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_OD_A : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: OD Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_OD.paa"};
		
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

	class MNP_Vest_OD_B : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: OD Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_OD.paa"};
		
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

	class MNP_Helmet_OD : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Olive Drab MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_OD.paa"};
		
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
	
	class MNP_MC_OD : H_MilCap_gry{
	    displayName = "MNP: Olive Drab Cap";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\MC_OD.paa"};
	};
	
	class MNP_MC_Rev : MNP_MC_OD {scope=1;};
	
	// arctic USMC
	
	class MNP_CombatUniform_USMC_arctic : Uniform_Base {
		scope = 2;
		displayName = "MNP: Winter MARPAT Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_A.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_USMCA_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_USMC_arctic_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Winter MARPAT Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_A.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_USMCA_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Helmet_USMC_arctic : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Winter MARPAT MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_USMC_A.paa"};
		
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
	
	// light (press) vests
	
	class MNP_Vest_Light_M81 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: M81 Woodland Vest";
		
		model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\PV_M81.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
			containerClass = "Supply100";
			mass = 30;
class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
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
	
	class MNP_Vest_Light_OD : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Olive Drab Vest";
		
		model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\PV_OD.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
			containerClass = "Supply100";
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
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
	
	class U_I_OfficerUniform;
	
	//Polis
	
	class MNP_CombatUniform_Police : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: Police Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_POPO_A.paa", "\MNP_BLUFOR\Data\C_POPO_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_POPO_A"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	// Ukrainian Gear
	
	class MNP_CombatUniform_Ukrainian : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: Ukrainian TTSkO Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_UKR_A.paa", "\MNP_BLUFOR\Data\C_UKR_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_UKR_A"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Vest_UKR_A : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Ukrainian TTSkOCombat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_UKR.paa"};
		
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

	class MNP_Vest_UKR_B : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Ukrainian TTSkO Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_UKR.paa"};
		
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

	class MNP_MC_UKR : H_MilCap_gry{
	    displayName = "MNP: Ukrainian TTSkO Cap";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\MC_UKR.paa"};
	};
	
	class MNP_Helmet_PAGST_UKR : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Ukrainian TTSkO PASGT";
		
		model = "\MNP_BLUFOR\sud_UKRA_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_BLUFOR\sud_UKRA_helmet01";
			mass = 50;
			modelSides[] = {3, 1};
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
	
	// New US Woodland
	
	class MNP_CombatUniform_USW : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: M81 Woodland Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USW_A.paa", "\MNP_BLUFOR\Data\C_USW_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_USW_A"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_MC_USW : H_MilCap_gry{
	    displayName = "MNP: M81 Woodland Cap";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\MC_USW.paa"};
	};
	
	class MNP_Boonie_USW : H_Booniehat_khk{
	    displayName = "MNP: M81 Woodland Boonie";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_USW.paa"};
	};
	
	class MNP_Helmet_PAGST_M81 : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: M81 Woodland PASGT";
		
		model = "\MNP_BLUFOR\sud_US81_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_BLUFOR\sud_US81_helmet01";
			mass = 50;
			modelSides[] = {3, 1};
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
	
	class MNP_Helmet_USW : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: M81 Woodland MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_USW.paa"};
		
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

	class MNP_MC_M81 : MNP_MC_USW{
	    scope = 1;
	};
	
	class MNP_Helmet_M81 : MNP_Helmet_USW {
		scope = 1;
	};
	
	class MNP_Helmet_ERDL : MNP_Helmet_USW {scope=1;};
	class MNP_Boonie_ERDL : MNP_Boonie_USW {scope=1;};
	
	// New UK DPM & BAF
	
	class MNP_CombatUniform_DPMR : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: DPM Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_DPM_A.paa", "\MNP_BLUFOR\Data\C_DPM_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_DPM_A"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_DDPMR : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: DPM Uniform(Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_DDPM_A.paa", "\MNP_BLUFOR\Data\C_DDPM_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_DDPM_A"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Vest_Light_DPM : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: DPM Vest";
		
		model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\PV_DPM.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
			containerClass = "Supply100";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
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
	
	class MNP_Vest_Light_DPM_D : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: DPM Vest (Desert)";
		
		model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\PV_DDPM.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_epc\civil\equip_press_vest_01";
			containerClass = "Supply100";
			mass = 20;
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 15;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 15;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 15;
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
	
	class MNP_Boonie_DDPM : H_Booniehat_khk {
        displayName = "MNP: DPM Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_DDPM.paa"};
    };  
	
	class MNP_Boonie_DPM : H_Booniehat_khk {
        displayName = "MNP: DPM Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_DPM.paa"};
    }; 
	
	class MNP_CombatUniform_DPM : MNP_CombatUniform_DPMR {scope = 1;};
	class MNP_CombatUniform_DPM_B : MNP_CombatUniform_DPMR {scope = 1;};
	class MNP_CombatUniform_NPA_Alt_B : MNP_CombatUniform_DDPMR {scope = 1;};
	class MNP_CombatUniform_NPA_Alt : MNP_CombatUniform_DDPMR {scope = 1;};
	 
	// ROKMC
	
	class MNP_CombatUniform_ROKMC : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: ROKMC Digital Tiger Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_ROKMC_A.paa", "\MNP_BLUFOR\Data\C_ROKMC_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_ROKMC_A"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Vest_ROKMC : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: Digital Tiger Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_RKMC.paa"};
		
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
	
	class MNP_Vest_ROKMC_2 : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: Digital Tiger Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_RKMC.paa"};
		
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
	
	class MNP_Helmet_ROKMC : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Digital Tiger MICH (ROKMC)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_RKMC.paa"};
		
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
	
	// USMC 90's Experimental Urban
	
	class MNP_CombatUniform_USMC_Xtreme : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: T-Pattern Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_USMC_URB.paa", "\MNP_BLUFOR\Data\C_USMC_URB_B.paa"};

		class ItemInfo : UniformItem {
			uniformClass = "MNP_USMCX_A"; //would be same as our made soldier class
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Vest_Black_Tac_A : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Black Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_USMC_URB.paa"};
		
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
	
	class MNP_Vest_Black_Tac_B : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Black Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_USMC_URB.paa"};
		
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
	
	class MNP_Vest_USMC_Xtreme_A : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: T-Pattern Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_USMC_URB2.paa"};
		
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
	
	class MNP_Vest_USMC_Xtreme_B : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: T-Pattern Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_USMC_URB2.paa"};
		
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
	
	class MNP_Helmet_USMC_Xtreme : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: T-Pattern MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_USMC_URB.paa"};
		
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
	
	// New Australians
	
	class MNP_CombatUniform_AMCU_T : Uniform_Base {
		scope = 2;
		displayName = "MNP: AMCU Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_AMCU.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};


		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
			uniformClass = "MNP_AMCU_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_AMCU_ST : Uniform_Base {
		scope = 2;
		displayName = "MNP: AMCU uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_AMCU.paa"};
		hiddenSelectionsMaterials[]={"\MNP_BLUFOR\Data\noPatch.rvmat"};


		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F\BLUFOR\b_soldier_03.p3d";
			uniformClass = "MNP_AMCU_Soldier_O"; //would be same as our made soldier class
			containerClass = "Supply50"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_AMCU : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: AMCU Helmet";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_AMCU.paa"};
		
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
	
	class MNP_Boonie_AMCU : H_Booniehat_khk{
	    displayName = "MNP: AMCU Boonie";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_AMCU.paa"};
	};
	
	class MNP_Vest_AMCU : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: AMCU Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_AMCU.paa"};
		
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
	
	class MNP_Vest_AMCU_2 : V_PlateCarrier3_rgr {
		scope = 2;
		displayName = "MNP: AMCU Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_AMCU.paa"};
		
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
	
	class H_Beret_02;
	
	// Berets
	
	class MNP_Beret_2PARA : H_Beret_02{
	    displayName = "MNP: 2Para Beret";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\BR_2PARA.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Beret_Flat.rvmat"};
	};
	
	class MNP_Beret_RM : H_Beret_02{
	    displayName = "MNP: Royal Marine Beret";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\BR_RM.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Beret_Flat.rvmat"};
	};
	
	class MNP_Beret_SAS : H_Beret_02{
	    displayName = "MNP: SAS Beret";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\BR_SAS.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Beret_Flat.rvmat"};
	};
	
	class MNP_Beret_Green : H_Beret_02{
	    displayName = "MNP: Green Beret";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\BR_USSF.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_BLUFOR\Data\Beret_Flat.rvmat"};
	};
	
	// Load Bearing Vests
	
	class V_HarnessO_brn;
	
	class MNP_V_M81_Harness: V_HarnessO_brn{
		author = "Killoch";
		_generalMacro = "V_HarnessO_gry";
		picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName = "MNP: M81 Woodland Load Bearing Vest";
		model = "\A3\Characters_F\OPFOR\equip_o_vest01";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_M81_A.paa","\MNP_BLUFOR\Data\V_M81_B.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass = "Supply160";
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 10;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	
	class MNP_V_M81_GL_Harness: V_HarnessO_brn{
		author = "Killoch";
		_generalMacro = "V_HarnessO_gry";
		picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName = "MNP: M81 Woodland Load Bearing Vest (GL)";
		model = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_M81_A.paa","\MNP_BLUFOR\Data\V_M81_B.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
			containerClass = "Supply160";
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 10;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	
	class MNP_V_OD_Harness: MNP_V_M81_Harness{
		displayName = "MNP: OD Load Bearing Vest";		
		hiddenSelections[] = {"Camo1","Camo2"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\LBV_OD.paa","\MNP_BLUFOR\Data\LBV_OD_B.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass = "Supply160";
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 10;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	
	class MNP_V_OD_GL_Harness: MNP_V_M81_GL_Harness{
		picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
		displayName = "MNP: OD Load Bearing Vest (GL)";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\LBV_OD.paa","\MNP_BLUFOR\Data\LBV_OD_B.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
			containerClass = "Supply160";
			mass = 30;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 10;
					PassThrough = 0.5;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 10;
					PassThrough = 0.5;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 10;
					passThrough = 0.5;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
			hiddenSelections[] = {"Camo1","Camo2"};
		};
	};
	
	// Scorpion
	
	class MNP_CombatUniform_Scorpion_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: Scorpion Combat Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_Scorpion.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_Scorpion_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Scorpion_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Scorpion Combat Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_Scorpion.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_Scorpion_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Vest_Scorpion_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Scorpion Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_Scorpion.paa"};
		
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

	class MNP_Vest_Scorpion_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Scorpion Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_Scorpion.paa"};
		
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

	class MNP_Helmet_Scorpion : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Scorpion MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_Scorpion.paa"};
		
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
	
	class MNP_Boonie_Scorpion : H_Booniehat_khk{
	    displayName = "MNP: Scorpion Boonie";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_Scorpion.paa"};
	};
	
	class MNP_MC_Scorpion : H_MilCap_gry{
	    displayName = "MNP: Scorpion Cap";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\MC_Scorpion.paa"};
	};
	
	// Israeli
	
	class MNP_CombatUniform_ISR : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: Israeli Drab Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_ISR_A.paa", "\MNP_BLUFOR\Data\C_ISR_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_ISR_A"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Vest_ISRKahki_1 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Israeli Drab Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_ISR.paa"};
		
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

	class MNP_Vest_ISRKahki_2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Israeli Drab Plate Carrier";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_ISR.paa"};
		
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

	// Tiger Stripe
	
	class MNP_CombatUniform_TIG : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: Tiger Stripe Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_TIG_A.paa", "\MNP_BLUFOR\Data\C_TIG_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_TIG_A"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Boonie_TIG : H_Booniehat_khk {
        displayName = "MNP: Tiger Stripe Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_TIG.paa"};
    };  
	
	// Tactical Turtlenecks
	
	class MNP_CombatUniform_Tacneck_A : Uniform_Base {
		scope = 1;
		displayName = "MNP: Tactical Turtleneck";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\Tac_Turtle.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_Tac_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_Tacneck_B : Uniform_Base {
		scope = 1;
		displayName = "MNP: Tactical Turtleneck 2";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\Tac_Turtle.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_Tac_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	// 3Colour Replacement
	
	class MNP_CombatUniform_US3Co : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: 3 Color Desert Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3co_A.paa", "\MNP_BLUFOR\Data\C_3co_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_US3co_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_US3Co_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: 3 Color Desert Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3co_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_US3Co_Soldier_F2"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_US3Co_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: 3 Color Desert Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3co_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_US3Co_Soldier_O2"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
		
	class MNP_CombatUniform_US3Co_Sh : U_O_CombatUniform_ocamo {
			scope = 2;
			displayName = "MNP: 3 Color Desert BDU (Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3Co_A.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_US3Co_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo"};

			};
		};

	class MNP_CombatUniform_US3Co_Rg : U_O_OfficerUniform_ocamo {
		scope = 2;
		displayName = "MNP: 3 Color Desert BDU";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_3Co_A.paa"};
		hiddenSelectionsMaterials[]= {"\MNP_BLUFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_US3Co_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_MC_US3Co : H_MilCap_gry{
	    displayName = "MNP: 3 Color Desert Cap";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\MC_3co.paa"};
	};
	
	class MNP_Boonie_3CO : H_Booniehat_khk{
	    displayName = "MNP: 3 Color Desert Boonie";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_3co.paa"};
	};
	
	class MNP_Helmet_PAGST_US3Co : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: 3 Color Desert PASGT";
		
		model = "\MNP_BLUFOR\sud_3coD_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_BLUFOR\sud_3coD_helmet01";
			mass = 50;
			modelSides[] = {3, 1};
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
	
	// 3Co Old Class redirects
	
	class MNP_CombatUniform_3Co_A : MNP_CombatUniform_US3Co_A {	
	scope = 1;};
	
	class MNP_CombatUniform_3Co_B : MNP_CombatUniform_US3Co_B {	
	scope = 1;};
	
	class MNP_Helmet_3Co : MNP_Helmet_PAGST_US3Co {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: 3 Color Desert MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_3co.paa"};
		
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
	
	class MNP_CombatUniform_3Co_Sh : MNP_CombatUniform_US3Co_Sh {
	scope = 1;	};

	class MNP_CombatUniform_3Co_Rg : MNP_CombatUniform_US3Co_Sh {
	scope = 1;};
	
	// 6Colour Replacement
	
	class MNP_CombatUniform_US6co : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: 6 Color Desert Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_A.paa", "\MNP_BLUFOR\Data\C_6co_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_US6co_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_US6co_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: 6-Color Desert Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_US6co_Soldier_F2"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_US6co_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: 6-Color Desert Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_US6co_Soldier_O2"; //would be same as our made soldier class
			containerClass = "Supply100"; //how much it can carry
			mass = 10; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
		
	class MNP_CombatUniform_6CO_B : U_O_CombatUniform_ocamo {
			scope = 2;
			displayName = "MNP: 6-Color Desert BDU (Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_A.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_US6co_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo"};

			};
		};

	class MNP_CombatUniform_6CO : U_O_OfficerUniform_ocamo {
		scope = 2;
		displayName = "MNP: 6-Color Desert BDU";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\C_6co_A.paa"};
		hiddenSelectionsMaterials[]= {"\MNP_BLUFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_US6co_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_MC_US6co : H_MilCap_gry{
	    displayName = "MNP: 6 Color Desert Cap";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\MC_6co.paa"};
	};
	
	class MNP_Boonie_6CO : H_Booniehat_khk{
	    displayName = "MNP: 6 Color Desert Boonie";
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\B_6co.paa"};
	};
	
	class MNP_Helmet_PAGST_US6co : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: 6 Color Desert PASGT";
		
		model = "\MNP_BLUFOR\sud_6coD_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_BLUFOR\sud_6coD_helmet01";
			mass = 50;
			modelSides[] = {3, 1};
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
	
	class MNP_Vest_6co_A : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: 6co Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_6co.paa"};
		
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
	
	class MNP_Vest_6co_B : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: 6co Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\V_6co.paa"};
		
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
	
	class MNP_Helmet_6Co : MNP_Helmet_PAGST_US6co{
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: 6 Color Desert MICH";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_BLUFOR\Data\H_6co.paa"};
		
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
	
};