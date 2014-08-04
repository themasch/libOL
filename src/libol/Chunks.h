// Copyright (c) 2014 Andrew Toulouse.
// Distributed under the MIT License.

#ifndef __libol__Chunks__
#define __libol__Chunks__

#include <vector>

namespace libol {
    namespace Chunks {
        static std::vector<uint8_t> decrypt(std::vector<uint8_t> bytes, std::vector<uint8_t> key);
    }
}

#endif /* defined(__libol__Chunks__) */
