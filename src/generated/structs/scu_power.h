/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 */
#pragma once

#include "../enums/SCU_POWER_EVRSTAT_OV13.h"
#include "../enums/SCU_POWER_PWRCLR_HIB.h"
#include "../enums/SCU_POWER_PWRCLR_USBOTGEN.h"
#include "../enums/SCU_POWER_PWRCLR_USBPHYPDQ.h"
#include "../enums/SCU_POWER_PWRCLR_USBPUWQ.h"
#include "../enums/SCU_POWER_PWRSET_HIB.h"
#include "../enums/SCU_POWER_PWRSET_USBOTGEN.h"
#include "../enums/SCU_POWER_PWRSET_USBPHYPDQ.h"
#include "../enums/SCU_POWER_PWRSET_USBPUWQ.h"
#include "../enums/SCU_POWER_PWRSTAT_HIBEN.h"
#include "../enums/SCU_POWER_PWRSTAT_USBOTGEN.h"
#include "../enums/SCU_POWER_PWRSTAT_USBPHYPDQ.h"
#include "../enums/SCU_POWER_PWRSTAT_USBPUWQ.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * System Control Unit
 */
struct [[gnu::packed]] scu_power
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< scu_power's identifier. */
    static constexpr std::size_t size = 48; /*!< scu_power's size in bytes. */

    /* Fields. */
    const uint32_t PWRSTAT = {};                                     /*!< (read-only) PCU Status Register */
    uint32_t PWRSET;                                                 /*!< (write-only) PCU Set Control Register */
    uint32_t PWRCLR;                                                 /*!< (write-only) PCU Clear Control Register */
    const uint32_t reserved_padding0 = {};
    const uint32_t EVRSTAT = {};                                     /*!< (read-only) EVR Status Register */
    const uint32_t EVRVADCSTAT = {};                                 /*!< (read-only) EVR VADC Status Register */
    static constexpr std::size_t reserved_padding1_length = 5;
    const uint32_t reserved_padding1[reserved_padding1_length] = {};
    uint32_t PWRMON;                                                 /*!< (read-write) Power Monitor Control */

    /* Methods. */

    /**
     * Get PWRSTAT's USBPUWQ bit.
     */
    SCU_POWER_PWRSTAT_USBPUWQ get_PWRSTAT_USBPUWQ()
    {
        return SCU_POWER_PWRSTAT_USBPUWQ(PWRSTAT & (1u << 18u));
    }

    /**
     * Get PWRSTAT's USBOTGEN bit.
     */
    SCU_POWER_PWRSTAT_USBOTGEN get_PWRSTAT_USBOTGEN()
    {
        return SCU_POWER_PWRSTAT_USBOTGEN(PWRSTAT & (1u << 17u));
    }

    /**
     * Get PWRSTAT's USBPHYPDQ bit.
     */
    SCU_POWER_PWRSTAT_USBPHYPDQ get_PWRSTAT_USBPHYPDQ()
    {
        return SCU_POWER_PWRSTAT_USBPHYPDQ(PWRSTAT & (1u << 16u));
    }

    /**
     * Get PWRSTAT's HIBEN bit.
     */
    SCU_POWER_PWRSTAT_HIBEN get_PWRSTAT_HIBEN()
    {
        return SCU_POWER_PWRSTAT_HIBEN(PWRSTAT & (1u << 0u));
    }

    /**
     * Set PWRSET's USBPUWQ bit.
     */
    inline void set_PWRSET_USBPUWQ()
    {
        PWRSET |= 1u << 18u;
    }

    /**
     * Clear PWRSET's USBPUWQ bit.
     */
    inline void clear_PWRSET_USBPUWQ()
    {
        PWRSET &= ~(1u << 18u);
    }

    /**
     * Toggle PWRSET's USBPUWQ bit.
     */
    inline void toggle_PWRSET_USBPUWQ()
    {
        PWRSET ^= 1u << 18u;
    }

    /**
     * Set PWRSET's USBOTGEN bit.
     */
    inline void set_PWRSET_USBOTGEN()
    {
        PWRSET |= 1u << 17u;
    }

    /**
     * Clear PWRSET's USBOTGEN bit.
     */
    inline void clear_PWRSET_USBOTGEN()
    {
        PWRSET &= ~(1u << 17u);
    }

    /**
     * Toggle PWRSET's USBOTGEN bit.
     */
    inline void toggle_PWRSET_USBOTGEN()
    {
        PWRSET ^= 1u << 17u;
    }

    /**
     * Set PWRSET's USBPHYPDQ bit.
     */
    inline void set_PWRSET_USBPHYPDQ()
    {
        PWRSET |= 1u << 16u;
    }

    /**
     * Clear PWRSET's USBPHYPDQ bit.
     */
    inline void clear_PWRSET_USBPHYPDQ()
    {
        PWRSET &= ~(1u << 16u);
    }

    /**
     * Toggle PWRSET's USBPHYPDQ bit.
     */
    inline void toggle_PWRSET_USBPHYPDQ()
    {
        PWRSET ^= 1u << 16u;
    }

    /**
     * Set PWRSET's HIB bit.
     */
    inline void set_PWRSET_HIB()
    {
        PWRSET |= 1u << 0u;
    }

    /**
     * Clear PWRSET's HIB bit.
     */
    inline void clear_PWRSET_HIB()
    {
        PWRSET &= ~(1u << 0u);
    }

    /**
     * Toggle PWRSET's HIB bit.
     */
    inline void toggle_PWRSET_HIB()
    {
        PWRSET ^= 1u << 0u;
    }

    /**
     * Set PWRCLR's USBPUWQ bit.
     */
    inline void set_PWRCLR_USBPUWQ()
    {
        PWRCLR |= 1u << 18u;
    }

    /**
     * Clear PWRCLR's USBPUWQ bit.
     */
    inline void clear_PWRCLR_USBPUWQ()
    {
        PWRCLR &= ~(1u << 18u);
    }

    /**
     * Toggle PWRCLR's USBPUWQ bit.
     */
    inline void toggle_PWRCLR_USBPUWQ()
    {
        PWRCLR ^= 1u << 18u;
    }

    /**
     * Set PWRCLR's USBOTGEN bit.
     */
    inline void set_PWRCLR_USBOTGEN()
    {
        PWRCLR |= 1u << 17u;
    }

    /**
     * Clear PWRCLR's USBOTGEN bit.
     */
    inline void clear_PWRCLR_USBOTGEN()
    {
        PWRCLR &= ~(1u << 17u);
    }

    /**
     * Toggle PWRCLR's USBOTGEN bit.
     */
    inline void toggle_PWRCLR_USBOTGEN()
    {
        PWRCLR ^= 1u << 17u;
    }

    /**
     * Set PWRCLR's USBPHYPDQ bit.
     */
    inline void set_PWRCLR_USBPHYPDQ()
    {
        PWRCLR |= 1u << 16u;
    }

    /**
     * Clear PWRCLR's USBPHYPDQ bit.
     */
    inline void clear_PWRCLR_USBPHYPDQ()
    {
        PWRCLR &= ~(1u << 16u);
    }

    /**
     * Toggle PWRCLR's USBPHYPDQ bit.
     */
    inline void toggle_PWRCLR_USBPHYPDQ()
    {
        PWRCLR ^= 1u << 16u;
    }

    /**
     * Set PWRCLR's HIB bit.
     */
    inline void set_PWRCLR_HIB()
    {
        PWRCLR |= 1u << 0u;
    }

    /**
     * Clear PWRCLR's HIB bit.
     */
    inline void clear_PWRCLR_HIB()
    {
        PWRCLR &= ~(1u << 0u);
    }

    /**
     * Toggle PWRCLR's HIB bit.
     */
    inline void toggle_PWRCLR_HIB()
    {
        PWRCLR ^= 1u << 0u;
    }

    /**
     * Get EVRSTAT's OV13 bit.
     */
    SCU_POWER_EVRSTAT_OV13 get_EVRSTAT_OV13()
    {
        return SCU_POWER_EVRSTAT_OV13(EVRSTAT & (1u << 1u));
    }

    /**
     * Get EVRVADCSTAT's VADC33V field.
     */
    uint8_t get_EVRVADCSTAT_VADC33V()
    {
        return (EVRVADCSTAT >> 8u) & 0b11111111u;
    }

    /**
     * Get EVRVADCSTAT's VADC13V field.
     */
    uint8_t get_EVRVADCSTAT_VADC13V()
    {
        return (EVRVADCSTAT >> 0u) & 0b11111111u;
    }

    /**
     * Get PWRMON's ENB bit.
     */
    bool get_PWRMON_ENB()
    {
        return PWRMON & (1u << 16u);
    }

    /**
     * Set PWRMON's ENB bit.
     */
    inline void set_PWRMON_ENB()
    {
        PWRMON |= 1u << 16u;
    }

    /**
     * Clear PWRMON's ENB bit.
     */
    inline void clear_PWRMON_ENB()
    {
        PWRMON &= ~(1u << 16u);
    }

    /**
     * Toggle PWRMON's ENB bit.
     */
    inline void toggle_PWRMON_ENB()
    {
        PWRMON ^= 1u << 16u;
    }

    /**
     * Get PWRMON's INTV field.
     */
    uint8_t get_PWRMON_INTV()
    {
        return (PWRMON >> 8u) & 0b11111111u;
    }

    /**
     * Set PWRMON's INTV field.
     */
    inline void set_PWRMON_INTV(uint8_t value)
    {
        uint32_t curr = PWRMON;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        PWRMON = curr;
    }

    /**
     * Get PWRMON's THRS field.
     */
    uint8_t get_PWRMON_THRS()
    {
        return (PWRMON >> 0u) & 0b11111111u;
    }

    /**
     * Set PWRMON's THRS field.
     */
    inline void set_PWRMON_THRS(uint8_t value)
    {
        uint32_t curr = PWRMON;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        PWRMON = curr;
    }
};

static_assert(sizeof(scu_power) == scu_power::size);

static volatile scu_power *const SCU_POWER = reinterpret_cast<scu_power *>(0x50004200);

}; // namespace XMC4700