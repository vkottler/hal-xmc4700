/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 */
#pragma once

#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Universal Serial Interface Controller 0
 */
struct [[gnu::packed]] usic
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;      /*!< usic's identifier. */
    static constexpr std::size_t size = 4; /*!< usic's size in bytes. */

    /* Fields. */
    const uint32_t ID = {}; /*!< (read-only) Module Identification Register */

    /* Methods. */

    /**
     * Get ID's MOD_NUMBER field.
     */
    uint16_t get_ID_MOD_NUMBER()
    {
        return (ID >> 16u) & 0b1111111111111111u;
    }

    /**
     * Get ID's MOD_TYPE field.
     */
    uint8_t get_ID_MOD_TYPE()
    {
        return (ID >> 8u) & 0b11111111u;
    }

    /**
     * Get ID's MOD_REV field.
     */
    uint8_t get_ID_MOD_REV()
    {
        return (ID >> 0u) & 0b11111111u;
    }
};

static_assert(sizeof(usic) == usic::size);

static volatile usic *const USIC0 = reinterpret_cast<usic *>(0x40030008);

static volatile usic *const USIC1 = reinterpret_cast<usic *>(0x48020008);

static volatile usic *const USIC2 = reinterpret_cast<usic *>(0x48024008);

}; // namespace XMC4700