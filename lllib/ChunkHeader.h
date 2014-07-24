//  Copyright (c) 2014 Andrew Toulouse. All rights reserved.

#ifndef __lllib__ChunkHeader__
#define __lllib__ChunkHeader__

#include <cstdint>
#include <iostream>

namespace lllib {
    class ChunkHeader {
    public:
        int32_t chunkId;
        uint8_t chunkType;
        int32_t chunkLength;
        int32_t nextChunkId;
        int32_t offset;

        static ChunkHeader decode(std::ifstream& ifs);
    };
}

#endif /* defined(__lllib__ChunkHeader__) */