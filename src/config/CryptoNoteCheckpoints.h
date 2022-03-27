// Copyright (c) 2012-2017, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2018-2020, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote
{
    struct CheckpointData
    {
        uint32_t index;
        const char *blockId;
    };

    const std::initializer_list<CheckpointData> CHECKPOINTS = {
        {0, "7fb97df81221dd1366051b2d0bc7f49c66c22ac4431d879c895b06d66ef66f4c"},
        {2, "2ef060801dd27327533580cfa538849f9e1968d13418f2dd2535774a8c494bf4"},
        {1000, "1325029c8be54b9e027f17ec481a0a361e4821381d1d12de1492e92cd38d4c11"},
        {2000, "1e1bdf484b967b1c7b6c6246a1054c74fa974dc6a1c93a3438e105e166fab277"}};
} // namespace CryptoNote
