/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../enums/SCU_INTERRUPT_NMIREQEN_AI.h"
#include "../enums/SCU_INTERRUPT_NMIREQEN_ERU00.h"
#include "../enums/SCU_INTERRUPT_NMIREQEN_ERU01.h"
#include "../enums/SCU_INTERRUPT_NMIREQEN_ERU02.h"
#include "../enums/SCU_INTERRUPT_NMIREQEN_ERU03.h"
#include "../enums/SCU_INTERRUPT_NMIREQEN_PI.h"
#include "../enums/SCU_INTERRUPT_NMIREQEN_PRWARN.h"
#include "../enums/SCU_INTERRUPT_SRCLR_AI.h"
#include "../enums/SCU_INTERRUPT_SRCLR_DLROVR.h"
#include "../enums/SCU_INTERRUPT_SRCLR_HDCLR.h"
#include "../enums/SCU_INTERRUPT_SRCLR_HDCR.h"
#include "../enums/SCU_INTERRUPT_SRCLR_HDSET.h"
#include "../enums/SCU_INTERRUPT_SRCLR_OSCSICTRL.h"
#include "../enums/SCU_INTERRUPT_SRCLR_OSCULCTRL.h"
#include "../enums/SCU_INTERRUPT_SRCLR_PI.h"
#include "../enums/SCU_INTERRUPT_SRCLR_PRWARN.h"
#include "../enums/SCU_INTERRUPT_SRCLR_RMX.h"
#include "../enums/SCU_INTERRUPT_SRCLR_RTC_ATIM0.h"
#include "../enums/SCU_INTERRUPT_SRCLR_RTC_ATIM1.h"
#include "../enums/SCU_INTERRUPT_SRCLR_RTC_CTR.h"
#include "../enums/SCU_INTERRUPT_SRCLR_RTC_TIM0.h"
#include "../enums/SCU_INTERRUPT_SRCLR_RTC_TIM1.h"
#include "../enums/SCU_INTERRUPT_SRMSK_AI.h"
#include "../enums/SCU_INTERRUPT_SRMSK_DLROVR.h"
#include "../enums/SCU_INTERRUPT_SRMSK_HDCLR.h"
#include "../enums/SCU_INTERRUPT_SRMSK_HDCR.h"
#include "../enums/SCU_INTERRUPT_SRMSK_HDSET.h"
#include "../enums/SCU_INTERRUPT_SRMSK_OSCSICTRL.h"
#include "../enums/SCU_INTERRUPT_SRMSK_OSCULCTRL.h"
#include "../enums/SCU_INTERRUPT_SRMSK_PI.h"
#include "../enums/SCU_INTERRUPT_SRMSK_PRWARN.h"
#include "../enums/SCU_INTERRUPT_SRMSK_RMX.h"
#include "../enums/SCU_INTERRUPT_SRMSK_RTC_ATIM0.h"
#include "../enums/SCU_INTERRUPT_SRMSK_RTC_ATIM1.h"
#include "../enums/SCU_INTERRUPT_SRMSK_RTC_CTR.h"
#include "../enums/SCU_INTERRUPT_SRMSK_RTC_TIM0.h"
#include "../enums/SCU_INTERRUPT_SRMSK_RTC_TIM1.h"
#include "../enums/SCU_INTERRUPT_SRRAW_HDCLR.h"
#include "../enums/SCU_INTERRUPT_SRRAW_HDCR.h"
#include "../enums/SCU_INTERRUPT_SRRAW_HDSET.h"
#include "../enums/SCU_INTERRUPT_SRRAW_OSCSICTRL.h"
#include "../enums/SCU_INTERRUPT_SRRAW_OSCULCTRL.h"
#include "../enums/SCU_INTERRUPT_SRRAW_PRWARN.h"
#include "../enums/SCU_INTERRUPT_SRRAW_RMX.h"
#include "../enums/SCU_INTERRUPT_SRRAW_RTC_ATIM0.h"
#include "../enums/SCU_INTERRUPT_SRRAW_RTC_ATIM1.h"
#include "../enums/SCU_INTERRUPT_SRRAW_RTC_CTR.h"
#include "../enums/SCU_INTERRUPT_SRRAW_RTC_TIM0.h"
#include "../enums/SCU_INTERRUPT_SRRAW_RTC_TIM1.h"
#include "../enums/SCU_INTERRUPT_SRSET_AI.h"
#include "../enums/SCU_INTERRUPT_SRSET_DLROVR.h"
#include "../enums/SCU_INTERRUPT_SRSET_HDCR.h"
#include "../enums/SCU_INTERRUPT_SRSET_HDCRCLR.h"
#include "../enums/SCU_INTERRUPT_SRSET_HDCRSET.h"
#include "../enums/SCU_INTERRUPT_SRSET_OSCSICTRL.h"
#include "../enums/SCU_INTERRUPT_SRSET_OSCULCTRL.h"
#include "../enums/SCU_INTERRUPT_SRSET_PI.h"
#include "../enums/SCU_INTERRUPT_SRSET_PRWARN.h"
#include "../enums/SCU_INTERRUPT_SRSET_RMX.h"
#include "../enums/SCU_INTERRUPT_SRSET_RTC_ATIM0.h"
#include "../enums/SCU_INTERRUPT_SRSET_RTC_ATIM1.h"
#include "../enums/SCU_INTERRUPT_SRSET_RTC_CTR.h"
#include "../enums/SCU_INTERRUPT_SRSET_RTC_TIM0.h"
#include "../enums/SCU_INTERRUPT_SRSET_RTC_TIM1.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_HDCLR.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_HDCR.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_HDSET.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_OSCSICTRL.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_OSCULCTRL.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_PRWARN.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_RMX.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_RTC_ATIM0.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_RTC_ATIM1.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_RTC_CTR.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_RTC_TIM0.h"
#include "../enums/SCU_INTERRUPT_SRSTAT_RTC_TIM1.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * System Control Unit
 */
struct [[gnu::packed]] scu_interrupt
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1; /*!< scu_interrupt's identifier. */
    static constexpr std::size_t size =
        24; /*!< scu_interrupt's size in bytes. */

    /* Fields. */
    const uint32_t SRSTAT = {}; /*!< (read-only) SCU Service Request Status */
    const uint32_t SRRAW =
        {};            /*!< (read-only) SCU Raw Service Request Status */
    uint32_t SRMSK;    /*!< (read-write) SCU Service Request Mask */
    uint32_t SRCLR;    /*!< (write-only) SCU Service Request Clear */
    uint32_t SRSET;    /*!< (write-only) SCU Service Request Set */
    uint32_t NMIREQEN; /*!< (read-write) SCU Service Request Mask */

    /* Methods. */

    /**
     * Get SRSTAT's RMX bit.
     */
    SCU_INTERRUPT_SRSTAT_RMX get_SRSTAT_RMX()
    {
        return SCU_INTERRUPT_SRSTAT_RMX(SRSTAT & (1u << 29u));
    }

    /**
     * Get SRSTAT's RTC_TIM1 bit.
     */
    SCU_INTERRUPT_SRSTAT_RTC_TIM1 get_SRSTAT_RTC_TIM1()
    {
        return SCU_INTERRUPT_SRSTAT_RTC_TIM1(SRSTAT & (1u << 28u));
    }

    /**
     * Get SRSTAT's RTC_TIM0 bit.
     */
    SCU_INTERRUPT_SRSTAT_RTC_TIM0 get_SRSTAT_RTC_TIM0()
    {
        return SCU_INTERRUPT_SRSTAT_RTC_TIM0(SRSTAT & (1u << 27u));
    }

    /**
     * Get SRSTAT's RTC_ATIM1 bit.
     */
    SCU_INTERRUPT_SRSTAT_RTC_ATIM1 get_SRSTAT_RTC_ATIM1()
    {
        return SCU_INTERRUPT_SRSTAT_RTC_ATIM1(SRSTAT & (1u << 26u));
    }

    /**
     * Get SRSTAT's RTC_ATIM0 bit.
     */
    SCU_INTERRUPT_SRSTAT_RTC_ATIM0 get_SRSTAT_RTC_ATIM0()
    {
        return SCU_INTERRUPT_SRSTAT_RTC_ATIM0(SRSTAT & (1u << 25u));
    }

    /**
     * Get SRSTAT's RTC_CTR bit.
     */
    SCU_INTERRUPT_SRSTAT_RTC_CTR get_SRSTAT_RTC_CTR()
    {
        return SCU_INTERRUPT_SRSTAT_RTC_CTR(SRSTAT & (1u << 24u));
    }

    /**
     * Get SRSTAT's OSCULCTRL bit.
     */
    SCU_INTERRUPT_SRSTAT_OSCULCTRL get_SRSTAT_OSCULCTRL()
    {
        return SCU_INTERRUPT_SRSTAT_OSCULCTRL(SRSTAT & (1u << 23u));
    }

    /**
     * Get SRSTAT's OSCSICTRL bit.
     */
    SCU_INTERRUPT_SRSTAT_OSCSICTRL get_SRSTAT_OSCSICTRL()
    {
        return SCU_INTERRUPT_SRSTAT_OSCSICTRL(SRSTAT & (1u << 21u));
    }

    /**
     * Get SRSTAT's HDCR bit.
     */
    SCU_INTERRUPT_SRSTAT_HDCR get_SRSTAT_HDCR()
    {
        return SCU_INTERRUPT_SRSTAT_HDCR(SRSTAT & (1u << 19u));
    }

    /**
     * Get SRSTAT's HDSET bit.
     */
    SCU_INTERRUPT_SRSTAT_HDSET get_SRSTAT_HDSET()
    {
        return SCU_INTERRUPT_SRSTAT_HDSET(SRSTAT & (1u << 18u));
    }

    /**
     * Get SRSTAT's HDCLR bit.
     */
    SCU_INTERRUPT_SRSTAT_HDCLR get_SRSTAT_HDCLR()
    {
        return SCU_INTERRUPT_SRSTAT_HDCLR(SRSTAT & (1u << 17u));
    }

    /**
     * Get SRSTAT's DLROVR bit.
     */
    bool get_SRSTAT_DLROVR()
    {
        return SRSTAT & (1u << 3u);
    }

    /**
     * Get SRSTAT's AI bit.
     */
    bool get_SRSTAT_AI()
    {
        return SRSTAT & (1u << 2u);
    }

    /**
     * Get SRSTAT's PI bit.
     */
    bool get_SRSTAT_PI()
    {
        return SRSTAT & (1u << 1u);
    }

    /**
     * Get SRSTAT's PRWARN bit.
     */
    SCU_INTERRUPT_SRSTAT_PRWARN get_SRSTAT_PRWARN()
    {
        return SCU_INTERRUPT_SRSTAT_PRWARN(SRSTAT & (1u << 0u));
    }

    /**
     * Get SRRAW's RMX bit.
     */
    SCU_INTERRUPT_SRRAW_RMX get_SRRAW_RMX()
    {
        return SCU_INTERRUPT_SRRAW_RMX(SRRAW & (1u << 29u));
    }

    /**
     * Get SRRAW's RTC_TIM1 bit.
     */
    SCU_INTERRUPT_SRRAW_RTC_TIM1 get_SRRAW_RTC_TIM1()
    {
        return SCU_INTERRUPT_SRRAW_RTC_TIM1(SRRAW & (1u << 28u));
    }

    /**
     * Get SRRAW's RTC_TIM0 bit.
     */
    SCU_INTERRUPT_SRRAW_RTC_TIM0 get_SRRAW_RTC_TIM0()
    {
        return SCU_INTERRUPT_SRRAW_RTC_TIM0(SRRAW & (1u << 27u));
    }

    /**
     * Get SRRAW's RTC_ATIM1 bit.
     */
    SCU_INTERRUPT_SRRAW_RTC_ATIM1 get_SRRAW_RTC_ATIM1()
    {
        return SCU_INTERRUPT_SRRAW_RTC_ATIM1(SRRAW & (1u << 26u));
    }

    /**
     * Get SRRAW's RTC_ATIM0 bit.
     */
    SCU_INTERRUPT_SRRAW_RTC_ATIM0 get_SRRAW_RTC_ATIM0()
    {
        return SCU_INTERRUPT_SRRAW_RTC_ATIM0(SRRAW & (1u << 25u));
    }

    /**
     * Get SRRAW's RTC_CTR bit.
     */
    SCU_INTERRUPT_SRRAW_RTC_CTR get_SRRAW_RTC_CTR()
    {
        return SCU_INTERRUPT_SRRAW_RTC_CTR(SRRAW & (1u << 24u));
    }

    /**
     * Get SRRAW's OSCULCTRL bit.
     */
    SCU_INTERRUPT_SRRAW_OSCULCTRL get_SRRAW_OSCULCTRL()
    {
        return SCU_INTERRUPT_SRRAW_OSCULCTRL(SRRAW & (1u << 23u));
    }

    /**
     * Get SRRAW's OSCSICTRL bit.
     */
    SCU_INTERRUPT_SRRAW_OSCSICTRL get_SRRAW_OSCSICTRL()
    {
        return SCU_INTERRUPT_SRRAW_OSCSICTRL(SRRAW & (1u << 21u));
    }

    /**
     * Get SRRAW's HDCR bit.
     */
    SCU_INTERRUPT_SRRAW_HDCR get_SRRAW_HDCR()
    {
        return SCU_INTERRUPT_SRRAW_HDCR(SRRAW & (1u << 19u));
    }

    /**
     * Get SRRAW's HDSET bit.
     */
    SCU_INTERRUPT_SRRAW_HDSET get_SRRAW_HDSET()
    {
        return SCU_INTERRUPT_SRRAW_HDSET(SRRAW & (1u << 18u));
    }

    /**
     * Get SRRAW's HDCLR bit.
     */
    SCU_INTERRUPT_SRRAW_HDCLR get_SRRAW_HDCLR()
    {
        return SCU_INTERRUPT_SRRAW_HDCLR(SRRAW & (1u << 17u));
    }

    /**
     * Get SRRAW's DLROVR bit.
     */
    bool get_SRRAW_DLROVR()
    {
        return SRRAW & (1u << 3u);
    }

    /**
     * Get SRRAW's AI bit.
     */
    bool get_SRRAW_AI()
    {
        return SRRAW & (1u << 2u);
    }

    /**
     * Get SRRAW's PI bit.
     */
    bool get_SRRAW_PI()
    {
        return SRRAW & (1u << 1u);
    }

    /**
     * Get SRRAW's PRWARN bit.
     */
    SCU_INTERRUPT_SRRAW_PRWARN get_SRRAW_PRWARN()
    {
        return SCU_INTERRUPT_SRRAW_PRWARN(SRRAW & (1u << 0u));
    }

    /**
     * Get SRMSK's RMX bit.
     */
    SCU_INTERRUPT_SRMSK_RMX get_SRMSK_RMX()
    {
        return SCU_INTERRUPT_SRMSK_RMX(SRMSK & (1u << 29u));
    }

    /**
     * Set SRMSK's RMX bit.
     */
    inline void set_SRMSK_RMX()
    {
        SRMSK |= 1u << 29u;
    }

    /**
     * Clear SRMSK's RMX bit.
     */
    inline void clear_SRMSK_RMX()
    {
        SRMSK &= ~(1u << 29u);
    }

    /**
     * Toggle SRMSK's RMX bit.
     */
    inline void toggle_SRMSK_RMX()
    {
        SRMSK ^= 1u << 29u;
    }

    /**
     * Get SRMSK's RTC_TIM1 bit.
     */
    SCU_INTERRUPT_SRMSK_RTC_TIM1 get_SRMSK_RTC_TIM1()
    {
        return SCU_INTERRUPT_SRMSK_RTC_TIM1(SRMSK & (1u << 28u));
    }

    /**
     * Set SRMSK's RTC_TIM1 bit.
     */
    inline void set_SRMSK_RTC_TIM1()
    {
        SRMSK |= 1u << 28u;
    }

    /**
     * Clear SRMSK's RTC_TIM1 bit.
     */
    inline void clear_SRMSK_RTC_TIM1()
    {
        SRMSK &= ~(1u << 28u);
    }

    /**
     * Toggle SRMSK's RTC_TIM1 bit.
     */
    inline void toggle_SRMSK_RTC_TIM1()
    {
        SRMSK ^= 1u << 28u;
    }

    /**
     * Get SRMSK's RTC_TIM0 bit.
     */
    SCU_INTERRUPT_SRMSK_RTC_TIM0 get_SRMSK_RTC_TIM0()
    {
        return SCU_INTERRUPT_SRMSK_RTC_TIM0(SRMSK & (1u << 27u));
    }

    /**
     * Set SRMSK's RTC_TIM0 bit.
     */
    inline void set_SRMSK_RTC_TIM0()
    {
        SRMSK |= 1u << 27u;
    }

    /**
     * Clear SRMSK's RTC_TIM0 bit.
     */
    inline void clear_SRMSK_RTC_TIM0()
    {
        SRMSK &= ~(1u << 27u);
    }

    /**
     * Toggle SRMSK's RTC_TIM0 bit.
     */
    inline void toggle_SRMSK_RTC_TIM0()
    {
        SRMSK ^= 1u << 27u;
    }

    /**
     * Get SRMSK's RTC_ATIM1 bit.
     */
    SCU_INTERRUPT_SRMSK_RTC_ATIM1 get_SRMSK_RTC_ATIM1()
    {
        return SCU_INTERRUPT_SRMSK_RTC_ATIM1(SRMSK & (1u << 26u));
    }

    /**
     * Set SRMSK's RTC_ATIM1 bit.
     */
    inline void set_SRMSK_RTC_ATIM1()
    {
        SRMSK |= 1u << 26u;
    }

    /**
     * Clear SRMSK's RTC_ATIM1 bit.
     */
    inline void clear_SRMSK_RTC_ATIM1()
    {
        SRMSK &= ~(1u << 26u);
    }

    /**
     * Toggle SRMSK's RTC_ATIM1 bit.
     */
    inline void toggle_SRMSK_RTC_ATIM1()
    {
        SRMSK ^= 1u << 26u;
    }

    /**
     * Get SRMSK's RTC_ATIM0 bit.
     */
    SCU_INTERRUPT_SRMSK_RTC_ATIM0 get_SRMSK_RTC_ATIM0()
    {
        return SCU_INTERRUPT_SRMSK_RTC_ATIM0(SRMSK & (1u << 25u));
    }

    /**
     * Set SRMSK's RTC_ATIM0 bit.
     */
    inline void set_SRMSK_RTC_ATIM0()
    {
        SRMSK |= 1u << 25u;
    }

    /**
     * Clear SRMSK's RTC_ATIM0 bit.
     */
    inline void clear_SRMSK_RTC_ATIM0()
    {
        SRMSK &= ~(1u << 25u);
    }

    /**
     * Toggle SRMSK's RTC_ATIM0 bit.
     */
    inline void toggle_SRMSK_RTC_ATIM0()
    {
        SRMSK ^= 1u << 25u;
    }

    /**
     * Get SRMSK's RTC_CTR bit.
     */
    SCU_INTERRUPT_SRMSK_RTC_CTR get_SRMSK_RTC_CTR()
    {
        return SCU_INTERRUPT_SRMSK_RTC_CTR(SRMSK & (1u << 24u));
    }

    /**
     * Set SRMSK's RTC_CTR bit.
     */
    inline void set_SRMSK_RTC_CTR()
    {
        SRMSK |= 1u << 24u;
    }

    /**
     * Clear SRMSK's RTC_CTR bit.
     */
    inline void clear_SRMSK_RTC_CTR()
    {
        SRMSK &= ~(1u << 24u);
    }

    /**
     * Toggle SRMSK's RTC_CTR bit.
     */
    inline void toggle_SRMSK_RTC_CTR()
    {
        SRMSK ^= 1u << 24u;
    }

    /**
     * Get SRMSK's OSCULCTRL bit.
     */
    SCU_INTERRUPT_SRMSK_OSCULCTRL get_SRMSK_OSCULCTRL()
    {
        return SCU_INTERRUPT_SRMSK_OSCULCTRL(SRMSK & (1u << 23u));
    }

    /**
     * Set SRMSK's OSCULCTRL bit.
     */
    inline void set_SRMSK_OSCULCTRL()
    {
        SRMSK |= 1u << 23u;
    }

    /**
     * Clear SRMSK's OSCULCTRL bit.
     */
    inline void clear_SRMSK_OSCULCTRL()
    {
        SRMSK &= ~(1u << 23u);
    }

    /**
     * Toggle SRMSK's OSCULCTRL bit.
     */
    inline void toggle_SRMSK_OSCULCTRL()
    {
        SRMSK ^= 1u << 23u;
    }

    /**
     * Get SRMSK's OSCSICTRL bit.
     */
    SCU_INTERRUPT_SRMSK_OSCSICTRL get_SRMSK_OSCSICTRL()
    {
        return SCU_INTERRUPT_SRMSK_OSCSICTRL(SRMSK & (1u << 21u));
    }

    /**
     * Set SRMSK's OSCSICTRL bit.
     */
    inline void set_SRMSK_OSCSICTRL()
    {
        SRMSK |= 1u << 21u;
    }

    /**
     * Clear SRMSK's OSCSICTRL bit.
     */
    inline void clear_SRMSK_OSCSICTRL()
    {
        SRMSK &= ~(1u << 21u);
    }

    /**
     * Toggle SRMSK's OSCSICTRL bit.
     */
    inline void toggle_SRMSK_OSCSICTRL()
    {
        SRMSK ^= 1u << 21u;
    }

    /**
     * Get SRMSK's HDCR bit.
     */
    SCU_INTERRUPT_SRMSK_HDCR get_SRMSK_HDCR()
    {
        return SCU_INTERRUPT_SRMSK_HDCR(SRMSK & (1u << 19u));
    }

    /**
     * Set SRMSK's HDCR bit.
     */
    inline void set_SRMSK_HDCR()
    {
        SRMSK |= 1u << 19u;
    }

    /**
     * Clear SRMSK's HDCR bit.
     */
    inline void clear_SRMSK_HDCR()
    {
        SRMSK &= ~(1u << 19u);
    }

    /**
     * Toggle SRMSK's HDCR bit.
     */
    inline void toggle_SRMSK_HDCR()
    {
        SRMSK ^= 1u << 19u;
    }

    /**
     * Get SRMSK's HDSET bit.
     */
    SCU_INTERRUPT_SRMSK_HDSET get_SRMSK_HDSET()
    {
        return SCU_INTERRUPT_SRMSK_HDSET(SRMSK & (1u << 18u));
    }

    /**
     * Set SRMSK's HDSET bit.
     */
    inline void set_SRMSK_HDSET()
    {
        SRMSK |= 1u << 18u;
    }

    /**
     * Clear SRMSK's HDSET bit.
     */
    inline void clear_SRMSK_HDSET()
    {
        SRMSK &= ~(1u << 18u);
    }

    /**
     * Toggle SRMSK's HDSET bit.
     */
    inline void toggle_SRMSK_HDSET()
    {
        SRMSK ^= 1u << 18u;
    }

    /**
     * Get SRMSK's HDCLR bit.
     */
    SCU_INTERRUPT_SRMSK_HDCLR get_SRMSK_HDCLR()
    {
        return SCU_INTERRUPT_SRMSK_HDCLR(SRMSK & (1u << 17u));
    }

    /**
     * Set SRMSK's HDCLR bit.
     */
    inline void set_SRMSK_HDCLR()
    {
        SRMSK |= 1u << 17u;
    }

    /**
     * Clear SRMSK's HDCLR bit.
     */
    inline void clear_SRMSK_HDCLR()
    {
        SRMSK &= ~(1u << 17u);
    }

    /**
     * Toggle SRMSK's HDCLR bit.
     */
    inline void toggle_SRMSK_HDCLR()
    {
        SRMSK ^= 1u << 17u;
    }

    /**
     * Get SRMSK's DLROVR bit.
     */
    SCU_INTERRUPT_SRMSK_DLROVR get_SRMSK_DLROVR()
    {
        return SCU_INTERRUPT_SRMSK_DLROVR(SRMSK & (1u << 3u));
    }

    /**
     * Set SRMSK's DLROVR bit.
     */
    inline void set_SRMSK_DLROVR()
    {
        SRMSK |= 1u << 3u;
    }

    /**
     * Clear SRMSK's DLROVR bit.
     */
    inline void clear_SRMSK_DLROVR()
    {
        SRMSK &= ~(1u << 3u);
    }

    /**
     * Toggle SRMSK's DLROVR bit.
     */
    inline void toggle_SRMSK_DLROVR()
    {
        SRMSK ^= 1u << 3u;
    }

    /**
     * Get SRMSK's AI bit.
     */
    SCU_INTERRUPT_SRMSK_AI get_SRMSK_AI()
    {
        return SCU_INTERRUPT_SRMSK_AI(SRMSK & (1u << 2u));
    }

    /**
     * Set SRMSK's AI bit.
     */
    inline void set_SRMSK_AI()
    {
        SRMSK |= 1u << 2u;
    }

    /**
     * Clear SRMSK's AI bit.
     */
    inline void clear_SRMSK_AI()
    {
        SRMSK &= ~(1u << 2u);
    }

    /**
     * Toggle SRMSK's AI bit.
     */
    inline void toggle_SRMSK_AI()
    {
        SRMSK ^= 1u << 2u;
    }

    /**
     * Get SRMSK's PI bit.
     */
    SCU_INTERRUPT_SRMSK_PI get_SRMSK_PI()
    {
        return SCU_INTERRUPT_SRMSK_PI(SRMSK & (1u << 1u));
    }

    /**
     * Set SRMSK's PI bit.
     */
    inline void set_SRMSK_PI()
    {
        SRMSK |= 1u << 1u;
    }

    /**
     * Clear SRMSK's PI bit.
     */
    inline void clear_SRMSK_PI()
    {
        SRMSK &= ~(1u << 1u);
    }

    /**
     * Toggle SRMSK's PI bit.
     */
    inline void toggle_SRMSK_PI()
    {
        SRMSK ^= 1u << 1u;
    }

    /**
     * Get SRMSK's PRWARN bit.
     */
    SCU_INTERRUPT_SRMSK_PRWARN get_SRMSK_PRWARN()
    {
        return SCU_INTERRUPT_SRMSK_PRWARN(SRMSK & (1u << 0u));
    }

    /**
     * Set SRMSK's PRWARN bit.
     */
    inline void set_SRMSK_PRWARN()
    {
        SRMSK |= 1u << 0u;
    }

    /**
     * Clear SRMSK's PRWARN bit.
     */
    inline void clear_SRMSK_PRWARN()
    {
        SRMSK &= ~(1u << 0u);
    }

    /**
     * Toggle SRMSK's PRWARN bit.
     */
    inline void toggle_SRMSK_PRWARN()
    {
        SRMSK ^= 1u << 0u;
    }

    /**
     * Set SRCLR's RMX bit.
     */
    inline void set_SRCLR_RMX()
    {
        SRCLR |= 1u << 29u;
    }

    /**
     * Clear SRCLR's RMX bit.
     */
    inline void clear_SRCLR_RMX()
    {
        SRCLR &= ~(1u << 29u);
    }

    /**
     * Toggle SRCLR's RMX bit.
     */
    inline void toggle_SRCLR_RMX()
    {
        SRCLR ^= 1u << 29u;
    }

    /**
     * Set SRCLR's RTC_TIM1 bit.
     */
    inline void set_SRCLR_RTC_TIM1()
    {
        SRCLR |= 1u << 28u;
    }

    /**
     * Clear SRCLR's RTC_TIM1 bit.
     */
    inline void clear_SRCLR_RTC_TIM1()
    {
        SRCLR &= ~(1u << 28u);
    }

    /**
     * Toggle SRCLR's RTC_TIM1 bit.
     */
    inline void toggle_SRCLR_RTC_TIM1()
    {
        SRCLR ^= 1u << 28u;
    }

    /**
     * Set SRCLR's RTC_TIM0 bit.
     */
    inline void set_SRCLR_RTC_TIM0()
    {
        SRCLR |= 1u << 27u;
    }

    /**
     * Clear SRCLR's RTC_TIM0 bit.
     */
    inline void clear_SRCLR_RTC_TIM0()
    {
        SRCLR &= ~(1u << 27u);
    }

    /**
     * Toggle SRCLR's RTC_TIM0 bit.
     */
    inline void toggle_SRCLR_RTC_TIM0()
    {
        SRCLR ^= 1u << 27u;
    }

    /**
     * Set SRCLR's RTC_ATIM1 bit.
     */
    inline void set_SRCLR_RTC_ATIM1()
    {
        SRCLR |= 1u << 26u;
    }

    /**
     * Clear SRCLR's RTC_ATIM1 bit.
     */
    inline void clear_SRCLR_RTC_ATIM1()
    {
        SRCLR &= ~(1u << 26u);
    }

    /**
     * Toggle SRCLR's RTC_ATIM1 bit.
     */
    inline void toggle_SRCLR_RTC_ATIM1()
    {
        SRCLR ^= 1u << 26u;
    }

    /**
     * Set SRCLR's RTC_ATIM0 bit.
     */
    inline void set_SRCLR_RTC_ATIM0()
    {
        SRCLR |= 1u << 25u;
    }

    /**
     * Clear SRCLR's RTC_ATIM0 bit.
     */
    inline void clear_SRCLR_RTC_ATIM0()
    {
        SRCLR &= ~(1u << 25u);
    }

    /**
     * Toggle SRCLR's RTC_ATIM0 bit.
     */
    inline void toggle_SRCLR_RTC_ATIM0()
    {
        SRCLR ^= 1u << 25u;
    }

    /**
     * Set SRCLR's RTC_CTR bit.
     */
    inline void set_SRCLR_RTC_CTR()
    {
        SRCLR |= 1u << 24u;
    }

    /**
     * Clear SRCLR's RTC_CTR bit.
     */
    inline void clear_SRCLR_RTC_CTR()
    {
        SRCLR &= ~(1u << 24u);
    }

    /**
     * Toggle SRCLR's RTC_CTR bit.
     */
    inline void toggle_SRCLR_RTC_CTR()
    {
        SRCLR ^= 1u << 24u;
    }

    /**
     * Set SRCLR's OSCULCTRL bit.
     */
    inline void set_SRCLR_OSCULCTRL()
    {
        SRCLR |= 1u << 23u;
    }

    /**
     * Clear SRCLR's OSCULCTRL bit.
     */
    inline void clear_SRCLR_OSCULCTRL()
    {
        SRCLR &= ~(1u << 23u);
    }

    /**
     * Toggle SRCLR's OSCULCTRL bit.
     */
    inline void toggle_SRCLR_OSCULCTRL()
    {
        SRCLR ^= 1u << 23u;
    }

    /**
     * Set SRCLR's OSCSICTRL bit.
     */
    inline void set_SRCLR_OSCSICTRL()
    {
        SRCLR |= 1u << 21u;
    }

    /**
     * Clear SRCLR's OSCSICTRL bit.
     */
    inline void clear_SRCLR_OSCSICTRL()
    {
        SRCLR &= ~(1u << 21u);
    }

    /**
     * Toggle SRCLR's OSCSICTRL bit.
     */
    inline void toggle_SRCLR_OSCSICTRL()
    {
        SRCLR ^= 1u << 21u;
    }

    /**
     * Set SRCLR's HDCR bit.
     */
    inline void set_SRCLR_HDCR()
    {
        SRCLR |= 1u << 19u;
    }

    /**
     * Clear SRCLR's HDCR bit.
     */
    inline void clear_SRCLR_HDCR()
    {
        SRCLR &= ~(1u << 19u);
    }

    /**
     * Toggle SRCLR's HDCR bit.
     */
    inline void toggle_SRCLR_HDCR()
    {
        SRCLR ^= 1u << 19u;
    }

    /**
     * Set SRCLR's HDSET bit.
     */
    inline void set_SRCLR_HDSET()
    {
        SRCLR |= 1u << 18u;
    }

    /**
     * Clear SRCLR's HDSET bit.
     */
    inline void clear_SRCLR_HDSET()
    {
        SRCLR &= ~(1u << 18u);
    }

    /**
     * Toggle SRCLR's HDSET bit.
     */
    inline void toggle_SRCLR_HDSET()
    {
        SRCLR ^= 1u << 18u;
    }

    /**
     * Set SRCLR's HDCLR bit.
     */
    inline void set_SRCLR_HDCLR()
    {
        SRCLR |= 1u << 17u;
    }

    /**
     * Clear SRCLR's HDCLR bit.
     */
    inline void clear_SRCLR_HDCLR()
    {
        SRCLR &= ~(1u << 17u);
    }

    /**
     * Toggle SRCLR's HDCLR bit.
     */
    inline void toggle_SRCLR_HDCLR()
    {
        SRCLR ^= 1u << 17u;
    }

    /**
     * Set SRCLR's DLROVR bit.
     */
    inline void set_SRCLR_DLROVR()
    {
        SRCLR |= 1u << 3u;
    }

    /**
     * Clear SRCLR's DLROVR bit.
     */
    inline void clear_SRCLR_DLROVR()
    {
        SRCLR &= ~(1u << 3u);
    }

    /**
     * Toggle SRCLR's DLROVR bit.
     */
    inline void toggle_SRCLR_DLROVR()
    {
        SRCLR ^= 1u << 3u;
    }

    /**
     * Set SRCLR's AI bit.
     */
    inline void set_SRCLR_AI()
    {
        SRCLR |= 1u << 2u;
    }

    /**
     * Clear SRCLR's AI bit.
     */
    inline void clear_SRCLR_AI()
    {
        SRCLR &= ~(1u << 2u);
    }

    /**
     * Toggle SRCLR's AI bit.
     */
    inline void toggle_SRCLR_AI()
    {
        SRCLR ^= 1u << 2u;
    }

    /**
     * Set SRCLR's PI bit.
     */
    inline void set_SRCLR_PI()
    {
        SRCLR |= 1u << 1u;
    }

    /**
     * Clear SRCLR's PI bit.
     */
    inline void clear_SRCLR_PI()
    {
        SRCLR &= ~(1u << 1u);
    }

    /**
     * Toggle SRCLR's PI bit.
     */
    inline void toggle_SRCLR_PI()
    {
        SRCLR ^= 1u << 1u;
    }

    /**
     * Set SRCLR's PRWARN bit.
     */
    inline void set_SRCLR_PRWARN()
    {
        SRCLR |= 1u << 0u;
    }

    /**
     * Clear SRCLR's PRWARN bit.
     */
    inline void clear_SRCLR_PRWARN()
    {
        SRCLR &= ~(1u << 0u);
    }

    /**
     * Toggle SRCLR's PRWARN bit.
     */
    inline void toggle_SRCLR_PRWARN()
    {
        SRCLR ^= 1u << 0u;
    }

    /**
     * Set SRSET's RMX bit.
     */
    inline void set_SRSET_RMX()
    {
        SRSET |= 1u << 29u;
    }

    /**
     * Clear SRSET's RMX bit.
     */
    inline void clear_SRSET_RMX()
    {
        SRSET &= ~(1u << 29u);
    }

    /**
     * Toggle SRSET's RMX bit.
     */
    inline void toggle_SRSET_RMX()
    {
        SRSET ^= 1u << 29u;
    }

    /**
     * Set SRSET's RTC_TIM1 bit.
     */
    inline void set_SRSET_RTC_TIM1()
    {
        SRSET |= 1u << 28u;
    }

    /**
     * Clear SRSET's RTC_TIM1 bit.
     */
    inline void clear_SRSET_RTC_TIM1()
    {
        SRSET &= ~(1u << 28u);
    }

    /**
     * Toggle SRSET's RTC_TIM1 bit.
     */
    inline void toggle_SRSET_RTC_TIM1()
    {
        SRSET ^= 1u << 28u;
    }

    /**
     * Set SRSET's RTC_TIM0 bit.
     */
    inline void set_SRSET_RTC_TIM0()
    {
        SRSET |= 1u << 27u;
    }

    /**
     * Clear SRSET's RTC_TIM0 bit.
     */
    inline void clear_SRSET_RTC_TIM0()
    {
        SRSET &= ~(1u << 27u);
    }

    /**
     * Toggle SRSET's RTC_TIM0 bit.
     */
    inline void toggle_SRSET_RTC_TIM0()
    {
        SRSET ^= 1u << 27u;
    }

    /**
     * Set SRSET's RTC_ATIM1 bit.
     */
    inline void set_SRSET_RTC_ATIM1()
    {
        SRSET |= 1u << 26u;
    }

    /**
     * Clear SRSET's RTC_ATIM1 bit.
     */
    inline void clear_SRSET_RTC_ATIM1()
    {
        SRSET &= ~(1u << 26u);
    }

    /**
     * Toggle SRSET's RTC_ATIM1 bit.
     */
    inline void toggle_SRSET_RTC_ATIM1()
    {
        SRSET ^= 1u << 26u;
    }

    /**
     * Set SRSET's RTC_ATIM0 bit.
     */
    inline void set_SRSET_RTC_ATIM0()
    {
        SRSET |= 1u << 25u;
    }

    /**
     * Clear SRSET's RTC_ATIM0 bit.
     */
    inline void clear_SRSET_RTC_ATIM0()
    {
        SRSET &= ~(1u << 25u);
    }

    /**
     * Toggle SRSET's RTC_ATIM0 bit.
     */
    inline void toggle_SRSET_RTC_ATIM0()
    {
        SRSET ^= 1u << 25u;
    }

    /**
     * Set SRSET's RTC_CTR bit.
     */
    inline void set_SRSET_RTC_CTR()
    {
        SRSET |= 1u << 24u;
    }

    /**
     * Clear SRSET's RTC_CTR bit.
     */
    inline void clear_SRSET_RTC_CTR()
    {
        SRSET &= ~(1u << 24u);
    }

    /**
     * Toggle SRSET's RTC_CTR bit.
     */
    inline void toggle_SRSET_RTC_CTR()
    {
        SRSET ^= 1u << 24u;
    }

    /**
     * Set SRSET's OSCULCTRL bit.
     */
    inline void set_SRSET_OSCULCTRL()
    {
        SRSET |= 1u << 23u;
    }

    /**
     * Clear SRSET's OSCULCTRL bit.
     */
    inline void clear_SRSET_OSCULCTRL()
    {
        SRSET &= ~(1u << 23u);
    }

    /**
     * Toggle SRSET's OSCULCTRL bit.
     */
    inline void toggle_SRSET_OSCULCTRL()
    {
        SRSET ^= 1u << 23u;
    }

    /**
     * Set SRSET's OSCSICTRL bit.
     */
    inline void set_SRSET_OSCSICTRL()
    {
        SRSET |= 1u << 21u;
    }

    /**
     * Clear SRSET's OSCSICTRL bit.
     */
    inline void clear_SRSET_OSCSICTRL()
    {
        SRSET &= ~(1u << 21u);
    }

    /**
     * Toggle SRSET's OSCSICTRL bit.
     */
    inline void toggle_SRSET_OSCSICTRL()
    {
        SRSET ^= 1u << 21u;
    }

    /**
     * Set SRSET's HDCR bit.
     */
    inline void set_SRSET_HDCR()
    {
        SRSET |= 1u << 19u;
    }

    /**
     * Clear SRSET's HDCR bit.
     */
    inline void clear_SRSET_HDCR()
    {
        SRSET &= ~(1u << 19u);
    }

    /**
     * Toggle SRSET's HDCR bit.
     */
    inline void toggle_SRSET_HDCR()
    {
        SRSET ^= 1u << 19u;
    }

    /**
     * Set SRSET's HDCRSET bit.
     */
    inline void set_SRSET_HDCRSET()
    {
        SRSET |= 1u << 18u;
    }

    /**
     * Clear SRSET's HDCRSET bit.
     */
    inline void clear_SRSET_HDCRSET()
    {
        SRSET &= ~(1u << 18u);
    }

    /**
     * Toggle SRSET's HDCRSET bit.
     */
    inline void toggle_SRSET_HDCRSET()
    {
        SRSET ^= 1u << 18u;
    }

    /**
     * Set SRSET's HDCRCLR bit.
     */
    inline void set_SRSET_HDCRCLR()
    {
        SRSET |= 1u << 17u;
    }

    /**
     * Clear SRSET's HDCRCLR bit.
     */
    inline void clear_SRSET_HDCRCLR()
    {
        SRSET &= ~(1u << 17u);
    }

    /**
     * Toggle SRSET's HDCRCLR bit.
     */
    inline void toggle_SRSET_HDCRCLR()
    {
        SRSET ^= 1u << 17u;
    }

    /**
     * Set SRSET's DLROVR bit.
     */
    inline void set_SRSET_DLROVR()
    {
        SRSET |= 1u << 3u;
    }

    /**
     * Clear SRSET's DLROVR bit.
     */
    inline void clear_SRSET_DLROVR()
    {
        SRSET &= ~(1u << 3u);
    }

    /**
     * Toggle SRSET's DLROVR bit.
     */
    inline void toggle_SRSET_DLROVR()
    {
        SRSET ^= 1u << 3u;
    }

    /**
     * Set SRSET's AI bit.
     */
    inline void set_SRSET_AI()
    {
        SRSET |= 1u << 2u;
    }

    /**
     * Clear SRSET's AI bit.
     */
    inline void clear_SRSET_AI()
    {
        SRSET &= ~(1u << 2u);
    }

    /**
     * Toggle SRSET's AI bit.
     */
    inline void toggle_SRSET_AI()
    {
        SRSET ^= 1u << 2u;
    }

    /**
     * Set SRSET's PI bit.
     */
    inline void set_SRSET_PI()
    {
        SRSET |= 1u << 1u;
    }

    /**
     * Clear SRSET's PI bit.
     */
    inline void clear_SRSET_PI()
    {
        SRSET &= ~(1u << 1u);
    }

    /**
     * Toggle SRSET's PI bit.
     */
    inline void toggle_SRSET_PI()
    {
        SRSET ^= 1u << 1u;
    }

    /**
     * Set SRSET's PRWARN bit.
     */
    inline void set_SRSET_PRWARN()
    {
        SRSET |= 1u << 0u;
    }

    /**
     * Clear SRSET's PRWARN bit.
     */
    inline void clear_SRSET_PRWARN()
    {
        SRSET &= ~(1u << 0u);
    }

    /**
     * Toggle SRSET's PRWARN bit.
     */
    inline void toggle_SRSET_PRWARN()
    {
        SRSET ^= 1u << 0u;
    }

    /**
     * Get NMIREQEN's ERU03 bit.
     */
    SCU_INTERRUPT_NMIREQEN_ERU03 get_NMIREQEN_ERU03()
    {
        return SCU_INTERRUPT_NMIREQEN_ERU03(NMIREQEN & (1u << 19u));
    }

    /**
     * Set NMIREQEN's ERU03 bit.
     */
    inline void set_NMIREQEN_ERU03()
    {
        NMIREQEN |= 1u << 19u;
    }

    /**
     * Clear NMIREQEN's ERU03 bit.
     */
    inline void clear_NMIREQEN_ERU03()
    {
        NMIREQEN &= ~(1u << 19u);
    }

    /**
     * Toggle NMIREQEN's ERU03 bit.
     */
    inline void toggle_NMIREQEN_ERU03()
    {
        NMIREQEN ^= 1u << 19u;
    }

    /**
     * Get NMIREQEN's ERU02 bit.
     */
    SCU_INTERRUPT_NMIREQEN_ERU02 get_NMIREQEN_ERU02()
    {
        return SCU_INTERRUPT_NMIREQEN_ERU02(NMIREQEN & (1u << 18u));
    }

    /**
     * Set NMIREQEN's ERU02 bit.
     */
    inline void set_NMIREQEN_ERU02()
    {
        NMIREQEN |= 1u << 18u;
    }

    /**
     * Clear NMIREQEN's ERU02 bit.
     */
    inline void clear_NMIREQEN_ERU02()
    {
        NMIREQEN &= ~(1u << 18u);
    }

    /**
     * Toggle NMIREQEN's ERU02 bit.
     */
    inline void toggle_NMIREQEN_ERU02()
    {
        NMIREQEN ^= 1u << 18u;
    }

    /**
     * Get NMIREQEN's ERU01 bit.
     */
    SCU_INTERRUPT_NMIREQEN_ERU01 get_NMIREQEN_ERU01()
    {
        return SCU_INTERRUPT_NMIREQEN_ERU01(NMIREQEN & (1u << 17u));
    }

    /**
     * Set NMIREQEN's ERU01 bit.
     */
    inline void set_NMIREQEN_ERU01()
    {
        NMIREQEN |= 1u << 17u;
    }

    /**
     * Clear NMIREQEN's ERU01 bit.
     */
    inline void clear_NMIREQEN_ERU01()
    {
        NMIREQEN &= ~(1u << 17u);
    }

    /**
     * Toggle NMIREQEN's ERU01 bit.
     */
    inline void toggle_NMIREQEN_ERU01()
    {
        NMIREQEN ^= 1u << 17u;
    }

    /**
     * Get NMIREQEN's ERU00 bit.
     */
    SCU_INTERRUPT_NMIREQEN_ERU00 get_NMIREQEN_ERU00()
    {
        return SCU_INTERRUPT_NMIREQEN_ERU00(NMIREQEN & (1u << 16u));
    }

    /**
     * Set NMIREQEN's ERU00 bit.
     */
    inline void set_NMIREQEN_ERU00()
    {
        NMIREQEN |= 1u << 16u;
    }

    /**
     * Clear NMIREQEN's ERU00 bit.
     */
    inline void clear_NMIREQEN_ERU00()
    {
        NMIREQEN &= ~(1u << 16u);
    }

    /**
     * Toggle NMIREQEN's ERU00 bit.
     */
    inline void toggle_NMIREQEN_ERU00()
    {
        NMIREQEN ^= 1u << 16u;
    }

    /**
     * Get NMIREQEN's AI bit.
     */
    SCU_INTERRUPT_NMIREQEN_AI get_NMIREQEN_AI()
    {
        return SCU_INTERRUPT_NMIREQEN_AI(NMIREQEN & (1u << 2u));
    }

    /**
     * Set NMIREQEN's AI bit.
     */
    inline void set_NMIREQEN_AI()
    {
        NMIREQEN |= 1u << 2u;
    }

    /**
     * Clear NMIREQEN's AI bit.
     */
    inline void clear_NMIREQEN_AI()
    {
        NMIREQEN &= ~(1u << 2u);
    }

    /**
     * Toggle NMIREQEN's AI bit.
     */
    inline void toggle_NMIREQEN_AI()
    {
        NMIREQEN ^= 1u << 2u;
    }

    /**
     * Get NMIREQEN's PI bit.
     */
    SCU_INTERRUPT_NMIREQEN_PI get_NMIREQEN_PI()
    {
        return SCU_INTERRUPT_NMIREQEN_PI(NMIREQEN & (1u << 1u));
    }

    /**
     * Set NMIREQEN's PI bit.
     */
    inline void set_NMIREQEN_PI()
    {
        NMIREQEN |= 1u << 1u;
    }

    /**
     * Clear NMIREQEN's PI bit.
     */
    inline void clear_NMIREQEN_PI()
    {
        NMIREQEN &= ~(1u << 1u);
    }

    /**
     * Toggle NMIREQEN's PI bit.
     */
    inline void toggle_NMIREQEN_PI()
    {
        NMIREQEN ^= 1u << 1u;
    }

    /**
     * Get NMIREQEN's PRWARN bit.
     */
    SCU_INTERRUPT_NMIREQEN_PRWARN get_NMIREQEN_PRWARN()
    {
        return SCU_INTERRUPT_NMIREQEN_PRWARN(NMIREQEN & (1u << 0u));
    }

    /**
     * Set NMIREQEN's PRWARN bit.
     */
    inline void set_NMIREQEN_PRWARN()
    {
        NMIREQEN |= 1u << 0u;
    }

    /**
     * Clear NMIREQEN's PRWARN bit.
     */
    inline void clear_NMIREQEN_PRWARN()
    {
        NMIREQEN &= ~(1u << 0u);
    }

    /**
     * Toggle NMIREQEN's PRWARN bit.
     */
    inline void toggle_NMIREQEN_PRWARN()
    {
        NMIREQEN ^= 1u << 0u;
    }
};

static_assert(sizeof(scu_interrupt) == scu_interrupt::size);

static volatile scu_interrupt *const SCU_INTERRUPT =
    reinterpret_cast<scu_interrupt *>(0x50004074);

}; // namespace XMC4700
