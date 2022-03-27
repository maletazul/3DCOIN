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
        {0, "d7b2a50751f49eb0b916450e47df9f8728e890ea089e4f433dd35996bf801050"},
        {2, "f216b8e48ba8d705a2308f4bc063e76da9db997ef9dc6813c6299780d1b0a5c0"}};
} // namespace CryptoNote
