/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include "../enums/SCU_HIBERNATE_HDCLR_ENEV.h"
#include "../enums/SCU_HIBERNATE_HDCLR_EPEV.h"
#include "../enums/SCU_HIBERNATE_HDCLR_RTCEV.h"
#include "../enums/SCU_HIBERNATE_HDCLR_ULPWDG.h"
#include "../enums/SCU_HIBERNATE_HDCR_GPI0SEL.h"
#include "../enums/SCU_HIBERNATE_HDCR_HIB.h"
#include "../enums/SCU_HIBERNATE_HDCR_HIBIO0POL.h"
#include "../enums/SCU_HIBERNATE_HDCR_HIBIO0SEL.h"
#include "../enums/SCU_HIBERNATE_HDCR_HIBIO1POL.h"
#include "../enums/SCU_HIBERNATE_HDCR_HIBIO1SEL.h"
#include "../enums/SCU_HIBERNATE_HDCR_RCS.h"
#include "../enums/SCU_HIBERNATE_HDCR_RTCE.h"
#include "../enums/SCU_HIBERNATE_HDCR_STDBYSEL.h"
#include "../enums/SCU_HIBERNATE_HDCR_ULPWDGEN.h"
#include "../enums/SCU_HIBERNATE_HDCR_WKPEN.h"
#include "../enums/SCU_HIBERNATE_HDCR_WKPEP.h"
#include "../enums/SCU_HIBERNATE_HDCR_WKUPSEL.h"
#include "../enums/SCU_HIBERNATE_HDSET_ENEV.h"
#include "../enums/SCU_HIBERNATE_HDSET_EPEV.h"
#include "../enums/SCU_HIBERNATE_HDSET_RTCEV.h"
#include "../enums/SCU_HIBERNATE_HDSET_ULPWDG.h"
#include "../enums/SCU_HIBERNATE_HDSTAT_ENEV.h"
#include "../enums/SCU_HIBERNATE_HDSTAT_EPEV.h"
#include "../enums/SCU_HIBERNATE_HDSTAT_HIBNOUT.h"
#include "../enums/SCU_HIBERNATE_HDSTAT_RTCEV.h"
#include "../enums/SCU_HIBERNATE_HDSTAT_ULPWDG.h"
#include "../enums/SCU_HIBERNATE_OSCSICTRL_PWD.h"
#include "../enums/SCU_HIBERNATE_OSCULCTRL_MODE.h"
#include "../enums/SCU_HIBERNATE_OSCULCTRL_X1DEN.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * System Control Unit
 */
struct [[gnu::packed]] scu_hibernate
{
    /* Constant attributes. */
    static constexpr std::size_t size = 32; /*!< scu_hibernate's size in bytes. */

    /* Fields. */
    const uint32_t HDSTAT = {};            /*!< (read-only) Hibernate Domain Status Register */
    uint32_t HDCLR;                        /*!< (write-only) Hibernate Domain Status Clear Register */
    uint32_t HDSET;                        /*!< (write-only) Hibernate Domain Status Set Register */
    uint32_t HDCR;                         /*!< (read-write) Hibernate Domain Control Register */
    const uint32_t reserved_padding0 = {};
    uint32_t OSCSICTRL;                    /*!< (read-write) fOSI Control Register */
    const uint32_t OSCULSTAT = {};         /*!< (read-only) OSC_ULP Status Register */
    uint32_t OSCULCTRL;                    /*!< (read-write) OSC_ULP Control Register */

    /* Methods. */

    /**
     * Get HDSTAT's HIBNOUT bit.
     */
    inline SCU_HIBERNATE_HDSTAT_HIBNOUT get_HDSTAT_HIBNOUT()
    {
        return SCU_HIBERNATE_HDSTAT_HIBNOUT(HDSTAT & (1u << 4u));
    }

    /**
     * Get HDSTAT's ULPWDG bit.
     */
    inline SCU_HIBERNATE_HDSTAT_ULPWDG get_HDSTAT_ULPWDG()
    {
        return SCU_HIBERNATE_HDSTAT_ULPWDG(HDSTAT & (1u << 3u));
    }

    /**
     * Get HDSTAT's RTCEV bit.
     */
    inline SCU_HIBERNATE_HDSTAT_RTCEV get_HDSTAT_RTCEV()
    {
        return SCU_HIBERNATE_HDSTAT_RTCEV(HDSTAT & (1u << 2u));
    }

    /**
     * Get HDSTAT's ENEV bit.
     */
    inline SCU_HIBERNATE_HDSTAT_ENEV get_HDSTAT_ENEV()
    {
        return SCU_HIBERNATE_HDSTAT_ENEV(HDSTAT & (1u << 1u));
    }

    /**
     * Get HDSTAT's EPEV bit.
     */
    inline SCU_HIBERNATE_HDSTAT_EPEV get_HDSTAT_EPEV()
    {
        return SCU_HIBERNATE_HDSTAT_EPEV(HDSTAT & (1u << 0u));
    }

    /**
     * Get all of HDSTAT's bit fields.
     */
    inline void get_HDSTAT(SCU_HIBERNATE_HDSTAT_HIBNOUT &HIBNOUT, SCU_HIBERNATE_HDSTAT_ULPWDG &ULPWDG, SCU_HIBERNATE_HDSTAT_RTCEV &RTCEV, SCU_HIBERNATE_HDSTAT_ENEV &ENEV, SCU_HIBERNATE_HDSTAT_EPEV &EPEV)
    {
        uint32_t curr = HDSTAT;

        HIBNOUT = SCU_HIBERNATE_HDSTAT_HIBNOUT(curr & (1u << 4u));
        ULPWDG = SCU_HIBERNATE_HDSTAT_ULPWDG(curr & (1u << 3u));
        RTCEV = SCU_HIBERNATE_HDSTAT_RTCEV(curr & (1u << 2u));
        ENEV = SCU_HIBERNATE_HDSTAT_ENEV(curr & (1u << 1u));
        EPEV = SCU_HIBERNATE_HDSTAT_EPEV(curr & (1u << 0u));
    }

    /**
     * Set HDCLR's ULPWDG bit.
     */
    inline void set_HDCLR_ULPWDG()
    {
        HDCLR |= 1u << 3u;
    }

    /**
     * Clear HDCLR's ULPWDG bit.
     */
    inline void clear_HDCLR_ULPWDG()
    {
        HDCLR &= ~(1u << 3u);
    }

    /**
     * Toggle HDCLR's ULPWDG bit.
     */
    inline void toggle_HDCLR_ULPWDG()
    {
        HDCLR ^= 1u << 3u;
    }

    /**
     * Set HDCLR's RTCEV bit.
     */
    inline void set_HDCLR_RTCEV()
    {
        HDCLR |= 1u << 2u;
    }

    /**
     * Clear HDCLR's RTCEV bit.
     */
    inline void clear_HDCLR_RTCEV()
    {
        HDCLR &= ~(1u << 2u);
    }

    /**
     * Toggle HDCLR's RTCEV bit.
     */
    inline void toggle_HDCLR_RTCEV()
    {
        HDCLR ^= 1u << 2u;
    }

    /**
     * Set HDCLR's ENEV bit.
     */
    inline void set_HDCLR_ENEV()
    {
        HDCLR |= 1u << 1u;
    }

    /**
     * Clear HDCLR's ENEV bit.
     */
    inline void clear_HDCLR_ENEV()
    {
        HDCLR &= ~(1u << 1u);
    }

    /**
     * Toggle HDCLR's ENEV bit.
     */
    inline void toggle_HDCLR_ENEV()
    {
        HDCLR ^= 1u << 1u;
    }

    /**
     * Set HDCLR's EPEV bit.
     */
    inline void set_HDCLR_EPEV()
    {
        HDCLR |= 1u << 0u;
    }

    /**
     * Clear HDCLR's EPEV bit.
     */
    inline void clear_HDCLR_EPEV()
    {
        HDCLR &= ~(1u << 0u);
    }

    /**
     * Toggle HDCLR's EPEV bit.
     */
    inline void toggle_HDCLR_EPEV()
    {
        HDCLR ^= 1u << 0u;
    }

    /**
     * Set all of HDCLR's bit fields.
     */
    inline void set_HDCLR(SCU_HIBERNATE_HDCLR_ULPWDG ULPWDG, SCU_HIBERNATE_HDCLR_RTCEV RTCEV, SCU_HIBERNATE_HDCLR_ENEV ENEV, SCU_HIBERNATE_HDCLR_EPEV EPEV)
    {
        uint32_t curr = HDCLR;

        curr &= ~(0b1u << 3u);
        curr |= (std::to_underlying(ULPWDG) & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (std::to_underlying(RTCEV) & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (std::to_underlying(ENEV) & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (std::to_underlying(EPEV) & 0b1u) << 0u;

        HDCLR = curr;
    }

    /**
     * Set HDSET's ULPWDG bit.
     */
    inline void set_HDSET_ULPWDG()
    {
        HDSET |= 1u << 3u;
    }

    /**
     * Clear HDSET's ULPWDG bit.
     */
    inline void clear_HDSET_ULPWDG()
    {
        HDSET &= ~(1u << 3u);
    }

    /**
     * Toggle HDSET's ULPWDG bit.
     */
    inline void toggle_HDSET_ULPWDG()
    {
        HDSET ^= 1u << 3u;
    }

    /**
     * Set HDSET's RTCEV bit.
     */
    inline void set_HDSET_RTCEV()
    {
        HDSET |= 1u << 2u;
    }

    /**
     * Clear HDSET's RTCEV bit.
     */
    inline void clear_HDSET_RTCEV()
    {
        HDSET &= ~(1u << 2u);
    }

    /**
     * Toggle HDSET's RTCEV bit.
     */
    inline void toggle_HDSET_RTCEV()
    {
        HDSET ^= 1u << 2u;
    }

    /**
     * Set HDSET's ENEV bit.
     */
    inline void set_HDSET_ENEV()
    {
        HDSET |= 1u << 1u;
    }

    /**
     * Clear HDSET's ENEV bit.
     */
    inline void clear_HDSET_ENEV()
    {
        HDSET &= ~(1u << 1u);
    }

    /**
     * Toggle HDSET's ENEV bit.
     */
    inline void toggle_HDSET_ENEV()
    {
        HDSET ^= 1u << 1u;
    }

    /**
     * Set HDSET's EPEV bit.
     */
    inline void set_HDSET_EPEV()
    {
        HDSET |= 1u << 0u;
    }

    /**
     * Clear HDSET's EPEV bit.
     */
    inline void clear_HDSET_EPEV()
    {
        HDSET &= ~(1u << 0u);
    }

    /**
     * Toggle HDSET's EPEV bit.
     */
    inline void toggle_HDSET_EPEV()
    {
        HDSET ^= 1u << 0u;
    }

    /**
     * Set all of HDSET's bit fields.
     */
    inline void set_HDSET(SCU_HIBERNATE_HDSET_ULPWDG ULPWDG, SCU_HIBERNATE_HDSET_RTCEV RTCEV, SCU_HIBERNATE_HDSET_ENEV ENEV, SCU_HIBERNATE_HDSET_EPEV EPEV)
    {
        uint32_t curr = HDSET;

        curr &= ~(0b1u << 3u);
        curr |= (std::to_underlying(ULPWDG) & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (std::to_underlying(RTCEV) & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (std::to_underlying(ENEV) & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (std::to_underlying(EPEV) & 0b1u) << 0u;

        HDSET = curr;
    }

    /**
     * Get HDCR's HIBIO1SEL field.
     */
    inline SCU_HIBERNATE_HDCR_HIBIO1SEL get_HDCR_HIBIO1SEL()
    {
        return SCU_HIBERNATE_HDCR_HIBIO1SEL((HDCR >> 20u) & 0b1111u);
    }

    /**
     * Set HDCR's HIBIO1SEL field.
     */
    inline void set_HDCR_HIBIO1SEL(SCU_HIBERNATE_HDCR_HIBIO1SEL value)
    {
        uint32_t curr = HDCR;

        curr &= ~(0b1111u << 20u);
        curr |= (std::to_underlying(value) & 0b1111u) << 20u;

        HDCR = curr;
    }

    /**
     * Get HDCR's HIBIO0SEL field.
     */
    inline SCU_HIBERNATE_HDCR_HIBIO0SEL get_HDCR_HIBIO0SEL()
    {
        return SCU_HIBERNATE_HDCR_HIBIO0SEL((HDCR >> 16u) & 0b1111u);
    }

    /**
     * Set HDCR's HIBIO0SEL field.
     */
    inline void set_HDCR_HIBIO0SEL(SCU_HIBERNATE_HDCR_HIBIO0SEL value)
    {
        uint32_t curr = HDCR;

        curr &= ~(0b1111u << 16u);
        curr |= (std::to_underlying(value) & 0b1111u) << 16u;

        HDCR = curr;
    }

    /**
     * Get HDCR's HIBIO1POL bit.
     */
    inline SCU_HIBERNATE_HDCR_HIBIO1POL get_HDCR_HIBIO1POL()
    {
        return SCU_HIBERNATE_HDCR_HIBIO1POL(HDCR & (1u << 13u));
    }

    /**
     * Set HDCR's HIBIO1POL bit.
     */
    inline void set_HDCR_HIBIO1POL()
    {
        HDCR |= 1u << 13u;
    }

    /**
     * Clear HDCR's HIBIO1POL bit.
     */
    inline void clear_HDCR_HIBIO1POL()
    {
        HDCR &= ~(1u << 13u);
    }

    /**
     * Toggle HDCR's HIBIO1POL bit.
     */
    inline void toggle_HDCR_HIBIO1POL()
    {
        HDCR ^= 1u << 13u;
    }

    /**
     * Get HDCR's HIBIO0POL bit.
     */
    inline SCU_HIBERNATE_HDCR_HIBIO0POL get_HDCR_HIBIO0POL()
    {
        return SCU_HIBERNATE_HDCR_HIBIO0POL(HDCR & (1u << 12u));
    }

    /**
     * Set HDCR's HIBIO0POL bit.
     */
    inline void set_HDCR_HIBIO0POL()
    {
        HDCR |= 1u << 12u;
    }

    /**
     * Clear HDCR's HIBIO0POL bit.
     */
    inline void clear_HDCR_HIBIO0POL()
    {
        HDCR &= ~(1u << 12u);
    }

    /**
     * Toggle HDCR's HIBIO0POL bit.
     */
    inline void toggle_HDCR_HIBIO0POL()
    {
        HDCR ^= 1u << 12u;
    }

    /**
     * Get HDCR's GPI0SEL bit.
     */
    inline SCU_HIBERNATE_HDCR_GPI0SEL get_HDCR_GPI0SEL()
    {
        return SCU_HIBERNATE_HDCR_GPI0SEL(HDCR & (1u << 10u));
    }

    /**
     * Set HDCR's GPI0SEL bit.
     */
    inline void set_HDCR_GPI0SEL()
    {
        HDCR |= 1u << 10u;
    }

    /**
     * Clear HDCR's GPI0SEL bit.
     */
    inline void clear_HDCR_GPI0SEL()
    {
        HDCR &= ~(1u << 10u);
    }

    /**
     * Toggle HDCR's GPI0SEL bit.
     */
    inline void toggle_HDCR_GPI0SEL()
    {
        HDCR ^= 1u << 10u;
    }

    /**
     * Get HDCR's WKUPSEL bit.
     */
    inline SCU_HIBERNATE_HDCR_WKUPSEL get_HDCR_WKUPSEL()
    {
        return SCU_HIBERNATE_HDCR_WKUPSEL(HDCR & (1u << 8u));
    }

    /**
     * Set HDCR's WKUPSEL bit.
     */
    inline void set_HDCR_WKUPSEL()
    {
        HDCR |= 1u << 8u;
    }

    /**
     * Clear HDCR's WKUPSEL bit.
     */
    inline void clear_HDCR_WKUPSEL()
    {
        HDCR &= ~(1u << 8u);
    }

    /**
     * Toggle HDCR's WKUPSEL bit.
     */
    inline void toggle_HDCR_WKUPSEL()
    {
        HDCR ^= 1u << 8u;
    }

    /**
     * Get HDCR's STDBYSEL bit.
     */
    inline SCU_HIBERNATE_HDCR_STDBYSEL get_HDCR_STDBYSEL()
    {
        return SCU_HIBERNATE_HDCR_STDBYSEL(HDCR & (1u << 7u));
    }

    /**
     * Set HDCR's STDBYSEL bit.
     */
    inline void set_HDCR_STDBYSEL()
    {
        HDCR |= 1u << 7u;
    }

    /**
     * Clear HDCR's STDBYSEL bit.
     */
    inline void clear_HDCR_STDBYSEL()
    {
        HDCR &= ~(1u << 7u);
    }

    /**
     * Toggle HDCR's STDBYSEL bit.
     */
    inline void toggle_HDCR_STDBYSEL()
    {
        HDCR ^= 1u << 7u;
    }

    /**
     * Get HDCR's RCS bit.
     */
    inline SCU_HIBERNATE_HDCR_RCS get_HDCR_RCS()
    {
        return SCU_HIBERNATE_HDCR_RCS(HDCR & (1u << 6u));
    }

    /**
     * Set HDCR's RCS bit.
     */
    inline void set_HDCR_RCS()
    {
        HDCR |= 1u << 6u;
    }

    /**
     * Clear HDCR's RCS bit.
     */
    inline void clear_HDCR_RCS()
    {
        HDCR &= ~(1u << 6u);
    }

    /**
     * Toggle HDCR's RCS bit.
     */
    inline void toggle_HDCR_RCS()
    {
        HDCR ^= 1u << 6u;
    }

    /**
     * Get HDCR's HIB bit.
     */
    inline SCU_HIBERNATE_HDCR_HIB get_HDCR_HIB()
    {
        return SCU_HIBERNATE_HDCR_HIB(HDCR & (1u << 4u));
    }

    /**
     * Set HDCR's HIB bit.
     */
    inline void set_HDCR_HIB()
    {
        HDCR |= 1u << 4u;
    }

    /**
     * Clear HDCR's HIB bit.
     */
    inline void clear_HDCR_HIB()
    {
        HDCR &= ~(1u << 4u);
    }

    /**
     * Toggle HDCR's HIB bit.
     */
    inline void toggle_HDCR_HIB()
    {
        HDCR ^= 1u << 4u;
    }

    /**
     * Get HDCR's ULPWDGEN bit.
     */
    inline SCU_HIBERNATE_HDCR_ULPWDGEN get_HDCR_ULPWDGEN()
    {
        return SCU_HIBERNATE_HDCR_ULPWDGEN(HDCR & (1u << 3u));
    }

    /**
     * Set HDCR's ULPWDGEN bit.
     */
    inline void set_HDCR_ULPWDGEN()
    {
        HDCR |= 1u << 3u;
    }

    /**
     * Clear HDCR's ULPWDGEN bit.
     */
    inline void clear_HDCR_ULPWDGEN()
    {
        HDCR &= ~(1u << 3u);
    }

    /**
     * Toggle HDCR's ULPWDGEN bit.
     */
    inline void toggle_HDCR_ULPWDGEN()
    {
        HDCR ^= 1u << 3u;
    }

    /**
     * Get HDCR's RTCE bit.
     */
    inline SCU_HIBERNATE_HDCR_RTCE get_HDCR_RTCE()
    {
        return SCU_HIBERNATE_HDCR_RTCE(HDCR & (1u << 2u));
    }

    /**
     * Set HDCR's RTCE bit.
     */
    inline void set_HDCR_RTCE()
    {
        HDCR |= 1u << 2u;
    }

    /**
     * Clear HDCR's RTCE bit.
     */
    inline void clear_HDCR_RTCE()
    {
        HDCR &= ~(1u << 2u);
    }

    /**
     * Toggle HDCR's RTCE bit.
     */
    inline void toggle_HDCR_RTCE()
    {
        HDCR ^= 1u << 2u;
    }

    /**
     * Get HDCR's WKPEN bit.
     */
    inline SCU_HIBERNATE_HDCR_WKPEN get_HDCR_WKPEN()
    {
        return SCU_HIBERNATE_HDCR_WKPEN(HDCR & (1u << 1u));
    }

    /**
     * Set HDCR's WKPEN bit.
     */
    inline void set_HDCR_WKPEN()
    {
        HDCR |= 1u << 1u;
    }

    /**
     * Clear HDCR's WKPEN bit.
     */
    inline void clear_HDCR_WKPEN()
    {
        HDCR &= ~(1u << 1u);
    }

    /**
     * Toggle HDCR's WKPEN bit.
     */
    inline void toggle_HDCR_WKPEN()
    {
        HDCR ^= 1u << 1u;
    }

    /**
     * Get HDCR's WKPEP bit.
     */
    inline SCU_HIBERNATE_HDCR_WKPEP get_HDCR_WKPEP()
    {
        return SCU_HIBERNATE_HDCR_WKPEP(HDCR & (1u << 0u));
    }

    /**
     * Set HDCR's WKPEP bit.
     */
    inline void set_HDCR_WKPEP()
    {
        HDCR |= 1u << 0u;
    }

    /**
     * Clear HDCR's WKPEP bit.
     */
    inline void clear_HDCR_WKPEP()
    {
        HDCR &= ~(1u << 0u);
    }

    /**
     * Toggle HDCR's WKPEP bit.
     */
    inline void toggle_HDCR_WKPEP()
    {
        HDCR ^= 1u << 0u;
    }

    /**
     * Get all of HDCR's bit fields.
     */
    inline void get_HDCR(SCU_HIBERNATE_HDCR_HIBIO1SEL &HIBIO1SEL, SCU_HIBERNATE_HDCR_HIBIO0SEL &HIBIO0SEL, SCU_HIBERNATE_HDCR_HIBIO1POL &HIBIO1POL, SCU_HIBERNATE_HDCR_HIBIO0POL &HIBIO0POL, SCU_HIBERNATE_HDCR_GPI0SEL &GPI0SEL, SCU_HIBERNATE_HDCR_WKUPSEL &WKUPSEL, SCU_HIBERNATE_HDCR_STDBYSEL &STDBYSEL, SCU_HIBERNATE_HDCR_RCS &RCS, SCU_HIBERNATE_HDCR_HIB &HIB, SCU_HIBERNATE_HDCR_ULPWDGEN &ULPWDGEN, SCU_HIBERNATE_HDCR_RTCE &RTCE, SCU_HIBERNATE_HDCR_WKPEN &WKPEN, SCU_HIBERNATE_HDCR_WKPEP &WKPEP)
    {
        uint32_t curr = HDCR;

        HIBIO1SEL = SCU_HIBERNATE_HDCR_HIBIO1SEL((curr >> 20u) & 0b1111u);
        HIBIO0SEL = SCU_HIBERNATE_HDCR_HIBIO0SEL((curr >> 16u) & 0b1111u);
        HIBIO1POL = SCU_HIBERNATE_HDCR_HIBIO1POL(curr & (1u << 13u));
        HIBIO0POL = SCU_HIBERNATE_HDCR_HIBIO0POL(curr & (1u << 12u));
        GPI0SEL = SCU_HIBERNATE_HDCR_GPI0SEL(curr & (1u << 10u));
        WKUPSEL = SCU_HIBERNATE_HDCR_WKUPSEL(curr & (1u << 8u));
        STDBYSEL = SCU_HIBERNATE_HDCR_STDBYSEL(curr & (1u << 7u));
        RCS = SCU_HIBERNATE_HDCR_RCS(curr & (1u << 6u));
        HIB = SCU_HIBERNATE_HDCR_HIB(curr & (1u << 4u));
        ULPWDGEN = SCU_HIBERNATE_HDCR_ULPWDGEN(curr & (1u << 3u));
        RTCE = SCU_HIBERNATE_HDCR_RTCE(curr & (1u << 2u));
        WKPEN = SCU_HIBERNATE_HDCR_WKPEN(curr & (1u << 1u));
        WKPEP = SCU_HIBERNATE_HDCR_WKPEP(curr & (1u << 0u));
    }

    /**
     * Set all of HDCR's bit fields.
     */
    inline void set_HDCR(SCU_HIBERNATE_HDCR_HIBIO1SEL HIBIO1SEL, SCU_HIBERNATE_HDCR_HIBIO0SEL HIBIO0SEL, SCU_HIBERNATE_HDCR_HIBIO1POL HIBIO1POL, SCU_HIBERNATE_HDCR_HIBIO0POL HIBIO0POL, SCU_HIBERNATE_HDCR_GPI0SEL GPI0SEL, SCU_HIBERNATE_HDCR_WKUPSEL WKUPSEL, SCU_HIBERNATE_HDCR_STDBYSEL STDBYSEL, SCU_HIBERNATE_HDCR_RCS RCS, SCU_HIBERNATE_HDCR_HIB HIB, SCU_HIBERNATE_HDCR_ULPWDGEN ULPWDGEN, SCU_HIBERNATE_HDCR_RTCE RTCE, SCU_HIBERNATE_HDCR_WKPEN WKPEN, SCU_HIBERNATE_HDCR_WKPEP WKPEP)
    {
        uint32_t curr = HDCR;

        curr &= ~(0b1111u << 20u);
        curr |= (std::to_underlying(HIBIO1SEL) & 0b1111u) << 20u;
        curr &= ~(0b1111u << 16u);
        curr |= (std::to_underlying(HIBIO0SEL) & 0b1111u) << 16u;
        curr &= ~(0b1u << 13u);
        curr |= (std::to_underlying(HIBIO1POL) & 0b1u) << 13u;
        curr &= ~(0b1u << 12u);
        curr |= (std::to_underlying(HIBIO0POL) & 0b1u) << 12u;
        curr &= ~(0b1u << 10u);
        curr |= (std::to_underlying(GPI0SEL) & 0b1u) << 10u;
        curr &= ~(0b1u << 8u);
        curr |= (std::to_underlying(WKUPSEL) & 0b1u) << 8u;
        curr &= ~(0b1u << 7u);
        curr |= (std::to_underlying(STDBYSEL) & 0b1u) << 7u;
        curr &= ~(0b1u << 6u);
        curr |= (std::to_underlying(RCS) & 0b1u) << 6u;
        curr &= ~(0b1u << 4u);
        curr |= (std::to_underlying(HIB) & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (std::to_underlying(ULPWDGEN) & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (std::to_underlying(RTCE) & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (std::to_underlying(WKPEN) & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (std::to_underlying(WKPEP) & 0b1u) << 0u;

        HDCR = curr;
    }

    /**
     * Get OSCSICTRL's PWD bit.
     */
    inline SCU_HIBERNATE_OSCSICTRL_PWD get_OSCSICTRL_PWD()
    {
        return SCU_HIBERNATE_OSCSICTRL_PWD(OSCSICTRL & (1u << 0u));
    }

    /**
     * Set OSCSICTRL's PWD bit.
     */
    inline void set_OSCSICTRL_PWD()
    {
        OSCSICTRL |= 1u << 0u;
    }

    /**
     * Clear OSCSICTRL's PWD bit.
     */
    inline void clear_OSCSICTRL_PWD()
    {
        OSCSICTRL &= ~(1u << 0u);
    }

    /**
     * Toggle OSCSICTRL's PWD bit.
     */
    inline void toggle_OSCSICTRL_PWD()
    {
        OSCSICTRL ^= 1u << 0u;
    }

    /**
     * Get OSCULSTAT's X1D bit.
     */
    inline bool get_OSCULSTAT_X1D()
    {
        return OSCULSTAT & (1u << 0u);
    }

    /**
     * Get OSCULCTRL's MODE field.
     */
    inline SCU_HIBERNATE_OSCULCTRL_MODE get_OSCULCTRL_MODE()
    {
        return SCU_HIBERNATE_OSCULCTRL_MODE((OSCULCTRL >> 4u) & 0b11u);
    }

    /**
     * Set OSCULCTRL's MODE field.
     */
    inline void set_OSCULCTRL_MODE(SCU_HIBERNATE_OSCULCTRL_MODE value)
    {
        uint32_t curr = OSCULCTRL;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        OSCULCTRL = curr;
    }

    /**
     * Get OSCULCTRL's X1DEN bit.
     */
    inline SCU_HIBERNATE_OSCULCTRL_X1DEN get_OSCULCTRL_X1DEN()
    {
        return SCU_HIBERNATE_OSCULCTRL_X1DEN(OSCULCTRL & (1u << 0u));
    }

    /**
     * Set OSCULCTRL's X1DEN bit.
     */
    inline void set_OSCULCTRL_X1DEN()
    {
        OSCULCTRL |= 1u << 0u;
    }

    /**
     * Clear OSCULCTRL's X1DEN bit.
     */
    inline void clear_OSCULCTRL_X1DEN()
    {
        OSCULCTRL &= ~(1u << 0u);
    }

    /**
     * Toggle OSCULCTRL's X1DEN bit.
     */
    inline void toggle_OSCULCTRL_X1DEN()
    {
        OSCULCTRL ^= 1u << 0u;
    }

    /**
     * Get all of OSCULCTRL's bit fields.
     */
    inline void get_OSCULCTRL(SCU_HIBERNATE_OSCULCTRL_MODE &MODE, SCU_HIBERNATE_OSCULCTRL_X1DEN &X1DEN)
    {
        uint32_t curr = OSCULCTRL;

        MODE = SCU_HIBERNATE_OSCULCTRL_MODE((curr >> 4u) & 0b11u);
        X1DEN = SCU_HIBERNATE_OSCULCTRL_X1DEN(curr & (1u << 0u));
    }

    /**
     * Set all of OSCULCTRL's bit fields.
     */
    inline void set_OSCULCTRL(SCU_HIBERNATE_OSCULCTRL_MODE MODE, SCU_HIBERNATE_OSCULCTRL_X1DEN X1DEN)
    {
        uint32_t curr = OSCULCTRL;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(MODE) & 0b11u) << 4u;
        curr &= ~(0b1u << 0u);
        curr |= (std::to_underlying(X1DEN) & 0b1u) << 0u;

        OSCULCTRL = curr;
    }
};

static_assert(sizeof(scu_hibernate) == scu_hibernate::size);

static volatile scu_hibernate *const SCU_HIBERNATE = reinterpret_cast<scu_hibernate *>(0x50004300);

}; // namespace XMC4700
