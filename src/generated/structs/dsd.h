/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include "../enums/DSD_CGCFG_BREV.h"
#include "../enums/DSD_CGCFG_CGMOD.h"
#include "../enums/DSD_CGCFG_DIVCG.h"
#include "../enums/DSD_CGCFG_RUN.h"
#include "../enums/DSD_CGCFG_SGNCG.h"
#include "../enums/DSD_CGCFG_SIGPOL.h"
#include "../enums/DSD_CGCFG_STEPD.h"
#include "../enums/DSD_CGCFG_STEPS.h"
#include "../enums/DSD_CLC_DISR.h"
#include "../enums/DSD_CLC_DISS.h"
#include "../enums/DSD_CLC_EDIS.h"
#include "../enums/DSD_EVFLAGCLR_ALEC0.h"
#include "../enums/DSD_EVFLAGCLR_ALEC1.h"
#include "../enums/DSD_EVFLAGCLR_ALEC2.h"
#include "../enums/DSD_EVFLAGCLR_ALEC3.h"
#include "../enums/DSD_EVFLAGCLR_RESEC0.h"
#include "../enums/DSD_EVFLAGCLR_RESEC1.h"
#include "../enums/DSD_EVFLAGCLR_RESEC2.h"
#include "../enums/DSD_EVFLAGCLR_RESEC3.h"
#include "../enums/DSD_EVFLAG_ALEV0.h"
#include "../enums/DSD_EVFLAG_ALEV1.h"
#include "../enums/DSD_EVFLAG_ALEV2.h"
#include "../enums/DSD_EVFLAG_ALEV3.h"
#include "../enums/DSD_EVFLAG_RESEV0.h"
#include "../enums/DSD_EVFLAG_RESEV1.h"
#include "../enums/DSD_EVFLAG_RESEV2.h"
#include "../enums/DSD_EVFLAG_RESEV3.h"
#include "../enums/DSD_GLOBCFG_MCSEL.h"
#include "../enums/DSD_GLOBRC_CH0RUN.h"
#include "../enums/DSD_GLOBRC_CH1RUN.h"
#include "../enums/DSD_GLOBRC_CH2RUN.h"
#include "../enums/DSD_GLOBRC_CH3RUN.h"
#include "../enums/DSD_OCS_SUS.h"
#include "../enums/DSD_OCS_SUSSTA.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Delta Sigma Demodulator
 */
struct [[gnu::packed]] dsd
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;        /*!< dsd's identifier. */
    static constexpr std::size_t size = 232; /*!< dsd's size in bytes. */

    /* Fields. */
    uint32_t CLC;                                                    /*!< (read-write) Clock Control Register */
    const uint32_t reserved_padding0 = {};
    const uint32_t ID = {};                                          /*!< (read-only) Module Identification Register */
    static constexpr std::size_t reserved_padding1_length = 7;
    const uint32_t reserved_padding1[reserved_padding1_length] = {};
    uint32_t OCS;                                                    /*!< (read-write) OCDS Control and Status Register */
    static constexpr std::size_t reserved_padding2_length = 21;
    const uint32_t reserved_padding2[reserved_padding2_length] = {};
    uint32_t GLOBCFG;                                                /*!< (read-write) Global Configuration Register */
    const uint32_t reserved_padding3 = {};
    uint32_t GLOBRC;                                                 /*!< (read-write) Global Run Control Register */
    static constexpr std::size_t reserved_padding4_length = 5;
    const uint32_t reserved_padding4[reserved_padding4_length] = {};
    uint32_t CGCFG;                                                  /*!< (read-write) Carrier Generator Configuration Register */
    static constexpr std::size_t reserved_padding5_length = 15;
    const uint32_t reserved_padding5[reserved_padding5_length] = {};
    uint32_t EVFLAG;                                                 /*!< (read-write) Event Flag Register */
    uint32_t EVFLAGCLR;                                              /*!< (write-only) Event Flag Clear Register */

    /* Methods. */

    /**
     * Get CLC's EDIS bit.
     */
    DSD_CLC_EDIS get_CLC_EDIS()
    {
        return DSD_CLC_EDIS(CLC & (1u << 3u));
    }

    /**
     * Set CLC's EDIS bit.
     */
    inline void set_CLC_EDIS()
    {
        CLC |= 1u << 3u;
    }

    /**
     * Clear CLC's EDIS bit.
     */
    inline void clear_CLC_EDIS()
    {
        CLC &= ~(1u << 3u);
    }

    /**
     * Toggle CLC's EDIS bit.
     */
    inline void toggle_CLC_EDIS()
    {
        CLC ^= 1u << 3u;
    }

    /**
     * Get CLC's DISS bit.
     */
    DSD_CLC_DISS get_CLC_DISS()
    {
        return DSD_CLC_DISS(CLC & (1u << 1u));
    }

    /**
     * Get CLC's DISR bit.
     */
    DSD_CLC_DISR get_CLC_DISR()
    {
        return DSD_CLC_DISR(CLC & (1u << 0u));
    }

    /**
     * Set CLC's DISR bit.
     */
    inline void set_CLC_DISR()
    {
        CLC |= 1u << 0u;
    }

    /**
     * Clear CLC's DISR bit.
     */
    inline void clear_CLC_DISR()
    {
        CLC &= ~(1u << 0u);
    }

    /**
     * Toggle CLC's DISR bit.
     */
    inline void toggle_CLC_DISR()
    {
        CLC ^= 1u << 0u;
    }

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
     * Get OCS's SUSSTA bit.
     */
    DSD_OCS_SUSSTA get_OCS_SUSSTA()
    {
        return DSD_OCS_SUSSTA(OCS & (1u << 29u));
    }

    /**
     * Set OCS's SUS_P bit.
     */
    inline void set_OCS_SUS_P()
    {
        OCS |= 1u << 28u;
    }

    /**
     * Clear OCS's SUS_P bit.
     */
    inline void clear_OCS_SUS_P()
    {
        OCS &= ~(1u << 28u);
    }

    /**
     * Toggle OCS's SUS_P bit.
     */
    inline void toggle_OCS_SUS_P()
    {
        OCS ^= 1u << 28u;
    }

    /**
     * Get OCS's SUS field.
     */
    DSD_OCS_SUS get_OCS_SUS()
    {
        return DSD_OCS_SUS((OCS >> 24u) & 0b1111u);
    }

    /**
     * Set OCS's SUS field.
     */
    inline void set_OCS_SUS(DSD_OCS_SUS value)
    {
        uint32_t curr = OCS;

        curr &= ~(0b1111u << 24u);
        curr |= (std::to_underlying(value) & 0b1111u) << 24u;

        OCS = curr;
    }

    /**
     * Get GLOBCFG's MCSEL field.
     */
    DSD_GLOBCFG_MCSEL get_GLOBCFG_MCSEL()
    {
        return DSD_GLOBCFG_MCSEL((GLOBCFG >> 0u) & 0b111u);
    }

    /**
     * Set GLOBCFG's MCSEL field.
     */
    inline void set_GLOBCFG_MCSEL(DSD_GLOBCFG_MCSEL value)
    {
        uint32_t curr = GLOBCFG;

        curr &= ~(0b111u << 0u);
        curr |= (std::to_underlying(value) & 0b111u) << 0u;

        GLOBCFG = curr;
    }

    /**
     * Get GLOBRC's CH3RUN bit.
     */
    DSD_GLOBRC_CH3RUN get_GLOBRC_CH3RUN()
    {
        return DSD_GLOBRC_CH3RUN(GLOBRC & (1u << 3u));
    }

    /**
     * Set GLOBRC's CH3RUN bit.
     */
    inline void set_GLOBRC_CH3RUN()
    {
        GLOBRC |= 1u << 3u;
    }

    /**
     * Clear GLOBRC's CH3RUN bit.
     */
    inline void clear_GLOBRC_CH3RUN()
    {
        GLOBRC &= ~(1u << 3u);
    }

    /**
     * Toggle GLOBRC's CH3RUN bit.
     */
    inline void toggle_GLOBRC_CH3RUN()
    {
        GLOBRC ^= 1u << 3u;
    }

    /**
     * Get GLOBRC's CH2RUN bit.
     */
    DSD_GLOBRC_CH2RUN get_GLOBRC_CH2RUN()
    {
        return DSD_GLOBRC_CH2RUN(GLOBRC & (1u << 2u));
    }

    /**
     * Set GLOBRC's CH2RUN bit.
     */
    inline void set_GLOBRC_CH2RUN()
    {
        GLOBRC |= 1u << 2u;
    }

    /**
     * Clear GLOBRC's CH2RUN bit.
     */
    inline void clear_GLOBRC_CH2RUN()
    {
        GLOBRC &= ~(1u << 2u);
    }

    /**
     * Toggle GLOBRC's CH2RUN bit.
     */
    inline void toggle_GLOBRC_CH2RUN()
    {
        GLOBRC ^= 1u << 2u;
    }

    /**
     * Get GLOBRC's CH1RUN bit.
     */
    DSD_GLOBRC_CH1RUN get_GLOBRC_CH1RUN()
    {
        return DSD_GLOBRC_CH1RUN(GLOBRC & (1u << 1u));
    }

    /**
     * Set GLOBRC's CH1RUN bit.
     */
    inline void set_GLOBRC_CH1RUN()
    {
        GLOBRC |= 1u << 1u;
    }

    /**
     * Clear GLOBRC's CH1RUN bit.
     */
    inline void clear_GLOBRC_CH1RUN()
    {
        GLOBRC &= ~(1u << 1u);
    }

    /**
     * Toggle GLOBRC's CH1RUN bit.
     */
    inline void toggle_GLOBRC_CH1RUN()
    {
        GLOBRC ^= 1u << 1u;
    }

    /**
     * Get GLOBRC's CH0RUN bit.
     */
    DSD_GLOBRC_CH0RUN get_GLOBRC_CH0RUN()
    {
        return DSD_GLOBRC_CH0RUN(GLOBRC & (1u << 0u));
    }

    /**
     * Set GLOBRC's CH0RUN bit.
     */
    inline void set_GLOBRC_CH0RUN()
    {
        GLOBRC |= 1u << 0u;
    }

    /**
     * Clear GLOBRC's CH0RUN bit.
     */
    inline void clear_GLOBRC_CH0RUN()
    {
        GLOBRC &= ~(1u << 0u);
    }

    /**
     * Toggle GLOBRC's CH0RUN bit.
     */
    inline void toggle_GLOBRC_CH0RUN()
    {
        GLOBRC ^= 1u << 0u;
    }

    /**
     * Get CGCFG's SGNCG bit.
     */
    DSD_CGCFG_SGNCG get_CGCFG_SGNCG()
    {
        return DSD_CGCFG_SGNCG(CGCFG & (1u << 30u));
    }

    /**
     * Get CGCFG's STEPD bit.
     */
    DSD_CGCFG_STEPD get_CGCFG_STEPD()
    {
        return DSD_CGCFG_STEPD(CGCFG & (1u << 29u));
    }

    /**
     * Get CGCFG's STEPS bit.
     */
    DSD_CGCFG_STEPS get_CGCFG_STEPS()
    {
        return DSD_CGCFG_STEPS(CGCFG & (1u << 28u));
    }

    /**
     * Get CGCFG's STEPCOUNT field.
     */
    uint8_t get_CGCFG_STEPCOUNT()
    {
        return (CGCFG >> 24u) & 0b1111u;
    }

    /**
     * Get CGCFG's BITCOUNT field.
     */
    uint8_t get_CGCFG_BITCOUNT()
    {
        return (CGCFG >> 16u) & 0b11111u;
    }

    /**
     * Get CGCFG's RUN bit.
     */
    DSD_CGCFG_RUN get_CGCFG_RUN()
    {
        return DSD_CGCFG_RUN(CGCFG & (1u << 15u));
    }

    /**
     * Get CGCFG's DIVCG field.
     */
    DSD_CGCFG_DIVCG get_CGCFG_DIVCG()
    {
        return DSD_CGCFG_DIVCG((CGCFG >> 4u) & 0b1111u);
    }

    /**
     * Set CGCFG's DIVCG field.
     */
    inline void set_CGCFG_DIVCG(DSD_CGCFG_DIVCG value)
    {
        uint32_t curr = CGCFG;

        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(value) & 0b1111u) << 4u;

        CGCFG = curr;
    }

    /**
     * Get CGCFG's SIGPOL bit.
     */
    DSD_CGCFG_SIGPOL get_CGCFG_SIGPOL()
    {
        return DSD_CGCFG_SIGPOL(CGCFG & (1u << 3u));
    }

    /**
     * Set CGCFG's SIGPOL bit.
     */
    inline void set_CGCFG_SIGPOL()
    {
        CGCFG |= 1u << 3u;
    }

    /**
     * Clear CGCFG's SIGPOL bit.
     */
    inline void clear_CGCFG_SIGPOL()
    {
        CGCFG &= ~(1u << 3u);
    }

    /**
     * Toggle CGCFG's SIGPOL bit.
     */
    inline void toggle_CGCFG_SIGPOL()
    {
        CGCFG ^= 1u << 3u;
    }

    /**
     * Get CGCFG's BREV bit.
     */
    DSD_CGCFG_BREV get_CGCFG_BREV()
    {
        return DSD_CGCFG_BREV(CGCFG & (1u << 2u));
    }

    /**
     * Set CGCFG's BREV bit.
     */
    inline void set_CGCFG_BREV()
    {
        CGCFG |= 1u << 2u;
    }

    /**
     * Clear CGCFG's BREV bit.
     */
    inline void clear_CGCFG_BREV()
    {
        CGCFG &= ~(1u << 2u);
    }

    /**
     * Toggle CGCFG's BREV bit.
     */
    inline void toggle_CGCFG_BREV()
    {
        CGCFG ^= 1u << 2u;
    }

    /**
     * Get CGCFG's CGMOD field.
     */
    DSD_CGCFG_CGMOD get_CGCFG_CGMOD()
    {
        return DSD_CGCFG_CGMOD((CGCFG >> 0u) & 0b11u);
    }

    /**
     * Set CGCFG's CGMOD field.
     */
    inline void set_CGCFG_CGMOD(DSD_CGCFG_CGMOD value)
    {
        uint32_t curr = CGCFG;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        CGCFG = curr;
    }

    /**
     * Get EVFLAG's ALEV3 bit.
     */
    DSD_EVFLAG_ALEV3 get_EVFLAG_ALEV3()
    {
        return DSD_EVFLAG_ALEV3(EVFLAG & (1u << 19u));
    }

    /**
     * Set EVFLAG's ALEV3 bit.
     */
    inline void set_EVFLAG_ALEV3()
    {
        EVFLAG |= 1u << 19u;
    }

    /**
     * Clear EVFLAG's ALEV3 bit.
     */
    inline void clear_EVFLAG_ALEV3()
    {
        EVFLAG &= ~(1u << 19u);
    }

    /**
     * Toggle EVFLAG's ALEV3 bit.
     */
    inline void toggle_EVFLAG_ALEV3()
    {
        EVFLAG ^= 1u << 19u;
    }

    /**
     * Get EVFLAG's ALEV2 bit.
     */
    DSD_EVFLAG_ALEV2 get_EVFLAG_ALEV2()
    {
        return DSD_EVFLAG_ALEV2(EVFLAG & (1u << 18u));
    }

    /**
     * Set EVFLAG's ALEV2 bit.
     */
    inline void set_EVFLAG_ALEV2()
    {
        EVFLAG |= 1u << 18u;
    }

    /**
     * Clear EVFLAG's ALEV2 bit.
     */
    inline void clear_EVFLAG_ALEV2()
    {
        EVFLAG &= ~(1u << 18u);
    }

    /**
     * Toggle EVFLAG's ALEV2 bit.
     */
    inline void toggle_EVFLAG_ALEV2()
    {
        EVFLAG ^= 1u << 18u;
    }

    /**
     * Get EVFLAG's ALEV1 bit.
     */
    DSD_EVFLAG_ALEV1 get_EVFLAG_ALEV1()
    {
        return DSD_EVFLAG_ALEV1(EVFLAG & (1u << 17u));
    }

    /**
     * Set EVFLAG's ALEV1 bit.
     */
    inline void set_EVFLAG_ALEV1()
    {
        EVFLAG |= 1u << 17u;
    }

    /**
     * Clear EVFLAG's ALEV1 bit.
     */
    inline void clear_EVFLAG_ALEV1()
    {
        EVFLAG &= ~(1u << 17u);
    }

    /**
     * Toggle EVFLAG's ALEV1 bit.
     */
    inline void toggle_EVFLAG_ALEV1()
    {
        EVFLAG ^= 1u << 17u;
    }

    /**
     * Get EVFLAG's ALEV0 bit.
     */
    DSD_EVFLAG_ALEV0 get_EVFLAG_ALEV0()
    {
        return DSD_EVFLAG_ALEV0(EVFLAG & (1u << 16u));
    }

    /**
     * Set EVFLAG's ALEV0 bit.
     */
    inline void set_EVFLAG_ALEV0()
    {
        EVFLAG |= 1u << 16u;
    }

    /**
     * Clear EVFLAG's ALEV0 bit.
     */
    inline void clear_EVFLAG_ALEV0()
    {
        EVFLAG &= ~(1u << 16u);
    }

    /**
     * Toggle EVFLAG's ALEV0 bit.
     */
    inline void toggle_EVFLAG_ALEV0()
    {
        EVFLAG ^= 1u << 16u;
    }

    /**
     * Get EVFLAG's RESEV3 bit.
     */
    DSD_EVFLAG_RESEV3 get_EVFLAG_RESEV3()
    {
        return DSD_EVFLAG_RESEV3(EVFLAG & (1u << 3u));
    }

    /**
     * Set EVFLAG's RESEV3 bit.
     */
    inline void set_EVFLAG_RESEV3()
    {
        EVFLAG |= 1u << 3u;
    }

    /**
     * Clear EVFLAG's RESEV3 bit.
     */
    inline void clear_EVFLAG_RESEV3()
    {
        EVFLAG &= ~(1u << 3u);
    }

    /**
     * Toggle EVFLAG's RESEV3 bit.
     */
    inline void toggle_EVFLAG_RESEV3()
    {
        EVFLAG ^= 1u << 3u;
    }

    /**
     * Get EVFLAG's RESEV2 bit.
     */
    DSD_EVFLAG_RESEV2 get_EVFLAG_RESEV2()
    {
        return DSD_EVFLAG_RESEV2(EVFLAG & (1u << 2u));
    }

    /**
     * Set EVFLAG's RESEV2 bit.
     */
    inline void set_EVFLAG_RESEV2()
    {
        EVFLAG |= 1u << 2u;
    }

    /**
     * Clear EVFLAG's RESEV2 bit.
     */
    inline void clear_EVFLAG_RESEV2()
    {
        EVFLAG &= ~(1u << 2u);
    }

    /**
     * Toggle EVFLAG's RESEV2 bit.
     */
    inline void toggle_EVFLAG_RESEV2()
    {
        EVFLAG ^= 1u << 2u;
    }

    /**
     * Get EVFLAG's RESEV1 bit.
     */
    DSD_EVFLAG_RESEV1 get_EVFLAG_RESEV1()
    {
        return DSD_EVFLAG_RESEV1(EVFLAG & (1u << 1u));
    }

    /**
     * Set EVFLAG's RESEV1 bit.
     */
    inline void set_EVFLAG_RESEV1()
    {
        EVFLAG |= 1u << 1u;
    }

    /**
     * Clear EVFLAG's RESEV1 bit.
     */
    inline void clear_EVFLAG_RESEV1()
    {
        EVFLAG &= ~(1u << 1u);
    }

    /**
     * Toggle EVFLAG's RESEV1 bit.
     */
    inline void toggle_EVFLAG_RESEV1()
    {
        EVFLAG ^= 1u << 1u;
    }

    /**
     * Get EVFLAG's RESEV0 bit.
     */
    DSD_EVFLAG_RESEV0 get_EVFLAG_RESEV0()
    {
        return DSD_EVFLAG_RESEV0(EVFLAG & (1u << 0u));
    }

    /**
     * Set EVFLAG's RESEV0 bit.
     */
    inline void set_EVFLAG_RESEV0()
    {
        EVFLAG |= 1u << 0u;
    }

    /**
     * Clear EVFLAG's RESEV0 bit.
     */
    inline void clear_EVFLAG_RESEV0()
    {
        EVFLAG &= ~(1u << 0u);
    }

    /**
     * Toggle EVFLAG's RESEV0 bit.
     */
    inline void toggle_EVFLAG_RESEV0()
    {
        EVFLAG ^= 1u << 0u;
    }

    /**
     * Set EVFLAGCLR's ALEC3 bit.
     */
    inline void set_EVFLAGCLR_ALEC3()
    {
        EVFLAGCLR |= 1u << 19u;
    }

    /**
     * Clear EVFLAGCLR's ALEC3 bit.
     */
    inline void clear_EVFLAGCLR_ALEC3()
    {
        EVFLAGCLR &= ~(1u << 19u);
    }

    /**
     * Toggle EVFLAGCLR's ALEC3 bit.
     */
    inline void toggle_EVFLAGCLR_ALEC3()
    {
        EVFLAGCLR ^= 1u << 19u;
    }

    /**
     * Set EVFLAGCLR's ALEC2 bit.
     */
    inline void set_EVFLAGCLR_ALEC2()
    {
        EVFLAGCLR |= 1u << 18u;
    }

    /**
     * Clear EVFLAGCLR's ALEC2 bit.
     */
    inline void clear_EVFLAGCLR_ALEC2()
    {
        EVFLAGCLR &= ~(1u << 18u);
    }

    /**
     * Toggle EVFLAGCLR's ALEC2 bit.
     */
    inline void toggle_EVFLAGCLR_ALEC2()
    {
        EVFLAGCLR ^= 1u << 18u;
    }

    /**
     * Set EVFLAGCLR's ALEC1 bit.
     */
    inline void set_EVFLAGCLR_ALEC1()
    {
        EVFLAGCLR |= 1u << 17u;
    }

    /**
     * Clear EVFLAGCLR's ALEC1 bit.
     */
    inline void clear_EVFLAGCLR_ALEC1()
    {
        EVFLAGCLR &= ~(1u << 17u);
    }

    /**
     * Toggle EVFLAGCLR's ALEC1 bit.
     */
    inline void toggle_EVFLAGCLR_ALEC1()
    {
        EVFLAGCLR ^= 1u << 17u;
    }

    /**
     * Set EVFLAGCLR's ALEC0 bit.
     */
    inline void set_EVFLAGCLR_ALEC0()
    {
        EVFLAGCLR |= 1u << 16u;
    }

    /**
     * Clear EVFLAGCLR's ALEC0 bit.
     */
    inline void clear_EVFLAGCLR_ALEC0()
    {
        EVFLAGCLR &= ~(1u << 16u);
    }

    /**
     * Toggle EVFLAGCLR's ALEC0 bit.
     */
    inline void toggle_EVFLAGCLR_ALEC0()
    {
        EVFLAGCLR ^= 1u << 16u;
    }

    /**
     * Set EVFLAGCLR's RESEC3 bit.
     */
    inline void set_EVFLAGCLR_RESEC3()
    {
        EVFLAGCLR |= 1u << 3u;
    }

    /**
     * Clear EVFLAGCLR's RESEC3 bit.
     */
    inline void clear_EVFLAGCLR_RESEC3()
    {
        EVFLAGCLR &= ~(1u << 3u);
    }

    /**
     * Toggle EVFLAGCLR's RESEC3 bit.
     */
    inline void toggle_EVFLAGCLR_RESEC3()
    {
        EVFLAGCLR ^= 1u << 3u;
    }

    /**
     * Set EVFLAGCLR's RESEC2 bit.
     */
    inline void set_EVFLAGCLR_RESEC2()
    {
        EVFLAGCLR |= 1u << 2u;
    }

    /**
     * Clear EVFLAGCLR's RESEC2 bit.
     */
    inline void clear_EVFLAGCLR_RESEC2()
    {
        EVFLAGCLR &= ~(1u << 2u);
    }

    /**
     * Toggle EVFLAGCLR's RESEC2 bit.
     */
    inline void toggle_EVFLAGCLR_RESEC2()
    {
        EVFLAGCLR ^= 1u << 2u;
    }

    /**
     * Set EVFLAGCLR's RESEC1 bit.
     */
    inline void set_EVFLAGCLR_RESEC1()
    {
        EVFLAGCLR |= 1u << 1u;
    }

    /**
     * Clear EVFLAGCLR's RESEC1 bit.
     */
    inline void clear_EVFLAGCLR_RESEC1()
    {
        EVFLAGCLR &= ~(1u << 1u);
    }

    /**
     * Toggle EVFLAGCLR's RESEC1 bit.
     */
    inline void toggle_EVFLAGCLR_RESEC1()
    {
        EVFLAGCLR ^= 1u << 1u;
    }

    /**
     * Set EVFLAGCLR's RESEC0 bit.
     */
    inline void set_EVFLAGCLR_RESEC0()
    {
        EVFLAGCLR |= 1u << 0u;
    }

    /**
     * Clear EVFLAGCLR's RESEC0 bit.
     */
    inline void clear_EVFLAGCLR_RESEC0()
    {
        EVFLAGCLR &= ~(1u << 0u);
    }

    /**
     * Toggle EVFLAGCLR's RESEC0 bit.
     */
    inline void toggle_EVFLAGCLR_RESEC0()
    {
        EVFLAGCLR ^= 1u << 0u;
    }
};

static_assert(sizeof(dsd) == dsd::size);

static volatile dsd *const DSD = reinterpret_cast<dsd *>(0x40008000);

}; // namespace XMC4700
