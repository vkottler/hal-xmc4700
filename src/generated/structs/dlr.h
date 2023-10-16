/**
 * \file
 * \brief Generated by ifgen (3.1.1).
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
    inline bool get_OVRSTAT_LN11() volatile
    {
        return OVRSTAT & (1u << 11u);
    }

    /**
     * Get OVRSTAT's LN10 bit.
     */
    inline bool get_OVRSTAT_LN10() volatile
    {
        return OVRSTAT & (1u << 10u);
    }

    /**
     * Get OVRSTAT's LN9 bit.
     */
    inline bool get_OVRSTAT_LN9() volatile
    {
        return OVRSTAT & (1u << 9u);
    }

    /**
     * Get OVRSTAT's LN8 bit.
     */
    inline bool get_OVRSTAT_LN8() volatile
    {
        return OVRSTAT & (1u << 8u);
    }

    /**
     * Get OVRSTAT's LN7 bit.
     */
    inline bool get_OVRSTAT_LN7() volatile
    {
        return OVRSTAT & (1u << 7u);
    }

    /**
     * Get OVRSTAT's LN6 bit.
     */
    inline bool get_OVRSTAT_LN6() volatile
    {
        return OVRSTAT & (1u << 6u);
    }

    /**
     * Get OVRSTAT's LN5 bit.
     */
    inline bool get_OVRSTAT_LN5() volatile
    {
        return OVRSTAT & (1u << 5u);
    }

    /**
     * Get OVRSTAT's LN4 bit.
     */
    inline bool get_OVRSTAT_LN4() volatile
    {
        return OVRSTAT & (1u << 4u);
    }

    /**
     * Get OVRSTAT's LN3 bit.
     */
    inline bool get_OVRSTAT_LN3() volatile
    {
        return OVRSTAT & (1u << 3u);
    }

    /**
     * Get OVRSTAT's LN2 bit.
     */
    inline bool get_OVRSTAT_LN2() volatile
    {
        return OVRSTAT & (1u << 2u);
    }

    /**
     * Get OVRSTAT's LN1 bit.
     */
    inline bool get_OVRSTAT_LN1() volatile
    {
        return OVRSTAT & (1u << 1u);
    }

    /**
     * Get OVRSTAT's LN0 bit.
     */
    inline bool get_OVRSTAT_LN0() volatile
    {
        return OVRSTAT & (1u << 0u);
    }

    /**
     * Get all of OVRSTAT's bit fields.
     */
    inline void get_OVRSTAT(bool &LN11, bool &LN10, bool &LN9, bool &LN8, bool &LN7, bool &LN6, bool &LN5, bool &LN4, bool &LN3, bool &LN2, bool &LN1, bool &LN0) volatile
    {
        uint32_t curr = OVRSTAT;

        LN11 = curr & (1u << 11u);
        LN10 = curr & (1u << 10u);
        LN9 = curr & (1u << 9u);
        LN8 = curr & (1u << 8u);
        LN7 = curr & (1u << 7u);
        LN6 = curr & (1u << 6u);
        LN5 = curr & (1u << 5u);
        LN4 = curr & (1u << 4u);
        LN3 = curr & (1u << 3u);
        LN2 = curr & (1u << 2u);
        LN1 = curr & (1u << 1u);
        LN0 = curr & (1u << 0u);
    }

    /**
     * Set OVRCLR's LN11 bit.
     */
    inline void set_OVRCLR_LN11() volatile
    {
        OVRCLR |= 1u << 11u;
    }

    /**
     * Clear OVRCLR's LN11 bit.
     */
    inline void clear_OVRCLR_LN11() volatile
    {
        OVRCLR &= ~(1u << 11u);
    }

    /**
     * Toggle OVRCLR's LN11 bit.
     */
    inline void toggle_OVRCLR_LN11() volatile
    {
        OVRCLR ^= 1u << 11u;
    }

    /**
     * Set OVRCLR's LN10 bit.
     */
    inline void set_OVRCLR_LN10() volatile
    {
        OVRCLR |= 1u << 10u;
    }

    /**
     * Clear OVRCLR's LN10 bit.
     */
    inline void clear_OVRCLR_LN10() volatile
    {
        OVRCLR &= ~(1u << 10u);
    }

    /**
     * Toggle OVRCLR's LN10 bit.
     */
    inline void toggle_OVRCLR_LN10() volatile
    {
        OVRCLR ^= 1u << 10u;
    }

    /**
     * Set OVRCLR's LN9 bit.
     */
    inline void set_OVRCLR_LN9() volatile
    {
        OVRCLR |= 1u << 9u;
    }

    /**
     * Clear OVRCLR's LN9 bit.
     */
    inline void clear_OVRCLR_LN9() volatile
    {
        OVRCLR &= ~(1u << 9u);
    }

    /**
     * Toggle OVRCLR's LN9 bit.
     */
    inline void toggle_OVRCLR_LN9() volatile
    {
        OVRCLR ^= 1u << 9u;
    }

    /**
     * Set OVRCLR's LN8 bit.
     */
    inline void set_OVRCLR_LN8() volatile
    {
        OVRCLR |= 1u << 8u;
    }

    /**
     * Clear OVRCLR's LN8 bit.
     */
    inline void clear_OVRCLR_LN8() volatile
    {
        OVRCLR &= ~(1u << 8u);
    }

    /**
     * Toggle OVRCLR's LN8 bit.
     */
    inline void toggle_OVRCLR_LN8() volatile
    {
        OVRCLR ^= 1u << 8u;
    }

    /**
     * Set OVRCLR's LN7 bit.
     */
    inline void set_OVRCLR_LN7() volatile
    {
        OVRCLR |= 1u << 7u;
    }

    /**
     * Clear OVRCLR's LN7 bit.
     */
    inline void clear_OVRCLR_LN7() volatile
    {
        OVRCLR &= ~(1u << 7u);
    }

    /**
     * Toggle OVRCLR's LN7 bit.
     */
    inline void toggle_OVRCLR_LN7() volatile
    {
        OVRCLR ^= 1u << 7u;
    }

    /**
     * Set OVRCLR's LN6 bit.
     */
    inline void set_OVRCLR_LN6() volatile
    {
        OVRCLR |= 1u << 6u;
    }

    /**
     * Clear OVRCLR's LN6 bit.
     */
    inline void clear_OVRCLR_LN6() volatile
    {
        OVRCLR &= ~(1u << 6u);
    }

    /**
     * Toggle OVRCLR's LN6 bit.
     */
    inline void toggle_OVRCLR_LN6() volatile
    {
        OVRCLR ^= 1u << 6u;
    }

    /**
     * Set OVRCLR's LN5 bit.
     */
    inline void set_OVRCLR_LN5() volatile
    {
        OVRCLR |= 1u << 5u;
    }

    /**
     * Clear OVRCLR's LN5 bit.
     */
    inline void clear_OVRCLR_LN5() volatile
    {
        OVRCLR &= ~(1u << 5u);
    }

    /**
     * Toggle OVRCLR's LN5 bit.
     */
    inline void toggle_OVRCLR_LN5() volatile
    {
        OVRCLR ^= 1u << 5u;
    }

    /**
     * Set OVRCLR's LN4 bit.
     */
    inline void set_OVRCLR_LN4() volatile
    {
        OVRCLR |= 1u << 4u;
    }

    /**
     * Clear OVRCLR's LN4 bit.
     */
    inline void clear_OVRCLR_LN4() volatile
    {
        OVRCLR &= ~(1u << 4u);
    }

    /**
     * Toggle OVRCLR's LN4 bit.
     */
    inline void toggle_OVRCLR_LN4() volatile
    {
        OVRCLR ^= 1u << 4u;
    }

    /**
     * Set OVRCLR's LN3 bit.
     */
    inline void set_OVRCLR_LN3() volatile
    {
        OVRCLR |= 1u << 3u;
    }

    /**
     * Clear OVRCLR's LN3 bit.
     */
    inline void clear_OVRCLR_LN3() volatile
    {
        OVRCLR &= ~(1u << 3u);
    }

    /**
     * Toggle OVRCLR's LN3 bit.
     */
    inline void toggle_OVRCLR_LN3() volatile
    {
        OVRCLR ^= 1u << 3u;
    }

    /**
     * Set OVRCLR's LN2 bit.
     */
    inline void set_OVRCLR_LN2() volatile
    {
        OVRCLR |= 1u << 2u;
    }

    /**
     * Clear OVRCLR's LN2 bit.
     */
    inline void clear_OVRCLR_LN2() volatile
    {
        OVRCLR &= ~(1u << 2u);
    }

    /**
     * Toggle OVRCLR's LN2 bit.
     */
    inline void toggle_OVRCLR_LN2() volatile
    {
        OVRCLR ^= 1u << 2u;
    }

    /**
     * Set OVRCLR's LN1 bit.
     */
    inline void set_OVRCLR_LN1() volatile
    {
        OVRCLR |= 1u << 1u;
    }

    /**
     * Clear OVRCLR's LN1 bit.
     */
    inline void clear_OVRCLR_LN1() volatile
    {
        OVRCLR &= ~(1u << 1u);
    }

    /**
     * Toggle OVRCLR's LN1 bit.
     */
    inline void toggle_OVRCLR_LN1() volatile
    {
        OVRCLR ^= 1u << 1u;
    }

    /**
     * Set OVRCLR's LN0 bit.
     */
    inline void set_OVRCLR_LN0() volatile
    {
        OVRCLR |= 1u << 0u;
    }

    /**
     * Clear OVRCLR's LN0 bit.
     */
    inline void clear_OVRCLR_LN0() volatile
    {
        OVRCLR &= ~(1u << 0u);
    }

    /**
     * Toggle OVRCLR's LN0 bit.
     */
    inline void toggle_OVRCLR_LN0() volatile
    {
        OVRCLR ^= 1u << 0u;
    }

    /**
     * Set all of OVRCLR's bit fields.
     */
    inline void set_OVRCLR(bool LN11, bool LN10, bool LN9, bool LN8, bool LN7, bool LN6, bool LN5, bool LN4, bool LN3, bool LN2, bool LN1, bool LN0) volatile
    {
        uint32_t curr = OVRCLR;

        curr &= ~(0b1u << 11u);
        curr |= (LN11 & 0b1u) << 11u;
        curr &= ~(0b1u << 10u);
        curr |= (LN10 & 0b1u) << 10u;
        curr &= ~(0b1u << 9u);
        curr |= (LN9 & 0b1u) << 9u;
        curr &= ~(0b1u << 8u);
        curr |= (LN8 & 0b1u) << 8u;
        curr &= ~(0b1u << 7u);
        curr |= (LN7 & 0b1u) << 7u;
        curr &= ~(0b1u << 6u);
        curr |= (LN6 & 0b1u) << 6u;
        curr &= ~(0b1u << 5u);
        curr |= (LN5 & 0b1u) << 5u;
        curr &= ~(0b1u << 4u);
        curr |= (LN4 & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (LN3 & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (LN2 & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (LN1 & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (LN0 & 0b1u) << 0u;

        OVRCLR = curr;
    }

    /**
     * Get SRSEL0's RS7 field.
     */
    inline uint8_t get_SRSEL0_RS7() volatile
    {
        return (SRSEL0 >> 28u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS7 field.
     */
    inline void set_SRSEL0_RS7(uint8_t value) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 28u);
        curr |= (value & 0b1111u) << 28u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS6 field.
     */
    inline uint8_t get_SRSEL0_RS6() volatile
    {
        return (SRSEL0 >> 24u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS6 field.
     */
    inline void set_SRSEL0_RS6(uint8_t value) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 24u);
        curr |= (value & 0b1111u) << 24u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS5 field.
     */
    inline uint8_t get_SRSEL0_RS5() volatile
    {
        return (SRSEL0 >> 20u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS5 field.
     */
    inline void set_SRSEL0_RS5(uint8_t value) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 20u);
        curr |= (value & 0b1111u) << 20u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS4 field.
     */
    inline uint8_t get_SRSEL0_RS4() volatile
    {
        return (SRSEL0 >> 16u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS4 field.
     */
    inline void set_SRSEL0_RS4(uint8_t value) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 16u);
        curr |= (value & 0b1111u) << 16u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS3 field.
     */
    inline uint8_t get_SRSEL0_RS3() volatile
    {
        return (SRSEL0 >> 12u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS3 field.
     */
    inline void set_SRSEL0_RS3(uint8_t value) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 12u);
        curr |= (value & 0b1111u) << 12u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS2 field.
     */
    inline uint8_t get_SRSEL0_RS2() volatile
    {
        return (SRSEL0 >> 8u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS2 field.
     */
    inline void set_SRSEL0_RS2(uint8_t value) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS1 field.
     */
    inline uint8_t get_SRSEL0_RS1() volatile
    {
        return (SRSEL0 >> 4u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS1 field.
     */
    inline void set_SRSEL0_RS1(uint8_t value) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 4u);
        curr |= (value & 0b1111u) << 4u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL0's RS0 field.
     */
    inline uint8_t get_SRSEL0_RS0() volatile
    {
        return (SRSEL0 >> 0u) & 0b1111u;
    }

    /**
     * Set SRSEL0's RS0 field.
     */
    inline void set_SRSEL0_RS0(uint8_t value) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        SRSEL0 = curr;
    }

    /**
     * Get all of SRSEL0's bit fields.
     */
    inline void get_SRSEL0(uint8_t &RS7, uint8_t &RS6, uint8_t &RS5, uint8_t &RS4, uint8_t &RS3, uint8_t &RS2, uint8_t &RS1, uint8_t &RS0) volatile
    {
        uint32_t curr = SRSEL0;

        RS7 = (curr >> 28u) & 0b1111u;
        RS6 = (curr >> 24u) & 0b1111u;
        RS5 = (curr >> 20u) & 0b1111u;
        RS4 = (curr >> 16u) & 0b1111u;
        RS3 = (curr >> 12u) & 0b1111u;
        RS2 = (curr >> 8u) & 0b1111u;
        RS1 = (curr >> 4u) & 0b1111u;
        RS0 = (curr >> 0u) & 0b1111u;
    }

    /**
     * Set all of SRSEL0's bit fields.
     */
    inline void set_SRSEL0(uint8_t RS7, uint8_t RS6, uint8_t RS5, uint8_t RS4, uint8_t RS3, uint8_t RS2, uint8_t RS1, uint8_t RS0) volatile
    {
        uint32_t curr = SRSEL0;

        curr &= ~(0b1111u << 28u);
        curr |= (RS7 & 0b1111u) << 28u;
        curr &= ~(0b1111u << 24u);
        curr |= (RS6 & 0b1111u) << 24u;
        curr &= ~(0b1111u << 20u);
        curr |= (RS5 & 0b1111u) << 20u;
        curr &= ~(0b1111u << 16u);
        curr |= (RS4 & 0b1111u) << 16u;
        curr &= ~(0b1111u << 12u);
        curr |= (RS3 & 0b1111u) << 12u;
        curr &= ~(0b1111u << 8u);
        curr |= (RS2 & 0b1111u) << 8u;
        curr &= ~(0b1111u << 4u);
        curr |= (RS1 & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (RS0 & 0b1111u) << 0u;

        SRSEL0 = curr;
    }

    /**
     * Get SRSEL1's RS11 field.
     */
    inline uint8_t get_SRSEL1_RS11() volatile
    {
        return (SRSEL1 >> 12u) & 0b1111u;
    }

    /**
     * Set SRSEL1's RS11 field.
     */
    inline void set_SRSEL1_RS11(uint8_t value) volatile
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 12u);
        curr |= (value & 0b1111u) << 12u;

        SRSEL1 = curr;
    }

    /**
     * Get SRSEL1's RS10 field.
     */
    inline uint8_t get_SRSEL1_RS10() volatile
    {
        return (SRSEL1 >> 8u) & 0b1111u;
    }

    /**
     * Set SRSEL1's RS10 field.
     */
    inline void set_SRSEL1_RS10(uint8_t value) volatile
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        SRSEL1 = curr;
    }

    /**
     * Get SRSEL1's RS9 field.
     */
    inline uint8_t get_SRSEL1_RS9() volatile
    {
        return (SRSEL1 >> 4u) & 0b1111u;
    }

    /**
     * Set SRSEL1's RS9 field.
     */
    inline void set_SRSEL1_RS9(uint8_t value) volatile
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 4u);
        curr |= (value & 0b1111u) << 4u;

        SRSEL1 = curr;
    }

    /**
     * Get SRSEL1's RS8 field.
     */
    inline uint8_t get_SRSEL1_RS8() volatile
    {
        return (SRSEL1 >> 0u) & 0b1111u;
    }

    /**
     * Set SRSEL1's RS8 field.
     */
    inline void set_SRSEL1_RS8(uint8_t value) volatile
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 0u);
        curr |= (value & 0b1111u) << 0u;

        SRSEL1 = curr;
    }

    /**
     * Get all of SRSEL1's bit fields.
     */
    inline void get_SRSEL1(uint8_t &RS11, uint8_t &RS10, uint8_t &RS9, uint8_t &RS8) volatile
    {
        uint32_t curr = SRSEL1;

        RS11 = (curr >> 12u) & 0b1111u;
        RS10 = (curr >> 8u) & 0b1111u;
        RS9 = (curr >> 4u) & 0b1111u;
        RS8 = (curr >> 0u) & 0b1111u;
    }

    /**
     * Set all of SRSEL1's bit fields.
     */
    inline void set_SRSEL1(uint8_t RS11, uint8_t RS10, uint8_t RS9, uint8_t RS8) volatile
    {
        uint32_t curr = SRSEL1;

        curr &= ~(0b1111u << 12u);
        curr |= (RS11 & 0b1111u) << 12u;
        curr &= ~(0b1111u << 8u);
        curr |= (RS10 & 0b1111u) << 8u;
        curr &= ~(0b1111u << 4u);
        curr |= (RS9 & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (RS8 & 0b1111u) << 0u;

        SRSEL1 = curr;
    }

    /**
     * Get LNEN's LN11 bit.
     */
    inline DLR_LNEN_LN11 get_LNEN_LN11() volatile
    {
        return DLR_LNEN_LN11(LNEN & (1u << 11u));
    }

    /**
     * Set LNEN's LN11 bit.
     */
    inline void set_LNEN_LN11() volatile
    {
        LNEN |= 1u << 11u;
    }

    /**
     * Clear LNEN's LN11 bit.
     */
    inline void clear_LNEN_LN11() volatile
    {
        LNEN &= ~(1u << 11u);
    }

    /**
     * Toggle LNEN's LN11 bit.
     */
    inline void toggle_LNEN_LN11() volatile
    {
        LNEN ^= 1u << 11u;
    }

    /**
     * Get LNEN's LN10 bit.
     */
    inline DLR_LNEN_LN10 get_LNEN_LN10() volatile
    {
        return DLR_LNEN_LN10(LNEN & (1u << 10u));
    }

    /**
     * Set LNEN's LN10 bit.
     */
    inline void set_LNEN_LN10() volatile
    {
        LNEN |= 1u << 10u;
    }

    /**
     * Clear LNEN's LN10 bit.
     */
    inline void clear_LNEN_LN10() volatile
    {
        LNEN &= ~(1u << 10u);
    }

    /**
     * Toggle LNEN's LN10 bit.
     */
    inline void toggle_LNEN_LN10() volatile
    {
        LNEN ^= 1u << 10u;
    }

    /**
     * Get LNEN's LN9 bit.
     */
    inline DLR_LNEN_LN9 get_LNEN_LN9() volatile
    {
        return DLR_LNEN_LN9(LNEN & (1u << 9u));
    }

    /**
     * Set LNEN's LN9 bit.
     */
    inline void set_LNEN_LN9() volatile
    {
        LNEN |= 1u << 9u;
    }

    /**
     * Clear LNEN's LN9 bit.
     */
    inline void clear_LNEN_LN9() volatile
    {
        LNEN &= ~(1u << 9u);
    }

    /**
     * Toggle LNEN's LN9 bit.
     */
    inline void toggle_LNEN_LN9() volatile
    {
        LNEN ^= 1u << 9u;
    }

    /**
     * Get LNEN's LN8 bit.
     */
    inline DLR_LNEN_LN8 get_LNEN_LN8() volatile
    {
        return DLR_LNEN_LN8(LNEN & (1u << 8u));
    }

    /**
     * Set LNEN's LN8 bit.
     */
    inline void set_LNEN_LN8() volatile
    {
        LNEN |= 1u << 8u;
    }

    /**
     * Clear LNEN's LN8 bit.
     */
    inline void clear_LNEN_LN8() volatile
    {
        LNEN &= ~(1u << 8u);
    }

    /**
     * Toggle LNEN's LN8 bit.
     */
    inline void toggle_LNEN_LN8() volatile
    {
        LNEN ^= 1u << 8u;
    }

    /**
     * Get LNEN's LN7 bit.
     */
    inline DLR_LNEN_LN7 get_LNEN_LN7() volatile
    {
        return DLR_LNEN_LN7(LNEN & (1u << 7u));
    }

    /**
     * Set LNEN's LN7 bit.
     */
    inline void set_LNEN_LN7() volatile
    {
        LNEN |= 1u << 7u;
    }

    /**
     * Clear LNEN's LN7 bit.
     */
    inline void clear_LNEN_LN7() volatile
    {
        LNEN &= ~(1u << 7u);
    }

    /**
     * Toggle LNEN's LN7 bit.
     */
    inline void toggle_LNEN_LN7() volatile
    {
        LNEN ^= 1u << 7u;
    }

    /**
     * Get LNEN's LN6 bit.
     */
    inline DLR_LNEN_LN6 get_LNEN_LN6() volatile
    {
        return DLR_LNEN_LN6(LNEN & (1u << 6u));
    }

    /**
     * Set LNEN's LN6 bit.
     */
    inline void set_LNEN_LN6() volatile
    {
        LNEN |= 1u << 6u;
    }

    /**
     * Clear LNEN's LN6 bit.
     */
    inline void clear_LNEN_LN6() volatile
    {
        LNEN &= ~(1u << 6u);
    }

    /**
     * Toggle LNEN's LN6 bit.
     */
    inline void toggle_LNEN_LN6() volatile
    {
        LNEN ^= 1u << 6u;
    }

    /**
     * Get LNEN's LN5 bit.
     */
    inline DLR_LNEN_LN5 get_LNEN_LN5() volatile
    {
        return DLR_LNEN_LN5(LNEN & (1u << 5u));
    }

    /**
     * Set LNEN's LN5 bit.
     */
    inline void set_LNEN_LN5() volatile
    {
        LNEN |= 1u << 5u;
    }

    /**
     * Clear LNEN's LN5 bit.
     */
    inline void clear_LNEN_LN5() volatile
    {
        LNEN &= ~(1u << 5u);
    }

    /**
     * Toggle LNEN's LN5 bit.
     */
    inline void toggle_LNEN_LN5() volatile
    {
        LNEN ^= 1u << 5u;
    }

    /**
     * Get LNEN's LN4 bit.
     */
    inline DLR_LNEN_LN4 get_LNEN_LN4() volatile
    {
        return DLR_LNEN_LN4(LNEN & (1u << 4u));
    }

    /**
     * Set LNEN's LN4 bit.
     */
    inline void set_LNEN_LN4() volatile
    {
        LNEN |= 1u << 4u;
    }

    /**
     * Clear LNEN's LN4 bit.
     */
    inline void clear_LNEN_LN4() volatile
    {
        LNEN &= ~(1u << 4u);
    }

    /**
     * Toggle LNEN's LN4 bit.
     */
    inline void toggle_LNEN_LN4() volatile
    {
        LNEN ^= 1u << 4u;
    }

    /**
     * Get LNEN's LN3 bit.
     */
    inline DLR_LNEN_LN3 get_LNEN_LN3() volatile
    {
        return DLR_LNEN_LN3(LNEN & (1u << 3u));
    }

    /**
     * Set LNEN's LN3 bit.
     */
    inline void set_LNEN_LN3() volatile
    {
        LNEN |= 1u << 3u;
    }

    /**
     * Clear LNEN's LN3 bit.
     */
    inline void clear_LNEN_LN3() volatile
    {
        LNEN &= ~(1u << 3u);
    }

    /**
     * Toggle LNEN's LN3 bit.
     */
    inline void toggle_LNEN_LN3() volatile
    {
        LNEN ^= 1u << 3u;
    }

    /**
     * Get LNEN's LN2 bit.
     */
    inline DLR_LNEN_LN2 get_LNEN_LN2() volatile
    {
        return DLR_LNEN_LN2(LNEN & (1u << 2u));
    }

    /**
     * Set LNEN's LN2 bit.
     */
    inline void set_LNEN_LN2() volatile
    {
        LNEN |= 1u << 2u;
    }

    /**
     * Clear LNEN's LN2 bit.
     */
    inline void clear_LNEN_LN2() volatile
    {
        LNEN &= ~(1u << 2u);
    }

    /**
     * Toggle LNEN's LN2 bit.
     */
    inline void toggle_LNEN_LN2() volatile
    {
        LNEN ^= 1u << 2u;
    }

    /**
     * Get LNEN's LN1 bit.
     */
    inline DLR_LNEN_LN1 get_LNEN_LN1() volatile
    {
        return DLR_LNEN_LN1(LNEN & (1u << 1u));
    }

    /**
     * Set LNEN's LN1 bit.
     */
    inline void set_LNEN_LN1() volatile
    {
        LNEN |= 1u << 1u;
    }

    /**
     * Clear LNEN's LN1 bit.
     */
    inline void clear_LNEN_LN1() volatile
    {
        LNEN &= ~(1u << 1u);
    }

    /**
     * Toggle LNEN's LN1 bit.
     */
    inline void toggle_LNEN_LN1() volatile
    {
        LNEN ^= 1u << 1u;
    }

    /**
     * Get LNEN's LN0 bit.
     */
    inline DLR_LNEN_LN0 get_LNEN_LN0() volatile
    {
        return DLR_LNEN_LN0(LNEN & (1u << 0u));
    }

    /**
     * Set LNEN's LN0 bit.
     */
    inline void set_LNEN_LN0() volatile
    {
        LNEN |= 1u << 0u;
    }

    /**
     * Clear LNEN's LN0 bit.
     */
    inline void clear_LNEN_LN0() volatile
    {
        LNEN &= ~(1u << 0u);
    }

    /**
     * Toggle LNEN's LN0 bit.
     */
    inline void toggle_LNEN_LN0() volatile
    {
        LNEN ^= 1u << 0u;
    }

    /**
     * Get all of LNEN's bit fields.
     */
    inline void get_LNEN(DLR_LNEN_LN11 &LN11, DLR_LNEN_LN10 &LN10, DLR_LNEN_LN9 &LN9, DLR_LNEN_LN8 &LN8, DLR_LNEN_LN7 &LN7, DLR_LNEN_LN6 &LN6, DLR_LNEN_LN5 &LN5, DLR_LNEN_LN4 &LN4, DLR_LNEN_LN3 &LN3, DLR_LNEN_LN2 &LN2, DLR_LNEN_LN1 &LN1, DLR_LNEN_LN0 &LN0) volatile
    {
        uint32_t curr = LNEN;

        LN11 = DLR_LNEN_LN11(curr & (1u << 11u));
        LN10 = DLR_LNEN_LN10(curr & (1u << 10u));
        LN9 = DLR_LNEN_LN9(curr & (1u << 9u));
        LN8 = DLR_LNEN_LN8(curr & (1u << 8u));
        LN7 = DLR_LNEN_LN7(curr & (1u << 7u));
        LN6 = DLR_LNEN_LN6(curr & (1u << 6u));
        LN5 = DLR_LNEN_LN5(curr & (1u << 5u));
        LN4 = DLR_LNEN_LN4(curr & (1u << 4u));
        LN3 = DLR_LNEN_LN3(curr & (1u << 3u));
        LN2 = DLR_LNEN_LN2(curr & (1u << 2u));
        LN1 = DLR_LNEN_LN1(curr & (1u << 1u));
        LN0 = DLR_LNEN_LN0(curr & (1u << 0u));
    }

    /**
     * Set all of LNEN's bit fields.
     */
    inline void set_LNEN(DLR_LNEN_LN11 LN11, DLR_LNEN_LN10 LN10, DLR_LNEN_LN9 LN9, DLR_LNEN_LN8 LN8, DLR_LNEN_LN7 LN7, DLR_LNEN_LN6 LN6, DLR_LNEN_LN5 LN5, DLR_LNEN_LN4 LN4, DLR_LNEN_LN3 LN3, DLR_LNEN_LN2 LN2, DLR_LNEN_LN1 LN1, DLR_LNEN_LN0 LN0) volatile
    {
        uint32_t curr = LNEN;

        curr &= ~(0b1u << 11u);
        curr |= (std::to_underlying(LN11) & 0b1u) << 11u;
        curr &= ~(0b1u << 10u);
        curr |= (std::to_underlying(LN10) & 0b1u) << 10u;
        curr &= ~(0b1u << 9u);
        curr |= (std::to_underlying(LN9) & 0b1u) << 9u;
        curr &= ~(0b1u << 8u);
        curr |= (std::to_underlying(LN8) & 0b1u) << 8u;
        curr &= ~(0b1u << 7u);
        curr |= (std::to_underlying(LN7) & 0b1u) << 7u;
        curr &= ~(0b1u << 6u);
        curr |= (std::to_underlying(LN6) & 0b1u) << 6u;
        curr &= ~(0b1u << 5u);
        curr |= (std::to_underlying(LN5) & 0b1u) << 5u;
        curr &= ~(0b1u << 4u);
        curr |= (std::to_underlying(LN4) & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (std::to_underlying(LN3) & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (std::to_underlying(LN2) & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (std::to_underlying(LN1) & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (std::to_underlying(LN0) & 0b1u) << 0u;

        LNEN = curr;
    }
};

static_assert(sizeof(dlr) == dlr::size);

static volatile dlr *const DLR = reinterpret_cast<dlr *>(0x50004900);

}; // namespace XMC4700
