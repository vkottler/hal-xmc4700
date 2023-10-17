/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Flexible CRC Engine
 */
struct [[gnu::packed]] fce
{
    /* Constant attributes. */
    static constexpr std::size_t size = 12; /*!< fce's size in bytes. */

    /* Fields. */
    uint32_t CLC; /*!< (read-write) Clock Control Register */
    const uint32_t reserved_padding0 = {};
    const uint32_t ID = {}; /*!< (read-only) Module Identification Register */

    /* Methods. */

    /**
     * Get CLC's DISS bit.
     */
    inline bool get_CLC_DISS() volatile
    {
        return CLC & (1u << 1u);
    }

    /**
     * Get CLC's DISR bit.
     */
    inline bool get_CLC_DISR() volatile
    {
        return CLC & (1u << 0u);
    }

    /**
     * Set CLC's DISR bit.
     */
    inline void set_CLC_DISR() volatile
    {
        CLC |= 1u << 0u;
    }

    /**
     * Clear CLC's DISR bit.
     */
    inline void clear_CLC_DISR() volatile
    {
        CLC &= ~(1u << 0u);
    }

    /**
     * Toggle CLC's DISR bit.
     */
    inline void toggle_CLC_DISR() volatile
    {
        CLC ^= 1u << 0u;
    }

    /**
     * Get all of CLC's bit fields.
     */
    inline void get_CLC(bool &DISS, bool &DISR) volatile
    {
        uint32_t curr = CLC;

        DISS = curr & (1u << 1u);
        DISR = curr & (1u << 0u);
    }

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
    inline void get_ID(uint16_t &MOD_NUMBER, uint8_t &MOD_TYPE,
                       uint8_t &MOD_REV) volatile
    {
        uint32_t curr = ID;

        MOD_NUMBER = (curr >> 16u) & 0b1111111111111111u;
        MOD_TYPE = (curr >> 8u) & 0b11111111u;
        MOD_REV = (curr >> 0u) & 0b11111111u;
    }
};

static_assert(sizeof(fce) == fce::size);

static volatile fce *const FCE = reinterpret_cast<fce *>(0x50020000);

}; // namespace XMC4700
