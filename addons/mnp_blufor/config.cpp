#include "script_component.hpp"

class CfgPatches {
    class MNP_BLUFOR_Config {
        units[] = {"MNP_US3co_MD", "MNP_US3co_O", "MNP_US3co_AT", "MNP_US3co_AR", "MNP_US3co_G", "MNP_US3co_F", "MNP_TIG_MD", "MNP_TIG_O", "MNP_TIG_AT", "MNP_TIG_AR", "MNP_TIG_G", "MNP_TIG_A", "MNP_USMCX_MD", "MNP_USMCX_O", "MNP_USMCX_AT", "MNP_USMCX_AR", "MNP_USMCX_G", "MNP_USMCX_A", "MNP_POPO_H", "MNP_POPO_A", "MNP_ISR_MD", "MNP_ISR_O", "MNP_ISR_AT", "MNP_ISR_AR", "MNP_ISR_G", "MNP_ISR_A", "MNP_ROKMC_MD", "MNP_ROKMC_O", "MNP_ROKMC_AT", "MNP_ROKMC_AR", "MNP_ROKMC_G", "MNP_ROKMC_A", "MNP_DDPM_MD", "MNP_DDPM_O", "MNP_DDPM_AT", "MNP_DDPM_AR", "MNP_DDPM_G", "MNP_DDPM_A", "MNP_DPM_MD", "MNP_DPM_O", "MNP_DPM_AT", "MNP_DPM_AR", "MNP_DPM_G", "MNP_DPM_A", "MNP_UKR_MD", "MNP_UKR_O", "MNP_UKR_AT", "MNP_UKR_AR", "MNP_UKR_G", "MNP_UKR_A", "MNP_USW_MD", "MNP_USW_TL", "MNP_USW_GR", "MNP_USW_AT", "MNP_USW_AR", "MNP_USW_A", "MNP_3Co_Soldier_M2", "MNP_3Co_Soldier_AT2", "MNP_3Co_Soldier_G2", "MNP_3Co_Soldier_AR2", "MNP_3Co_Soldier_O2", "MNP_3Co_Soldier_F2", "MNP_Scorpion_Soldier_M", "MNP_Scorpion_Soldier_AT", "MNP_Scorpion_Soldier_G", "MNP_Scorpion_Soldier_O", "MNP_Scorpion_Soldier_AR", "MNP_Scorpion_Soldier_F", "MNP_DS_Soldier_M", "MNP_DS_Soldier_AT", "MNP_DS_Soldier_G", "MNP_DS_Soldier_AR", "MNP_DS_Soldier_O", "MNP_DS_Soldier_F", "MNP_TS_Soldier_M", "MNP_TS_Soldier_AT", "MNP_TS_Soldier_G", "MNP_TS_Soldier_O", "MNP_TS_Soldier_AR", "MNP_TS_Soldier_F", "MNP_AMCU_Soldier_MD", "MNP_AMCU_Soldier_G", "MNP_AMCU_Soldier_AT", "MNP_AMCU_Soldier_AR", "MNP_AMCU_Soldier_O", "MNP_AMCU_Soldier_F", "MNP_US6Co_Soldier_MD", "MNP_US6Co_Soldier_G", "MNP_US6Co_Soldier_AT", "MNP_US6Co_Soldier_AR", "MNP_US6co_Soldier_O", "MNP_US6co_Soldier_F", "MNP_US6Co_Soldier_MD2", "MNP_US6Co_Soldier_G2", "MNP_US6Co_Soldier_AT2", "MNP_US6Co_Soldier_AR2", "MNP_US6co_Soldier_O2", "MNP_US6co_Soldier_F2", "MNP_US6co_MD", "MNP_US6co_O", "MNP_US6co_AT", "MNP_US6co_AR", "MNP_US6co_G", "MNP_US6co_F", "MNP_US3Co_Soldier_MD", "MNP_US3Co_Soldier_G", "MNP_US3Co_Soldier_AT", "MNP_US3Co_Soldier_AR", "MNP_US3Co_Soldier_O", "MNP_US3Co_Soldier_F", "MNP_US3Co_Soldier_MD2", "MNP_US3Co_Soldier_G2", "MNP_US3Co_Soldier_AT2", "MNP_US3Co_Soldier_AR2", "MNP_US3Co_Soldier_O2", "MNP_US3Co_Soldier_F2", "MNP_US3co_MD", "MNP_US3co_O", "MNP_US3co_AT", "MNP_US3co_AR", "MNP_US3co_G", "MNP_US3co_F","MNP_TIGER_AT_Patrol", "MNP_TIGER_Patrol", "MNP_TIGER_Squad", "MNP_ROKMC_AT_Patrol", "MNP_ROKMC_Patrol", "MNP_ROKMC_Squad", "MNP_UKDDPM_AT_Patrol", "MNP_UKDDPM_Patrol", "MNP_UKDDPM_Squad", "MNP_UKDPM_AT_Patrol", "MNP_UKDPM_Patrol", "MNP_UKDPM_Squad", "MNP_AMCU_AT_Patrol", "MNP_AMCU_Patrol", "MNP_AMCU_Squad", "MNP_TPAT_AT_Patrol", "MNP_TPAT_Patrol", "MNP_TPAT_Squad", "MNP_ISR_AT_Patrol", "MNP_ISR_Patrol", "MNP_ISR_Squad", "MNP_UKR_AT_Patrol", "MNP_UKR_Patrol", "MNP_UKR_Squad", "MNP_TS_AT_Patrol", "MNP_TS_Patrol", "MNP_TS_Squad", "MNP_DS_AT_Patrol", "MNP_DS_Patrol", "MNP_DS_Squad", "MNP_Scorpion_AT_Patrol", "MNP_Scorpion_Patrol", "MNP_Scorpion_Squad", "MNP_AUS_AT_Patrol", "MNP_AUS_Patrol", "MNP_AUS_Squad", "MNP_GER_D_AT_Patrol", "MNP_GER_D_Patrol", "MNP_GER_D_Squad", "MNP_GER_AT_Patrol", "MNP_GER_Patrol", "MNP_GER_Squad", "MNP_CAND_AT_Patrol", "MNP_CAND_Patrol", "MNP_CAND_Squad", "MNP_CAN_AT_Patrol", "MNP_CAN_Patrol", "MNP_CAN_Squad", "MNP_USR_D_AT_Patrol", "MNP_USR_Patrol", "MNP_USR_Squad", "MNP_USA_AT_Patrol", "MNP_USA_Patrol", "MNP_USA_Squad", "MNP_USMC_D_AT_Patrol", "MNP_USMC_D_Patrol", "MNP_USMC_D_Squad", "MNP_USMC_AT_Patrol", "MNP_USMC_Patrol", "MNP_USMC_Squad", "MNP_USMC_Soldier_F", "MNP_USMC_Soldier_O", "MNP_USMC_Soldier_AR", "MNP_USMC_Soldier_AT", "MNP_USMC_Soldier_Med", "MNP_USMC_Soldier_G", "MNP_USMC_Soldier_DF", "MNP_USMC_Soldier_DO", "MNP_USMC_Soldier_DAR", "MNP_USMC_Soldier_DAT", "MNP_USMC_Soldier_DMed", "MNP_USMC_Soldier_DG", "MNP_Canada_Soldier_F", "MNP_Canada_Soldier_S", "MNP_Canada_Soldier_AR", "MNP_Canada_Soldier_G", "MNP_Canada_Soldier_M", "MNP_Canada_Soldier_AT", "MNP_Canada_Soldier_DF", "MNP_Canada_Soldier_DS", "MNP_Canada_Soldier_DAR", "MNP_Canada_Soldier_DG", "MNP_Canada_Soldier_DM", "MNP_Canada_Soldier_DAT", "MNP_GER_Soldier_F", "MNP_GER_Soldier_S", "MNP_GER_Soldier_AR", "MNP_GER_Soldier_AT", "MNP_GER_Soldier_MED", "MNP_GER_Soldier_GR", "MNP_GER_Soldier_DF", "MNP_GER_Soldier_DS", "MNP_GER_Soldier_AR_D", "MNP_GER_Soldier_AT_D", "MNP_GER_Soldier_MED_D", "MNP_GER_Soldier_GR_D", "MNP_USR_Soldier_F", "MNP_USR_Soldier_AR", "MNP_USR_Soldier_GR", "MNP_USR_Soldier_M", "MNP_USR_Soldier_O", "MNP_USR_Soldier_AT", "MNP_USR_Soldier_DMR", "MNP_USA_Soldier_F", "MNP_USA_Soldier_O", "MNP_USA_Soldier_AR", "MNP_USA_Soldier_AT", "MNP_USA_Soldier_GR", "MNP_USA_Soldier_DMR", "MNP_USA_Soldier_MED", "MNP_AUS_Soldier_F","MNP_AUS_Soldier_S","MNP_AUS_Soldier_AR","MNP_AUS_Soldier_AT","MNP_AUS_Soldier_G","MNP_AUS_Soldier_MD", "MNP_OD_AT_PATROL" , "MNP_OD_PATROL" ,  "MNP_OD_SQUAD" ,  "MNP_3C0_AT_Patrol" , "MNP_3Co_Patrol" ,  "MNP_3Co_SQUAD" ,  "MNP_M81_AT_Patrol" , "MNP_M81_Patrol" ,  "MNP_M81_Squad" ,  "MNP_ROK_AT_Patrol" ,  "MNP_ROK_Patrol" , "MNP_ROK_Squad" , "MNP_USMCA_AT_Patrol" , "MNP_USMCA_Patrol" , "MNP_USMCA_Squad" , "MNP_USMCA_Soldier_MD" , "MNP_USMCA_Soldier_G" , "MNP_USMCA_Soldier_AT" , "MNP_USMCA_Soldier_AR" , "MNP_USMCA_Soldier_O" , "MNP_USMCA_Soldier_F" , "MNP_3Co_Soldier_Md" , "MNP_3Co_Soldier_G" , "MNP_3Co_Soldier_AT" , "MNP_3Co_Soldier_AR" , "MNP_3Co_Soldier_O2" , "MNP_3Co_Soldier_F2" , "MNP_OD_Soldier_Md" , "MNP_OD_Soldier_G" , "MNP_OD_Soldier_AT" , "MNP_OD_Soldier_AR" , "MNP_OD_Soldier_O" , "MNP_OD_Soldier_F" , "MNP_M81_Soldier_Md" , "MNP_M81_Soldier_G" , "MNP_M81_Soldier_AT" , "MNP_M81_Soldier_AR" , "MNP_Wood_Soldier_O" , "MNP_Wood_Soldier_F" , "MNP_ROK_Soldier_M" , "MNP_ROK_Soldier_AT" , "MNP_ROK_Soldier_G" , "MNP_ROK_Soldier_AR" , "MNP_ROK_Soldier_O" , "MNP_ROK_Soldier_F" };
        weapons[] = {};
        requiredVersion = 1.90;
        requiredAddons[] = {
            "A3_Characters_F_BLUFOR",
            "A3_Characters_F_OPFOR",
            "A3_Characters_F_Common",
            "A3_Characters_F"
        };
    };
};

#include "CfgFactionClasses.h"
#include "CfgVehicleClasses.h"
//#include "CfgGroups.h"
#include "CfgVehicles.h"