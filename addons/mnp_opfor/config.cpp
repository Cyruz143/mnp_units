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
	class MNP_OPFOR_CONFIG {
		units[] = {"MNP_RO4_Squad", "MNP_RO4_PATROL", "MNP_RO4_AT_PATROL", "MNP_DPRA_Squad", "MNP_DPRA_Patrol", "MNP_DPRA_AT_Patrol", "MNP_DPRS_Squad", "MNP_DPRS_Patrol", "MNP_DPRS_AT_Patrol", "MNP_IRBSJ_Squad", "MNP_IRBSJ_Patrol", "MNP_IRBSJ_AT_Patrol", "MNP_IRGC_Squad", "MNP_IRGC_Patrol", "MNP_IRGC_AT_Patrol", "MNP_RO4_Soldier_F", "MNP_RO4_Soldier_O", "MNP_RO4_Soldier_AR", "MNP_RO4_Soldier_AT", "MNP_RO4_Soldier_G", "MNP_RO4_Soldier_M", "MNP_DPR_Soldier_F", "MNP_DPR_Soldier_AR", "MNP_DPR_Soldier_AT", "MNP_DPR_Soldier_GR", "MNP_DPR_Soldier_TL", "MNP_DPR_Soldier_MD", "MNP_DPR_T_Soldier_F", "MNP_DPR_T_Soldier_AR", "MNP_DPR_T_Soldier_AT", "MNP_DPR_T_Soldier_GR", "MNP_DPR_T_Soldier_TL", "MNP_DPR_T_Soldier_MD", "MNP_IR_BSJ_Soldier_F", "MNP_IR_BSJ_Soldier_AR", "MNP_IR_BSJ_Soldier_AT", "MNP_IR_BSJ_Soldier_GR", "MNP_IR_BSJ_Soldier_TL", "MNP_IR_BSJ_Soldier_MD", "MNP_IR_BSJ_Soldier_MEDIUM", "MNP_IR_BSJ_Soldier_Med_O", "MNP_IR_BSJ_Soldier_Med_AR", "MNP_IR_BSJ_Soldier_Med_G", "MNP_IR_BSJ_Soldier_Med_AT", "MNP_IR_BSJ_Soldier_Med_M", "MNP_IR_IRGC_Soldier_F", "MNP_IR_IRGC_Soldier_AR", "MNP_IR_IRGC_Soldier_AT", "MNP_IR_IRGC_Soldier_GR", "MNP_IR_IRGC_Soldier_TL", "MNP_IR_IRGC_Soldier_MD", "MNP_IR_IRGC_Soldier_MEDIUM", "MNP_IR_IRGC_Soldier_Med_O", "MNP_IR_IRGC_Soldier_Med_AR", "MNP_IR_IRGC_Soldier_Med_G", "MNP_IR_IRGC_Soldier_Med_AT", "MNP_IR_IRGC_Soldier_Med_M", "MNP_RU_HD_Patrol_AT", "MNP_RU_HD_Patrol", "MNP_RU_HD_Squad", "MNP_RU_H_Patrol_AT", "MNP_RU_H_Patrol", "MNP_RU_H_Squad", "MNP_RU_D_Patrol_AT", "MNP_RU_D_Patrol", "MNP_RU_D_Squad", "MNP_RU_Patrol_AT", "MNP_RU_Patrol", "MNP_RU_Squad", "MNP_PLA_HD_Patrol_AT", "MNP_PLA_HD_Patrol", "MNP_PLA_HD_Squad", "MNP_PLA_H_Patrol_AT", "MNP_PLA_H_Patrol", "MNP_PLA_H_Squad", "MNP_PLAN_Patrol_AT", "MNP_PLAN_Patrol", "MNP_PLAN_Squad", "MNP_PLA_D_Patrol_AT", "MNP_PLA_D_Patrol", "MNP_PLA_D_Squad", "MNP_PLA_Patrol_AT", "MNP_PLA_Patrol", "MNP_PLA_Squad", "MNP_RU_Soldier_AR", "MNP_RU_Soldier_GR", "MNP_RU_Soldier_M", "MNP_RU_Soldier_AT", "MNP_RU_Soldier_MEDIUM", "MNP_RU_Soldier_O", "MNP_RU_Soldier_AR_D", "MNP_RU_Soldier_GR_D", "MNP_RU_Soldier_M_D", "MNP_RU_Soldier_AT_D", "MNP_RU_Soldier_MEDIUM_D", "MNP_RU_Soldier_O_D", "MNP_RU_Soldier_heavy_F", "MNP_RU_Soldier_heavy_O", "MNP_RU_Soldier_heavy_AR", "MNP_RU_Soldier_heavy_AT", "MNP_RU_Soldier_heavy_G", "MNP_RU_Soldier_heavy_M", "MNP_RU_Soldier_heavy_D", "MNP_RU_Soldier_heavy_DO", "MNP_RU_Soldier_heavy_DAR", "MNP_RU_Soldier_heavy_DAT", "MNP_RU_Soldier_heavy_DG", "MNP_RU_Soldier_heavy_DM", "MNP_CN_Soldier_F", "MNP_CN_Soldier_O", "MNP_CN_Soldier_AR", "MNP_CN_Soldier_MED", "MNP_CN_Soldier_RAT", "MNP_CN_Soldier_G", "MNP_CM_Soldier_F", "MNP_CM_Soldier_O", "MNP_CM_Soldier_AR", "MNP_CM_Soldier_MED", "MNP_CM_Soldier_RAT", "MNP_CM_Soldier_G", "MNP_CD_Soldier_F", "MNP_CD_Soldier_O", "MNP_CD_Soldier_AR", "MNP_CD_Soldier_MED", "MNP_CD_Soldier_RAT", "MNP_CD_Soldier_G", "MNP_CN_Soldier_heavy_F", "MNP_CN_Soldier_heavy_O", "MNP_CN_Soldier_Heavy_AR", "MNP_CN_Soldier_Heavy_AT", "MNP_CN_Soldier_Heavy_G", "MNP_CN_Soldier_Heavy_MED", "MNP_CN_Soldier_heavy_D", "MNP_CN_Soldier_heavy_DO", "MNP_CN_Soldier_Heavy_DAR", "MNP_CN_Soldier_Heavy_DAT", "MNP_CN_Soldier_Heavy_DG", "MNP_CN_Soldier_Heavy_DMED", "MNP_RO3_AT_PATROL", "MNP_RO3_PATROL", "MNP_RO3_Squad", "MNP_RO2_AT_PATROL", "MNP_RO2_PATROL", "MNP_RO2_Squad", "MNP_RO_AT_PATROL", "MNP_RO_PATROL", "MNP_RO_Squad", "MNP_RU_A_AT_PATROL", "MNP_RU_A_PATROL", "MNP_RU_A_SQUAD", "MNP_NKC_AT_PATROL", "MNP_NKC_PATROL", "MNP_NKC_SQUAD", "MNP_NK_AT_PATROL", "MNP_NK_PATROL", "MNP_NK_SQUAD", "MNP_RO3_Soldier_M", "MNP_RO3_Soldier_G", "MNP_RO3_Soldier_AT", "MNP_RO3_Soldier_AR", "MNP_RO3_Soldier_O", "MNP_RO3_Soldier_F", "MNP_RO2_Soldier_M", "MNP_RO2_Soldier_G", "MNP_RO2_Soldier_AT", "MNP_RO2_Soldier_AR", "MNP_RO2_Soldier_O", "MNP_RO2_Soldier_F", "MNP_RO_Soldier_M", "MNP_RO_Soldier_G", "MNP_RO_Soldier_AT", "MNP_RO_Soldier_AR", "MNP_RO_Soldier_O", "MNP_RO_Soldier_F", "MNP_RU_Soldier_Arctic_M", "MNP_RU_Soldier_Arctic_G", "MNP_RU_Soldier_Arctic_AT", "MNP_RU_Soldier_Arctic_AR", "MNP_RU_Soldier_Arctic_O", "MNP_RU_Soldier_Arctic_F", "MNP_NKC_Soldier_MD", "MNP_NKC_Soldier_G", "MNP_NKC_Soldier_AT", "MNP_NKC_Soldier_AR", "MNP_NKC_Soldier_O", "MNP_NKC_Soldier_F", "MNP_NK_Soldier_MD", "MNP_NK_Soldier_G", "MNP_NK_Soldier_AT", "MNP_NK_Soldier_AR", "MNP_NK_Soldier_O", "MNP_NK_Soldier_F"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_BLUFOR", "A3_Characters_F_OPFOR", "A3_Characters_F_Common", "A3_Characters_F", "A3_Weapons_F_Ammoboxes"};
	};
};



class CfgGroups
{
	class East
	{
		name = "$STR_A3_CfgGroups_East0";
		
		class MNP_CN_groups
		{
			Name = "PLA Regulars";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_PLA_Squad
				{
					Name = "PLA Squad";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_MED";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_PLA_Patrol
				{
					Name = "PLA Patrol";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_PLA_Patrol_AT
				{
					Name = "PLA Anti-Tank Team";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_RAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_CN_D_groups
		{
			Name = "PLA Regulars (Arid)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_PLA_D_Squad
				{
					Name = "PLA Squad";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_MED";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_PLA_D_Patrol
				{
					Name = "PLA Patrol";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_PLA_D_Patrol_AT
				{
					Name = "PLA Anti-Tank Team";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_RAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CD_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_CM_groups
		{
			Name = "PLA Navy Marines";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_PLAN_Squad
				{
					Name = "PLAN Squad";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_MED";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_PLAN_Patrol
				{
					Name = "PLA Patrol";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_PLAN_Patrol_AT
				{
					Name = "PLA Anti-Tank Team";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_RAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CM_Soldier_RAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_CN_H_groups
		{
			Name = "PLA Heavy Infantry";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_PLA_H_Squad
				{
					Name = "PLA Squad";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_MED";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_PLA_H_Patrol
				{
					Name = "PLA Patrol";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_PLA_H_Patrol_AT
				{
					Name = "PLA Anti-Tank Team";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_CN_H_D_groups
		{
			Name = "PLA Heavy Infantry (Arid)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_PLA_HD_Squad
				{
					Name = "PLA Squad";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DMED";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_D";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_D";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_D";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_D";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_PLA_HD_Patrol
				{
					Name = "PLA Patrol";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_PLA_HD_Patrol_AT
				{
					Name = "PLA Anti-Tank Team";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_CN_Soldier_Heavy_DAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RU_groups
		{
			Name = "Russian VDV";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RU_Squad
				{
					Name = "VDV Squad";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RU_Patrol
				{
					Name = "VDV Patrol";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
										
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RU_Patrol_AT
				{
					Name = "VDV Anti-Tank Team";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RU_D_groups
		{
			Name = "VDV Regulars (Desert)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RU_D_Squad
				{
					Name = "VDV Squad (Desert)";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_O_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AR_D";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_GR_D";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_M_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AT_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium_D";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium_D";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium_D";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium_D";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RU_D_Patrol
				{
					Name = "VDV Patrol (Desert)";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_O_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AR_D";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_GR_D";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RU_D_Patrol_AT
				{
					Name = "VDV Anti-Tank Team (Desert)";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_O_D";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AR_D";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AT_D";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_AT_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Medium_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RU_H_groups
		{
			Name = "Russian Heavy Infantry";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RU_H_Squad
				{
					Name = "Squad";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RU_H_Patrol
				{
					Name = "Patrol";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RU_H_Patrol_AT
				{
					Name = "Anti-Tank Team";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_G";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RU_HD_groups
		{
			Name = "Russian Heavy Infantry (Desert)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RU_HD_Squad
				{
					Name = "Squad";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DM";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DAT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_D";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_D";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_D";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_D";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RU_HD_Patrol
				{
					Name = "Patrol";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DG";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_D";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RU_HD_Patrol_AT
				{
					Name = "PLA Anti-Tank Team";
					side = 0;
					faction = "MNP_O_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DAR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DAT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_DAT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_heavy_D";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_NK_Groups
		{
			Name = "KPA Conscripts";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_NK_SQUAD
				{
					Name = "KPA Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_NK_PATROL
				{
					Name = "KPA Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_NK_AT_PATROL
				{
					Name = "KPA AT Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_NK_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_NKC_Groups
		{
			Name = "KPA Regulars";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_NKC_SQUAD
				{
					Name = "KPA Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_NKC_PATROL
				{
					Name = "KPA Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_NKC_AT_PATROL
				{
					Name = "KPA AT Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_NKC_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RU_A_Groups
		{
			Name = "CSAT Arctic Warfare Command";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RU_A_SQUAD
				{
					Name = "CSAT Arctic Warfare Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RU_A_PATROL
				{
					Name = "CSAT Arctic Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RU_A_AT_PATROL
				{
					Name = "CSAT Arctic AT Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RU_Soldier_Arctic_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RO_Groups
		{
			Name = "Russian Infantry (Flora)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RO_Squad
				{
					Name = "Infantry Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RO_PATROL
				{
					Name = "Infantry Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RO_AT_PATROL
				{
					Name = "AT-Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RO2_Groups
		{
			Name = "Russian Infantry (TTsKO)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RO2_Squad
				{
					Name = "Infantry Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RO2_PATROL
				{
					Name = "Infantry Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RO2_AT_PATROL
				{
					Name = "AT-Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO2_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RO3_Groups
		{
			Name = "Russian Infantry (Airborne)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RO3_Squad
				{
					Name = "Infantry Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RO3_PATROL
				{
					Name = "Infantry Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RO3_AT_PATROL
				{
					Name = "AT-Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO3_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_RO4_Groups
		{
			Name = "Russian Infantry (Reed)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_RO4_Squad
				{
					Name = "Infantry Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_M";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_RO4_PATROL
				{
					Name = "Infantry Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_RO4_AT_PATROL
				{
					Name = "AT-Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_O";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_RO4_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};

		class MNP_DPRA_groups
		{
			Name = "Novorussians (Autumn)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_DPRA_Squad
				{
					Name = "DPR Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_DPRA_Patrol
				{
					Name = "DPR Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_DPRA_AT_Patrol
				{
					Name = "DPR Anti-Tank Team";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_DPR_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
		class MNP_DPRS_groups
		{
			Name = "Novorussians (Summer)";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_DPRS_Squad
				{
					Name = "TYPE Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_F";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_F";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_F";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_DPRS_Patrol
				{
					Name = "DPR Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_GR";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_F";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_DPRS_AT_Patrol
				{
					Name = "DPR Anti-Tank Team";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_DPR_T_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
	
		class MNP_IRBSJ_groups
		{
			Name = "Iranian Basij Militia";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_IRBSJ_Squad
				{
					Name = "Basij Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_Med_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_Med_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_Med_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_IRBSJ_Patrol
				{
					Name = "Basij Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_Med_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_Med_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_IRBSJ_AT_Patrol
				{
					Name = "Basij Anti-Tank Team";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_Med_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_Med_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_Med_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_IR_BSJ_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
	
		class MNP_IRGC_groups
		{
			Name = "Iranian Republican Guard Militia";
			
			class Infantry
			{
				Name = "Infantry";
		 
				class MNP_IRGC_Squad
				{
					Name = "Guard Squad";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_Med_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_Med_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_MD";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};	

					class Unit4
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_Med_AT";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
					
					class Unit5
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {-15,-3,0};
					};	
					
					class Unit6
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {15,-3,0};
					};	
					
					class Unit7
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {-20,-4,0};
					};
					
					class Unit8
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {20,-4,0};
					};					
					
				};
				
				class MNP_IRGC_Patrol
				{
					Name = "Guard Patrol";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_Med_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_Med_G";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};

				class MNP_IRGC_AT_Patrol
				{
					Name = "Guard Anti-Tank Team";
					side = 0;
					faction = "MNP_I_Units";
					class Unit0
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_TL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					
					class Unit1
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_Med_AR";
						rank = "CORPORAL";
						position[] = {-5,-1,0};
					};
					
					class Unit2
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_Med_AT";
						rank = "CORPORAL";
						position[] = {5,-1,0};
					};					
					
					
					class Unit3
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_Med_AT";
						rank = "PRIVATE";
						position[] = {-10,-2,0};
					};

					class Unit4
					{
						side = 0;
						vehicle = "MNP_IR_IRGC_Soldier_MEDIUM";
						rank = "PRIVATE";
						position[] = {10,-2,0};
					};						
				};
			};
		};
		
	};
};


class CfgFactionClasses{
	class MNP_O_Units
	{
		displayName = "MNP - OPFOR";
		author = "Killoch";
		icon="\MNP_OPFOR\Data\Icon.paa";
		priority = 2;
		side = 2; // OPFOR
	};
};

class CfgVehicleClasses{
	
	class MNP_CN_Units{
		displayName = "PLA";
	};
	
	class MNP_CN_D_Units{
		displayName = "PLA (Arid)";
	};
	
	class MNP_CN_H_Units{
		displayName = "PLA Heavy";
	};
	
	class MNP_CN_H_D_Units{
		displayName = "PLA Heavy (Arid)";
	};
		
	class MNP_CN_M_Units{
		displayName = "PLN Marines";
	};
		
	class MNP_NK_units{
		displayName = "Korean Peoples Army";
	};
	
	class MNP_NKC_Units{
	 displayname = "KPA Regulars";
	};
	
	class MNP_RU_Units{
		displayName = "Russian VDV";
	};
	
	class MNP_RUS_Units{
		displayName = "Russian Heavy";
	};
	
	class MNP_RUS_D_Units{
		displayName = "Russian Heavy (Desert)";
	};
	
	class MNP_RU_D_Units{
		displayName = "Russian VDV (Desert)";
	};

	class MNP_RUS_A_Units{
		displayname = "CSAT Arctic Warfare Command";
	};
	
	class MNP_RO_Units{
		displayname = "Russian Flora";
	};
	
	class MNP_RO2_Units{
		displayname = "Russian TTsKO";
	};
	
	class MNP_RO3_Units{
		displayname = "Russian Airborne";
	};

	class MNP_RO4_Units{
		displayname = "Russian Reed";
	};

	class MNP_Unsort_red{
		displayname = "Unsorted";
	};
	
	class MNP_IR_BSJ_R_Units{
		displayname = "Iranian Basij Regulars";
	};
	
	class MNP_IR_BSJ_IR_Units{
		displayname = "Irainain Basij";
	};
	
	class MNP_IR_IRGC_R_Units{
		displayname = "Iranian Republican Guard Regulars";
	};
	
	class MNP_IR_IRGC_IR_Units{
		displayname = "Iranian Republican Guard";
	};
	
	class MNP_DPRA_Units{
		displayname = "DPR (Autumn)";
	};

	class MNP_DPRS_Units{
		displayname = "DPR (Summer)";
	};
	
};

class CfgVehicles {

	class NATO_Box_Base;
	
	
	class B_Soldier_base_F;
	class B_soldier_AR_F;
	class B_G_Soldier_SL_F;
	class B_G_Soldier_lite_F;
	
	
	class O_officer_F;
	class O_Soldier_F;
	class O_Soldier_AR_F;
	class O_Soldier_LAT_F;
	class O_Soldier_GL_F;
	class O_Medic_F;

	
	// Peoples Liberation Army units
	
	class MNP_CN_Soldier_F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLA_A.paa", "\MNP_OPFOR\Data\C_PLA_B.paa"};

		

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";

		
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_CN_T", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_AR : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Autorifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
					
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_Carryall_PLA_AR";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put","Binocular"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_MED : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Field Medic";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
			
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		attendant = 1;
		backpack = "MNP_B_Carryall_PLA_Medic";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_RAT : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman (AT)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_FieldPack_PLA_AT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_G : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Grenadier";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China"; //the uniform item
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put","Binocular"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	// Peoples Liberation Navy units, Marine
	
	class MNP_CM_Soldier_F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLN_A.paa", "\MNP_OPFOR\Data\C_PLN_B.paa"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CM_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
		side = 0;

		model = "\A3\Characters_F\OPFOR\O_officer.p3d";

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CM.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CM_Soldier_AR : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Autorifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_Carryall_PLA_AR";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CM.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CM_Soldier_MED : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Field Medic";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
		attendant = 1;
		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		side = 0;
				
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_Carryall_PLA_Medic";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CM.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CM_Soldier_RAT : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman (AT)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_FieldPack_PLA_AT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CM.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CM_Soldier_G : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Grenadier";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_CMAR"; //the uniform item
		side = 0;
		
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CM.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_M_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_CM", "V_TacVest_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	
	// Peoples Liberation Army Units, Arid
	
	class MNP_CD_Soldier_F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		side = 0;

		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		
		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		backpack = "MNP_B_FieldPack_PLA_D";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLAD_A.paa", "\MNP_OPFOR\Data\C_PLAD_B.paa"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CD_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";

		
		backpack = "MNP_B_FieldPack_PLA_D";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_MilCap_CN_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_CN_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CD_Soldier_AR : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Autorifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_Carryall_PLA_AR_D";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CD_Soldier_MED : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Field Medic";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_Carryall_PLA_Medic_D";
		attendant = 1;
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CD_Soldier_RAT : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman (AT) (Arid)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_FieldPack_PLA_AT_D";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "RPG32_F", "RPG32_HE_F", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CD_Soldier_G : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Grenadier (Arid)";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_D"; //the uniform item
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		backpack = "MNP_B_FieldPack_PLA_D";
		
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CN_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_China_D", "V_TacVest_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	// PLA Heavies

	class MNP_CN_Soldier_heavy_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_Heavy_T"; //the uniform item
		side = 0;
		model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CHI_T.paa", "\MNP_OPFOR\Data\H_CHI_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_H_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"MNP_Helmet_CNH_T", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_CNH_T", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_heavy_O : MNP_CN_Soldier_heavy_F {
		
		displayName = "Team Leader";
		
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_H_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"MNP_MilCap_CN_T", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_CN_T", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_Heavy_AR : MNP_CN_Soldier_heavy_F{
		displayName = "Autorifleman";
	
		backpack = "MNP_B_Carryall_PLA_AR";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};
	
	class MNP_CN_Soldier_Heavy_AT : MNP_CN_Soldier_heavy_F{
		displayName = "Rifleman (AT)";
		backpack = "MNP_B_FieldPack_PLA_AT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_CN_Soldier_Heavy_G : MNP_CN_Soldier_heavy_F{
		displayName = "Grenadier";
		backpack = "MNP_B_FieldPack_PLA";
		
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_CN_Soldier_Heavy_MED : MNP_CN_Soldier_heavy_F{
	
		displayName = "Medic";
		backpack = "MNP_B_Carryall_PLA_Medic";
		attendant = 1;
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	// PLA Heavies D
	
	class MNP_CN_Soldier_heavy_D : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_Heavy_D"; //the uniform item
		side = 0;
		model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
	
		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
			
		backpack = "MNP_B_FieldPack_PLA_D";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CHI_D.paa", "\MNP_OPFOR\Data\H_CHI_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_H_D_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"MNP_Helmet_CNH_D", "MNP_Vest_ChinaH_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_CNH_D", "MNP_Vest_ChinaH_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_heavy_DO : MNP_CN_Soldier_heavy_D {
		displayName = "Team Leader";
		linkedItems[] = {"MNP_MilCap_CN_D", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_CN_D", "MNP_Vest_ChinaH_T2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_CN_Soldier_Heavy_DAR : MNP_CN_Soldier_heavy_D{
		displayName = "Autorifleman";
	
		backpack = "MNP_B_Carryall_PLA_AR_D";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};
	
	class MNP_CN_Soldier_Heavy_DAT : MNP_CN_Soldier_heavy_D{
		displayName = "Rifleman (AT)";
		backpack = "MNP_B_FieldPack_PLA_AT_D";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_CN_Soldier_Heavy_DG : MNP_CN_Soldier_heavy_D{
		displayName = "Grenadier";
		backpack = "MNP_B_FieldPack_PLA_D";
		
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_CN_Soldier_Heavy_DMED : MNP_CN_Soldier_heavy_D{
	
		displayName = "Medic";
		backpack = "MNP_B_Carryall_PLA_Medic_D";
		attendant = 1;
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	// VDV Units

	class MNP_RU_Soldier_MEDIUM : B_soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RU_Med"; //the uniform item
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		backpack = "B_Bergen_rgr";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RL_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		side = 0;
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RU_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_MilCap_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_O : MNP_RU_Soldier_MEDIUM{
		displayName = "Team Leader";
		backpack = "B_FieldPack_cbr";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		
		linkedItems[] = {"MNP_Beret_VDV", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Beret_VDV", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
	};
	
	class MNP_RU_Soldier_AR : MNP_RU_Soldier_MEDIUM{
		
		uniformClass = "MNP_CombatUniform_RU_Med_B"; //the uniform item
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";

		
		displayName = "Autorifleman";
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};

	class MNP_RU_Soldier_GR : MNP_RU_Soldier_MEDIUM{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_RU_Soldier_M : MNP_RU_Soldier_MEDIUM{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
		linkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_AT : MNP_RU_Soldier_MEDIUM{
		displayName = "Rifleman (AT)";
	
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};

	// Desert
	
	class MNP_RU_Soldier_MEDIUM_D : B_soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RU_Med_D"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		backpack = "B_Bergen_sgg";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RL_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		side = 0;
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RU_D_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_O_D : MNP_RU_Soldier_MEDIUM_D{
		displayName = "Team Leader";
		backpack = "B_FieldPack_cbr";
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		
		linkedItems[] = {"MNP_Beret_VDV", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Beret_VDV", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		
	};
	
	class MNP_RU_Soldier_AR_D : MNP_RU_Soldier_MEDIUM_D{
		displayName = "Autorifleman";

		uniformClass = "MNP_CombatUniform_RU_Med_DB"; //the uniform item
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";

		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};

	class MNP_RU_Soldier_GR_D : MNP_RU_Soldier_MEDIUM_D{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_RU_Soldier_M_D : MNP_RU_Soldier_MEDIUM_D{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
		linkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RUMED", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_AT_D : MNP_RU_Soldier_MEDIUM_D{
	
		displayName = "Rifleman (AT)";

		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	// Elite
	
	class MNP_RU_Soldier_heavy_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Operator";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Russia_Heavy"; //the uniform item
		
		model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
		
		backpack = "B_Bergen_rgr";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RU_T.paa", "\MNP_OPFOR\Data\H_RU_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RUS_Units"; // Puts unit in the vehicleclass

		side = 0;
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_Russia", "MNP_Vest_RU_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Russia", "MNP_Vest_RU_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_heavy_O : MNP_RU_Soldier_heavy_F {
		
		displayName = "Team Leader";
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		linkedItems[] = {"MNP_MilCap_RU_T", "MNP_Vest_RU_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_RU_T", "MNP_Vest_RU_T", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_heavy_AR : MNP_RU_Soldier_heavy_F {
		displayName = "Autorifleman";

		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	};
	
	class MNP_RU_Soldier_heavy_AT : MNP_RU_Soldier_heavy_F {
		displayName = "Rifleman (AT)";
	
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_RU_Soldier_heavy_G : MNP_RU_Soldier_heavy_F {
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_RU_Soldier_heavy_M : MNP_RU_Soldier_heavy_F {
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		attendant = 1;
	
		linkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RU_T", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RU_T", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	// Desert Elite
	
	class MNP_RU_Soldier_heavy_D : MNP_RU_Soldier_heavy_F {
		
		uniformClass = "MNP_CombatUniform_Russia_Heavy_D"; //the uniform item

		
		vehicleClass = "MNP_RUS_D_Units"; // Puts unit in the vehicleclass
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RU_D.paa", "\MNP_OPFOR\Data\H_RU_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		linkedItems[] = {"MNP_Helmet_Russia_D", "MNP_Vest_RU_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Russia_D", "MNP_Vest_RU_D2", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_heavy_DO : MNP_RU_Soldier_heavy_D {
		displayName = "Team Leader";
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		linkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RU_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_RU_D", "MNP_Vest_RU_D", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};

	};
	
	class MNP_RU_Soldier_heavy_DAR : MNP_RU_Soldier_heavy_D {
		displayName = "Autorifleman";

		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	};
	
	class MNP_RU_Soldier_heavy_DAT : MNP_RU_Soldier_heavy_D {
		displayName = "Rifleman (AT)";
	
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	class MNP_RU_Soldier_heavy_DG : MNP_RU_Soldier_heavy_D {
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_RU_Soldier_heavy_DM : MNP_RU_Soldier_heavy_D {
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		attendant = 1;
	
		linkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RU_T", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Boonie_RU_T", "MNP_Vest_RU_T", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	// North Korean Conscripts
	
	class MNP_NK_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Conscript";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NKR_rg"; //the uniform item

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_NKR.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_OPFOR\Data\Officer.rvmat"};

		
		linkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_NK_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_NK_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NKR_Sh"; //the uniform item

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_NKR.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		
		linkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "V_HarnessO_brn", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_NK_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_NK_Soldier_AR : MNP_NK_Soldier_F{
		displayName = "Autorifleman";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	};
	
	class MNP_NK_Soldier_AT : MNP_NK_Soldier_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_FieldPack_cbr_LAT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	class MNP_NK_Soldier_G : MNP_NK_Soldier_F{
		displayName = "Grenadier";
		
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	class MNP_NK_Soldier_MD : MNP_NK_Soldier_F{
		displayName = "Field Medic";
		backpack = "B_FieldPack_cbr_Medic";
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	// North Korean Regulars
	
	class MNP_NKC_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NKC_rg"; //the uniform item

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_NKC.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_OPFOR\Data\Officer.rvmat"};

		
		linkedItems[] = {"MNP_Helmet_SOVC_NK", "MNP_Vest_OD", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "MNP_Vest_OD", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_NKC_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_NKC_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_NKC_Sh"; //the uniform item

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
				
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_NKC.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		
		linkedItems[] = {"MNP_Helmet_SOVC_NK", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_SOVC_NK", "V_Chestrig_rgr", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
			side = 0;

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_NKC_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_NKC_Soldier_AR : MNP_NKC_Soldier_F{
		displayName = "Autorifleman";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
	
	};
	
	class MNP_NKC_Soldier_AT : MNP_NKC_Soldier_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_FieldPack_cbr_LAT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put","Binocular"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_NKC_Soldier_G : MNP_NKC_Soldier_F{
		displayName = "Grenadier";
		
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	class MNP_NKC_Soldier_MD : MNP_NKC_Soldier_F{
		displayName = "Field Medic";
		backpack = "B_FieldPack_cbr_Medic";
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};

	// Russian arctic command
	
	class MNP_RU_Soldier_Arctic_F : B_soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Operator";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_Russia_arctic"; //the uniform item
		
		model = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
		
		backpack = "B_Bergen_rgr";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RU_A.paa", "\MNP_OPFOR\Data\H_RU_A.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RUS_A_Units"; // Puts unit in the vehicleclass

		side = 0;
		author = "Killoch";	
		linkedItems[] = {"MNP_Helmet_Russia_arctic", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_Russia_arctic", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_Arctic_O : MNP_RU_Soldier_Arctic_F {
		
		displayName = "Team Leader";
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		
		linkedItems[] = {"MNP_MilCap_RU_T", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_MilCap_RU_T", "G_Balaclava_lowprofile", "V_HarnessO_gry", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_RU_Soldier_Arctic_AR : MNP_RU_Soldier_Arctic_F {
		displayName = "Autorifleman";

		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	};
	
	class MNP_RU_Soldier_Arctic_AT : MNP_RU_Soldier_Arctic_F {
		displayName = "Rifleman (AT)";
	
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_RU_Soldier_Arctic_G : MNP_RU_Soldier_Arctic_F {
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_RU_Soldier_Arctic_M : MNP_RU_Soldier_Arctic_F {
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	// Russian Oldschool
	
	class MNP_RO_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RO_rg"; //the uniform item
		
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_OPFOR\Data\Officer.rvmat"};

		
		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "MNP_B_RU2_FP";		
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RO_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_RO_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RO_Sh"; //the uniform item
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		
		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "MNP_B_RU2_FP";		
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RO_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_RO_Soldier_AR : MNP_RO_Soldier_F{
		displayName = "Autorifleman";

		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};
	
	class MNP_RO_Soldier_AT : MNP_RO_Soldier_F{
		displayName = "Rifleman (AT)";
	
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	
	};
	
	class MNP_RO_Soldier_G : MNP_RO_Soldier_O{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	
	};
	
	class MNP_RO_Soldier_M : MNP_RO_Soldier_O{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	
	class MNP_RO2_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RO2_rg"; //the uniform item
		
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO2.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_OPFOR\Data\Officer.rvmat"};

		
		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "MNP_B_RU2_FP";		
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RO2_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_RO2_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RO2_Sh"; //the uniform item
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO2.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "MNP_B_RU2_FP";		
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RO2_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_RO2_Soldier_AR : MNP_RO2_Soldier_O{
		displayName = "Autorifleman";

		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};
	
	class MNP_RO2_Soldier_AT : MNP_RO2_Soldier_O{
		displayName = "Rifleman (AT)";
	
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	
	};
	
	class MNP_RO2_Soldier_G : MNP_RO2_Soldier_F{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	
	};
	
	class MNP_RO2_Soldier_M : MNP_RO2_Soldier_F{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	
	class MNP_RO3_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RO3_rg"; //the uniform item
		
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO3.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_OPFOR\Data\Officer.rvmat"};

		
		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "MNP_B_RU2_FP";		
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RO3_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_RO3_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RO3_Sh"; //the uniform item
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO3.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		
		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "MNP_B_RU2_FP";		
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RO3_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_RO3_Soldier_AR : MNP_RO3_Soldier_F{
		displayName = "Autorifleman";

		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};
	
	class MNP_RO3_Soldier_AT : MNP_RO3_Soldier_O{
		displayName = "Rifleman (AT)";
	
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	
	};
	
	class MNP_RO3_Soldier_G : MNP_RO3_Soldier_O{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	
	};
	
	class MNP_RO3_Soldier_M : MNP_RO3_Soldier_F{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	
	class MNP_RO4_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RO4_rg"; //the uniform item
		
		Model = "\A3\Characters_F\OPFOR\O_officer.p3d";
		
		weapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO4.paa"};
		hiddenSelectionsMaterials[] = {"\MNP_OPFOR\Data\Officer.rvmat"};

		
		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "MNP_B_RU2_FP";		
		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RO4_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};
	
	class MNP_RO4_Soldier_O : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_RO4_Sh"; //the uniform item
		
		hiddenSelections[] = {"Camo1", "Camo2", "Insignia", "Clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO4.paa", "\MNP_INDEP\Data\smock_t2_co.paa"};
		
		model = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		
		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_oli", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		backpack = "MNP_B_RU2_FP";

		side = 0;
	
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_RO4_Units"; // Puts unit in the vehicleclass	
		author = "Killoch";
	};

	class MNP_RO4_Soldier_AR : MNP_RO4_Soldier_F{
		displayName = "Autorifleman";

		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};
	
	class MNP_RO4_Soldier_AT : MNP_RO4_Soldier_O{
		displayName = "Rifleman (AT)";
	
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	
	};
	
	class MNP_RO4_Soldier_G : MNP_RO4_Soldier_O{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	
	};
	
	class MNP_RO4_Soldier_M : MNP_RO4_Soldier_F{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	// Autumn Novorussians
	
	class MNP_DPR_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_DPR_A"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		side = 0;

		backpack = "B_FieldPack_oli";
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_DPR_A.paa", "\MNP_OPFOR\Data\C_DPR_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_DPRA_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_brn", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_RO", "V_TacVest_brn", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class MNP_DPR_Soldier_AR : MNP_DPR_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_FieldPack_oli";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	};
	
	class MNP_DPR_Soldier_AT : MNP_DPR_Soldier_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	};
	
	class MNP_DPR_Soldier_GR : MNP_DPR_Soldier_F{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_DPR_Soldier_TL : MNP_DPR_Soldier_F{
		displayName = "Team Leader";		
		
		backpack = "B_FieldPack_oli";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_DPR_Soldier_MD : MNP_DPR_Soldier_F{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	// Summer Novorussians
	
	class MNP_DPR_T_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_DPR_B"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";

		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		side = 0;
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_DPR_T_A.paa", "\MNP_OPFOR\Data\C_DPR_T_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_DPRS_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"MNP_Helmet_PAGST_OD", "V_I_G_resistanceLeader_F", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"MNP_Helmet_PAGST_OD", "V_I_G_resistanceLeader_F", "G_Balaclava_blk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};

	class MNP_DPR_T_Soldier_AR : MNP_DPR_T_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	};
	
	class MNP_DPR_T_Soldier_AT : MNP_DPR_T_Soldier_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	};
	
	class MNP_DPR_T_Soldier_GR : MNP_DPR_T_Soldier_F{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_DPR_T_Soldier_TL : MNP_DPR_T_Soldier_F{
		displayName = "Team Leader";		
		
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_DPR_T_Soldier_MD : MNP_DPR_T_Soldier_F{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	// IRGC Basij
	
	class MNP_IR_BSJ_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_IR_BSJ_A"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		backpack = "B_FieldPack_khk";

		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		side = 0;
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_BSJ_A.paa", "\MNP_OPFOR\Data\C_IR_BSJ_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_IR_BSJ_R_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_IR_BSJ_Soldier_AR : MNP_IR_BSJ_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_FieldPack_khk";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	};
	
	class MNP_IR_BSJ_Soldier_AT : MNP_IR_BSJ_Soldier_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	};
	
	class MNP_IR_BSJ_Soldier_GR : MNP_IR_BSJ_Soldier_F{
		displayName = "Grenadier";
		backpack = "B_FieldPack_khk";

		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_IR_BSJ_Soldier_TL : MNP_IR_BSJ_Soldier_F{
		displayName = "Team Leader";		
		
		backpack = "B_FieldPack_khk";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_IR_BSJ_Soldier_MD : MNP_IR_BSJ_Soldier_F{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	
	class MNP_IR_BSJ_Soldier_MEDIUM : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_IR_BSJ_Med"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_BSJ_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		side = 0;
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_IR_BSJ_IR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_IR_BSJ_Soldier_Med_O : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_IR_BSJ_Med_B"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_BSJ_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		side = 0;
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_IR_BSJ_IR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_IR_BSJ_Soldier_Med_AR : MNP_IR_BSJ_Soldier_MEDIUM{
		displayName = "Autorifleman";
		weapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MX_SW_Black_Hamr_pointer_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer", "100Rnd_65x39_caseless_mag_Tracer"};
		
	
	};
	
	class MNP_IR_BSJ_Soldier_Med_G : MNP_IR_BSJ_Soldier_Med_O{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_MX_GL_Black_Hamr_pointer_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"3Rnd_HE_Grenade_shell", "3Rnd_Smoke_Grenade_shell", "HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		
	
	};
	
	class MNP_IR_BSJ_Soldier_Med_AT : MNP_IR_BSJ_Soldier_MEDIUM{
		displayName = "Rifleman (AT)";

		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		respawnweapons[] = {"launch_RPG32_F", "arifle_Mk20C_plain_F", "Throw", "put"};
		
		magazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};
		respawnmagazines[] = {"RPG32_F", "RPG32_HE_F", "HandGrenade", "HandGrenade", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag", "30Rnd_556x45_Stanag"};

	};
	
	class MNP_IR_BSJ_Soldier_Med_M : MNP_IR_BSJ_Soldier_Med_O{
		displayName = "Combat Medic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		respawnweapons[] = {"arifle_MXC_Black_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag", "30Rnd_65x39_caseless_mag"};

	};
	
	// IRGC
	
	class MNP_IR_IRGC_Soldier_F : B_Soldier_base_F {
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_IR_IRGC_A"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";

		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_IRGC_A.paa", "\MNP_OPFOR\Data\C_IR_IRGC_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};
		side = 0;

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_IR_IRGC_R_Units"; // Puts unit in the vehicleclass

		linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_IR_IRGC_Soldier_AR : MNP_IR_IRGC_Soldier_F{
		displayName = "Automatic rifleman";
		
		backpack = "B_Kitbag_rgr";
		
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	};
	
	class MNP_IR_IRGC_Soldier_AT : MNP_IR_IRGC_Soldier_F{
		displayName = "Rifleman (AT)";
		
		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	};
	
	class MNP_IR_IRGC_Soldier_GR : MNP_IR_IRGC_Soldier_F{
		displayName = "Grenadier";
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_IR_IRGC_Soldier_TL : MNP_IR_IRGC_Soldier_F{
		displayName = "Team Leader";		
		
		backpack = "B_AssaultPack_cbr";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
	
	};
	
	class MNP_IR_IRGC_Soldier_MD : MNP_IR_IRGC_Soldier_F{
		displayName = "Medic";
		backpack = "B_FieldPack_ocamo_ReconMedic";
	
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		attendant = 1;
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	};
	
	
	
	class MNP_IR_IRGC_Soldier_MEDIUM : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_IR_IRGC_Med"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_IRGC_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		side = 0;
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_IR_IRGC_IR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_IR_IRGC_Soldier_Med_O : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 2;
		displayName = "Team Leader";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_IR_IRGC_Med_B"; //the uniform item
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\ia_soldier_01_clothing_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
		};
		
		model = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
		
		weapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "Throw", "put", "Binocular"};
		
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_IRGC_B.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		side = 0;
		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_IR_IRGC_IR_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		linkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
		respawnLinkedItems[] = {"H_Beret_blk", "V_TacVest_khk", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	};
	
	class MNP_IR_IRGC_Soldier_Med_AR : MNP_IR_IRGC_Soldier_MEDIUM{
		displayName = "Autorifleman";
		weapons[] = {"LMG_Zafir_F", "Throw", "put"};
		respawnweapons[] = {"LMG_Zafir_F", "Throw", "put"};
		
		magazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		respawnmagazines[] = { "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box", "150Rnd_762x51_Box"};
		
	
	};
	
	class MNP_IR_IRGC_Soldier_Med_G : MNP_IR_IRGC_Soldier_Med_O{
		displayName = "Grenadier";		
		
		weapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_GL_ACO_F", "Throw", "put"};
		
		magazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "1Rnd_Smoke_Grenade_shell", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		
	
	};
	
	class MNP_IR_IRGC_Soldier_Med_AT : MNP_IR_IRGC_Soldier_MEDIUM{
		displayName = "Rifleman (AT)";

		backpack = "B_AssaultPack_rgr_LAT";
		
		weapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_ACO_F", "launch_RPG32_F", "Throw", "put"};
		
		magazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};

	};
	
	class MNP_IR_IRGC_Soldier_Med_M : MNP_IR_IRGC_Soldier_Med_O{
		displayName = "Combat Medic";
		attendant = 1;
		backpack = "B_AssaultPack_rgr_Medic";
		
		weapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		respawnweapons[] = {"arifle_Katiba_C_ACO_F", "Throw", "put"};
		magazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};
		respawnmagazines[] = {"HandGrenade", "HandGrenade", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green", "30Rnd_65x39_caseless_green"};

	};
	
	
	class MNP_CNT_Soldier_F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_J"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLAT_A.paa", "\MNP_OPFOR\Data\C_PLAT_B.paa"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		};
	
	class MNP_CNP_Soldier_F : B_Soldier_base_F{
		_generalMacro = "B_Soldier_F"; //unsure what this does
		scope = 1;
		displayName = "Rifleman";
		nakedUniform = "U_BasicBody"; //class for "naked" body
		uniformClass = "MNP_CombatUniform_China_SF"; //the uniform item
		model = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
		side = 0;

		genericnames = "AsianMen";
		identitytypes[] = {"Head_Asian"};
		
		class Wounds
		{
			tex[] = {};
			mat[] = {"A3\Characters_F_Beta\INDEP\Data\officer.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat","A3\Characters_F_Beta\INDEP\Data\officer_injury.rvmat"};
		};

		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLAP_SFA.paa", "\MNP_OPFOR\Data\C_PLAP_SFB.paa"};

		faction = MNP_O_Units; // Puts unit under new faction
		vehicleClass = "MNP_CN_Units"; // Puts unit in the vehicleclass
		author = "Killoch";	
		};
	
	// ______________---------------------------------__________________---------------------------------_________________________---------------------------------
	
	class B_Carryall_Base;
	class B_FieldPack_Base;
	class B_FieldPack_cbr_AT;

		
	class MNP_B_FieldPack_PLA : B_FieldPack_Base{
		displayName = "MNP: Type.07 FieldPack";
		scope = 1;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Pack_CN.paa"};

		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 7;
			};
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_Carryall_PLA_AR: B_Carryall_Base{
		displayName = "FieldPack";
		scope = 1;
		
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Carry_CN.paa"};

		
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_Carryall_PLA_Medic: B_Carryall_Base{
		displayName = "PLA Medical Pack";
		scope = 1;
		
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Carry_CN.paa"};
		
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine = "30Rnd_65x39_caseless_green";
				count = 2;
			};
			class _xx_SmokeShell 
			{		
				magazine = "SmokeShell";		
				count = 4;	
			};
		};
		
		class TransportItems
		{
			class _xx_Medikit{		
				name = "Medikit";		
				count = 1;	
			};
			
			class _xx_FirstAidKit{		
				name = "FirstAidKit";		
				count = 4;	
			};

		};
	};
	
	class MNP_B_FieldPack_PLA_AT : B_FieldPack_Base{
		displayName = "PLA AT Pack";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Pack_CN.paa"};
		
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine = "RPG32_F";
				count = 1;
			};
			class _xx_RPG32_HE_F
			{
				magazine = "RPG32_HE_F";
				count = 1;
			};
		};
		
		class TransportItems
		{
		};
	};
	
	
	
	class MNP_B_FieldPack_PLA_D : MNP_B_FieldPack_PLA{
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Pack_CN_D.paa"};
	};
	
	class MNP_B_Carryall_PLA_AR_D : MNP_B_Carryall_PLA_AR{
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Carry_CN_D.paa"};
	};
	
	class MNP_B_Carryall_PLA_Medic_D : MNP_B_Carryall_PLA_Medic{
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Carry_CN_D.paa"};
	};
	
	class MNP_B_FieldPack_PLA_AT_D : MNP_B_FieldPack_PLA_AT{
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Pack_CN_D.paa"};
	};

	
	class MNP_B_FieldPack_PLA_Basic : MNP_B_FieldPack_PLA{
		scope = 2;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	
	};
	
	class MNP_B_Carryall_PLA_Basic : MNP_B_Carryall_PLA_AR{
		displayName = "MNP: Type.07 Carryall";
		scope = 2;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};	
	};
	
	class MNP_B_FieldPack_PLA_Basic_D : MNP_B_FieldPack_PLA_D{
		scope = 2;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	
	};
	
	class MNP_B_Carryall_PLA_Basic_D : MNP_B_Carryall_PLA_AR_D{
		displayName = "PLA Carryall";
		scope = 2;
		class TransportMagazines
		{
		};
		class TransportItems
		{
		};	
	};
	
	
	class MNP_B_RU1_CA : B_Carryall_Base{
		scope = 2;
		displayName = "MNP: Russian Carryall";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_RU1_CA.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_RU2_CA : MNP_B_RU1_CA{
		displayName = "MNP: Russian Carryall";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_RU2_CA.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_RUW_CA : MNP_B_RU1_CA{
		displayName = "MNP: Russian Winter Carryall";
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_RUW_CA.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	
	class MNP_B_RU2_FP : B_FieldPack_Base{
		displayName = "MNP: Russian Field Pack";
		scope = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_RU2_FP.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_RU1_FP : MNP_B_RU2_FP{
		
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_RU1_FP.paa"};

		class TransportMagazines
		{
		};
		class TransportItems
		{
		};
	};
	
	class MNP_B_RUW_FP : MNP_B_RU2_FP{
		displayName = "MNP: Russian Winter FieldPack";
		armor = 2;
		
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_RUW_FP.paa"};

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
	
	//- VDV Regular Gear
	
	class MNP_CombatUniform_RU_Med : Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Uniform (Digital)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RL_T.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_RU_Soldier_MEDIUM"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_RU_Med_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Uniform (Digital)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RL_T.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_RU_Soldier_AR"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_RU_Med_D : Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Uniform (Desert Digital)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RL_D.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_RU_Soldier_MEDIUM_D"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_RU_Med_DB : Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Uniform (Desert Digital)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RL_D.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_RU_Soldier_AR_D"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	//- PLA Regular Gear
	
	class U_I_OfficerUniform;

	class MNP_CombatUniform_China : Uniform_Base {
		scope = 2;
		displayName = "MNP: Type 07 (Universal)";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLA_A.paa", "\MNP_OPFOR\Data\C_PLA_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_CN_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
		
	class MNP_Helmet_China : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 helmet (Universal)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_CN_T.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 10;
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
	
	// Desert
	
	class MNP_CombatUniform_China_D : Uniform_Base {
		scope = 2;
		displayName = "MNP: Type 07 (Desert)";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLAD_A.paa", "\MNP_OPFOR\Data\C_PLAD_B.paa"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_CD_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_China_D : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 Helmet (Arid)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_CN_D.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 10;
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
	
	// OPFOR Heavies
	
	class MNP_CombatUniform_China_Heavy_T :Uniform_Base {
		scope = 2;
		displayName = "MNP: Type 07 Heavy";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CHI_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
			uniformClass = "MNP_CN_Soldier_heavy_F"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_China_Heavy_D :Uniform_Base {
		scope = 2;
		displayName = "MNP: Type 07 Heavy (Desert)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_CHI_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
			uniformClass = "MNP_CN_Soldier_heavy_D"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_CNH_T : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 Helmet (Universal)";
		
		model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_CHI_T.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
			mass = 20;
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
	
	class MNP_Helmet_CNH_D : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 Helmet (Arid)";
		
		model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_CHI_D.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
			mass = 20;
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
	
	
	class MNP_CombatUniform_Russia_Heavy :Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Heavy (T)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RU_T.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
			uniformClass = "MNP_RU_Soldier_heavy_F"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_Russia : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Russian helmet (Digital)";
		
		model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_RU_T.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
			mass = 20;
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
	
	class MNP_CombatUniform_Russia_Heavy_D :Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Heavy (Desert Digital)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RU_D.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
			uniformClass = "MNP_RU_Soldier_heavy_D"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_Russia_D : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Russian helmet (Desert)";
		
		model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_RU_D.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
			mass = 20;
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
	
	
	// Chinese Heavy Vests
	
	class MNP_Vest_ChinaH_T : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Type 07 Plate Carrier (Universal)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_CN_T.paa"};
		
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
	
	class MNP_Vest_ChinaH_T2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Type 07 Plate Carrier (Universal)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_CN_T.paa"};
		
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
	
	class MNP_Vest_ChinaH_D : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Type 07 Plate Carrier (Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_CN_D.paa"};
		
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
	
	class MNP_Vest_ChinaH_D2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Type 07 Plate Carrier (Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_CN_D.paa"};
		
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
	
	// RUSSIAN VESHTS
	
	class MNP_Vest_RU_T : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Russian Plate Carrier (Digital Flora)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_RU_T.paa"};
		
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
	
	class MNP_Vest_RU_T2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Russian Plate Carrier (Digital Flora)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_RU_T.paa"};
		
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
	
	class MNP_Vest_RU_D : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Russian Plate Carrier (Digital Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_RU_D.paa"};
		
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
	
	class MNP_Vest_RU_D2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Russian Plate Carrier (Digital Desert)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_RU_D.paa"};
		
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
	
	
	 // -- Boonies
	
	class MNP_Boonie_CN_T : H_Booniehat_khk {
        displayName = "MNP: Type 07 Boonie (Universal)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_CN_T.paa"};
    };  
	
	class MNP_Boonie_CN_D : H_Booniehat_khk {
        displayName = "MNP: Type 07 Boonie (Arid)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_CN_D.paa"};
    };  
	
	class MNP_Boonie_RU_T : H_Booniehat_khk {
        displayName = "MNP: Russian Boonie";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_RU_T.paa"};
    };  
	
	class MNP_Boonie_RU_D : H_Booniehat_khk {
        displayName = "MNP: Russian Boonie (Desert)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_RU_D.paa"};
    };  

	// PLN Marine Gear
	
	class MNP_CombatUniform_CMAR : Uniform_Base {
		scope = 2;
		displayName = "MNP: Type 07 (Naval)";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLN_A.paa", "\MNP_OPFOR\Data\C_PLN_B.paa"};
		
		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_CM_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_MilCap_CN_T : H_MilCap_gry{
		displayName = "MNP: Type 07 Cap (Universal)";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\MC_CN_T.paa"};
	};
	
	class MNP_MilCap_RU_T : H_MilCap_gry{
		displayName = "MNP: VDV Cap";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\MC_RU_T.paa"};
	};
	
	class MNP_MilCap_RU_D : H_MilCap_gry{
		displayName = "MNP: VDV Cap";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\MC_RU_D.paa"};
	};
	
	class MNP_MilCap_CM : H_MilCap_gry{
		displayName = "MNP: Type 07 Cap (Naval)";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\MC_CM.paa"};
	};
	
	class MNP_MilCap_CN_D : H_MilCap_gry{
		displayName = "MNP: Type 07 Cap (Arid)";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\MC_CN_D.paa"};
	};
	
	class MNP_Helmet_CM : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 Helmet (Naval)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_CM.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 10;
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
	
	class MNP_Boonie_CM : H_Booniehat_khk {
        displayName = "MNP: Type 07 Boonie (Naval)";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\B_CM.paa"};
    };

	
	class MNP_Beret_VDV : H_Beret_02  {
		displayName = "MNP: VDV Beret";
        picture = "\A3\characters_f\Data\UI\icon_H_booniehat_indp_ca.paa";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\Beret_VDV.paa"};
    };
	
	class MNP_Vest_RUMED : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Russian Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_RUMED.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest02";
			containerClass = "Supply140";
			mass = 70;
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
	
	class MNP_Vest_RUMED_B : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Russian Combat Vest";
		
		model = "\A3\Characters_F_beta\indep\equip_ia_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_RUMED.paa"};
		
		class ItemInfo : VestItem {
			uniformModel = "\A3\Characters_F_beta\indep\equip_ia_vest01";
			containerClass = "Supply140";
			mass = 70;
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
	
	class MNP_Helmet_RU_LT : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Russian MICH Helmet (Digital)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_RU_LT.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 10;
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
	
	class MNP_Helmet_RU_LD : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Russian MICH Helmet (Desert Digital)";
		
		model = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_RU_LD.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F_beta\indep\headgear_helmet_canvas";
			mass = 10;
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
	
	// Soviet Steel helmets, regards to East Vs. West mod
	
	class MNP_Helmet_PAGST_CN : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 PAGST (Type.07 Universal)";
		
		model = "\MNP_OPFOR\sud_PLAT_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_PLAT_helmet01";
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
	
	class MNP_Helmet_PAGST_CN_D : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 PAGST (Type.07 Arid)";
		
		model = "\MNP_OPFOR\sud_PLAD_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_PLAD_helmet01";
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
	
	class MNP_Helmet_PAGST_CM : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 PAGST (Type.07 Naval)";
		
		model = "\MNP_OPFOR\sud_PLAN_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_PLAN_helmet01";
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
	
	class MNP_Helmet_PAGST_RT : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Russian PASGT (Digital Flora)";
		
		model = "\MNP_OPFOR\sud_RUPT_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_RUPT_helmet01";
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
	
	class MNP_Helmet_PAGST_RD : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Russian PASGT (Digital Desert)";
		
		model = "\MNP_OPFOR\sud_RUPD_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_RUPD_helmet01";
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
	
	class MNP_Helmet_PAGST_OD : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: PASGT (Olive Drab)";
		
		model = "\MNP_OPFOR\sud_PGOD_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_PGOD_helmet01";
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
	
	class MNP_Helmet_PAGST_BK : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: PASGT (Black)";
		
		model = "\MNP_OPFOR\sud_PGBK_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_PGBK_helmet01";
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
	
	class MNP_Helmet_PAGST_UN : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: PASGT (UN)";
		
		model = "\MNP_OPFOR\sud_PGUN_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_PGUN_helmet01";
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
	
	class MNP_Helmet_PAGST_IRGC : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: IRGC PASGT";
		
		model = "\MNP_OPFOR\sud_IRGC_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_IRGC_helmet01";
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
	
	class MNP_Helmet_PAGST_IBSJ : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: IRGC Basij PASGT";
		
		model = "\MNP_OPFOR\sud_IBSJ_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_IBSJ_helmet01";
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
	
	class MNP_Helmet_PAGST_RO : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Russian PASGT (Flora)";
		
		model = "\MNP_OPFOR\sud_RUPG_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_RUPG_helmet01";
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
	
	
	
	class MNP_Helmet_SOVC_CD : MNP_Helmet_PAGST_CN_D {
		scope = 1;
		
	};
	
	class MNP_Helmet_SOVC_CM : MNP_Helmet_PAGST_CM {
		scope = 1;
		
	};
	
	class MNP_Helmet_SOVC_NK : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "Soviet Helmet (KPA)";
		
		model = "\MNP_OPFOR\sud_ussr_helmetnk";

			
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_ussr_helmetnk";
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
	
	class MNP_Helmet_SOVC_DC : MNP_Helmet_PAGST_OD {
		scope = 1;
	};
	
	class MNP_Helmet_SOVC_CN : MNP_Helmet_PAGST_CN {
		scope = 1;
		
	};
	
	class MNP_Helmet_SOVC_RU : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Soviet Helmet (Russian)";
		
		model = "\MNP_OPFOR\sud_ussr_helmetru";

			
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_ussr_helmetru";
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
	
	class MNP_Helmet_SOV_Steel : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Soviet Steel Helmet";
		
		model = "\MNP_OPFOR\sud_ussr_helmet01";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\sud_equipussr_co.paa"};
		hiddenSelectionsMaterials[] = {"MNP_OPFOR\Data\sud_equipussr.rvmat"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_ussr_helmet01";
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
	
	// North Korean Army
	
	class MNP_CombatUniform_NKR_Sh : Uniform_Base {
			scope = 2;
			displayName = "MNP: KPA Uniform (Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_NKR.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_NK_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo1"};

			};
		};

	class MNP_CombatUniform_NKR_Rg : Uniform_Base {
		scope = 2;
		displayName = "MNP: KPA Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_NKR.paa"};
		hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_NK_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	class MNP_CombatUniform_NKC_Sh : Uniform_Base {
			scope = 2;
			displayName = "MNP: KPA Camouflage Uniform (Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_NKC.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_NKC_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo1"};

			};
		};

	class MNP_CombatUniform_NKC_Rg : Uniform_Base {
		scope = 2;
		displayName = "MNP: KPA Camouflage Uniform";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_NKC.paa"};
		hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_NKC_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	// CSAT Arctic
	
	class MNP_CombatUniform_Russia_arctic :Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Heavy (arctic)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RU_A.paa"};
		//hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_soldier_01.p3d";
			uniformClass = "MNP_RU_Soldier_arctic_F"; //would be same as our made soldier class
			containerClass = "Supply40"; //how much it can carry
			mass = 100; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_Helmet_Russia_arctic : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Russian helmet (arctic)";
		
		model = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";

		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\H_RU_A.paa"};
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\A3\Characters_F\OPFOR\headgear_O_helmet_ballistic";
			mass = 20;
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

	
	
	class MNP_Vest_Light_RU : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Flora Light Vest";
		
		model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\PV_RU.paa"};
		
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
	
	class MNP_Vest_Light_R2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Digital Flora Light Vest";
		
		model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\PV_R2.paa"};
		
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

	class MNP_Vest_Light_R3 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Tan Vest";
		
		model = "\A3\Characters_F_epc\civil\equip_press_vest_01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\PV_R3.paa"};
		
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

	// Russian Old School
	
	class MNP_MilCap_RO_A : H_MilCap_gry{
		displayName = "MNP: Flora Cap";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\MC_RO_A.paa"};
	};
	
	class MNP_MilCap_RO_B : H_MilCap_gry{
		displayName = "MNP: TTsKO Cap";
        hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\MC_RO_B.paa"};
	};

	
	class MNP_CombatUniform_RO_Sh : Uniform_Base {
			scope = 2;
			displayName = "MNP: Russian Uniform (Flora - Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_RO_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo1"};

			};
		};

	class MNP_CombatUniform_RO_Rg : Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Uniform (Flora)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO.paa"};
		hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_RO_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	
	class MNP_CombatUniform_RO2_Sh : Uniform_Base {
			scope = 2;
			displayName = "MNP: Russian Uniform (TTsKO - Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO2.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_RO2_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo1"};

			};
		};

	class MNP_CombatUniform_RO2_Rg : Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Uniform (TTsKO)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO2.paa"};
		hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_RO2_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	
	class MNP_CombatUniform_RO3_Sh : Uniform_Base {
			scope = 2;
			displayName = "MNP: Russian Uniform (Airborne - Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO3.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_RO3_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo1"};

			};
		};

	class MNP_CombatUniform_RO3_Rg : Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Uniform (Airborne)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO3.paa"};
		hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_RO3_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	
	class MNP_CombatUniform_RO4_Sh : Uniform_Base {
			scope = 2;
			displayName = "MNP: Russian Uniform (Reed - Shemagh)";
			picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
			model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
			
			hiddenSelections[] = {"Camo", "insignia", "clan"};
			hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO4.paa"};
			//hiddenSelectionsMaterials[]={"\MNP_INDEP\Data\officer.rvmat"};

			class ItemInfo : UniformItem {
				uniformModel = "\A3\Characters_F_gamma\Guerrilla\ig_leader.p3d";
				uniformClass = "MNP_RO4_Soldier_O"; //would be same as our made soldier class
				containerClass = "Supply60"; //how much it can carry
				mass = 40; //how much it weights
				
				hiddenSelections[] = {"Camo1"};

			};
		};

	class MNP_CombatUniform_RO4_Rg : Uniform_Base {
		scope = 2;
		displayName = "MNP: Russian Uniform (Reed)";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_RO4.paa"};
		hiddenSelectionsMaterials[]={"\MNP_OPFOR\Data\officer.rvmat"};

		class ItemInfo : UniformItem {
			uniformModel = "\A3\Characters_F\OPFOR\O_officer.p3d";
			uniformClass = "MNP_RO4_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};

	// Donetsk 
	
	class MNP_CombatUniform_DPR_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: DPR (Spekter-S - Autumn)";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_DPR_A.paa", "\MNP_OPFOR\Data\C_DPR_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_DPR_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_DPR_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: DPR (Spekter-S - Summer)";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_DPR_T_A.paa", "\MNP_OPFOR\Data\C_DPR_T_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_DPR_T_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	
	// Iranian Basij Uniforms
	
	class MNP_CombatUniform_IR_BSJ_A : Uniform_Base {
		scope = 2;
		displayName = "MNP: IRGC Basij Uniform";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_BSJ_A.paa", "\MNP_OPFOR\Data\C_IR_BSJ_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_IR_BSJ_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_IR_BSJ_Med : Uniform_Base {
		scope = 2;
		displayName = "MNP: IRGC Basij Fatigues ";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_BSJ_B.paa"};
		//hiddenSelectionsMaterials[]={"\A3\characters_f_bootcamp\a3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_IR_BSJ_Soldier_MEDIUM"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_IR_BSJ_Med_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: IRGC Basij Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_BSJ_B.paa"};
		//hiddenSelectionsMaterials[]={"\A3\characters_f_bootcamp\a3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_IR_BSJ_Soldier_Med_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	// Iranian RG 
	
	class MNP_CombatUniform_IR_IRGC_A : U_I_OfficerUniform {
		scope = 2;
		displayName = "MNP: IRGC Uniform";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_IRGC_A.paa", "\MNP_OPFOR\Data\C_IR_IRGC_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_IR_IRGC_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_CombatUniform_IR_IRGC_Med : Uniform_Base {
		scope = 2;
		displayName = "MNP: IRGC Fatigues ";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_IRGC_B.paa"};
		//hiddenSelectionsMaterials[]={"\A3\characters_f_bootcamp\a3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_01.p3d";
			uniformClass = "MNP_IR_IRGC_Soldier_MEDIUM"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	class MNP_CombatUniform_IR_IRGC_Med_B : Uniform_Base {
		scope = 2;
		displayName = "MNP: IRGC Fatigues";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\common\Suitpacks\suitpack_blufor_diver";
		
		hiddenSelections[] = {"Camo", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_IR_IRGC_B.paa"};
		//hiddenSelectionsMaterials[]={"\A3\characters_f_bootcamp\a3\characters_f_bootcamp\Guerrilla\Data\ig_guerrilla_6_1.rvmat"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_beta\indep\ia_soldier_02.p3d";
			uniformClass = "MNP_IR_IRGC_Soldier_Med_O"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};

		};
	};
	
	// Rapid Additions

	class MNP_CombatUniform_China_J : Uniform_Base {
		scope = 2;
		displayName = "MNP: Type 07 (Artillery)";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLAT_A.paa", "\MNP_OPFOR\Data\C_PLAT_B.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_CNT_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
		
	class MNP_Helmet_PAGST_CNJ : H_HelmetIA {
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "MNP: Type 07 PAGST (Type.07 Artillery)";
		
		model = "\MNP_OPFOR\sud_PLAA_helmet01";
		
		class ItemInfo : HeadgearItem {
			uniformmodel = "\MNP_OPFOR\sud_PLAA_helmet01";
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
	
	class MNP_CombatUniform_China_SF : Uniform_Base {
		scope = 2;
		displayName = "MNP: Type 07 (Police Special Forces)";
		
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		
		hiddenSelections[] = {"Camo1", "Camo2", "insignia", "clan"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\C_PLAP_SFA.paa", "\MNP_OPFOR\Data\C_PLAP_SFB.paa"};

		class ItemInfo : UniformItem {
			uniformmodel = "\A3\Characters_F_Beta\INDEP\ia_officer.p3d";
			uniformClass = "MNP_CNP_Soldier_F"; //would be same as our made soldier class
			containerClass = "Supply60"; //how much it can carry
			mass = 20; //how much it weights
			
			hiddenSelections[] = {"Camo"};
		};
	};
	
	class MNP_Vest_ChinaH_J : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Type 07 Plate Carrier (Artillery)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_PLAT.paa"};
		
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
	
	class MNP_Vest_ChinaH_J2 : V_PlateCarrierIA2_dgtl {
		scope = 2;
		displayName = "MNP: Type 07 Plate Carrier (Artillery)";
		
		model = "\A3\Characters_F\BLUFOR\equip_b_vest01";
		
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\MNP_OPFOR\Data\V_PLAT.paa"};
		
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
	
	
	
};

class CfgMagazines
{
	class TransportMagazines;
	class TransportItems;
	class 30Rnd_65x39_caseless_green;
};