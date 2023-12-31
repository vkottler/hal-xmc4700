/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * SD and Multimediacard Control Register
 */
struct [[gnu::packed]] sdmmc_con
{
    /* Constant attributes. */
    static constexpr std::size_t size = 4; /*!< sdmmc_con's size in bytes. */

    /* Fields. */
    uint32_t SDMMC_CON; /*!< (read-write) SDMMC Configuration */

    /* Methods. */

    /**
     * Get SDMMC_CON's CDSVAL bit.
     *
     * SDMMC Write Protect Software Control
     */
    inline bool get_SDMMC_CON_CDSVAL() volatile
    {
        return SDMMC_CON & (1u << 20u);
    }

    /**
     * Set SDMMC_CON's CDSVAL bit.
     *
     * SDMMC Write Protect Software Control
     */
    inline void set_SDMMC_CON_CDSVAL() volatile
    {
        SDMMC_CON |= 1u << 20u;
    }

    /**
     * Clear SDMMC_CON's CDSVAL bit.
     *
     * SDMMC Write Protect Software Control
     */
    inline void clear_SDMMC_CON_CDSVAL() volatile
    {
        SDMMC_CON &= ~(1u << 20u);
    }

    /**
     * Toggle SDMMC_CON's CDSVAL bit.
     *
     * SDMMC Write Protect Software Control
     */
    inline void toggle_SDMMC_CON_CDSVAL() volatile
    {
        SDMMC_CON ^= 1u << 20u;
    }

    /**
     * Get SDMMC_CON's CDSEL bit.
     *
     * SDMMC Card Detection Control
     */
    inline bool get_SDMMC_CON_CDSEL() volatile
    {
        return SDMMC_CON & (1u << 16u);
    }

    /**
     * Set SDMMC_CON's CDSEL bit.
     *
     * SDMMC Card Detection Control
     */
    inline void set_SDMMC_CON_CDSEL() volatile
    {
        SDMMC_CON |= 1u << 16u;
    }

    /**
     * Clear SDMMC_CON's CDSEL bit.
     *
     * SDMMC Card Detection Control
     */
    inline void clear_SDMMC_CON_CDSEL() volatile
    {
        SDMMC_CON &= ~(1u << 16u);
    }

    /**
     * Toggle SDMMC_CON's CDSEL bit.
     *
     * SDMMC Card Detection Control
     */
    inline void toggle_SDMMC_CON_CDSEL() volatile
    {
        SDMMC_CON ^= 1u << 16u;
    }

    /**
     * Get SDMMC_CON's WPSVAL bit.
     *
     * SDMMC Write Protect Software Control
     */
    inline bool get_SDMMC_CON_WPSVAL() volatile
    {
        return SDMMC_CON & (1u << 4u);
    }

    /**
     * Set SDMMC_CON's WPSVAL bit.
     *
     * SDMMC Write Protect Software Control
     */
    inline void set_SDMMC_CON_WPSVAL() volatile
    {
        SDMMC_CON |= 1u << 4u;
    }

    /**
     * Clear SDMMC_CON's WPSVAL bit.
     *
     * SDMMC Write Protect Software Control
     */
    inline void clear_SDMMC_CON_WPSVAL() volatile
    {
        SDMMC_CON &= ~(1u << 4u);
    }

    /**
     * Toggle SDMMC_CON's WPSVAL bit.
     *
     * SDMMC Write Protect Software Control
     */
    inline void toggle_SDMMC_CON_WPSVAL() volatile
    {
        SDMMC_CON ^= 1u << 4u;
    }

    /**
     * Get SDMMC_CON's WPSEL bit.
     *
     * SDMMC Write Protection Input Multiplexer Control
     */
    inline bool get_SDMMC_CON_WPSEL() volatile
    {
        return SDMMC_CON & (1u << 0u);
    }

    /**
     * Set SDMMC_CON's WPSEL bit.
     *
     * SDMMC Write Protection Input Multiplexer Control
     */
    inline void set_SDMMC_CON_WPSEL() volatile
    {
        SDMMC_CON |= 1u << 0u;
    }

    /**
     * Clear SDMMC_CON's WPSEL bit.
     *
     * SDMMC Write Protection Input Multiplexer Control
     */
    inline void clear_SDMMC_CON_WPSEL() volatile
    {
        SDMMC_CON &= ~(1u << 0u);
    }

    /**
     * Toggle SDMMC_CON's WPSEL bit.
     *
     * SDMMC Write Protection Input Multiplexer Control
     */
    inline void toggle_SDMMC_CON_WPSEL() volatile
    {
        SDMMC_CON ^= 1u << 0u;
    }

    /**
     * Get all of SDMMC_CON's bit fields.
     *
     * (read-write) SDMMC Configuration
     */
    inline void get_SDMMC_CON(bool &CDSVAL, bool &CDSEL, bool &WPSVAL,
                              bool &WPSEL) volatile
    {
        uint32_t curr = SDMMC_CON;

        CDSVAL = curr & (1u << 20u);
        CDSEL = curr & (1u << 16u);
        WPSVAL = curr & (1u << 4u);
        WPSEL = curr & (1u << 0u);
    }

    /**
     * Set all of SDMMC_CON's bit fields.
     *
     * (read-write) SDMMC Configuration
     */
    inline void set_SDMMC_CON(bool CDSVAL, bool CDSEL, bool WPSVAL,
                              bool WPSEL) volatile
    {
        uint32_t curr = SDMMC_CON;

        curr &= ~(0b1u << 20u);
        curr |= (CDSVAL & 0b1u) << 20u;
        curr &= ~(0b1u << 16u);
        curr |= (CDSEL & 0b1u) << 16u;
        curr &= ~(0b1u << 4u);
        curr |= (WPSVAL & 0b1u) << 4u;
        curr &= ~(0b1u << 0u);
        curr |= (WPSEL & 0b1u) << 0u;

        SDMMC_CON = curr;
    }
};

static_assert(sizeof(sdmmc_con) == sdmmc_con::size);

static volatile sdmmc_con *const SDMMC_CON =
    reinterpret_cast<sdmmc_con *>(0x500040B4);

}; // namespace XMC4700
