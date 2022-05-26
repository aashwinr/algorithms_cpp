#pragma once
#include "Types.h"
#include <array>
#include <vector>
#include <string>
#include <algorithm>

namespace FS {

    using namespace std;
    using StorageUnitIdentifier = std::string;

    static const u32 CHUNK_COUNT = 512;

    class URL {
        std::vector<StorageUnitIdentifier> m_parent_directories;
    public:
        explicit URL(const std::string& url_string) {

        }
    };

    enum class StorageUnitKind {
        File,
        Directory,
    };

    struct StorageUnit {
        StorageUnitKind kind;
        URL id;
    };

    class Metadata {

    };

    class Chunk {

    };

    class FileSystem {
        Metadata m_metadata;
        array<Chunk, CHUNK_COUNT> m_chunks;
    };
}
