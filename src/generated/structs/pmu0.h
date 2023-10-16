/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Program Management Unit
 */
struct [[gnu::packed]] pmu0
{
    /* Constant attributes. */
    static constexpr std::size_t size = 4; /*!< pmu0's size in bytes. */

    /* Fields. */
    const uint32_t ID = {}; /*!< (read-only) PMU0 Identification Register */

    /* Methods. */

    /**
     * Get ID's MOD_NUMBER field.
     */
    inline uint16_t get_ID_MOD_NUMBER() volatile
    {
        return (ID >> 16u) & 0b1111111111111111u;
    }

    /**
     * Get ID's MOD_TYPE field.
     */
    inline uint8_t get_ID_MOD_TYPE() volatile
    {
        return (ID >> 8u) & 0b11111111u;
    }

    /**
     * Get ID's MOD_REV field.
     */
    inline uint8_t get_ID_MOD_REV() volatile
    {
        return (ID >> 0u) & 0b11111111u;
    }

    /**
     * Get all of ID's bit fields.
     */
    inline void get_ID(uint16_t &MOD_NUMBER, uint8_t &MOD_TYPE, uint8_t &MOD_REV) volatile
    {
        uint32_t curr = ID;

        MOD_NUMBER = (curr >> 16u) & 0b1111111111111111u;
        MOD_TYPE = (curr >> 8u) & 0b11111111u;
        MOD_REV = (curr >> 0u) & 0b11111111u;
    }
};

static_assert(sizeof(pmu0) == pmu0::size);

static volatile pmu0 *const PMU0 = reinterpret_cast<pmu0 *>(0x58000508);

}; // namespace XMC4700
