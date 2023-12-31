/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Universal Serial Interface Controller 0
 */
struct [[gnu::packed]] usic0
{
    /* Constant attributes. */
    static constexpr std::size_t size = 4; /*!< usic0's size in bytes. */

    /* Fields. */
    const uint32_t ID = {}; /*!< (read-only) Module Identification Register */

    /* Methods. */

    /**
     * Get ID's MOD_NUMBER field.
     *
     * Module Number Value
     */
    inline uint16_t get_ID_MOD_NUMBER() volatile
    {
        return (ID >> 16u) & 0b1111111111111111u;
    }

    /**
     * Get ID's MOD_TYPE field.
     *
     * Module Type
     */
    inline uint8_t get_ID_MOD_TYPE() volatile
    {
        return (ID >> 8u) & 0b11111111u;
    }

    /**
     * Get ID's MOD_REV field.
     *
     * Module Revision Number
     */
    inline uint8_t get_ID_MOD_REV() volatile
    {
        return (ID >> 0u) & 0b11111111u;
    }

    /**
     * Get all of ID's bit fields.
     *
     * (read-only) Module Identification Register
     */
    inline void get_ID(uint16_t &MOD_NUMBER, uint8_t &MOD_TYPE,
                       uint8_t &MOD_REV) volatile
    {
        uint32_t curr = ID;

        MOD_NUMBER = (curr >> 16u) & 0b1111111111111111u;
        MOD_TYPE = (curr >> 8u) & 0b11111111u;
        MOD_REV = (curr >> 0u) & 0b11111111u;
    }
};

static_assert(sizeof(usic0) == usic0::size);

static volatile usic0 *const USIC0 = reinterpret_cast<usic0 *>(0x40030008);

static volatile usic0 *const USIC2 = reinterpret_cast<usic0 *>(0x48024008);

}; // namespace XMC4700
