/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 */
#pragma once

#include "../enums/FLASH0_FCON_DCF.h"
#include "../enums/FLASH0_FCON_DDF.h"
#include "../enums/FLASH0_FCON_EOBM.h"
#include "../enums/FLASH0_FCON_ESLDIS.h"
#include "../enums/FLASH0_FCON_IDLE.h"
#include "../enums/FLASH0_FCON_PFDBERM.h"
#include "../enums/FLASH0_FCON_PFSBERM.h"
#include "../enums/FLASH0_FCON_PROERM.h"
#include "../enums/FLASH0_FCON_RPA.h"
#include "../enums/FLASH0_FCON_SLEEP.h"
#include "../enums/FLASH0_FCON_SQERM.h"
#include "../enums/FLASH0_FCON_VOPERM.h"
#include "../enums/FLASH0_FCON_WSECPF.h"
#include "../enums/FLASH0_FCON_WSPFLASH.h"
#include "../enums/FLASH0_FSR_ERASE.h"
#include "../enums/FLASH0_FSR_PBUSY.h"
#include "../enums/FLASH0_FSR_PFDBER.h"
#include "../enums/FLASH0_FSR_PFOPER.h"
#include "../enums/FLASH0_FSR_PFPAGE.h"
#include "../enums/FLASH0_FSR_PFSBER.h"
#include "../enums/FLASH0_FSR_PROER.h"
#include "../enums/FLASH0_FSR_PROG.h"
#include "../enums/FLASH0_FSR_PROIN.h"
#include "../enums/FLASH0_FSR_RPRODIS.h"
#include "../enums/FLASH0_FSR_RPROIN.h"
#include "../enums/FLASH0_FSR_SLM.h"
#include "../enums/FLASH0_FSR_SQER.h"
#include "../enums/FLASH0_FSR_VER.h"
#include "../enums/FLASH0_FSR_WPRODIS0.h"
#include "../enums/FLASH0_FSR_WPRODIS1.h"
#include "../enums/FLASH0_FSR_WPROIN0.h"
#include "../enums/FLASH0_FSR_WPROIN1.h"
#include "../enums/FLASH0_FSR_WPROIN2.h"
#include "../enums/FLASH0_MARP_MARGIN.h"
#include "../enums/FLASH0_MARP_TRAPDIS.h"
#include "../enums/FLASH0_PROCON0_RPRO.h"
#include "../enums/FLASH0_PROCON0_S0L.h"
#include "../enums/FLASH0_PROCON0_S10_S11L.h"
#include "../enums/FLASH0_PROCON0_S12_S13L.h"
#include "../enums/FLASH0_PROCON0_S14_S15L.h"
#include "../enums/FLASH0_PROCON0_S1L.h"
#include "../enums/FLASH0_PROCON0_S2L.h"
#include "../enums/FLASH0_PROCON0_S3L.h"
#include "../enums/FLASH0_PROCON0_S4L.h"
#include "../enums/FLASH0_PROCON0_S5L.h"
#include "../enums/FLASH0_PROCON0_S6L.h"
#include "../enums/FLASH0_PROCON0_S7L.h"
#include "../enums/FLASH0_PROCON0_S8L.h"
#include "../enums/FLASH0_PROCON0_S9L.h"
#include "../enums/FLASH0_PROCON1_PSR.h"
#include "../enums/FLASH0_PROCON1_S0L.h"
#include "../enums/FLASH0_PROCON1_S10_S11L.h"
#include "../enums/FLASH0_PROCON1_S12_S13L.h"
#include "../enums/FLASH0_PROCON1_S14_S15L.h"
#include "../enums/FLASH0_PROCON1_S1L.h"
#include "../enums/FLASH0_PROCON1_S2L.h"
#include "../enums/FLASH0_PROCON1_S3L.h"
#include "../enums/FLASH0_PROCON1_S4L.h"
#include "../enums/FLASH0_PROCON1_S5L.h"
#include "../enums/FLASH0_PROCON1_S6L.h"
#include "../enums/FLASH0_PROCON1_S7L.h"
#include "../enums/FLASH0_PROCON1_S8L.h"
#include "../enums/FLASH0_PROCON1_S9L.h"
#include "../enums/FLASH0_PROCON2_S0ROM.h"
#include "../enums/FLASH0_PROCON2_S10_S11ROM.h"
#include "../enums/FLASH0_PROCON2_S12_S13ROM.h"
#include "../enums/FLASH0_PROCON2_S14_S15ROM.h"
#include "../enums/FLASH0_PROCON2_S1ROM.h"
#include "../enums/FLASH0_PROCON2_S2ROM.h"
#include "../enums/FLASH0_PROCON2_S3ROM.h"
#include "../enums/FLASH0_PROCON2_S4ROM.h"
#include "../enums/FLASH0_PROCON2_S5ROM.h"
#include "../enums/FLASH0_PROCON2_S6ROM.h"
#include "../enums/FLASH0_PROCON2_S7ROM.h"
#include "../enums/FLASH0_PROCON2_S8ROM.h"
#include "../enums/FLASH0_PROCON2_S9ROM.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Flash Memory Controller
 */
struct [[gnu::packed]] flash
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;         /*!< flash's identifier. */
    static constexpr std::size_t size = 4140; /*!< flash's size in bytes. */

    /* Fields. */
    static constexpr std::size_t reserved_padding0_length = 1026;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    const uint32_t ID = {};                                          /*!< (read-only) Flash Module Identification Register */
    const uint32_t reserved_padding1 = {};
    const uint32_t FSR = {};                                         /*!< (read-only) Flash Status Register */
    uint32_t FCON;                                                   /*!< (read-write) Flash Configuration Register */
    uint32_t MARP;                                                   /*!< (read-write) Margin Control Register PFLASH */
    const uint32_t reserved_padding2 = {};
    const uint32_t PROCON0 = {};                                     /*!< (read-only) Flash Protection Configuration Register User 0 */
    const uint32_t PROCON1 = {};                                     /*!< (read-only) Flash Protection Configuration Register User 1 */
    const uint32_t PROCON2 = {};                                     /*!< (read-only) Flash Protection Configuration Register User 2 */

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
     * Get FSR's VER bit.
     */
    FLASH0_FSR_VER get_FSR_VER()
    {
        return FLASH0_FSR_VER(FSR & (1u << 31u));
    }

    /**
     * Get FSR's SLM bit.
     */
    FLASH0_FSR_SLM get_FSR_SLM()
    {
        return FLASH0_FSR_SLM(FSR & (1u << 28u));
    }

    /**
     * Get FSR's WPRODIS1 bit.
     */
    FLASH0_FSR_WPRODIS1 get_FSR_WPRODIS1()
    {
        return FLASH0_FSR_WPRODIS1(FSR & (1u << 26u));
    }

    /**
     * Get FSR's WPRODIS0 bit.
     */
    FLASH0_FSR_WPRODIS0 get_FSR_WPRODIS0()
    {
        return FLASH0_FSR_WPRODIS0(FSR & (1u << 25u));
    }

    /**
     * Get FSR's WPROIN2 bit.
     */
    FLASH0_FSR_WPROIN2 get_FSR_WPROIN2()
    {
        return FLASH0_FSR_WPROIN2(FSR & (1u << 23u));
    }

    /**
     * Get FSR's WPROIN1 bit.
     */
    FLASH0_FSR_WPROIN1 get_FSR_WPROIN1()
    {
        return FLASH0_FSR_WPROIN1(FSR & (1u << 22u));
    }

    /**
     * Get FSR's WPROIN0 bit.
     */
    FLASH0_FSR_WPROIN0 get_FSR_WPROIN0()
    {
        return FLASH0_FSR_WPROIN0(FSR & (1u << 21u));
    }

    /**
     * Get FSR's RPRODIS bit.
     */
    FLASH0_FSR_RPRODIS get_FSR_RPRODIS()
    {
        return FLASH0_FSR_RPRODIS(FSR & (1u << 19u));
    }

    /**
     * Get FSR's RPROIN bit.
     */
    FLASH0_FSR_RPROIN get_FSR_RPROIN()
    {
        return FLASH0_FSR_RPROIN(FSR & (1u << 18u));
    }

    /**
     * Get FSR's PROIN bit.
     */
    FLASH0_FSR_PROIN get_FSR_PROIN()
    {
        return FLASH0_FSR_PROIN(FSR & (1u << 16u));
    }

    /**
     * Get FSR's PFDBER bit.
     */
    FLASH0_FSR_PFDBER get_FSR_PFDBER()
    {
        return FLASH0_FSR_PFDBER(FSR & (1u << 14u));
    }

    /**
     * Get FSR's PFSBER bit.
     */
    FLASH0_FSR_PFSBER get_FSR_PFSBER()
    {
        return FLASH0_FSR_PFSBER(FSR & (1u << 12u));
    }

    /**
     * Get FSR's PROER bit.
     */
    FLASH0_FSR_PROER get_FSR_PROER()
    {
        return FLASH0_FSR_PROER(FSR & (1u << 11u));
    }

    /**
     * Get FSR's SQER bit.
     */
    FLASH0_FSR_SQER get_FSR_SQER()
    {
        return FLASH0_FSR_SQER(FSR & (1u << 10u));
    }

    /**
     * Get FSR's PFOPER bit.
     */
    FLASH0_FSR_PFOPER get_FSR_PFOPER()
    {
        return FLASH0_FSR_PFOPER(FSR & (1u << 8u));
    }

    /**
     * Get FSR's PFPAGE bit.
     */
    FLASH0_FSR_PFPAGE get_FSR_PFPAGE()
    {
        return FLASH0_FSR_PFPAGE(FSR & (1u << 6u));
    }

    /**
     * Get FSR's ERASE bit.
     */
    FLASH0_FSR_ERASE get_FSR_ERASE()
    {
        return FLASH0_FSR_ERASE(FSR & (1u << 5u));
    }

    /**
     * Get FSR's PROG bit.
     */
    FLASH0_FSR_PROG get_FSR_PROG()
    {
        return FLASH0_FSR_PROG(FSR & (1u << 4u));
    }

    /**
     * Get FSR's FABUSY bit.
     */
    bool get_FSR_FABUSY()
    {
        return FSR & (1u << 1u);
    }

    /**
     * Get FSR's PBUSY bit.
     */
    FLASH0_FSR_PBUSY get_FSR_PBUSY()
    {
        return FLASH0_FSR_PBUSY(FSR & (1u << 0u));
    }

    /**
     * Get FCON's EOBM bit.
     */
    FLASH0_FCON_EOBM get_FCON_EOBM()
    {
        return FLASH0_FCON_EOBM(FCON & (1u << 31u));
    }

    /**
     * Set FCON's EOBM bit.
     */
    inline void set_FCON_EOBM()
    {
        FCON |= 1u << 31u;
    }

    /**
     * Clear FCON's EOBM bit.
     */
    inline void clear_FCON_EOBM()
    {
        FCON &= ~(1u << 31u);
    }

    /**
     * Toggle FCON's EOBM bit.
     */
    inline void toggle_FCON_EOBM()
    {
        FCON ^= 1u << 31u;
    }

    /**
     * Get FCON's PFDBERM bit.
     */
    FLASH0_FCON_PFDBERM get_FCON_PFDBERM()
    {
        return FLASH0_FCON_PFDBERM(FCON & (1u << 29u));
    }

    /**
     * Set FCON's PFDBERM bit.
     */
    inline void set_FCON_PFDBERM()
    {
        FCON |= 1u << 29u;
    }

    /**
     * Clear FCON's PFDBERM bit.
     */
    inline void clear_FCON_PFDBERM()
    {
        FCON &= ~(1u << 29u);
    }

    /**
     * Toggle FCON's PFDBERM bit.
     */
    inline void toggle_FCON_PFDBERM()
    {
        FCON ^= 1u << 29u;
    }

    /**
     * Get FCON's PFSBERM bit.
     */
    FLASH0_FCON_PFSBERM get_FCON_PFSBERM()
    {
        return FLASH0_FCON_PFSBERM(FCON & (1u << 27u));
    }

    /**
     * Set FCON's PFSBERM bit.
     */
    inline void set_FCON_PFSBERM()
    {
        FCON |= 1u << 27u;
    }

    /**
     * Clear FCON's PFSBERM bit.
     */
    inline void clear_FCON_PFSBERM()
    {
        FCON &= ~(1u << 27u);
    }

    /**
     * Toggle FCON's PFSBERM bit.
     */
    inline void toggle_FCON_PFSBERM()
    {
        FCON ^= 1u << 27u;
    }

    /**
     * Get FCON's PROERM bit.
     */
    FLASH0_FCON_PROERM get_FCON_PROERM()
    {
        return FLASH0_FCON_PROERM(FCON & (1u << 26u));
    }

    /**
     * Set FCON's PROERM bit.
     */
    inline void set_FCON_PROERM()
    {
        FCON |= 1u << 26u;
    }

    /**
     * Clear FCON's PROERM bit.
     */
    inline void clear_FCON_PROERM()
    {
        FCON &= ~(1u << 26u);
    }

    /**
     * Toggle FCON's PROERM bit.
     */
    inline void toggle_FCON_PROERM()
    {
        FCON ^= 1u << 26u;
    }

    /**
     * Get FCON's SQERM bit.
     */
    FLASH0_FCON_SQERM get_FCON_SQERM()
    {
        return FLASH0_FCON_SQERM(FCON & (1u << 25u));
    }

    /**
     * Set FCON's SQERM bit.
     */
    inline void set_FCON_SQERM()
    {
        FCON |= 1u << 25u;
    }

    /**
     * Clear FCON's SQERM bit.
     */
    inline void clear_FCON_SQERM()
    {
        FCON &= ~(1u << 25u);
    }

    /**
     * Toggle FCON's SQERM bit.
     */
    inline void toggle_FCON_SQERM()
    {
        FCON ^= 1u << 25u;
    }

    /**
     * Get FCON's VOPERM bit.
     */
    FLASH0_FCON_VOPERM get_FCON_VOPERM()
    {
        return FLASH0_FCON_VOPERM(FCON & (1u << 24u));
    }

    /**
     * Set FCON's VOPERM bit.
     */
    inline void set_FCON_VOPERM()
    {
        FCON |= 1u << 24u;
    }

    /**
     * Clear FCON's VOPERM bit.
     */
    inline void clear_FCON_VOPERM()
    {
        FCON &= ~(1u << 24u);
    }

    /**
     * Toggle FCON's VOPERM bit.
     */
    inline void toggle_FCON_VOPERM()
    {
        FCON ^= 1u << 24u;
    }

    /**
     * Get FCON's DDF bit.
     */
    FLASH0_FCON_DDF get_FCON_DDF()
    {
        return FLASH0_FCON_DDF(FCON & (1u << 18u));
    }

    /**
     * Set FCON's DDF bit.
     */
    inline void set_FCON_DDF()
    {
        FCON |= 1u << 18u;
    }

    /**
     * Clear FCON's DDF bit.
     */
    inline void clear_FCON_DDF()
    {
        FCON &= ~(1u << 18u);
    }

    /**
     * Toggle FCON's DDF bit.
     */
    inline void toggle_FCON_DDF()
    {
        FCON ^= 1u << 18u;
    }

    /**
     * Get FCON's DCF bit.
     */
    FLASH0_FCON_DCF get_FCON_DCF()
    {
        return FLASH0_FCON_DCF(FCON & (1u << 17u));
    }

    /**
     * Set FCON's DCF bit.
     */
    inline void set_FCON_DCF()
    {
        FCON |= 1u << 17u;
    }

    /**
     * Clear FCON's DCF bit.
     */
    inline void clear_FCON_DCF()
    {
        FCON &= ~(1u << 17u);
    }

    /**
     * Toggle FCON's DCF bit.
     */
    inline void toggle_FCON_DCF()
    {
        FCON ^= 1u << 17u;
    }

    /**
     * Get FCON's RPA bit.
     */
    FLASH0_FCON_RPA get_FCON_RPA()
    {
        return FLASH0_FCON_RPA(FCON & (1u << 16u));
    }

    /**
     * Get FCON's SLEEP bit.
     */
    FLASH0_FCON_SLEEP get_FCON_SLEEP()
    {
        return FLASH0_FCON_SLEEP(FCON & (1u << 15u));
    }

    /**
     * Set FCON's SLEEP bit.
     */
    inline void set_FCON_SLEEP()
    {
        FCON |= 1u << 15u;
    }

    /**
     * Clear FCON's SLEEP bit.
     */
    inline void clear_FCON_SLEEP()
    {
        FCON &= ~(1u << 15u);
    }

    /**
     * Toggle FCON's SLEEP bit.
     */
    inline void toggle_FCON_SLEEP()
    {
        FCON ^= 1u << 15u;
    }

    /**
     * Get FCON's ESLDIS bit.
     */
    FLASH0_FCON_ESLDIS get_FCON_ESLDIS()
    {
        return FLASH0_FCON_ESLDIS(FCON & (1u << 14u));
    }

    /**
     * Set FCON's ESLDIS bit.
     */
    inline void set_FCON_ESLDIS()
    {
        FCON |= 1u << 14u;
    }

    /**
     * Clear FCON's ESLDIS bit.
     */
    inline void clear_FCON_ESLDIS()
    {
        FCON &= ~(1u << 14u);
    }

    /**
     * Toggle FCON's ESLDIS bit.
     */
    inline void toggle_FCON_ESLDIS()
    {
        FCON ^= 1u << 14u;
    }

    /**
     * Get FCON's IDLE bit.
     */
    FLASH0_FCON_IDLE get_FCON_IDLE()
    {
        return FLASH0_FCON_IDLE(FCON & (1u << 13u));
    }

    /**
     * Set FCON's IDLE bit.
     */
    inline void set_FCON_IDLE()
    {
        FCON |= 1u << 13u;
    }

    /**
     * Clear FCON's IDLE bit.
     */
    inline void clear_FCON_IDLE()
    {
        FCON &= ~(1u << 13u);
    }

    /**
     * Toggle FCON's IDLE bit.
     */
    inline void toggle_FCON_IDLE()
    {
        FCON ^= 1u << 13u;
    }

    /**
     * Get FCON's WSECPF bit.
     */
    FLASH0_FCON_WSECPF get_FCON_WSECPF()
    {
        return FLASH0_FCON_WSECPF(FCON & (1u << 4u));
    }

    /**
     * Set FCON's WSECPF bit.
     */
    inline void set_FCON_WSECPF()
    {
        FCON |= 1u << 4u;
    }

    /**
     * Clear FCON's WSECPF bit.
     */
    inline void clear_FCON_WSECPF()
    {
        FCON &= ~(1u << 4u);
    }

    /**
     * Toggle FCON's WSECPF bit.
     */
    inline void toggle_FCON_WSECPF()
    {
        FCON ^= 1u << 4u;
    }

    /**
     * Get FCON's WSPFLASH field.
     */
    FLASH0_FCON_WSPFLASH get_FCON_WSPFLASH()
    {
        return FLASH0_FCON_WSPFLASH((FCON >> 0u) & 0b1111u);
    }

    /**
     * Set FCON's WSPFLASH field.
     */
    inline void set_FCON_WSPFLASH(FLASH0_FCON_WSPFLASH value)
    {
        uint32_t curr = FCON;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        FCON = curr;
    }

    /**
     * Get MARP's TRAPDIS bit.
     */
    FLASH0_MARP_TRAPDIS get_MARP_TRAPDIS()
    {
        return FLASH0_MARP_TRAPDIS(MARP & (1u << 15u));
    }

    /**
     * Set MARP's TRAPDIS bit.
     */
    inline void set_MARP_TRAPDIS()
    {
        MARP |= 1u << 15u;
    }

    /**
     * Clear MARP's TRAPDIS bit.
     */
    inline void clear_MARP_TRAPDIS()
    {
        MARP &= ~(1u << 15u);
    }

    /**
     * Toggle MARP's TRAPDIS bit.
     */
    inline void toggle_MARP_TRAPDIS()
    {
        MARP ^= 1u << 15u;
    }

    /**
     * Get MARP's MARGIN field.
     */
    FLASH0_MARP_MARGIN get_MARP_MARGIN()
    {
        return FLASH0_MARP_MARGIN((MARP >> 0u) & 0b1111u);
    }

    /**
     * Set MARP's MARGIN field.
     */
    inline void set_MARP_MARGIN(FLASH0_MARP_MARGIN value)
    {
        uint32_t curr = MARP;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        MARP = curr;
    }

    /**
     * Get PROCON0's RPRO bit.
     */
    FLASH0_PROCON0_RPRO get_PROCON0_RPRO()
    {
        return FLASH0_PROCON0_RPRO(PROCON0 & (1u << 15u));
    }

    /**
     * Get PROCON0's S14_S15L bit.
     */
    FLASH0_PROCON0_S14_S15L get_PROCON0_S14_S15L()
    {
        return FLASH0_PROCON0_S14_S15L(PROCON0 & (1u << 12u));
    }

    /**
     * Get PROCON0's S12_S13L bit.
     */
    FLASH0_PROCON0_S12_S13L get_PROCON0_S12_S13L()
    {
        return FLASH0_PROCON0_S12_S13L(PROCON0 & (1u << 11u));
    }

    /**
     * Get PROCON0's S10_S11L bit.
     */
    FLASH0_PROCON0_S10_S11L get_PROCON0_S10_S11L()
    {
        return FLASH0_PROCON0_S10_S11L(PROCON0 & (1u << 10u));
    }

    /**
     * Get PROCON0's S9L bit.
     */
    FLASH0_PROCON0_S9L get_PROCON0_S9L()
    {
        return FLASH0_PROCON0_S9L(PROCON0 & (1u << 9u));
    }

    /**
     * Get PROCON0's S8L bit.
     */
    FLASH0_PROCON0_S8L get_PROCON0_S8L()
    {
        return FLASH0_PROCON0_S8L(PROCON0 & (1u << 8u));
    }

    /**
     * Get PROCON0's S7L bit.
     */
    FLASH0_PROCON0_S7L get_PROCON0_S7L()
    {
        return FLASH0_PROCON0_S7L(PROCON0 & (1u << 7u));
    }

    /**
     * Get PROCON0's S6L bit.
     */
    FLASH0_PROCON0_S6L get_PROCON0_S6L()
    {
        return FLASH0_PROCON0_S6L(PROCON0 & (1u << 6u));
    }

    /**
     * Get PROCON0's S5L bit.
     */
    FLASH0_PROCON0_S5L get_PROCON0_S5L()
    {
        return FLASH0_PROCON0_S5L(PROCON0 & (1u << 5u));
    }

    /**
     * Get PROCON0's S4L bit.
     */
    FLASH0_PROCON0_S4L get_PROCON0_S4L()
    {
        return FLASH0_PROCON0_S4L(PROCON0 & (1u << 4u));
    }

    /**
     * Get PROCON0's S3L bit.
     */
    FLASH0_PROCON0_S3L get_PROCON0_S3L()
    {
        return FLASH0_PROCON0_S3L(PROCON0 & (1u << 3u));
    }

    /**
     * Get PROCON0's S2L bit.
     */
    FLASH0_PROCON0_S2L get_PROCON0_S2L()
    {
        return FLASH0_PROCON0_S2L(PROCON0 & (1u << 2u));
    }

    /**
     * Get PROCON0's S1L bit.
     */
    FLASH0_PROCON0_S1L get_PROCON0_S1L()
    {
        return FLASH0_PROCON0_S1L(PROCON0 & (1u << 1u));
    }

    /**
     * Get PROCON0's S0L bit.
     */
    FLASH0_PROCON0_S0L get_PROCON0_S0L()
    {
        return FLASH0_PROCON0_S0L(PROCON0 & (1u << 0u));
    }

    /**
     * Get PROCON1's PSR bit.
     */
    FLASH0_PROCON1_PSR get_PROCON1_PSR()
    {
        return FLASH0_PROCON1_PSR(PROCON1 & (1u << 16u));
    }

    /**
     * Get PROCON1's S14_S15L bit.
     */
    FLASH0_PROCON1_S14_S15L get_PROCON1_S14_S15L()
    {
        return FLASH0_PROCON1_S14_S15L(PROCON1 & (1u << 12u));
    }

    /**
     * Get PROCON1's S12_S13L bit.
     */
    FLASH0_PROCON1_S12_S13L get_PROCON1_S12_S13L()
    {
        return FLASH0_PROCON1_S12_S13L(PROCON1 & (1u << 11u));
    }

    /**
     * Get PROCON1's S10_S11L bit.
     */
    FLASH0_PROCON1_S10_S11L get_PROCON1_S10_S11L()
    {
        return FLASH0_PROCON1_S10_S11L(PROCON1 & (1u << 10u));
    }

    /**
     * Get PROCON1's S9L bit.
     */
    FLASH0_PROCON1_S9L get_PROCON1_S9L()
    {
        return FLASH0_PROCON1_S9L(PROCON1 & (1u << 9u));
    }

    /**
     * Get PROCON1's S8L bit.
     */
    FLASH0_PROCON1_S8L get_PROCON1_S8L()
    {
        return FLASH0_PROCON1_S8L(PROCON1 & (1u << 8u));
    }

    /**
     * Get PROCON1's S7L bit.
     */
    FLASH0_PROCON1_S7L get_PROCON1_S7L()
    {
        return FLASH0_PROCON1_S7L(PROCON1 & (1u << 7u));
    }

    /**
     * Get PROCON1's S6L bit.
     */
    FLASH0_PROCON1_S6L get_PROCON1_S6L()
    {
        return FLASH0_PROCON1_S6L(PROCON1 & (1u << 6u));
    }

    /**
     * Get PROCON1's S5L bit.
     */
    FLASH0_PROCON1_S5L get_PROCON1_S5L()
    {
        return FLASH0_PROCON1_S5L(PROCON1 & (1u << 5u));
    }

    /**
     * Get PROCON1's S4L bit.
     */
    FLASH0_PROCON1_S4L get_PROCON1_S4L()
    {
        return FLASH0_PROCON1_S4L(PROCON1 & (1u << 4u));
    }

    /**
     * Get PROCON1's S3L bit.
     */
    FLASH0_PROCON1_S3L get_PROCON1_S3L()
    {
        return FLASH0_PROCON1_S3L(PROCON1 & (1u << 3u));
    }

    /**
     * Get PROCON1's S2L bit.
     */
    FLASH0_PROCON1_S2L get_PROCON1_S2L()
    {
        return FLASH0_PROCON1_S2L(PROCON1 & (1u << 2u));
    }

    /**
     * Get PROCON1's S1L bit.
     */
    FLASH0_PROCON1_S1L get_PROCON1_S1L()
    {
        return FLASH0_PROCON1_S1L(PROCON1 & (1u << 1u));
    }

    /**
     * Get PROCON1's S0L bit.
     */
    FLASH0_PROCON1_S0L get_PROCON1_S0L()
    {
        return FLASH0_PROCON1_S0L(PROCON1 & (1u << 0u));
    }

    /**
     * Get PROCON2's S14_S15ROM bit.
     */
    FLASH0_PROCON2_S14_S15ROM get_PROCON2_S14_S15ROM()
    {
        return FLASH0_PROCON2_S14_S15ROM(PROCON2 & (1u << 12u));
    }

    /**
     * Get PROCON2's S12_S13ROM bit.
     */
    FLASH0_PROCON2_S12_S13ROM get_PROCON2_S12_S13ROM()
    {
        return FLASH0_PROCON2_S12_S13ROM(PROCON2 & (1u << 11u));
    }

    /**
     * Get PROCON2's S10_S11ROM bit.
     */
    FLASH0_PROCON2_S10_S11ROM get_PROCON2_S10_S11ROM()
    {
        return FLASH0_PROCON2_S10_S11ROM(PROCON2 & (1u << 10u));
    }

    /**
     * Get PROCON2's S9ROM bit.
     */
    FLASH0_PROCON2_S9ROM get_PROCON2_S9ROM()
    {
        return FLASH0_PROCON2_S9ROM(PROCON2 & (1u << 9u));
    }

    /**
     * Get PROCON2's S8ROM bit.
     */
    FLASH0_PROCON2_S8ROM get_PROCON2_S8ROM()
    {
        return FLASH0_PROCON2_S8ROM(PROCON2 & (1u << 8u));
    }

    /**
     * Get PROCON2's S7ROM bit.
     */
    FLASH0_PROCON2_S7ROM get_PROCON2_S7ROM()
    {
        return FLASH0_PROCON2_S7ROM(PROCON2 & (1u << 7u));
    }

    /**
     * Get PROCON2's S6ROM bit.
     */
    FLASH0_PROCON2_S6ROM get_PROCON2_S6ROM()
    {
        return FLASH0_PROCON2_S6ROM(PROCON2 & (1u << 6u));
    }

    /**
     * Get PROCON2's S5ROM bit.
     */
    FLASH0_PROCON2_S5ROM get_PROCON2_S5ROM()
    {
        return FLASH0_PROCON2_S5ROM(PROCON2 & (1u << 5u));
    }

    /**
     * Get PROCON2's S4ROM bit.
     */
    FLASH0_PROCON2_S4ROM get_PROCON2_S4ROM()
    {
        return FLASH0_PROCON2_S4ROM(PROCON2 & (1u << 4u));
    }

    /**
     * Get PROCON2's S3ROM bit.
     */
    FLASH0_PROCON2_S3ROM get_PROCON2_S3ROM()
    {
        return FLASH0_PROCON2_S3ROM(PROCON2 & (1u << 3u));
    }

    /**
     * Get PROCON2's S2ROM bit.
     */
    FLASH0_PROCON2_S2ROM get_PROCON2_S2ROM()
    {
        return FLASH0_PROCON2_S2ROM(PROCON2 & (1u << 2u));
    }

    /**
     * Get PROCON2's S1ROM bit.
     */
    FLASH0_PROCON2_S1ROM get_PROCON2_S1ROM()
    {
        return FLASH0_PROCON2_S1ROM(PROCON2 & (1u << 1u));
    }

    /**
     * Get PROCON2's S0ROM bit.
     */
    FLASH0_PROCON2_S0ROM get_PROCON2_S0ROM()
    {
        return FLASH0_PROCON2_S0ROM(PROCON2 & (1u << 0u));
    }
};

static_assert(sizeof(flash) == flash::size);

static volatile flash *const FLASH0 = reinterpret_cast<flash *>(0x58001000);

}; // namespace XMC4700