/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include "../enums/PREF_PCON_DBYP.h"
#include "../enums/PREF_PCON_IINV.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Prefetch Unit
 */
struct [[gnu::packed]] pref
{
    /* Constant attributes. */
    static constexpr std::size_t size = 4; /*!< pref's size in bytes. */

    /* Fields. */
    uint32_t PCON; /*!< (read-write) Prefetch Configuration Register */

    /* Methods. */

    /**
     * Get PCON's DBYP bit.
     */
    inline PREF_PCON_DBYP get_PCON_DBYP() volatile
    {
        return PREF_PCON_DBYP(PCON & (1u << 4u));
    }

    /**
     * Set PCON's DBYP bit.
     */
    inline void set_PCON_DBYP() volatile
    {
        PCON |= 1u << 4u;
    }

    /**
     * Clear PCON's DBYP bit.
     */
    inline void clear_PCON_DBYP() volatile
    {
        PCON &= ~(1u << 4u);
    }

    /**
     * Toggle PCON's DBYP bit.
     */
    inline void toggle_PCON_DBYP() volatile
    {
        PCON ^= 1u << 4u;
    }

    /**
     * Set PCON's IINV bit.
     */
    inline void set_PCON_IINV() volatile
    {
        PCON |= 1u << 1u;
    }

    /**
     * Clear PCON's IINV bit.
     */
    inline void clear_PCON_IINV() volatile
    {
        PCON &= ~(1u << 1u);
    }

    /**
     * Toggle PCON's IINV bit.
     */
    inline void toggle_PCON_IINV() volatile
    {
        PCON ^= 1u << 1u;
    }

    /**
     * Get PCON's IBYP bit.
     */
    inline PREF_PCON_DBYP get_PCON_IBYP() volatile
    {
        return PREF_PCON_DBYP(PCON & (1u << 0u));
    }

    /**
     * Set PCON's IBYP bit.
     */
    inline void set_PCON_IBYP() volatile
    {
        PCON |= 1u << 0u;
    }

    /**
     * Clear PCON's IBYP bit.
     */
    inline void clear_PCON_IBYP() volatile
    {
        PCON &= ~(1u << 0u);
    }

    /**
     * Toggle PCON's IBYP bit.
     */
    inline void toggle_PCON_IBYP() volatile
    {
        PCON ^= 1u << 0u;
    }

    /**
     * Get all of PCON's bit fields.
     */
    inline void get_PCON(PREF_PCON_DBYP &DBYP, PREF_PCON_DBYP &IBYP) volatile
    {
        uint32_t curr = PCON;

        DBYP = PREF_PCON_DBYP(curr & (1u << 4u));
        IBYP = PREF_PCON_DBYP(curr & (1u << 0u));
    }

    /**
     * Set all of PCON's bit fields.
     */
    inline void set_PCON(PREF_PCON_DBYP DBYP, PREF_PCON_IINV IINV,
                         PREF_PCON_DBYP IBYP) volatile
    {
        uint32_t curr = PCON;

        curr &= ~(0b1u << 4u);
        curr |= (std::to_underlying(DBYP) & 0b1u) << 4u;
        curr &= ~(0b1u << 1u);
        curr |= (std::to_underlying(IINV) & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (std::to_underlying(IBYP) & 0b1u) << 0u;

        PCON = curr;
    }
};

static_assert(sizeof(pref) == pref::size);

static volatile pref *const PREF = reinterpret_cast<pref *>(0x58004000);

}; // namespace XMC4700
