/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Real Time Clock
 */
struct [[gnu::packed]] rtc
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< rtc's identifier. */
    static constexpr std::size_t size = 40; /*!< rtc's size in bytes. */

    /* Fields. */
    const uint32_t ID = {}; /*!< (read-only) RTC ID Register */
    uint32_t CTR;           /*!< (read-write) RTC Control Register */
    const uint32_t RAWSTAT =
        {}; /*!< (read-only) RTC Raw Service Request Register */
    const uint32_t STSSR =
        {};         /*!< (read-only) RTC Service Request Status Register */
    uint32_t MSKSR; /*!< (read-write) RTC Service Request Mask Register */
    uint32_t CLRSR; /*!< (write-only) RTC Clear Service Request Register */
    uint32_t ATIM0; /*!< (read-write) RTC Alarm Time Register 0 */
    uint32_t ATIM1; /*!< (read-write) RTC Alarm Time Register 1 */
    uint32_t TIM0;  /*!< (read-write) RTC Time Register 0 */
    uint32_t TIM1;  /*!< (read-write) RTC Time Register 1 */

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

    /**
     * Get CTR's DIV field.
     */
    uint16_t get_CTR_DIV()
    {
        return (CTR >> 16u) & 0b1111111111111111u;
    }

    /**
     * Set CTR's DIV field.
     */
    inline void set_CTR_DIV(uint16_t value)
    {
        uint32_t curr = CTR;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (value & 0b1111111111111111u) << 16u;

        CTR = curr;
    }

    /**
     * Get CTR's EYEC bit.
     */
    bool get_CTR_EYEC()
    {
        return CTR & (1u << 14u);
    }

    /**
     * Set CTR's EYEC bit.
     */
    inline void set_CTR_EYEC()
    {
        CTR |= 1u << 14u;
    }

    /**
     * Clear CTR's EYEC bit.
     */
    inline void clear_CTR_EYEC()
    {
        CTR &= ~(1u << 14u);
    }

    /**
     * Toggle CTR's EYEC bit.
     */
    inline void toggle_CTR_EYEC()
    {
        CTR ^= 1u << 14u;
    }

    /**
     * Get CTR's EMOC bit.
     */
    bool get_CTR_EMOC()
    {
        return CTR & (1u << 13u);
    }

    /**
     * Set CTR's EMOC bit.
     */
    inline void set_CTR_EMOC()
    {
        CTR |= 1u << 13u;
    }

    /**
     * Clear CTR's EMOC bit.
     */
    inline void clear_CTR_EMOC()
    {
        CTR &= ~(1u << 13u);
    }

    /**
     * Toggle CTR's EMOC bit.
     */
    inline void toggle_CTR_EMOC()
    {
        CTR ^= 1u << 13u;
    }

    /**
     * Get CTR's EDAC bit.
     */
    bool get_CTR_EDAC()
    {
        return CTR & (1u << 11u);
    }

    /**
     * Set CTR's EDAC bit.
     */
    inline void set_CTR_EDAC()
    {
        CTR |= 1u << 11u;
    }

    /**
     * Clear CTR's EDAC bit.
     */
    inline void clear_CTR_EDAC()
    {
        CTR &= ~(1u << 11u);
    }

    /**
     * Toggle CTR's EDAC bit.
     */
    inline void toggle_CTR_EDAC()
    {
        CTR ^= 1u << 11u;
    }

    /**
     * Get CTR's EHOC bit.
     */
    bool get_CTR_EHOC()
    {
        return CTR & (1u << 10u);
    }

    /**
     * Set CTR's EHOC bit.
     */
    inline void set_CTR_EHOC()
    {
        CTR |= 1u << 10u;
    }

    /**
     * Clear CTR's EHOC bit.
     */
    inline void clear_CTR_EHOC()
    {
        CTR &= ~(1u << 10u);
    }

    /**
     * Toggle CTR's EHOC bit.
     */
    inline void toggle_CTR_EHOC()
    {
        CTR ^= 1u << 10u;
    }

    /**
     * Get CTR's EMIC bit.
     */
    bool get_CTR_EMIC()
    {
        return CTR & (1u << 9u);
    }

    /**
     * Set CTR's EMIC bit.
     */
    inline void set_CTR_EMIC()
    {
        CTR |= 1u << 9u;
    }

    /**
     * Clear CTR's EMIC bit.
     */
    inline void clear_CTR_EMIC()
    {
        CTR &= ~(1u << 9u);
    }

    /**
     * Toggle CTR's EMIC bit.
     */
    inline void toggle_CTR_EMIC()
    {
        CTR ^= 1u << 9u;
    }

    /**
     * Get CTR's ESEC bit.
     */
    bool get_CTR_ESEC()
    {
        return CTR & (1u << 8u);
    }

    /**
     * Set CTR's ESEC bit.
     */
    inline void set_CTR_ESEC()
    {
        CTR |= 1u << 8u;
    }

    /**
     * Clear CTR's ESEC bit.
     */
    inline void clear_CTR_ESEC()
    {
        CTR &= ~(1u << 8u);
    }

    /**
     * Toggle CTR's ESEC bit.
     */
    inline void toggle_CTR_ESEC()
    {
        CTR ^= 1u << 8u;
    }

    /**
     * Get CTR's TAE bit.
     */
    bool get_CTR_TAE()
    {
        return CTR & (1u << 2u);
    }

    /**
     * Set CTR's TAE bit.
     */
    inline void set_CTR_TAE()
    {
        CTR |= 1u << 2u;
    }

    /**
     * Clear CTR's TAE bit.
     */
    inline void clear_CTR_TAE()
    {
        CTR &= ~(1u << 2u);
    }

    /**
     * Toggle CTR's TAE bit.
     */
    inline void toggle_CTR_TAE()
    {
        CTR ^= 1u << 2u;
    }

    /**
     * Get CTR's ENB bit.
     */
    bool get_CTR_ENB()
    {
        return CTR & (1u << 0u);
    }

    /**
     * Set CTR's ENB bit.
     */
    inline void set_CTR_ENB()
    {
        CTR |= 1u << 0u;
    }

    /**
     * Clear CTR's ENB bit.
     */
    inline void clear_CTR_ENB()
    {
        CTR &= ~(1u << 0u);
    }

    /**
     * Toggle CTR's ENB bit.
     */
    inline void toggle_CTR_ENB()
    {
        CTR ^= 1u << 0u;
    }

    /**
     * Get RAWSTAT's RAI bit.
     */
    bool get_RAWSTAT_RAI()
    {
        return RAWSTAT & (1u << 8u);
    }

    /**
     * Get RAWSTAT's RPYE bit.
     */
    bool get_RAWSTAT_RPYE()
    {
        return RAWSTAT & (1u << 6u);
    }

    /**
     * Get RAWSTAT's RPMO bit.
     */
    bool get_RAWSTAT_RPMO()
    {
        return RAWSTAT & (1u << 5u);
    }

    /**
     * Get RAWSTAT's RPDA bit.
     */
    bool get_RAWSTAT_RPDA()
    {
        return RAWSTAT & (1u << 3u);
    }

    /**
     * Get RAWSTAT's RPHO bit.
     */
    bool get_RAWSTAT_RPHO()
    {
        return RAWSTAT & (1u << 2u);
    }

    /**
     * Get RAWSTAT's RPMI bit.
     */
    bool get_RAWSTAT_RPMI()
    {
        return RAWSTAT & (1u << 1u);
    }

    /**
     * Get RAWSTAT's RPSE bit.
     */
    bool get_RAWSTAT_RPSE()
    {
        return RAWSTAT & (1u << 0u);
    }

    /**
     * Get STSSR's SAI bit.
     */
    bool get_STSSR_SAI()
    {
        return STSSR & (1u << 8u);
    }

    /**
     * Get STSSR's SPYE bit.
     */
    bool get_STSSR_SPYE()
    {
        return STSSR & (1u << 6u);
    }

    /**
     * Get STSSR's SPMO bit.
     */
    bool get_STSSR_SPMO()
    {
        return STSSR & (1u << 5u);
    }

    /**
     * Get STSSR's SPDA bit.
     */
    bool get_STSSR_SPDA()
    {
        return STSSR & (1u << 3u);
    }

    /**
     * Get STSSR's SPHO bit.
     */
    bool get_STSSR_SPHO()
    {
        return STSSR & (1u << 2u);
    }

    /**
     * Get STSSR's SPMI bit.
     */
    bool get_STSSR_SPMI()
    {
        return STSSR & (1u << 1u);
    }

    /**
     * Get STSSR's SPSE bit.
     */
    bool get_STSSR_SPSE()
    {
        return STSSR & (1u << 0u);
    }

    /**
     * Get MSKSR's MAI bit.
     */
    bool get_MSKSR_MAI()
    {
        return MSKSR & (1u << 8u);
    }

    /**
     * Set MSKSR's MAI bit.
     */
    inline void set_MSKSR_MAI()
    {
        MSKSR |= 1u << 8u;
    }

    /**
     * Clear MSKSR's MAI bit.
     */
    inline void clear_MSKSR_MAI()
    {
        MSKSR &= ~(1u << 8u);
    }

    /**
     * Toggle MSKSR's MAI bit.
     */
    inline void toggle_MSKSR_MAI()
    {
        MSKSR ^= 1u << 8u;
    }

    /**
     * Get MSKSR's MPYE bit.
     */
    bool get_MSKSR_MPYE()
    {
        return MSKSR & (1u << 6u);
    }

    /**
     * Set MSKSR's MPYE bit.
     */
    inline void set_MSKSR_MPYE()
    {
        MSKSR |= 1u << 6u;
    }

    /**
     * Clear MSKSR's MPYE bit.
     */
    inline void clear_MSKSR_MPYE()
    {
        MSKSR &= ~(1u << 6u);
    }

    /**
     * Toggle MSKSR's MPYE bit.
     */
    inline void toggle_MSKSR_MPYE()
    {
        MSKSR ^= 1u << 6u;
    }

    /**
     * Get MSKSR's MPMO bit.
     */
    bool get_MSKSR_MPMO()
    {
        return MSKSR & (1u << 5u);
    }

    /**
     * Set MSKSR's MPMO bit.
     */
    inline void set_MSKSR_MPMO()
    {
        MSKSR |= 1u << 5u;
    }

    /**
     * Clear MSKSR's MPMO bit.
     */
    inline void clear_MSKSR_MPMO()
    {
        MSKSR &= ~(1u << 5u);
    }

    /**
     * Toggle MSKSR's MPMO bit.
     */
    inline void toggle_MSKSR_MPMO()
    {
        MSKSR ^= 1u << 5u;
    }

    /**
     * Get MSKSR's MPDA bit.
     */
    bool get_MSKSR_MPDA()
    {
        return MSKSR & (1u << 3u);
    }

    /**
     * Set MSKSR's MPDA bit.
     */
    inline void set_MSKSR_MPDA()
    {
        MSKSR |= 1u << 3u;
    }

    /**
     * Clear MSKSR's MPDA bit.
     */
    inline void clear_MSKSR_MPDA()
    {
        MSKSR &= ~(1u << 3u);
    }

    /**
     * Toggle MSKSR's MPDA bit.
     */
    inline void toggle_MSKSR_MPDA()
    {
        MSKSR ^= 1u << 3u;
    }

    /**
     * Get MSKSR's MPHO bit.
     */
    bool get_MSKSR_MPHO()
    {
        return MSKSR & (1u << 2u);
    }

    /**
     * Set MSKSR's MPHO bit.
     */
    inline void set_MSKSR_MPHO()
    {
        MSKSR |= 1u << 2u;
    }

    /**
     * Clear MSKSR's MPHO bit.
     */
    inline void clear_MSKSR_MPHO()
    {
        MSKSR &= ~(1u << 2u);
    }

    /**
     * Toggle MSKSR's MPHO bit.
     */
    inline void toggle_MSKSR_MPHO()
    {
        MSKSR ^= 1u << 2u;
    }

    /**
     * Get MSKSR's MPMI bit.
     */
    bool get_MSKSR_MPMI()
    {
        return MSKSR & (1u << 1u);
    }

    /**
     * Set MSKSR's MPMI bit.
     */
    inline void set_MSKSR_MPMI()
    {
        MSKSR |= 1u << 1u;
    }

    /**
     * Clear MSKSR's MPMI bit.
     */
    inline void clear_MSKSR_MPMI()
    {
        MSKSR &= ~(1u << 1u);
    }

    /**
     * Toggle MSKSR's MPMI bit.
     */
    inline void toggle_MSKSR_MPMI()
    {
        MSKSR ^= 1u << 1u;
    }

    /**
     * Get MSKSR's MPSE bit.
     */
    bool get_MSKSR_MPSE()
    {
        return MSKSR & (1u << 0u);
    }

    /**
     * Set MSKSR's MPSE bit.
     */
    inline void set_MSKSR_MPSE()
    {
        MSKSR |= 1u << 0u;
    }

    /**
     * Clear MSKSR's MPSE bit.
     */
    inline void clear_MSKSR_MPSE()
    {
        MSKSR &= ~(1u << 0u);
    }

    /**
     * Toggle MSKSR's MPSE bit.
     */
    inline void toggle_MSKSR_MPSE()
    {
        MSKSR ^= 1u << 0u;
    }

    /**
     * Set CLRSR's RAI bit.
     */
    inline void set_CLRSR_RAI()
    {
        CLRSR |= 1u << 8u;
    }

    /**
     * Clear CLRSR's RAI bit.
     */
    inline void clear_CLRSR_RAI()
    {
        CLRSR &= ~(1u << 8u);
    }

    /**
     * Toggle CLRSR's RAI bit.
     */
    inline void toggle_CLRSR_RAI()
    {
        CLRSR ^= 1u << 8u;
    }

    /**
     * Set CLRSR's RPYE bit.
     */
    inline void set_CLRSR_RPYE()
    {
        CLRSR |= 1u << 6u;
    }

    /**
     * Clear CLRSR's RPYE bit.
     */
    inline void clear_CLRSR_RPYE()
    {
        CLRSR &= ~(1u << 6u);
    }

    /**
     * Toggle CLRSR's RPYE bit.
     */
    inline void toggle_CLRSR_RPYE()
    {
        CLRSR ^= 1u << 6u;
    }

    /**
     * Set CLRSR's RPMO bit.
     */
    inline void set_CLRSR_RPMO()
    {
        CLRSR |= 1u << 5u;
    }

    /**
     * Clear CLRSR's RPMO bit.
     */
    inline void clear_CLRSR_RPMO()
    {
        CLRSR &= ~(1u << 5u);
    }

    /**
     * Toggle CLRSR's RPMO bit.
     */
    inline void toggle_CLRSR_RPMO()
    {
        CLRSR ^= 1u << 5u;
    }

    /**
     * Set CLRSR's RPDA bit.
     */
    inline void set_CLRSR_RPDA()
    {
        CLRSR |= 1u << 3u;
    }

    /**
     * Clear CLRSR's RPDA bit.
     */
    inline void clear_CLRSR_RPDA()
    {
        CLRSR &= ~(1u << 3u);
    }

    /**
     * Toggle CLRSR's RPDA bit.
     */
    inline void toggle_CLRSR_RPDA()
    {
        CLRSR ^= 1u << 3u;
    }

    /**
     * Set CLRSR's RPHO bit.
     */
    inline void set_CLRSR_RPHO()
    {
        CLRSR |= 1u << 2u;
    }

    /**
     * Clear CLRSR's RPHO bit.
     */
    inline void clear_CLRSR_RPHO()
    {
        CLRSR &= ~(1u << 2u);
    }

    /**
     * Toggle CLRSR's RPHO bit.
     */
    inline void toggle_CLRSR_RPHO()
    {
        CLRSR ^= 1u << 2u;
    }

    /**
     * Set CLRSR's RPMI bit.
     */
    inline void set_CLRSR_RPMI()
    {
        CLRSR |= 1u << 1u;
    }

    /**
     * Clear CLRSR's RPMI bit.
     */
    inline void clear_CLRSR_RPMI()
    {
        CLRSR &= ~(1u << 1u);
    }

    /**
     * Toggle CLRSR's RPMI bit.
     */
    inline void toggle_CLRSR_RPMI()
    {
        CLRSR ^= 1u << 1u;
    }

    /**
     * Set CLRSR's RPSE bit.
     */
    inline void set_CLRSR_RPSE()
    {
        CLRSR |= 1u << 0u;
    }

    /**
     * Clear CLRSR's RPSE bit.
     */
    inline void clear_CLRSR_RPSE()
    {
        CLRSR &= ~(1u << 0u);
    }

    /**
     * Toggle CLRSR's RPSE bit.
     */
    inline void toggle_CLRSR_RPSE()
    {
        CLRSR ^= 1u << 0u;
    }

    /**
     * Get ATIM0's ADA field.
     */
    uint8_t get_ATIM0_ADA()
    {
        return (ATIM0 >> 24u) & 0b11111u;
    }

    /**
     * Set ATIM0's ADA field.
     */
    inline void set_ATIM0_ADA(uint8_t value)
    {
        uint32_t curr = ATIM0;

        curr &= ~(0b11111u << 24u);
        curr |= (value & 0b11111u) << 24u;

        ATIM0 = curr;
    }

    /**
     * Get ATIM0's AHO field.
     */
    uint8_t get_ATIM0_AHO()
    {
        return (ATIM0 >> 16u) & 0b11111u;
    }

    /**
     * Set ATIM0's AHO field.
     */
    inline void set_ATIM0_AHO(uint8_t value)
    {
        uint32_t curr = ATIM0;

        curr &= ~(0b11111u << 16u);
        curr |= (value & 0b11111u) << 16u;

        ATIM0 = curr;
    }

    /**
     * Get ATIM0's AMI field.
     */
    uint8_t get_ATIM0_AMI()
    {
        return (ATIM0 >> 8u) & 0b111111u;
    }

    /**
     * Set ATIM0's AMI field.
     */
    inline void set_ATIM0_AMI(uint8_t value)
    {
        uint32_t curr = ATIM0;

        curr &= ~(0b111111u << 8u);
        curr |= (value & 0b111111u) << 8u;

        ATIM0 = curr;
    }

    /**
     * Get ATIM0's ASE field.
     */
    uint8_t get_ATIM0_ASE()
    {
        return (ATIM0 >> 0u) & 0b111111u;
    }

    /**
     * Set ATIM0's ASE field.
     */
    inline void set_ATIM0_ASE(uint8_t value)
    {
        uint32_t curr = ATIM0;

        curr &= ~(0b111111u << 0u);
        curr |= (value & 0b111111u) << 0u;

        ATIM0 = curr;
    }

    /**
     * Get ATIM1's AYE field.
     */
    uint16_t get_ATIM1_AYE()
    {
        return (ATIM1 >> 16u) & 0b1111111111111111u;
    }

    /**
     * Set ATIM1's AYE field.
     */
    inline void set_ATIM1_AYE(uint16_t value)
    {
        uint32_t curr = ATIM1;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (value & 0b1111111111111111u) << 16u;

        ATIM1 = curr;
    }

    /**
     * Get ATIM1's AMO field.
     */
    uint8_t get_ATIM1_AMO()
    {
        return (ATIM1 >> 8u) & 0b1111u;
    }

    /**
     * Set ATIM1's AMO field.
     */
    inline void set_ATIM1_AMO(uint8_t value)
    {
        uint32_t curr = ATIM1;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        ATIM1 = curr;
    }

    /**
     * Get TIM0's DA field.
     */
    uint8_t get_TIM0_DA()
    {
        return (TIM0 >> 24u) & 0b11111u;
    }

    /**
     * Set TIM0's DA field.
     */
    inline void set_TIM0_DA(uint8_t value)
    {
        uint32_t curr = TIM0;

        curr &= ~(0b11111u << 24u);
        curr |= (value & 0b11111u) << 24u;

        TIM0 = curr;
    }

    /**
     * Get TIM0's HO field.
     */
    uint8_t get_TIM0_HO()
    {
        return (TIM0 >> 16u) & 0b11111u;
    }

    /**
     * Set TIM0's HO field.
     */
    inline void set_TIM0_HO(uint8_t value)
    {
        uint32_t curr = TIM0;

        curr &= ~(0b11111u << 16u);
        curr |= (value & 0b11111u) << 16u;

        TIM0 = curr;
    }

    /**
     * Get TIM0's MI field.
     */
    uint8_t get_TIM0_MI()
    {
        return (TIM0 >> 8u) & 0b111111u;
    }

    /**
     * Set TIM0's MI field.
     */
    inline void set_TIM0_MI(uint8_t value)
    {
        uint32_t curr = TIM0;

        curr &= ~(0b111111u << 8u);
        curr |= (value & 0b111111u) << 8u;

        TIM0 = curr;
    }

    /**
     * Get TIM0's SE field.
     */
    uint8_t get_TIM0_SE()
    {
        return (TIM0 >> 0u) & 0b111111u;
    }

    /**
     * Set TIM0's SE field.
     */
    inline void set_TIM0_SE(uint8_t value)
    {
        uint32_t curr = TIM0;

        curr &= ~(0b111111u << 0u);
        curr |= (value & 0b111111u) << 0u;

        TIM0 = curr;
    }

    /**
     * Get TIM1's YE field.
     */
    uint16_t get_TIM1_YE()
    {
        return (TIM1 >> 16u) & 0b1111111111111111u;
    }

    /**
     * Set TIM1's YE field.
     */
    inline void set_TIM1_YE(uint16_t value)
    {
        uint32_t curr = TIM1;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (value & 0b1111111111111111u) << 16u;

        TIM1 = curr;
    }

    /**
     * Get TIM1's MO field.
     */
    uint8_t get_TIM1_MO()
    {
        return (TIM1 >> 8u) & 0b1111u;
    }

    /**
     * Set TIM1's MO field.
     */
    inline void set_TIM1_MO(uint8_t value)
    {
        uint32_t curr = TIM1;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        TIM1 = curr;
    }

    /**
     * Get TIM1's DAWE field.
     */
    uint8_t get_TIM1_DAWE()
    {
        return (TIM1 >> 0u) & 0b111u;
    }

    /**
     * Set TIM1's DAWE field.
     */
    inline void set_TIM1_DAWE(uint8_t value)
    {
        uint32_t curr = TIM1;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        TIM1 = curr;
    }
};

static_assert(sizeof(rtc) == rtc::size);

static volatile rtc *const RTC = reinterpret_cast<rtc *>(0x50004A00);

}; // namespace XMC4700
