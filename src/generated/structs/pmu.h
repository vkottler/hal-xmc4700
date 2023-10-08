/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 */
#pragma once

#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Program Management Unit
 */
struct [[gnu::packed]] pmu
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;      /*!< pmu's identifier. */
    static constexpr std::size_t size = 4; /*!< pmu's size in bytes. */

    /* Fields. */
    const uint32_t ID = {}; /*!< (read-only) PMU0 Identification Register */

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

static_assert(sizeof(pmu) == pmu::size);

static volatile pmu *const PMU0 = reinterpret_cast<pmu *>(0x58000508);

}; // namespace XMC4700