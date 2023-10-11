/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include "../enums/CCU40_GCST_S0DSS.h"
#include "../enums/CCU40_GCST_S0PSS.h"
#include "../enums/CCU40_GCST_S0SS.h"
#include "../enums/CCU40_GCST_S1DSS.h"
#include "../enums/CCU40_GCST_S1PSS.h"
#include "../enums/CCU40_GCST_S1SS.h"
#include "../enums/CCU40_GCST_S2DSS.h"
#include "../enums/CCU40_GCST_S2PSS.h"
#include "../enums/CCU40_GCST_S2SS.h"
#include "../enums/CCU40_GCST_S3DSS.h"
#include "../enums/CCU40_GCST_S3PSS.h"
#include "../enums/CCU40_GCST_S3SS.h"
#include "../enums/CCU40_GCTRL_MSDE.h"
#include "../enums/CCU40_GCTRL_MSE0.h"
#include "../enums/CCU40_GCTRL_MSE1.h"
#include "../enums/CCU40_GCTRL_MSE2.h"
#include "../enums/CCU40_GCTRL_MSE3.h"
#include "../enums/CCU40_GCTRL_PCIS.h"
#include "../enums/CCU40_GCTRL_PRBC.h"
#include "../enums/CCU40_GCTRL_SUSCFG.h"
#include "../enums/CCU40_GSTAT_PRB.h"
#include "../enums/CCU40_GSTAT_S0I.h"
#include "../enums/CCU40_GSTAT_S1I.h"
#include "../enums/CCU40_GSTAT_S2I.h"
#include "../enums/CCU40_GSTAT_S3I.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Capture Compare Unit 4 - Unit 0
 */
struct [[gnu::packed]] ccu40
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;        /*!< ccu40's identifier. */
    static constexpr std::size_t size = 132; /*!< ccu40's size in bytes. */

    /* Fields. */
    uint32_t GCTRL;                                                  /*!< (read-write) Global Control Register */
    const uint32_t GSTAT = {};                                       /*!< (read-only) Global Status Register */
    uint32_t GIDLS;                                                  /*!< (write-only) Global Idle Set */
    uint32_t GIDLC;                                                  /*!< (write-only) Global Idle Clear */
    uint32_t GCSS;                                                   /*!< (write-only) Global Channel Set */
    uint32_t GCSC;                                                   /*!< (write-only) Global Channel Clear */
    const uint32_t GCST = {};                                        /*!< (read-only) Global Channel Status */
    static constexpr std::size_t reserved_padding0_length = 25;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    const uint32_t MIDR = {};                                        /*!< (read-only) Module Identification */

    /* Methods. */

    /**
     * Get GCTRL's MSDE field.
     */
    CCU40_GCTRL_MSDE get_GCTRL_MSDE()
    {
        return CCU40_GCTRL_MSDE((GCTRL >> 14u) & 0b11u);
    }

    /**
     * Set GCTRL's MSDE field.
     */
    inline void set_GCTRL_MSDE(CCU40_GCTRL_MSDE value)
    {
        uint32_t curr = GCTRL;

        curr &= ~(0b11u << 14u);
        curr |= (std::to_underlying(value) & 0b11u) << 14u;

        GCTRL = curr;
    }

    /**
     * Get GCTRL's MSE3 bit.
     */
    CCU40_GCTRL_MSE3 get_GCTRL_MSE3()
    {
        return CCU40_GCTRL_MSE3(GCTRL & (1u << 13u));
    }

    /**
     * Set GCTRL's MSE3 bit.
     */
    inline void set_GCTRL_MSE3()
    {
        GCTRL |= 1u << 13u;
    }

    /**
     * Clear GCTRL's MSE3 bit.
     */
    inline void clear_GCTRL_MSE3()
    {
        GCTRL &= ~(1u << 13u);
    }

    /**
     * Toggle GCTRL's MSE3 bit.
     */
    inline void toggle_GCTRL_MSE3()
    {
        GCTRL ^= 1u << 13u;
    }

    /**
     * Get GCTRL's MSE2 bit.
     */
    CCU40_GCTRL_MSE2 get_GCTRL_MSE2()
    {
        return CCU40_GCTRL_MSE2(GCTRL & (1u << 12u));
    }

    /**
     * Set GCTRL's MSE2 bit.
     */
    inline void set_GCTRL_MSE2()
    {
        GCTRL |= 1u << 12u;
    }

    /**
     * Clear GCTRL's MSE2 bit.
     */
    inline void clear_GCTRL_MSE2()
    {
        GCTRL &= ~(1u << 12u);
    }

    /**
     * Toggle GCTRL's MSE2 bit.
     */
    inline void toggle_GCTRL_MSE2()
    {
        GCTRL ^= 1u << 12u;
    }

    /**
     * Get GCTRL's MSE1 bit.
     */
    CCU40_GCTRL_MSE1 get_GCTRL_MSE1()
    {
        return CCU40_GCTRL_MSE1(GCTRL & (1u << 11u));
    }

    /**
     * Set GCTRL's MSE1 bit.
     */
    inline void set_GCTRL_MSE1()
    {
        GCTRL |= 1u << 11u;
    }

    /**
     * Clear GCTRL's MSE1 bit.
     */
    inline void clear_GCTRL_MSE1()
    {
        GCTRL &= ~(1u << 11u);
    }

    /**
     * Toggle GCTRL's MSE1 bit.
     */
    inline void toggle_GCTRL_MSE1()
    {
        GCTRL ^= 1u << 11u;
    }

    /**
     * Get GCTRL's MSE0 bit.
     */
    CCU40_GCTRL_MSE0 get_GCTRL_MSE0()
    {
        return CCU40_GCTRL_MSE0(GCTRL & (1u << 10u));
    }

    /**
     * Set GCTRL's MSE0 bit.
     */
    inline void set_GCTRL_MSE0()
    {
        GCTRL |= 1u << 10u;
    }

    /**
     * Clear GCTRL's MSE0 bit.
     */
    inline void clear_GCTRL_MSE0()
    {
        GCTRL &= ~(1u << 10u);
    }

    /**
     * Toggle GCTRL's MSE0 bit.
     */
    inline void toggle_GCTRL_MSE0()
    {
        GCTRL ^= 1u << 10u;
    }

    /**
     * Get GCTRL's SUSCFG field.
     */
    CCU40_GCTRL_SUSCFG get_GCTRL_SUSCFG()
    {
        return CCU40_GCTRL_SUSCFG((GCTRL >> 8u) & 0b11u);
    }

    /**
     * Set GCTRL's SUSCFG field.
     */
    inline void set_GCTRL_SUSCFG(CCU40_GCTRL_SUSCFG value)
    {
        uint32_t curr = GCTRL;

        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(value) & 0b11u) << 8u;

        GCTRL = curr;
    }

    /**
     * Get GCTRL's PCIS field.
     */
    CCU40_GCTRL_PCIS get_GCTRL_PCIS()
    {
        return CCU40_GCTRL_PCIS((GCTRL >> 4u) & 0b11u);
    }

    /**
     * Set GCTRL's PCIS field.
     */
    inline void set_GCTRL_PCIS(CCU40_GCTRL_PCIS value)
    {
        uint32_t curr = GCTRL;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        GCTRL = curr;
    }

    /**
     * Get GCTRL's PRBC field.
     */
    CCU40_GCTRL_PRBC get_GCTRL_PRBC()
    {
        return CCU40_GCTRL_PRBC((GCTRL >> 0u) & 0b111u);
    }

    /**
     * Set GCTRL's PRBC field.
     */
    inline void set_GCTRL_PRBC(CCU40_GCTRL_PRBC value)
    {
        uint32_t curr = GCTRL;

        curr &= ~(0b111u << 0u);
        curr |= (std::to_underlying(value) & 0b111u) << 0u;

        GCTRL = curr;
    }

    /**
     * Get GSTAT's PRB bit.
     */
    CCU40_GSTAT_PRB get_GSTAT_PRB()
    {
        return CCU40_GSTAT_PRB(GSTAT & (1u << 8u));
    }

    /**
     * Get GSTAT's S3I bit.
     */
    CCU40_GSTAT_S3I get_GSTAT_S3I()
    {
        return CCU40_GSTAT_S3I(GSTAT & (1u << 3u));
    }

    /**
     * Get GSTAT's S2I bit.
     */
    CCU40_GSTAT_S2I get_GSTAT_S2I()
    {
        return CCU40_GSTAT_S2I(GSTAT & (1u << 2u));
    }

    /**
     * Get GSTAT's S1I bit.
     */
    CCU40_GSTAT_S1I get_GSTAT_S1I()
    {
        return CCU40_GSTAT_S1I(GSTAT & (1u << 1u));
    }

    /**
     * Get GSTAT's S0I bit.
     */
    CCU40_GSTAT_S0I get_GSTAT_S0I()
    {
        return CCU40_GSTAT_S0I(GSTAT & (1u << 0u));
    }

    /**
     * Set GIDLS's PSIC bit.
     */
    inline void set_GIDLS_PSIC()
    {
        GIDLS |= 1u << 9u;
    }

    /**
     * Clear GIDLS's PSIC bit.
     */
    inline void clear_GIDLS_PSIC()
    {
        GIDLS &= ~(1u << 9u);
    }

    /**
     * Toggle GIDLS's PSIC bit.
     */
    inline void toggle_GIDLS_PSIC()
    {
        GIDLS ^= 1u << 9u;
    }

    /**
     * Set GIDLS's CPRB bit.
     */
    inline void set_GIDLS_CPRB()
    {
        GIDLS |= 1u << 8u;
    }

    /**
     * Clear GIDLS's CPRB bit.
     */
    inline void clear_GIDLS_CPRB()
    {
        GIDLS &= ~(1u << 8u);
    }

    /**
     * Toggle GIDLS's CPRB bit.
     */
    inline void toggle_GIDLS_CPRB()
    {
        GIDLS ^= 1u << 8u;
    }

    /**
     * Set GIDLS's SS3I bit.
     */
    inline void set_GIDLS_SS3I()
    {
        GIDLS |= 1u << 3u;
    }

    /**
     * Clear GIDLS's SS3I bit.
     */
    inline void clear_GIDLS_SS3I()
    {
        GIDLS &= ~(1u << 3u);
    }

    /**
     * Toggle GIDLS's SS3I bit.
     */
    inline void toggle_GIDLS_SS3I()
    {
        GIDLS ^= 1u << 3u;
    }

    /**
     * Set GIDLS's SS2I bit.
     */
    inline void set_GIDLS_SS2I()
    {
        GIDLS |= 1u << 2u;
    }

    /**
     * Clear GIDLS's SS2I bit.
     */
    inline void clear_GIDLS_SS2I()
    {
        GIDLS &= ~(1u << 2u);
    }

    /**
     * Toggle GIDLS's SS2I bit.
     */
    inline void toggle_GIDLS_SS2I()
    {
        GIDLS ^= 1u << 2u;
    }

    /**
     * Set GIDLS's SS1I bit.
     */
    inline void set_GIDLS_SS1I()
    {
        GIDLS |= 1u << 1u;
    }

    /**
     * Clear GIDLS's SS1I bit.
     */
    inline void clear_GIDLS_SS1I()
    {
        GIDLS &= ~(1u << 1u);
    }

    /**
     * Toggle GIDLS's SS1I bit.
     */
    inline void toggle_GIDLS_SS1I()
    {
        GIDLS ^= 1u << 1u;
    }

    /**
     * Set GIDLS's SS0I bit.
     */
    inline void set_GIDLS_SS0I()
    {
        GIDLS |= 1u << 0u;
    }

    /**
     * Clear GIDLS's SS0I bit.
     */
    inline void clear_GIDLS_SS0I()
    {
        GIDLS &= ~(1u << 0u);
    }

    /**
     * Toggle GIDLS's SS0I bit.
     */
    inline void toggle_GIDLS_SS0I()
    {
        GIDLS ^= 1u << 0u;
    }

    /**
     * Set GIDLC's SPRB bit.
     */
    inline void set_GIDLC_SPRB()
    {
        GIDLC |= 1u << 8u;
    }

    /**
     * Clear GIDLC's SPRB bit.
     */
    inline void clear_GIDLC_SPRB()
    {
        GIDLC &= ~(1u << 8u);
    }

    /**
     * Toggle GIDLC's SPRB bit.
     */
    inline void toggle_GIDLC_SPRB()
    {
        GIDLC ^= 1u << 8u;
    }

    /**
     * Set GIDLC's CS3I bit.
     */
    inline void set_GIDLC_CS3I()
    {
        GIDLC |= 1u << 3u;
    }

    /**
     * Clear GIDLC's CS3I bit.
     */
    inline void clear_GIDLC_CS3I()
    {
        GIDLC &= ~(1u << 3u);
    }

    /**
     * Toggle GIDLC's CS3I bit.
     */
    inline void toggle_GIDLC_CS3I()
    {
        GIDLC ^= 1u << 3u;
    }

    /**
     * Set GIDLC's CS2I bit.
     */
    inline void set_GIDLC_CS2I()
    {
        GIDLC |= 1u << 2u;
    }

    /**
     * Clear GIDLC's CS2I bit.
     */
    inline void clear_GIDLC_CS2I()
    {
        GIDLC &= ~(1u << 2u);
    }

    /**
     * Toggle GIDLC's CS2I bit.
     */
    inline void toggle_GIDLC_CS2I()
    {
        GIDLC ^= 1u << 2u;
    }

    /**
     * Set GIDLC's CS1I bit.
     */
    inline void set_GIDLC_CS1I()
    {
        GIDLC |= 1u << 1u;
    }

    /**
     * Clear GIDLC's CS1I bit.
     */
    inline void clear_GIDLC_CS1I()
    {
        GIDLC &= ~(1u << 1u);
    }

    /**
     * Toggle GIDLC's CS1I bit.
     */
    inline void toggle_GIDLC_CS1I()
    {
        GIDLC ^= 1u << 1u;
    }

    /**
     * Set GIDLC's CS0I bit.
     */
    inline void set_GIDLC_CS0I()
    {
        GIDLC |= 1u << 0u;
    }

    /**
     * Clear GIDLC's CS0I bit.
     */
    inline void clear_GIDLC_CS0I()
    {
        GIDLC &= ~(1u << 0u);
    }

    /**
     * Toggle GIDLC's CS0I bit.
     */
    inline void toggle_GIDLC_CS0I()
    {
        GIDLC ^= 1u << 0u;
    }

    /**
     * Set GCSS's S3STS bit.
     */
    inline void set_GCSS_S3STS()
    {
        GCSS |= 1u << 19u;
    }

    /**
     * Clear GCSS's S3STS bit.
     */
    inline void clear_GCSS_S3STS()
    {
        GCSS &= ~(1u << 19u);
    }

    /**
     * Toggle GCSS's S3STS bit.
     */
    inline void toggle_GCSS_S3STS()
    {
        GCSS ^= 1u << 19u;
    }

    /**
     * Set GCSS's S2STS bit.
     */
    inline void set_GCSS_S2STS()
    {
        GCSS |= 1u << 18u;
    }

    /**
     * Clear GCSS's S2STS bit.
     */
    inline void clear_GCSS_S2STS()
    {
        GCSS &= ~(1u << 18u);
    }

    /**
     * Toggle GCSS's S2STS bit.
     */
    inline void toggle_GCSS_S2STS()
    {
        GCSS ^= 1u << 18u;
    }

    /**
     * Set GCSS's S1STS bit.
     */
    inline void set_GCSS_S1STS()
    {
        GCSS |= 1u << 17u;
    }

    /**
     * Clear GCSS's S1STS bit.
     */
    inline void clear_GCSS_S1STS()
    {
        GCSS &= ~(1u << 17u);
    }

    /**
     * Toggle GCSS's S1STS bit.
     */
    inline void toggle_GCSS_S1STS()
    {
        GCSS ^= 1u << 17u;
    }

    /**
     * Set GCSS's S0STS bit.
     */
    inline void set_GCSS_S0STS()
    {
        GCSS |= 1u << 16u;
    }

    /**
     * Clear GCSS's S0STS bit.
     */
    inline void clear_GCSS_S0STS()
    {
        GCSS &= ~(1u << 16u);
    }

    /**
     * Toggle GCSS's S0STS bit.
     */
    inline void toggle_GCSS_S0STS()
    {
        GCSS ^= 1u << 16u;
    }

    /**
     * Set GCSS's S3PSE bit.
     */
    inline void set_GCSS_S3PSE()
    {
        GCSS |= 1u << 14u;
    }

    /**
     * Clear GCSS's S3PSE bit.
     */
    inline void clear_GCSS_S3PSE()
    {
        GCSS &= ~(1u << 14u);
    }

    /**
     * Toggle GCSS's S3PSE bit.
     */
    inline void toggle_GCSS_S3PSE()
    {
        GCSS ^= 1u << 14u;
    }

    /**
     * Set GCSS's S3DSE bit.
     */
    inline void set_GCSS_S3DSE()
    {
        GCSS |= 1u << 13u;
    }

    /**
     * Clear GCSS's S3DSE bit.
     */
    inline void clear_GCSS_S3DSE()
    {
        GCSS &= ~(1u << 13u);
    }

    /**
     * Toggle GCSS's S3DSE bit.
     */
    inline void toggle_GCSS_S3DSE()
    {
        GCSS ^= 1u << 13u;
    }

    /**
     * Set GCSS's S3SE bit.
     */
    inline void set_GCSS_S3SE()
    {
        GCSS |= 1u << 12u;
    }

    /**
     * Clear GCSS's S3SE bit.
     */
    inline void clear_GCSS_S3SE()
    {
        GCSS &= ~(1u << 12u);
    }

    /**
     * Toggle GCSS's S3SE bit.
     */
    inline void toggle_GCSS_S3SE()
    {
        GCSS ^= 1u << 12u;
    }

    /**
     * Set GCSS's S2PSE bit.
     */
    inline void set_GCSS_S2PSE()
    {
        GCSS |= 1u << 10u;
    }

    /**
     * Clear GCSS's S2PSE bit.
     */
    inline void clear_GCSS_S2PSE()
    {
        GCSS &= ~(1u << 10u);
    }

    /**
     * Toggle GCSS's S2PSE bit.
     */
    inline void toggle_GCSS_S2PSE()
    {
        GCSS ^= 1u << 10u;
    }

    /**
     * Set GCSS's S2DSE bit.
     */
    inline void set_GCSS_S2DSE()
    {
        GCSS |= 1u << 9u;
    }

    /**
     * Clear GCSS's S2DSE bit.
     */
    inline void clear_GCSS_S2DSE()
    {
        GCSS &= ~(1u << 9u);
    }

    /**
     * Toggle GCSS's S2DSE bit.
     */
    inline void toggle_GCSS_S2DSE()
    {
        GCSS ^= 1u << 9u;
    }

    /**
     * Set GCSS's S2SE bit.
     */
    inline void set_GCSS_S2SE()
    {
        GCSS |= 1u << 8u;
    }

    /**
     * Clear GCSS's S2SE bit.
     */
    inline void clear_GCSS_S2SE()
    {
        GCSS &= ~(1u << 8u);
    }

    /**
     * Toggle GCSS's S2SE bit.
     */
    inline void toggle_GCSS_S2SE()
    {
        GCSS ^= 1u << 8u;
    }

    /**
     * Set GCSS's S1PSE bit.
     */
    inline void set_GCSS_S1PSE()
    {
        GCSS |= 1u << 6u;
    }

    /**
     * Clear GCSS's S1PSE bit.
     */
    inline void clear_GCSS_S1PSE()
    {
        GCSS &= ~(1u << 6u);
    }

    /**
     * Toggle GCSS's S1PSE bit.
     */
    inline void toggle_GCSS_S1PSE()
    {
        GCSS ^= 1u << 6u;
    }

    /**
     * Set GCSS's S1DSE bit.
     */
    inline void set_GCSS_S1DSE()
    {
        GCSS |= 1u << 5u;
    }

    /**
     * Clear GCSS's S1DSE bit.
     */
    inline void clear_GCSS_S1DSE()
    {
        GCSS &= ~(1u << 5u);
    }

    /**
     * Toggle GCSS's S1DSE bit.
     */
    inline void toggle_GCSS_S1DSE()
    {
        GCSS ^= 1u << 5u;
    }

    /**
     * Set GCSS's S1SE bit.
     */
    inline void set_GCSS_S1SE()
    {
        GCSS |= 1u << 4u;
    }

    /**
     * Clear GCSS's S1SE bit.
     */
    inline void clear_GCSS_S1SE()
    {
        GCSS &= ~(1u << 4u);
    }

    /**
     * Toggle GCSS's S1SE bit.
     */
    inline void toggle_GCSS_S1SE()
    {
        GCSS ^= 1u << 4u;
    }

    /**
     * Set GCSS's S0PSE bit.
     */
    inline void set_GCSS_S0PSE()
    {
        GCSS |= 1u << 2u;
    }

    /**
     * Clear GCSS's S0PSE bit.
     */
    inline void clear_GCSS_S0PSE()
    {
        GCSS &= ~(1u << 2u);
    }

    /**
     * Toggle GCSS's S0PSE bit.
     */
    inline void toggle_GCSS_S0PSE()
    {
        GCSS ^= 1u << 2u;
    }

    /**
     * Set GCSS's S0DSE bit.
     */
    inline void set_GCSS_S0DSE()
    {
        GCSS |= 1u << 1u;
    }

    /**
     * Clear GCSS's S0DSE bit.
     */
    inline void clear_GCSS_S0DSE()
    {
        GCSS &= ~(1u << 1u);
    }

    /**
     * Toggle GCSS's S0DSE bit.
     */
    inline void toggle_GCSS_S0DSE()
    {
        GCSS ^= 1u << 1u;
    }

    /**
     * Set GCSS's S0SE bit.
     */
    inline void set_GCSS_S0SE()
    {
        GCSS |= 1u << 0u;
    }

    /**
     * Clear GCSS's S0SE bit.
     */
    inline void clear_GCSS_S0SE()
    {
        GCSS &= ~(1u << 0u);
    }

    /**
     * Toggle GCSS's S0SE bit.
     */
    inline void toggle_GCSS_S0SE()
    {
        GCSS ^= 1u << 0u;
    }

    /**
     * Set GCSC's S3STC bit.
     */
    inline void set_GCSC_S3STC()
    {
        GCSC |= 1u << 19u;
    }

    /**
     * Clear GCSC's S3STC bit.
     */
    inline void clear_GCSC_S3STC()
    {
        GCSC &= ~(1u << 19u);
    }

    /**
     * Toggle GCSC's S3STC bit.
     */
    inline void toggle_GCSC_S3STC()
    {
        GCSC ^= 1u << 19u;
    }

    /**
     * Set GCSC's S2STC bit.
     */
    inline void set_GCSC_S2STC()
    {
        GCSC |= 1u << 18u;
    }

    /**
     * Clear GCSC's S2STC bit.
     */
    inline void clear_GCSC_S2STC()
    {
        GCSC &= ~(1u << 18u);
    }

    /**
     * Toggle GCSC's S2STC bit.
     */
    inline void toggle_GCSC_S2STC()
    {
        GCSC ^= 1u << 18u;
    }

    /**
     * Set GCSC's S1STC bit.
     */
    inline void set_GCSC_S1STC()
    {
        GCSC |= 1u << 17u;
    }

    /**
     * Clear GCSC's S1STC bit.
     */
    inline void clear_GCSC_S1STC()
    {
        GCSC &= ~(1u << 17u);
    }

    /**
     * Toggle GCSC's S1STC bit.
     */
    inline void toggle_GCSC_S1STC()
    {
        GCSC ^= 1u << 17u;
    }

    /**
     * Set GCSC's S0STC bit.
     */
    inline void set_GCSC_S0STC()
    {
        GCSC |= 1u << 16u;
    }

    /**
     * Clear GCSC's S0STC bit.
     */
    inline void clear_GCSC_S0STC()
    {
        GCSC &= ~(1u << 16u);
    }

    /**
     * Toggle GCSC's S0STC bit.
     */
    inline void toggle_GCSC_S0STC()
    {
        GCSC ^= 1u << 16u;
    }

    /**
     * Set GCSC's S3PSC bit.
     */
    inline void set_GCSC_S3PSC()
    {
        GCSC |= 1u << 14u;
    }

    /**
     * Clear GCSC's S3PSC bit.
     */
    inline void clear_GCSC_S3PSC()
    {
        GCSC &= ~(1u << 14u);
    }

    /**
     * Toggle GCSC's S3PSC bit.
     */
    inline void toggle_GCSC_S3PSC()
    {
        GCSC ^= 1u << 14u;
    }

    /**
     * Set GCSC's S3DSC bit.
     */
    inline void set_GCSC_S3DSC()
    {
        GCSC |= 1u << 13u;
    }

    /**
     * Clear GCSC's S3DSC bit.
     */
    inline void clear_GCSC_S3DSC()
    {
        GCSC &= ~(1u << 13u);
    }

    /**
     * Toggle GCSC's S3DSC bit.
     */
    inline void toggle_GCSC_S3DSC()
    {
        GCSC ^= 1u << 13u;
    }

    /**
     * Set GCSC's S3SC bit.
     */
    inline void set_GCSC_S3SC()
    {
        GCSC |= 1u << 12u;
    }

    /**
     * Clear GCSC's S3SC bit.
     */
    inline void clear_GCSC_S3SC()
    {
        GCSC &= ~(1u << 12u);
    }

    /**
     * Toggle GCSC's S3SC bit.
     */
    inline void toggle_GCSC_S3SC()
    {
        GCSC ^= 1u << 12u;
    }

    /**
     * Set GCSC's S2PSC bit.
     */
    inline void set_GCSC_S2PSC()
    {
        GCSC |= 1u << 10u;
    }

    /**
     * Clear GCSC's S2PSC bit.
     */
    inline void clear_GCSC_S2PSC()
    {
        GCSC &= ~(1u << 10u);
    }

    /**
     * Toggle GCSC's S2PSC bit.
     */
    inline void toggle_GCSC_S2PSC()
    {
        GCSC ^= 1u << 10u;
    }

    /**
     * Set GCSC's S2DSC bit.
     */
    inline void set_GCSC_S2DSC()
    {
        GCSC |= 1u << 9u;
    }

    /**
     * Clear GCSC's S2DSC bit.
     */
    inline void clear_GCSC_S2DSC()
    {
        GCSC &= ~(1u << 9u);
    }

    /**
     * Toggle GCSC's S2DSC bit.
     */
    inline void toggle_GCSC_S2DSC()
    {
        GCSC ^= 1u << 9u;
    }

    /**
     * Set GCSC's S2SC bit.
     */
    inline void set_GCSC_S2SC()
    {
        GCSC |= 1u << 8u;
    }

    /**
     * Clear GCSC's S2SC bit.
     */
    inline void clear_GCSC_S2SC()
    {
        GCSC &= ~(1u << 8u);
    }

    /**
     * Toggle GCSC's S2SC bit.
     */
    inline void toggle_GCSC_S2SC()
    {
        GCSC ^= 1u << 8u;
    }

    /**
     * Set GCSC's S1PSC bit.
     */
    inline void set_GCSC_S1PSC()
    {
        GCSC |= 1u << 6u;
    }

    /**
     * Clear GCSC's S1PSC bit.
     */
    inline void clear_GCSC_S1PSC()
    {
        GCSC &= ~(1u << 6u);
    }

    /**
     * Toggle GCSC's S1PSC bit.
     */
    inline void toggle_GCSC_S1PSC()
    {
        GCSC ^= 1u << 6u;
    }

    /**
     * Set GCSC's S1DSC bit.
     */
    inline void set_GCSC_S1DSC()
    {
        GCSC |= 1u << 5u;
    }

    /**
     * Clear GCSC's S1DSC bit.
     */
    inline void clear_GCSC_S1DSC()
    {
        GCSC &= ~(1u << 5u);
    }

    /**
     * Toggle GCSC's S1DSC bit.
     */
    inline void toggle_GCSC_S1DSC()
    {
        GCSC ^= 1u << 5u;
    }

    /**
     * Set GCSC's S1SC bit.
     */
    inline void set_GCSC_S1SC()
    {
        GCSC |= 1u << 4u;
    }

    /**
     * Clear GCSC's S1SC bit.
     */
    inline void clear_GCSC_S1SC()
    {
        GCSC &= ~(1u << 4u);
    }

    /**
     * Toggle GCSC's S1SC bit.
     */
    inline void toggle_GCSC_S1SC()
    {
        GCSC ^= 1u << 4u;
    }

    /**
     * Set GCSC's S0PSC bit.
     */
    inline void set_GCSC_S0PSC()
    {
        GCSC |= 1u << 2u;
    }

    /**
     * Clear GCSC's S0PSC bit.
     */
    inline void clear_GCSC_S0PSC()
    {
        GCSC &= ~(1u << 2u);
    }

    /**
     * Toggle GCSC's S0PSC bit.
     */
    inline void toggle_GCSC_S0PSC()
    {
        GCSC ^= 1u << 2u;
    }

    /**
     * Set GCSC's S0DSC bit.
     */
    inline void set_GCSC_S0DSC()
    {
        GCSC |= 1u << 1u;
    }

    /**
     * Clear GCSC's S0DSC bit.
     */
    inline void clear_GCSC_S0DSC()
    {
        GCSC &= ~(1u << 1u);
    }

    /**
     * Toggle GCSC's S0DSC bit.
     */
    inline void toggle_GCSC_S0DSC()
    {
        GCSC ^= 1u << 1u;
    }

    /**
     * Set GCSC's S0SC bit.
     */
    inline void set_GCSC_S0SC()
    {
        GCSC |= 1u << 0u;
    }

    /**
     * Clear GCSC's S0SC bit.
     */
    inline void clear_GCSC_S0SC()
    {
        GCSC &= ~(1u << 0u);
    }

    /**
     * Toggle GCSC's S0SC bit.
     */
    inline void toggle_GCSC_S0SC()
    {
        GCSC ^= 1u << 0u;
    }

    /**
     * Get GCST's CC43ST bit.
     */
    bool get_GCST_CC43ST()
    {
        return GCST & (1u << 19u);
    }

    /**
     * Get GCST's CC42ST bit.
     */
    bool get_GCST_CC42ST()
    {
        return GCST & (1u << 18u);
    }

    /**
     * Get GCST's CC41ST bit.
     */
    bool get_GCST_CC41ST()
    {
        return GCST & (1u << 17u);
    }

    /**
     * Get GCST's CC40ST bit.
     */
    bool get_GCST_CC40ST()
    {
        return GCST & (1u << 16u);
    }

    /**
     * Get GCST's S3PSS bit.
     */
    CCU40_GCST_S3PSS get_GCST_S3PSS()
    {
        return CCU40_GCST_S3PSS(GCST & (1u << 14u));
    }

    /**
     * Get GCST's S3DSS bit.
     */
    CCU40_GCST_S3DSS get_GCST_S3DSS()
    {
        return CCU40_GCST_S3DSS(GCST & (1u << 13u));
    }

    /**
     * Get GCST's S3SS bit.
     */
    CCU40_GCST_S3SS get_GCST_S3SS()
    {
        return CCU40_GCST_S3SS(GCST & (1u << 12u));
    }

    /**
     * Get GCST's S2PSS bit.
     */
    CCU40_GCST_S2PSS get_GCST_S2PSS()
    {
        return CCU40_GCST_S2PSS(GCST & (1u << 10u));
    }

    /**
     * Get GCST's S2DSS bit.
     */
    CCU40_GCST_S2DSS get_GCST_S2DSS()
    {
        return CCU40_GCST_S2DSS(GCST & (1u << 9u));
    }

    /**
     * Get GCST's S2SS bit.
     */
    CCU40_GCST_S2SS get_GCST_S2SS()
    {
        return CCU40_GCST_S2SS(GCST & (1u << 8u));
    }

    /**
     * Get GCST's S1PSS bit.
     */
    CCU40_GCST_S1PSS get_GCST_S1PSS()
    {
        return CCU40_GCST_S1PSS(GCST & (1u << 6u));
    }

    /**
     * Get GCST's S1DSS bit.
     */
    CCU40_GCST_S1DSS get_GCST_S1DSS()
    {
        return CCU40_GCST_S1DSS(GCST & (1u << 5u));
    }

    /**
     * Get GCST's S1SS bit.
     */
    CCU40_GCST_S1SS get_GCST_S1SS()
    {
        return CCU40_GCST_S1SS(GCST & (1u << 4u));
    }

    /**
     * Get GCST's S0PSS bit.
     */
    CCU40_GCST_S0PSS get_GCST_S0PSS()
    {
        return CCU40_GCST_S0PSS(GCST & (1u << 2u));
    }

    /**
     * Get GCST's S0DSS bit.
     */
    CCU40_GCST_S0DSS get_GCST_S0DSS()
    {
        return CCU40_GCST_S0DSS(GCST & (1u << 1u));
    }

    /**
     * Get GCST's S0SS bit.
     */
    CCU40_GCST_S0SS get_GCST_S0SS()
    {
        return CCU40_GCST_S0SS(GCST & (1u << 0u));
    }

    /**
     * Get MIDR's MODN field.
     */
    uint16_t get_MIDR_MODN()
    {
        return (MIDR >> 16u) & 0b1111111111111111u;
    }

    /**
     * Get MIDR's MODT field.
     */
    uint8_t get_MIDR_MODT()
    {
        return (MIDR >> 8u) & 0b11111111u;
    }

    /**
     * Get MIDR's MODR field.
     */
    uint8_t get_MIDR_MODR()
    {
        return (MIDR >> 0u) & 0b11111111u;
    }
};

static_assert(sizeof(ccu40) == ccu40::size);

static volatile ccu40 *const CCU40 = reinterpret_cast<ccu40 *>(0x4000C000);

static volatile ccu40 *const CCU41 = reinterpret_cast<ccu40 *>(0x40010000);

static volatile ccu40 *const CCU42 = reinterpret_cast<ccu40 *>(0x40014000);

static volatile ccu40 *const CCU43 = reinterpret_cast<ccu40 *>(0x48004000);

}; // namespace XMC4700
