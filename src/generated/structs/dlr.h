/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 */
#pragma once

#include "../enums/DLR_LNEN_LN0.h"
#include "../enums/DLR_LNEN_LN1.h"
#include "../enums/DLR_LNEN_LN10.h"
#include "../enums/DLR_LNEN_LN11.h"
#include "../enums/DLR_LNEN_LN2.h"
#include "../enums/DLR_LNEN_LN3.h"
#include "../enums/DLR_LNEN_LN4.h"
#include "../enums/DLR_LNEN_LN5.h"
#include "../enums/DLR_LNEN_LN6.h"
#include "../enums/DLR_LNEN_LN7.h"
#include "../enums/DLR_LNEN_LN8.h"
#include "../enums/DLR_LNEN_LN9.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * DMA Line Router
 */
struct [[gnu::packed]] dlr
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< dlr's identifier. */
    static constexpr std::size_t size = 20; /*!< dlr's size in bytes. */

    /* Fields. */
    const uint32_t OVRSTAT = {}; /*!< (read-only) Overrun Status */
    uint32_t OVRCLR;             /*!< (write-only) Overrun Clear */
    uint32_t SRSEL0;             /*!< (read-write) Service Request Selection 0 */
    uint32_t SRSEL1;             /*!< (read-write) Service Request Selection 1 */
    uint32_t LNEN;               /*!< (read-write) Line Enable */

    /* Methods. */

    /**
     * Get OVRSTAT's LN11 bit.
     */
    bool get_OVRSTAT_LN11()
    {
        return OVRSTAT & (1u << 11u);
    }

    /**
     * Get OVRSTAT's LN10 bit.
     */
    bool get_OVRSTAT_LN10()
    {
        return OVRSTAT & (1u << 10u);
    }

    /**
     * Get OVRSTAT's LN9 bit.
     */
    bool get_OVRSTAT_LN9()
    {
        return OVRSTAT & (1u << 9u);
    }

    /**
     * Get OVRSTAT's LN8 bit.
     */
    bool get_OVRSTAT_LN8()
    {
        return OVRSTAT & (1u << 8u);
    }

    /**
     * Get OVRSTAT's LN7 bit.
     */
    bool get_OVRSTAT_LN7()
    {
        return OVRSTAT & (1u << 7u);
    }

    /**
     * Get OVRSTAT's LN6 bit.
     */
    bool get_OVRSTAT_LN6()
    {
        return OVRSTAT & (1u << 6u);
    }

    /**
     * Get OVRSTAT's LN5 bit.
     */
    bool get_OVRSTAT_LN5()
    {
        return OVRSTAT & (1u << 5u);
    }

    /**
     * Get OVRSTAT's LN4 bit.
     */
    bool get_OVRSTAT_LN4()
    {
        return OVRSTAT & (1u << 4u);
    }

    /**
     * Get OVRSTAT's LN3 bit.
     */
    bool get_OVRSTAT_LN3()
    {
        return OVRSTAT & (1u << 3u);
    }

    /**
     * Get OVRSTAT's LN2 bit.
     */
    bool get_OVRSTAT_LN2()
    {
        return OVRSTAT & (1u << 2u);
    }

    /**
     * Get OVRSTAT's LN1 bit.
     */
    bool get_OVRSTAT_LN1()
    {
        return OVRSTAT & (1u << 1u);
    }

    /**
     * Get OVRSTAT's LN0 bit.
     */
    bool get_OVRSTAT_LN0()
    {
        return OVRSTAT & (1u << 0u);
    }

    /**
     * Set OVRCLR's LN11 bit.
     */
    inline void set_OVRCLR_LN11()
    {
        OVRCLR |= 1u << 11u;
    }

    /**
     * Clear OVRCLR's LN11 bit.
     */
    inline void clear_OVRCLR_LN11()
    {
        OVRCLR &= ~(1u << 11u);
    }

    /**
     * Toggle OVRCLR's LN11 bit.
     */
    inline void toggle_OVRCLR_LN11()
    {
        OVRCLR ^= 1u << 11u;
    }

    /**
     * Set OVRCLR's LN10 bit.
     */
    inline void set_OVRCLR_LN10()
    {
        OVRCLR |= 1u << 10u;
    }

    /**
     * Clear OVRCLR's LN10 bit.
     */
    inline void clear_OVRCLR_LN10()
    {
        OVRCLR &= ~(1u << 10u);
    }

    /**
     * Toggle OVRCLR's LN10 bit.
     */
    inline void toggle_OVRCLR_LN10()
    {
        OVRCLR ^= 1u << 10u;
    }

    /**
     * Set OVRCLR's LN9 bit.
     */
    inline void set_OVRCLR_LN9()
    {
        OVRCLR |= 1u << 9u;
    }

    /**
     * Clear OVRCLR's LN9 bit.
     */
    inline void clear_OVRCLR_LN9()
    {
        OVRCLR &= ~(1u << 9u);
    }

    /**
     * Toggle OVRCLR's LN9 bit.
     */
    inline void toggle_OVRCLR_LN9()
    {
        OVRCLR ^= 1u << 9u;
    }

    /**
     * Set OVRCLR's LN8 bit.
     */
    inline void set_OVRCLR_LN8()
    {
        OVRCLR |= 1u << 8u;
    }

    /**
     * Clear OVRCLR's LN8 bit.
     */
    inline void clear_OVRCLR_LN8()
    {
        OVRCLR &= ~(1u << 8u);
    }

    /**
     * Toggle OVRCLR's LN8 bit.
     */
    inline void toggle_OVRCLR_LN8()
    {
        OVRCLR ^= 1u << 8u;
    }

    /**
     * Set OVRCLR's LN7 bit.
     */
    inline void set_OVRCLR_LN7()
    {
        OVRCLR |= 1u << 7u;
    }

    /**
     * Clear OVRCLR's LN7 bit.
     */
    inline void clear_OVRCLR_LN7()
    {
        OVRCLR &= ~(1u << 7u);
    }

    /**
     * Toggle OVRCLR's LN7 bit.
     */
    inline void toggle_OVRCLR_LN7()
    {
        OVRCLR ^= 1u << 7u;
    }

    /**
     * Set OVRCLR's LN6 bit.
     */
    inline void set_OVRCLR_LN6()
    {
        OVRCLR |= 1u << 6u;
    }

    /**
     * Clear OVRCLR's LN6 bit.
     */
    inline void clear_OVRCLR_LN6()
    {
        OVRCLR &= ~(1u << 6u);
    }

    /**
     * Toggle OVRCLR's LN6 bit.
     */
    inline void toggle_OVRCLR_LN6()
    {
        OVRCLR ^= 1u << 6u;
    }

    /**
     * Set OVRCLR's LN5 bit.
     */
    inline void set_OVRCLR_LN5()
    {
        OVRCLR |= 1u << 5u;
    }

    /**
     * Clear OVRCLR's LN5 bit.
     */
    inline void clear_OVRCLR_LN5()
    {
        OVRCLR &= ~(1u << 5u);
    }

    /**
     * Toggle OVRCLR's LN5 bit.
     */
    inline void toggle_OVRCLR_LN5()
    {
        OVRCLR ^= 1u << 5u;
    }

    /**
     * Set OVRCLR's LN4 bit.
     */
    inline void set_OVRCLR_LN4()
    {
        OVRCLR |= 1u << 4u;
    }

    /**
     * Clear OVRCLR's LN4 bit.
     */
    inline void clear_OVRCLR_LN4()
    {
        OVRCLR &= ~(1u << 4u);
    }

    /**
     * Toggle OVRCLR's LN4 bit.
     */
    inline void toggle_OVRCLR_LN4()
    {
        OVRCLR ^= 1u << 4u;
    }

    /**
     * Set OVRCLR's LN3 bit.
     */
    inline void set_OVRCLR_LN3()
    {
        OVRCLR |= 1u << 3u;
    }

    /**
     * Clear OVRCLR's LN3 bit.
     */
    inline void clear_OVRCLR_LN3()
    {
        OVRCLR &= ~(1u << 3u);
    }

    /**
     * Toggle OVRCLR's LN3 bit.
     */
    inline void toggle_OVRCLR_LN3()
    {
        OVRCLR ^= 1u << 3u;
    }

    /**
     * Set OVRCLR's LN2 bit.
     */
    inline void set_OVRCLR_LN2()
    {
        OVRCLR |= 1u << 2u;
    }

    /**
     * Clear OVRCLR's LN2 bit.
     */
    inline void clear_OVRCLR_LN2()
    {
        OVRCLR &= ~(1u << 2u);
    }

    /**
     * Toggle OVRCLR's LN2 bit.
     */
    inline void toggle_OVRCLR_LN2()
    {
        OVRCLR ^= 1u << 2u;
    }

    /**
     * Set OVRCLR's LN1 bit.
     */
    inline void set_OVRCLR_LN1()
    {
        OVRCLR |= 1u << 1u;
    }

    /**
     * Clear OVRCLR's LN1 bit.
     */
    inline void clear_OVRCLR_LN1()
    {
        OVRCLR &= ~(1u << 1u);
    }

    /**
     * Toggle OVRCLR's LN1 bit.
     */
    inline void toggle_OVRCLR_LN1()
    {
        OVRCLR ^= 1u << 1u;
    }

    /**
     * Set OVRCLR's LN0 bit.
     */
    inline void set_OVRCLR_LN0()
    {
        OVRCLR |= 1u << 0u;
    }

    /**
     * Clear OVRCLR's LN0 bit.
     */
    inline void clear_OVRCLR_LN0()
    {
        OVRCLR &= ~(1u << 0u);
    }

    /**
     * Toggle OVRCLR's LN0 bit.
     */
    inline void toggle_OVRCLR_LN0()
    {
        OVRCLR ^= 1u << 0u;
    }

    /**
     * Get SRSEL0's RS7 field.
     */
    uint8_t get_SRSEL0_RS7()
    {
        return (SRSEL0 >> 28u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS7 field.
     */
    inline void set_SRSEL0_RS7(uint8_t value)
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 28u);
        curr |= (value & 0b1111u) << 28u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS6 field.
     */
    uint8_t get_SRSEL0_RS6()
    {
        return (SRSEL0 >> 24u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS6 field.
     */
    inline void set_SRSEL0_RS6(uint8_t value)
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 24u);
        curr |= (value & 0b1111u) << 24u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS5 field.
     */
    uint8_t get_SRSEL0_RS5()
    {
        return (SRSEL0 >> 20u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS5 field.
     */
    inline void set_SRSEL0_RS5(uint8_t value)
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 20u);
        curr |= (value & 0b1111u) << 20u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS4 field.
     */
    uint8_t get_SRSEL0_RS4()
    {
        return (SRSEL0 >> 16u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS4 field.
     */
    inline void set_SRSEL0_RS4(uint8_t value)
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 16u);
        curr |= (value & 0b1111u) << 16u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS3 field.
     */
    uint8_t get_SRSEL0_RS3()
    {
        return (SRSEL0 >> 12u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS3 field.
     */
    inline void set_SRSEL0_RS3(uint8_t value)
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 12u);
        curr |= (value & 0b1111u) << 12u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS2 field.
     */
    uint8_t get_SRSEL0_RS2()
    {
        return (SRSEL0 >> 8u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS2 field.
     */
    inline void set_SRSEL0_RS2(uint8_t value)
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS1 field.
     */
    uint8_t get_SRSEL0_RS1()
    {
        return (SRSEL0 >> 4u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS1 field.
     */
    inline void set_SRSEL0_RS1(uint8_t value)
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 4u);
        curr |= (value & 0b1111u) << 4u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS0 field.
     */
    uint8_t get_SRSEL0_RS0()
    {
        return (SRSEL0 >> 0u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS0 field.
     */
    inline void set_SRSEL0_RS0(uint8_t value)
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL1's RS11 field.
     */
    uint8_t get_SRSEL1_RS11()
    {
        return (SRSEL1 >> 12u) & 0b1111u;
    }

    /**
     * Set SRSEL1's RS11 field.
     */
    inline void set_SRSEL1_RS11(uint8_t value)
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 12u);
        curr |= (value & 0b1111u) << 12u;

        SRSEL1 = curr;
    }

    /**
     * Get SRSEL1's RS10 field.
     */
    uint8_t get_SRSEL1_RS10()
    {
        return (SRSEL1 >> 8u) & 0b1111u;
    }

    /**
     * Set SRSEL1's RS10 field.
     */
    inline void set_SRSEL1_RS10(uint8_t value)
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        SRSEL1 = curr;
    }

    /**
     * Get SRSEL1's RS9 field.
     */
    uint8_t get_SRSEL1_RS9()
    {
        return (SRSEL1 >> 4u) & 0b1111u;
    }

    /**
     * Set SRSEL1's RS9 field.
     */
    inline void set_SRSEL1_RS9(uint8_t value)
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 4u);
        curr |= (value & 0b1111u) << 4u;

        SRSEL1 = curr;
    }

    /**
     * Get SRSEL1's RS8 field.
     */
    uint8_t get_SRSEL1_RS8()
    {
        return (SRSEL1 >> 0u) & 0b1111u;
    }

    /**
     * Set SRSEL1's RS8 field.
     */
    inline void set_SRSEL1_RS8(uint8_t value)
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        SRSEL1 = curr;
    }

    /**
     * Get LNEN's LN11 bit.
     */
    DLR_LNEN_LN11 get_LNEN_LN11()
    {
        return DLR_LNEN_LN11(LNEN & (1u << 11u));
    }

    /**
     * Set LNEN's LN11 bit.
     */
    inline void set_LNEN_LN11()
    {
        LNEN |= 1u << 11u;
    }

    /**
     * Clear LNEN's LN11 bit.
     */
    inline void clear_LNEN_LN11()
    {
        LNEN &= ~(1u << 11u);
    }

    /**
     * Toggle LNEN's LN11 bit.
     */
    inline void toggle_LNEN_LN11()
    {
        LNEN ^= 1u << 11u;
    }

    /**
     * Get LNEN's LN10 bit.
     */
    DLR_LNEN_LN10 get_LNEN_LN10()
    {
        return DLR_LNEN_LN10(LNEN & (1u << 10u));
    }

    /**
     * Set LNEN's LN10 bit.
     */
    inline void set_LNEN_LN10()
    {
        LNEN |= 1u << 10u;
    }

    /**
     * Clear LNEN's LN10 bit.
     */
    inline void clear_LNEN_LN10()
    {
        LNEN &= ~(1u << 10u);
    }

    /**
     * Toggle LNEN's LN10 bit.
     */
    inline void toggle_LNEN_LN10()
    {
        LNEN ^= 1u << 10u;
    }

    /**
     * Get LNEN's LN9 bit.
     */
    DLR_LNEN_LN9 get_LNEN_LN9()
    {
        return DLR_LNEN_LN9(LNEN & (1u << 9u));
    }

    /**
     * Set LNEN's LN9 bit.
     */
    inline void set_LNEN_LN9()
    {
        LNEN |= 1u << 9u;
    }

    /**
     * Clear LNEN's LN9 bit.
     */
    inline void clear_LNEN_LN9()
    {
        LNEN &= ~(1u << 9u);
    }

    /**
     * Toggle LNEN's LN9 bit.
     */
    inline void toggle_LNEN_LN9()
    {
        LNEN ^= 1u << 9u;
    }

    /**
     * Get LNEN's LN8 bit.
     */
    DLR_LNEN_LN8 get_LNEN_LN8()
    {
        return DLR_LNEN_LN8(LNEN & (1u << 8u));
    }

    /**
     * Set LNEN's LN8 bit.
     */
    inline void set_LNEN_LN8()
    {
        LNEN |= 1u << 8u;
    }

    /**
     * Clear LNEN's LN8 bit.
     */
    inline void clear_LNEN_LN8()
    {
        LNEN &= ~(1u << 8u);
    }

    /**
     * Toggle LNEN's LN8 bit.
     */
    inline void toggle_LNEN_LN8()
    {
        LNEN ^= 1u << 8u;
    }

    /**
     * Get LNEN's LN7 bit.
     */
    DLR_LNEN_LN7 get_LNEN_LN7()
    {
        return DLR_LNEN_LN7(LNEN & (1u << 7u));
    }

    /**
     * Set LNEN's LN7 bit.
     */
    inline void set_LNEN_LN7()
    {
        LNEN |= 1u << 7u;
    }

    /**
     * Clear LNEN's LN7 bit.
     */
    inline void clear_LNEN_LN7()
    {
        LNEN &= ~(1u << 7u);
    }

    /**
     * Toggle LNEN's LN7 bit.
     */
    inline void toggle_LNEN_LN7()
    {
        LNEN ^= 1u << 7u;
    }

    /**
     * Get LNEN's LN6 bit.
     */
    DLR_LNEN_LN6 get_LNEN_LN6()
    {
        return DLR_LNEN_LN6(LNEN & (1u << 6u));
    }

    /**
     * Set LNEN's LN6 bit.
     */
    inline void set_LNEN_LN6()
    {
        LNEN |= 1u << 6u;
    }

    /**
     * Clear LNEN's LN6 bit.
     */
    inline void clear_LNEN_LN6()
    {
        LNEN &= ~(1u << 6u);
    }

    /**
     * Toggle LNEN's LN6 bit.
     */
    inline void toggle_LNEN_LN6()
    {
        LNEN ^= 1u << 6u;
    }

    /**
     * Get LNEN's LN5 bit.
     */
    DLR_LNEN_LN5 get_LNEN_LN5()
    {
        return DLR_LNEN_LN5(LNEN & (1u << 5u));
    }

    /**
     * Set LNEN's LN5 bit.
     */
    inline void set_LNEN_LN5()
    {
        LNEN |= 1u << 5u;
    }

    /**
     * Clear LNEN's LN5 bit.
     */
    inline void clear_LNEN_LN5()
    {
        LNEN &= ~(1u << 5u);
    }

    /**
     * Toggle LNEN's LN5 bit.
     */
    inline void toggle_LNEN_LN5()
    {
        LNEN ^= 1u << 5u;
    }

    /**
     * Get LNEN's LN4 bit.
     */
    DLR_LNEN_LN4 get_LNEN_LN4()
    {
        return DLR_LNEN_LN4(LNEN & (1u << 4u));
    }

    /**
     * Set LNEN's LN4 bit.
     */
    inline void set_LNEN_LN4()
    {
        LNEN |= 1u << 4u;
    }

    /**
     * Clear LNEN's LN4 bit.
     */
    inline void clear_LNEN_LN4()
    {
        LNEN &= ~(1u << 4u);
    }

    /**
     * Toggle LNEN's LN4 bit.
     */
    inline void toggle_LNEN_LN4()
    {
        LNEN ^= 1u << 4u;
    }

    /**
     * Get LNEN's LN3 bit.
     */
    DLR_LNEN_LN3 get_LNEN_LN3()
    {
        return DLR_LNEN_LN3(LNEN & (1u << 3u));
    }

    /**
     * Set LNEN's LN3 bit.
     */
    inline void set_LNEN_LN3()
    {
        LNEN |= 1u << 3u;
    }

    /**
     * Clear LNEN's LN3 bit.
     */
    inline void clear_LNEN_LN3()
    {
        LNEN &= ~(1u << 3u);
    }

    /**
     * Toggle LNEN's LN3 bit.
     */
    inline void toggle_LNEN_LN3()
    {
        LNEN ^= 1u << 3u;
    }

    /**
     * Get LNEN's LN2 bit.
     */
    DLR_LNEN_LN2 get_LNEN_LN2()
    {
        return DLR_LNEN_LN2(LNEN & (1u << 2u));
    }

    /**
     * Set LNEN's LN2 bit.
     */
    inline void set_LNEN_LN2()
    {
        LNEN |= 1u << 2u;
    }

    /**
     * Clear LNEN's LN2 bit.
     */
    inline void clear_LNEN_LN2()
    {
        LNEN &= ~(1u << 2u);
    }

    /**
     * Toggle LNEN's LN2 bit.
     */
    inline void toggle_LNEN_LN2()
    {
        LNEN ^= 1u << 2u;
    }

    /**
     * Get LNEN's LN1 bit.
     */
    DLR_LNEN_LN1 get_LNEN_LN1()
    {
        return DLR_LNEN_LN1(LNEN & (1u << 1u));
    }

    /**
     * Set LNEN's LN1 bit.
     */
    inline void set_LNEN_LN1()
    {
        LNEN |= 1u << 1u;
    }

    /**
     * Clear LNEN's LN1 bit.
     */
    inline void clear_LNEN_LN1()
    {
        LNEN &= ~(1u << 1u);
    }

    /**
     * Toggle LNEN's LN1 bit.
     */
    inline void toggle_LNEN_LN1()
    {
        LNEN ^= 1u << 1u;
    }

    /**
     * Get LNEN's LN0 bit.
     */
    DLR_LNEN_LN0 get_LNEN_LN0()
    {
        return DLR_LNEN_LN0(LNEN & (1u << 0u));
    }

    /**
     * Set LNEN's LN0 bit.
     */
    inline void set_LNEN_LN0()
    {
        LNEN |= 1u << 0u;
    }

    /**
     * Clear LNEN's LN0 bit.
     */
    inline void clear_LNEN_LN0()
    {
        LNEN &= ~(1u << 0u);
    }

    /**
     * Toggle LNEN's LN0 bit.
     */
    inline void toggle_LNEN_LN0()
    {
        LNEN ^= 1u << 0u;
    }
};

static_assert(sizeof(dlr) == dlr::size);

static volatile dlr *const DLR = reinterpret_cast<dlr *>(0x50004900);

}; // namespace XMC4700
