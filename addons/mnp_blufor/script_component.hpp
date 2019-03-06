/* -- Loudout guide 
Rifleman: 1 frag, 3 mags
FTL: 1 frag, 1 white smoke, 3 mags, 2 203s
AR: 1 frag, 3 boxes
AT: 0 frags, 3 mags, 1 AT round
MED: 0 frags, 1 blue smoke, 3 mags
MG: 0 frags, 3 boxes
*/

#define M4A1_RIFLEMAN \
    weapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M4A1_FTL \
    weapons[] = {"CUP_arifle_M4A1_BUIS_GL", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_BUIS_GL", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "1Rnd_HE_Grenade_shell", "1Rnd_HE_Grenade_shell", "SmokeShell"};

#define M249_AR \
    weapons[] = {"CUP_lmg_m249_pip3", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_m249_pip3", "Throw", "put"}; \
    magazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"}; \
    respawnmagazines[] = {"HandGrenade", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249", "CUP_200Rnd_TE4_Red_Tracer_556x45_M249"};

#define M4A1_AT \
    weapons[] = {"CUP_arifle_M4A1_black", "CUP_launch_M136", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "CUP_launch_M136", "Throw", "put"}; \
    magazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M4A1_MED \
    weapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    respawnweapons[] = {"CUP_arifle_M4A1_black", "Throw", "put"}; \
    magazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"}; \
    respawnmagazines[] = {"SmokeShellBlue", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag", "CUP_30Rnd_556x45_Stanag"};

#define M240_MG \
    weapons[] = {"CUP_lmg_M240", "Throw", "put"}; \
    respawnweapons[] = {"CUP_lmg_M240", "Throw", "put"}; \
    magazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"}; \
    respawnmagazines[] = {"CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M", "CUP_100Rnd_TE4_LRT4_Red_Tracer_762x51_Belt_M"};