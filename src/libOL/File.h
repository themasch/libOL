// Copyright (c) 2014 Andrew Toulouse.
// Distributed under the MIT License.

#ifndef __libol__File__
#define __libol__File__

#include <iostream>
#include <vector>

#include <libOL/ChunkHeader.h>
#include <libOL/Header.h>
#include <libOL/PayloadHeader.h>

namespace libol {
    class File {
    public:
        Header header;
        std::string metadata;
        PayloadHeader payloadHeader;
        std::vector<ChunkHeader> chunkHeaders;
        std::vector<ChunkHeader> keyframeHeaders;

        static File decode(std::ifstream& ifs);
    };
}

#endif /* defined(__libol__File__) */