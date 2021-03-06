// Copyright (c) 2014 Andrew Toulouse.
// Distributed under the MIT License.

#ifndef __libol__PlayerHeader__
#define __libol__PlayerHeader__

#include "Block.h"

#include <cstdint>
#include <array>
#include <vector>
#include <string>

namespace libol {
    class PlayerHeader {
    public:
        uint32_t entityId;
        uint32_t playerNumber;
        std::array<uint8_t, 0xA> unk0;
        std::string summonerName;
        std::string championName;
        std::array<uint8_t, 0x21> unk1;

        static bool test(Block& block);
        static PlayerHeader decode(Block& block);
    };
}

#endif /* defined(__libol__PlayerHeader__) */
