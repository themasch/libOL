// Copyright (c) 2014 Andrew Toulouse.
// Distributed under the MIT License.

#ifndef __libol__PlayerStats__
#define __libol__PlayerStats__

#include "Block.h"

#include <cstdint>

namespace libol {
    class PlayerStats {
    public:

        #pragma pack(push, 1)
        
        struct Stats {
            uint32_t assists;
            uint32_t unk0;
            uint32_t kills;
            uint32_t unk1;
            uint32_t doubleKills;
            uint32_t unk2[3];
            uint32_t unrealKills;
            float totalGoldEarned;
            float totalGoldSpent;
            uint32_t unk3[10];
            uint32_t currentKillingSpree;
            float largestCriticalStrike;
            uint32_t largestKillingSpree;
            uint32_t largestMultiKill;
            uint32_t unk4;
            float longestTimeSpentLiving;
            float totalMagicDamageDealt;
            float magicDamageDealtToChampions;
            float magicalDamageTaken;
            uint32_t totalMinionsKilled;
            uint16_t padding0;
            uint32_t totalNeutralMinionsKilled;
            uint32_t neutralMinionsKilledInEnemyJungle;
            uint32_t neutralMinionsKilledInTeamJungle;
            uint32_t deaths;
            uint32_t pentaKills;
            float totalPhysicalDamageDealt;
            float physicalDamageDealtToChampions;
            float physicalDamageTaken;
            uint32_t unk5;
            uint32_t quadraKills;
            uint32_t unk6[9];
            uint32_t teamId;
            float unk7;
            uint32_t unk8;
            float unk9;
            float totalDamageDealt;
            float totalDamageDealtToChamptions;
            float totalDamageTaken;
            uint32_t totalHeal;
            float totalTimeCCDealt;
            float totalTimeSpentDead;
            uint32_t totalUnitsHealed;
            uint32_t tripleKills;
            float totalTrueDamageDealt;
            float trueDamageDealtToChamptions;
            float trueDamageTaken;
            uint32_t turretsDestroyed;
            uint32_t inhibitorsDestroyed;
            uint32_t unk10;
            uint32_t wardsDestroyed;
            uint32_t wardsPlaced;
            uint32_t unk11[2];
            uint16_t padding1;
        };

        #pragma pack(pop)

        Stats stats;

        static bool test(Block& block);
        static PlayerStats decode(Block& block);
    };
}

#endif /* defined(__libol__PlayerStats__) */
