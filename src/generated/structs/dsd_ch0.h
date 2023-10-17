/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include "../enums/DSD_CH0_DICFG_CSRC.h"
#include "../enums/DSD_CH0_DICFG_DSRC.h"
#include "../enums/DSD_CH0_DICFG_DSWC.h"
#include "../enums/DSD_CH0_DICFG_ITRMODE.h"
#include "../enums/DSD_CH0_DICFG_SCWC.h"
#include "../enums/DSD_CH0_DICFG_STROBE.h"
#include "../enums/DSD_CH0_DICFG_TRWC.h"
#include "../enums/DSD_CH0_DICFG_TSTRMODE.h"
#include "../enums/DSD_CH0_FCFGA_EGT.h"
#include "../enums/DSD_CH0_FCFGA_ESEL.h"
#include "../enums/DSD_CH0_FCFGA_SRGA.h"
#include "../enums/DSD_CH0_FCFGC_CFEN.h"
#include "../enums/DSD_CH0_FCFGC_CFMC.h"
#include "../enums/DSD_CH0_FCFGC_SRGM.h"
#include "../enums/DSD_CH0_IWCTR_INTEN.h"
#include "../enums/DSD_CH0_IWCTR_IWS.h"
#include "../enums/DSD_CH0_MODCFG_DIVM.h"
#include "../enums/DSD_CH0_MODCFG_DWC.h"
#include "../enums/DSD_CH0_RECTCFG_RFEN.h"
#include "../enums/DSD_CH0_RECTCFG_SDVAL.h"
#include "../enums/DSD_CH0_RECTCFG_SGND.h"
#include "../enums/DSD_CH0_RECTCFG_SSRC.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Delta Sigma Demodulator
 */
struct [[gnu::packed]] dsd_ch0
{
    /* Constant attributes. */
    static constexpr std::size_t size = 172; /*!< dsd_ch0's size in bytes. */

    /* Fields. */
    uint32_t MODCFG; /*!< (read-write) Modulator Configuration Register */
    const uint32_t reserved_padding0 = {};
    uint32_t
        DICFG; /*!< (read-write) Demodulator Input Configuration Register */
    static constexpr std::size_t reserved_padding1_length = 2;
    const uint32_t reserved_padding1[reserved_padding1_length] = {};
    uint32_t FCFGC; /*!< (read-write) Filter Configuration Register, Main CIC
                       Filter */
    uint32_t FCFGA; /*!< (read-write) Filter Configuration Register, Auxiliary
                       Filter */
    const uint32_t reserved_padding2 = {};
    uint32_t IWCTR; /*!< (read-write) Integration Window Control Register */
    const uint32_t reserved_padding3 = {};
    uint32_t BOUNDSEL; /*!< (read-write) Boundary Select Register */
    const uint32_t reserved_padding4 = {};
    const uint32_t RESM = {}; /*!< (read-only) Result Register, Main Filter */
    const uint32_t reserved_padding5 = {};
    uint32_t OFFM; /*!< (read-write) Offset Register, Main Filter */
    const uint32_t reserved_padding6 = {};
    const uint32_t RESA =
        {}; /*!< (read-only) Result Register, Auxiliary Filter */
    static constexpr std::size_t reserved_padding7_length = 3;
    const uint32_t reserved_padding7[reserved_padding7_length] = {};
    const uint32_t TSTMP = {}; /*!< (read-only) Time-Stamp Register */
    static constexpr std::size_t reserved_padding8_length = 19;
    const uint32_t reserved_padding8[reserved_padding8_length] = {};
    uint32_t
        CGSYNC; /*!< (read-write) Carrier Generator Synchronization Register */
    const uint32_t reserved_padding9 = {};
    uint32_t RECTCFG; /*!< (read-write) Rectification Configuration Register */

    /* Methods. */

    /**
     * Set MODCFG's DWC bit.
     *
     * Write Control for Divider Factor
     */
    inline void set_MODCFG_DWC() volatile
    {
        MODCFG |= 1u << 23u;
    }

    /**
     * Clear MODCFG's DWC bit.
     *
     * Write Control for Divider Factor
     */
    inline void clear_MODCFG_DWC() volatile
    {
        MODCFG &= ~(1u << 23u);
    }

    /**
     * Toggle MODCFG's DWC bit.
     *
     * Write Control for Divider Factor
     */
    inline void toggle_MODCFG_DWC() volatile
    {
        MODCFG ^= 1u << 23u;
    }

    /**
     * Get MODCFG's DIVM field.
     */
    inline DSD_CH0_MODCFG_DIVM get_MODCFG_DIVM() volatile
    {
        return DSD_CH0_MODCFG_DIVM((MODCFG >> 16u) & 0b1111u);
    }

    /**
     * Set MODCFG's DIVM field.
     *
     * Divider Factor for Modulator Clock
     */
    inline void set_MODCFG_DIVM(DSD_CH0_MODCFG_DIVM value) volatile
    {
        uint32_t curr = MODCFG;

        curr &= ~(0b1111u << 16u);
        curr |= (std::to_underlying(value) & 0b1111u) << 16u;

        MODCFG = curr;
    }

    /**
     * Set all of MODCFG's bit fields.
     *
     * (read-write) Modulator Configuration Register
     */
    inline void set_MODCFG(DSD_CH0_MODCFG_DWC DWC,
                           DSD_CH0_MODCFG_DIVM DIVM) volatile
    {
        uint32_t curr = MODCFG;

        curr &= ~(0b1u << 23u);
        curr |= (std::to_underlying(DWC) & 0b1u) << 23u;
        curr &= ~(0b1111u << 16u);
        curr |= (std::to_underlying(DIVM) & 0b1111u) << 16u;

        MODCFG = curr;
    }

    /**
     * Set DICFG's SCWC bit.
     *
     * Write Control for Strobe/Clock Selection
     */
    inline void set_DICFG_SCWC() volatile
    {
        DICFG |= 1u << 31u;
    }

    /**
     * Clear DICFG's SCWC bit.
     *
     * Write Control for Strobe/Clock Selection
     */
    inline void clear_DICFG_SCWC() volatile
    {
        DICFG &= ~(1u << 31u);
    }

    /**
     * Toggle DICFG's SCWC bit.
     *
     * Write Control for Strobe/Clock Selection
     */
    inline void toggle_DICFG_SCWC() volatile
    {
        DICFG ^= 1u << 31u;
    }

    /**
     * Get DICFG's STROBE field.
     */
    inline DSD_CH0_DICFG_STROBE get_DICFG_STROBE() volatile
    {
        return DSD_CH0_DICFG_STROBE((DICFG >> 20u) & 0b1111u);
    }

    /**
     * Set DICFG's STROBE field.
     *
     * Data Strobe Generatoion Mode
     */
    inline void set_DICFG_STROBE(DSD_CH0_DICFG_STROBE value) volatile
    {
        uint32_t curr = DICFG;

        curr &= ~(0b1111u << 20u);
        curr |= (std::to_underlying(value) & 0b1111u) << 20u;

        DICFG = curr;
    }

    /**
     * Get DICFG's CSRC field.
     */
    inline DSD_CH0_DICFG_CSRC get_DICFG_CSRC() volatile
    {
        return DSD_CH0_DICFG_CSRC((DICFG >> 16u) & 0b1111u);
    }

    /**
     * Set DICFG's CSRC field.
     *
     * Sample Clock Source Select
     */
    inline void set_DICFG_CSRC(DSD_CH0_DICFG_CSRC value) volatile
    {
        uint32_t curr = DICFG;

        curr &= ~(0b1111u << 16u);
        curr |= (std::to_underlying(value) & 0b1111u) << 16u;

        DICFG = curr;
    }

    /**
     * Set DICFG's TRWC bit.
     *
     * Write Control for Trigger Parameters
     */
    inline void set_DICFG_TRWC() volatile
    {
        DICFG |= 1u << 15u;
    }

    /**
     * Clear DICFG's TRWC bit.
     *
     * Write Control for Trigger Parameters
     */
    inline void clear_DICFG_TRWC() volatile
    {
        DICFG &= ~(1u << 15u);
    }

    /**
     * Toggle DICFG's TRWC bit.
     *
     * Write Control for Trigger Parameters
     */
    inline void toggle_DICFG_TRWC() volatile
    {
        DICFG ^= 1u << 15u;
    }

    /**
     * Get DICFG's TRSEL field.
     */
    inline uint8_t get_DICFG_TRSEL() volatile
    {
        return (DICFG >> 12u) & 0b111u;
    }

    /**
     * Set DICFG's TRSEL field.
     *
     * Trigger Select
     */
    inline void set_DICFG_TRSEL(uint8_t value) volatile
    {
        uint32_t curr = DICFG;

        curr &= ~(0b111u << 12u);
        curr |= (value & 0b111u) << 12u;

        DICFG = curr;
    }

    /**
     * Get DICFG's TSTRMODE field.
     */
    inline DSD_CH0_DICFG_TSTRMODE get_DICFG_TSTRMODE() volatile
    {
        return DSD_CH0_DICFG_TSTRMODE((DICFG >> 10u) & 0b11u);
    }

    /**
     * Set DICFG's TSTRMODE field.
     *
     * Timestamp Trigger Mode
     */
    inline void set_DICFG_TSTRMODE(DSD_CH0_DICFG_TSTRMODE value) volatile
    {
        uint32_t curr = DICFG;

        curr &= ~(0b11u << 10u);
        curr |= (std::to_underlying(value) & 0b11u) << 10u;

        DICFG = curr;
    }

    /**
     * Get DICFG's ITRMODE field.
     */
    inline DSD_CH0_DICFG_ITRMODE get_DICFG_ITRMODE() volatile
    {
        return DSD_CH0_DICFG_ITRMODE((DICFG >> 8u) & 0b11u);
    }

    /**
     * Set DICFG's ITRMODE field.
     *
     * Integrator Trigger Mode
     */
    inline void set_DICFG_ITRMODE(DSD_CH0_DICFG_ITRMODE value) volatile
    {
        uint32_t curr = DICFG;

        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(value) & 0b11u) << 8u;

        DICFG = curr;
    }

    /**
     * Set DICFG's DSWC bit.
     *
     * Write Control for Data Selection
     */
    inline void set_DICFG_DSWC() volatile
    {
        DICFG |= 1u << 7u;
    }

    /**
     * Clear DICFG's DSWC bit.
     *
     * Write Control for Data Selection
     */
    inline void clear_DICFG_DSWC() volatile
    {
        DICFG &= ~(1u << 7u);
    }

    /**
     * Toggle DICFG's DSWC bit.
     *
     * Write Control for Data Selection
     */
    inline void toggle_DICFG_DSWC() volatile
    {
        DICFG ^= 1u << 7u;
    }

    /**
     * Get DICFG's DSRC field.
     */
    inline DSD_CH0_DICFG_DSRC get_DICFG_DSRC() volatile
    {
        return DSD_CH0_DICFG_DSRC((DICFG >> 0u) & 0b1111u);
    }

    /**
     * Set DICFG's DSRC field.
     *
     * Input Data Source Select
     */
    inline void set_DICFG_DSRC(DSD_CH0_DICFG_DSRC value) volatile
    {
        uint32_t curr = DICFG;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        DICFG = curr;
    }

    /**
     * Get all of DICFG's bit fields.
     */
    inline void get_DICFG(DSD_CH0_DICFG_STROBE &STROBE,
                          DSD_CH0_DICFG_CSRC &CSRC, uint8_t &TRSEL,
                          DSD_CH0_DICFG_TSTRMODE &TSTRMODE,
                          DSD_CH0_DICFG_ITRMODE &ITRMODE,
                          DSD_CH0_DICFG_DSRC &DSRC) volatile
    {
        uint32_t curr = DICFG;

        STROBE = DSD_CH0_DICFG_STROBE((curr >> 20u) & 0b1111u);
        CSRC = DSD_CH0_DICFG_CSRC((curr >> 16u) & 0b1111u);
        TRSEL = (curr >> 12u) & 0b111u;
        TSTRMODE = DSD_CH0_DICFG_TSTRMODE((curr >> 10u) & 0b11u);
        ITRMODE = DSD_CH0_DICFG_ITRMODE((curr >> 8u) & 0b11u);
        DSRC = DSD_CH0_DICFG_DSRC((curr >> 0u) & 0b1111u);
    }

    /**
     * Set all of DICFG's bit fields.
     *
     * (read-write) Demodulator Input Configuration Register
     */
    inline void set_DICFG(DSD_CH0_DICFG_SCWC SCWC, DSD_CH0_DICFG_STROBE STROBE,
                          DSD_CH0_DICFG_CSRC CSRC, DSD_CH0_DICFG_TRWC TRWC,
                          uint8_t TRSEL, DSD_CH0_DICFG_TSTRMODE TSTRMODE,
                          DSD_CH0_DICFG_ITRMODE ITRMODE,
                          DSD_CH0_DICFG_DSWC DSWC,
                          DSD_CH0_DICFG_DSRC DSRC) volatile
    {
        uint32_t curr = DICFG;

        curr &= ~(0b1u << 31u);
        curr |= (std::to_underlying(SCWC) & 0b1u) << 31u;
        curr &= ~(0b1111u << 20u);
        curr |= (std::to_underlying(STROBE) & 0b1111u) << 20u;
        curr &= ~(0b1111u << 16u);
        curr |= (std::to_underlying(CSRC) & 0b1111u) << 16u;
        curr &= ~(0b1u << 15u);
        curr |= (std::to_underlying(TRWC) & 0b1u) << 15u;
        curr &= ~(0b111u << 12u);
        curr |= (TRSEL & 0b111u) << 12u;
        curr &= ~(0b11u << 10u);
        curr |= (std::to_underlying(TSTRMODE) & 0b11u) << 10u;
        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(ITRMODE) & 0b11u) << 8u;
        curr &= ~(0b1u << 7u);
        curr |= (std::to_underlying(DSWC) & 0b1u) << 7u;
        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(DSRC) & 0b1111u) << 0u;

        DICFG = curr;
    }

    /**
     * Get FCFGC's CFMDCNT field.
     */
    inline uint8_t get_FCFGC_CFMDCNT() volatile
    {
        return (FCFGC >> 24u) & 0b11111111u;
    }

    /**
     * Get FCFGC's CFMSV field.
     */
    inline uint8_t get_FCFGC_CFMSV() volatile
    {
        return (FCFGC >> 16u) & 0b11111111u;
    }

    /**
     * Set FCFGC's CFMSV field.
     *
     * CIC Filter (Main Chain) Start Value
     */
    inline void set_FCFGC_CFMSV(uint8_t value) volatile
    {
        uint32_t curr = FCFGC;

        curr &= ~(0b11111111u << 16u);
        curr |= (value & 0b11111111u) << 16u;

        FCFGC = curr;
    }

    /**
     * Get FCFGC's SRGM field.
     */
    inline DSD_CH0_FCFGC_SRGM get_FCFGC_SRGM() volatile
    {
        return DSD_CH0_FCFGC_SRGM((FCFGC >> 14u) & 0b11u);
    }

    /**
     * Set FCFGC's SRGM field.
     *
     * Service Request Generation Main Chain
     */
    inline void set_FCFGC_SRGM(DSD_CH0_FCFGC_SRGM value) volatile
    {
        uint32_t curr = FCFGC;

        curr &= ~(0b11u << 14u);
        curr |= (std::to_underlying(value) & 0b11u) << 14u;

        FCFGC = curr;
    }

    /**
     * Get FCFGC's CFEN bit.
     */
    inline DSD_CH0_FCFGC_CFEN get_FCFGC_CFEN() volatile
    {
        return DSD_CH0_FCFGC_CFEN(FCFGC & (1u << 10u));
    }

    /**
     * Set FCFGC's CFEN bit.
     *
     * CIC Filter Enable
     */
    inline void set_FCFGC_CFEN() volatile
    {
        FCFGC |= 1u << 10u;
    }

    /**
     * Clear FCFGC's CFEN bit.
     *
     * CIC Filter Enable
     */
    inline void clear_FCFGC_CFEN() volatile
    {
        FCFGC &= ~(1u << 10u);
    }

    /**
     * Toggle FCFGC's CFEN bit.
     *
     * CIC Filter Enable
     */
    inline void toggle_FCFGC_CFEN() volatile
    {
        FCFGC ^= 1u << 10u;
    }

    /**
     * Get FCFGC's CFMC field.
     */
    inline DSD_CH0_FCFGC_CFMC get_FCFGC_CFMC() volatile
    {
        return DSD_CH0_FCFGC_CFMC((FCFGC >> 8u) & 0b11u);
    }

    /**
     * Set FCFGC's CFMC field.
     *
     * CIC Filter (Main Chain) Configuration
     */
    inline void set_FCFGC_CFMC(DSD_CH0_FCFGC_CFMC value) volatile
    {
        uint32_t curr = FCFGC;

        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(value) & 0b11u) << 8u;

        FCFGC = curr;
    }

    /**
     * Get FCFGC's CFMDF field.
     */
    inline uint8_t get_FCFGC_CFMDF() volatile
    {
        return (FCFGC >> 0u) & 0b11111111u;
    }

    /**
     * Set FCFGC's CFMDF field.
     *
     * CIC Filter (Main Chain) Decimation Factor
     */
    inline void set_FCFGC_CFMDF(uint8_t value) volatile
    {
        uint32_t curr = FCFGC;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        FCFGC = curr;
    }

    /**
     * Get all of FCFGC's bit fields.
     */
    inline void get_FCFGC(uint8_t &CFMDCNT, uint8_t &CFMSV,
                          DSD_CH0_FCFGC_SRGM &SRGM, DSD_CH0_FCFGC_CFEN &CFEN,
                          DSD_CH0_FCFGC_CFMC &CFMC, uint8_t &CFMDF) volatile
    {
        uint32_t curr = FCFGC;

        CFMDCNT = (curr >> 24u) & 0b11111111u;
        CFMSV = (curr >> 16u) & 0b11111111u;
        SRGM = DSD_CH0_FCFGC_SRGM((curr >> 14u) & 0b11u);
        CFEN = DSD_CH0_FCFGC_CFEN(curr & (1u << 10u));
        CFMC = DSD_CH0_FCFGC_CFMC((curr >> 8u) & 0b11u);
        CFMDF = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of FCFGC's bit fields.
     *
     * (read-write) Filter Configuration Register, Main CIC Filter
     */
    inline void set_FCFGC(uint8_t CFMSV, DSD_CH0_FCFGC_SRGM SRGM,
                          DSD_CH0_FCFGC_CFEN CFEN, DSD_CH0_FCFGC_CFMC CFMC,
                          uint8_t CFMDF) volatile
    {
        uint32_t curr = FCFGC;

        curr &= ~(0b11111111u << 16u);
        curr |= (CFMSV & 0b11111111u) << 16u;
        curr &= ~(0b11u << 14u);
        curr |= (std::to_underlying(SRGM) & 0b11u) << 14u;
        curr &= ~(0b1u << 10u);
        curr |= (std::to_underlying(CFEN) & 0b1u) << 10u;
        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(CFMC) & 0b11u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (CFMDF & 0b11111111u) << 0u;

        FCFGC = curr;
    }

    /**
     * Get FCFGA's CFADCNT field.
     */
    inline uint8_t get_FCFGA_CFADCNT() volatile
    {
        return (FCFGA >> 24u) & 0b11111111u;
    }

    /**
     * Get FCFGA's EGT bit.
     */
    inline DSD_CH0_FCFGA_EGT get_FCFGA_EGT() volatile
    {
        return DSD_CH0_FCFGA_EGT(FCFGA & (1u << 14u));
    }

    /**
     * Set FCFGA's EGT bit.
     *
     * Event Gating
     */
    inline void set_FCFGA_EGT() volatile
    {
        FCFGA |= 1u << 14u;
    }

    /**
     * Clear FCFGA's EGT bit.
     *
     * Event Gating
     */
    inline void clear_FCFGA_EGT() volatile
    {
        FCFGA &= ~(1u << 14u);
    }

    /**
     * Toggle FCFGA's EGT bit.
     *
     * Event Gating
     */
    inline void toggle_FCFGA_EGT() volatile
    {
        FCFGA ^= 1u << 14u;
    }

    /**
     * Get FCFGA's ESEL field.
     */
    inline DSD_CH0_FCFGA_ESEL get_FCFGA_ESEL() volatile
    {
        return DSD_CH0_FCFGA_ESEL((FCFGA >> 12u) & 0b11u);
    }

    /**
     * Set FCFGA's ESEL field.
     *
     * Event Select
     */
    inline void set_FCFGA_ESEL(DSD_CH0_FCFGA_ESEL value) volatile
    {
        uint32_t curr = FCFGA;

        curr &= ~(0b11u << 12u);
        curr |= (std::to_underlying(value) & 0b11u) << 12u;

        FCFGA = curr;
    }

    /**
     * Get FCFGA's SRGA field.
     */
    inline DSD_CH0_FCFGA_SRGA get_FCFGA_SRGA() volatile
    {
        return DSD_CH0_FCFGA_SRGA((FCFGA >> 10u) & 0b11u);
    }

    /**
     * Set FCFGA's SRGA field.
     *
     * Service Request Generation Auxiliary Filter
     */
    inline void set_FCFGA_SRGA(DSD_CH0_FCFGA_SRGA value) volatile
    {
        uint32_t curr = FCFGA;

        curr &= ~(0b11u << 10u);
        curr |= (std::to_underlying(value) & 0b11u) << 10u;

        FCFGA = curr;
    }

    /**
     * Get FCFGA's CFAC field.
     */
    inline DSD_CH0_FCFGC_CFMC get_FCFGA_CFAC() volatile
    {
        return DSD_CH0_FCFGC_CFMC((FCFGA >> 8u) & 0b11u);
    }

    /**
     * Set FCFGA's CFAC field.
     *
     * CIC Filter (Auxiliary) Configuration
     */
    inline void set_FCFGA_CFAC(DSD_CH0_FCFGC_CFMC value) volatile
    {
        uint32_t curr = FCFGA;

        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(value) & 0b11u) << 8u;

        FCFGA = curr;
    }

    /**
     * Get FCFGA's CFADF field.
     */
    inline uint8_t get_FCFGA_CFADF() volatile
    {
        return (FCFGA >> 0u) & 0b11111111u;
    }

    /**
     * Set FCFGA's CFADF field.
     *
     * CIC Filter (Auxiliary) Decimation Factor
     */
    inline void set_FCFGA_CFADF(uint8_t value) volatile
    {
        uint32_t curr = FCFGA;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        FCFGA = curr;
    }

    /**
     * Get all of FCFGA's bit fields.
     */
    inline void get_FCFGA(uint8_t &CFADCNT, DSD_CH0_FCFGA_EGT &EGT,
                          DSD_CH0_FCFGA_ESEL &ESEL, DSD_CH0_FCFGA_SRGA &SRGA,
                          DSD_CH0_FCFGC_CFMC &CFAC, uint8_t &CFADF) volatile
    {
        uint32_t curr = FCFGA;

        CFADCNT = (curr >> 24u) & 0b11111111u;
        EGT = DSD_CH0_FCFGA_EGT(curr & (1u << 14u));
        ESEL = DSD_CH0_FCFGA_ESEL((curr >> 12u) & 0b11u);
        SRGA = DSD_CH0_FCFGA_SRGA((curr >> 10u) & 0b11u);
        CFAC = DSD_CH0_FCFGC_CFMC((curr >> 8u) & 0b11u);
        CFADF = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of FCFGA's bit fields.
     *
     * (read-write) Filter Configuration Register, Auxiliary Filter
     */
    inline void set_FCFGA(DSD_CH0_FCFGA_EGT EGT, DSD_CH0_FCFGA_ESEL ESEL,
                          DSD_CH0_FCFGA_SRGA SRGA, DSD_CH0_FCFGC_CFMC CFAC,
                          uint8_t CFADF) volatile
    {
        uint32_t curr = FCFGA;

        curr &= ~(0b1u << 14u);
        curr |= (std::to_underlying(EGT) & 0b1u) << 14u;
        curr &= ~(0b11u << 12u);
        curr |= (std::to_underlying(ESEL) & 0b11u) << 12u;
        curr &= ~(0b11u << 10u);
        curr |= (std::to_underlying(SRGA) & 0b11u) << 10u;
        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(CFAC) & 0b11u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (CFADF & 0b11111111u) << 0u;

        FCFGA = curr;
    }

    /**
     * Get IWCTR's NVALINT field.
     */
    inline uint8_t get_IWCTR_NVALINT() volatile
    {
        return (IWCTR >> 24u) & 0b111111u;
    }

    /**
     * Set IWCTR's NVALINT field.
     *
     * Number of Values Integrated
     */
    inline void set_IWCTR_NVALINT(uint8_t value) volatile
    {
        uint32_t curr = IWCTR;

        curr &= ~(0b111111u << 24u);
        curr |= (value & 0b111111u) << 24u;

        IWCTR = curr;
    }

    /**
     * Get IWCTR's IWS bit.
     */
    inline DSD_CH0_IWCTR_IWS get_IWCTR_IWS() volatile
    {
        return DSD_CH0_IWCTR_IWS(IWCTR & (1u << 23u));
    }

    /**
     * Set IWCTR's IWS bit.
     *
     * Integration Window SIze
     */
    inline void set_IWCTR_IWS() volatile
    {
        IWCTR |= 1u << 23u;
    }

    /**
     * Clear IWCTR's IWS bit.
     *
     * Integration Window SIze
     */
    inline void clear_IWCTR_IWS() volatile
    {
        IWCTR &= ~(1u << 23u);
    }

    /**
     * Toggle IWCTR's IWS bit.
     *
     * Integration Window SIze
     */
    inline void toggle_IWCTR_IWS() volatile
    {
        IWCTR ^= 1u << 23u;
    }

    /**
     * Get IWCTR's NVALDIS field.
     */
    inline uint8_t get_IWCTR_NVALDIS() volatile
    {
        return (IWCTR >> 16u) & 0b111111u;
    }

    /**
     * Set IWCTR's NVALDIS field.
     *
     * Number of Values Discarded
     */
    inline void set_IWCTR_NVALDIS(uint8_t value) volatile
    {
        uint32_t curr = IWCTR;

        curr &= ~(0b111111u << 16u);
        curr |= (value & 0b111111u) << 16u;

        IWCTR = curr;
    }

    /**
     * Get IWCTR's REPVAL field.
     */
    inline uint8_t get_IWCTR_REPVAL() volatile
    {
        return (IWCTR >> 12u) & 0b1111u;
    }

    /**
     * Set IWCTR's REPVAL field.
     *
     * Number of Integration Cycles
     */
    inline void set_IWCTR_REPVAL(uint8_t value) volatile
    {
        uint32_t curr = IWCTR;

        curr &= ~(0b1111u << 12u);
        curr |= (value & 0b1111u) << 12u;

        IWCTR = curr;
    }

    /**
     * Get IWCTR's REPCNT field.
     */
    inline uint8_t get_IWCTR_REPCNT() volatile
    {
        return (IWCTR >> 8u) & 0b1111u;
    }

    /**
     * Get IWCTR's INTEN bit.
     */
    inline DSD_CH0_IWCTR_INTEN get_IWCTR_INTEN() volatile
    {
        return DSD_CH0_IWCTR_INTEN(IWCTR & (1u << 7u));
    }

    /**
     * Get IWCTR's NVALCNT field.
     */
    inline uint8_t get_IWCTR_NVALCNT() volatile
    {
        return (IWCTR >> 0u) & 0b111111u;
    }

    /**
     * Get all of IWCTR's bit fields.
     */
    inline void get_IWCTR(uint8_t &NVALINT, DSD_CH0_IWCTR_IWS &IWS,
                          uint8_t &NVALDIS, uint8_t &REPVAL, uint8_t &REPCNT,
                          DSD_CH0_IWCTR_INTEN &INTEN,
                          uint8_t &NVALCNT) volatile
    {
        uint32_t curr = IWCTR;

        NVALINT = (curr >> 24u) & 0b111111u;
        IWS = DSD_CH0_IWCTR_IWS(curr & (1u << 23u));
        NVALDIS = (curr >> 16u) & 0b111111u;
        REPVAL = (curr >> 12u) & 0b1111u;
        REPCNT = (curr >> 8u) & 0b1111u;
        INTEN = DSD_CH0_IWCTR_INTEN(curr & (1u << 7u));
        NVALCNT = (curr >> 0u) & 0b111111u;
    }

    /**
     * Set all of IWCTR's bit fields.
     *
     * (read-write) Integration Window Control Register
     */
    inline void set_IWCTR(uint8_t NVALINT, DSD_CH0_IWCTR_IWS IWS,
                          uint8_t NVALDIS, uint8_t REPVAL) volatile
    {
        uint32_t curr = IWCTR;

        curr &= ~(0b111111u << 24u);
        curr |= (NVALINT & 0b111111u) << 24u;
        curr &= ~(0b1u << 23u);
        curr |= (std::to_underlying(IWS) & 0b1u) << 23u;
        curr &= ~(0b111111u << 16u);
        curr |= (NVALDIS & 0b111111u) << 16u;
        curr &= ~(0b1111u << 12u);
        curr |= (REPVAL & 0b1111u) << 12u;

        IWCTR = curr;
    }

    /**
     * Get BOUNDSEL's BOUNDARYU field.
     */
    inline uint16_t get_BOUNDSEL_BOUNDARYU() volatile
    {
        return (BOUNDSEL >> 16u) & 0b1111111111111111u;
    }

    /**
     * Set BOUNDSEL's BOUNDARYU field.
     *
     * Upper Boundary Value for Limit Checking
     */
    inline void set_BOUNDSEL_BOUNDARYU(uint16_t value) volatile
    {
        uint32_t curr = BOUNDSEL;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (value & 0b1111111111111111u) << 16u;

        BOUNDSEL = curr;
    }

    /**
     * Get BOUNDSEL's BOUNDARYL field.
     */
    inline uint16_t get_BOUNDSEL_BOUNDARYL() volatile
    {
        return (BOUNDSEL >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set BOUNDSEL's BOUNDARYL field.
     *
     * Lower Boundary Value for Limit Checking
     */
    inline void set_BOUNDSEL_BOUNDARYL(uint16_t value) volatile
    {
        uint32_t curr = BOUNDSEL;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        BOUNDSEL = curr;
    }

    /**
     * Get all of BOUNDSEL's bit fields.
     */
    inline void get_BOUNDSEL(uint16_t &BOUNDARYU, uint16_t &BOUNDARYL) volatile
    {
        uint32_t curr = BOUNDSEL;

        BOUNDARYU = (curr >> 16u) & 0b1111111111111111u;
        BOUNDARYL = (curr >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set all of BOUNDSEL's bit fields.
     *
     * (read-write) Boundary Select Register
     */
    inline void set_BOUNDSEL(uint16_t BOUNDARYU, uint16_t BOUNDARYL) volatile
    {
        uint32_t curr = BOUNDSEL;

        curr &= ~(0b1111111111111111u << 16u);
        curr |= (BOUNDARYU & 0b1111111111111111u) << 16u;
        curr &= ~(0b1111111111111111u << 0u);
        curr |= (BOUNDARYL & 0b1111111111111111u) << 0u;

        BOUNDSEL = curr;
    }

    /**
     * Get RESM's RESULT field.
     */
    inline uint16_t get_RESM_RESULT() volatile
    {
        return (RESM >> 0u) & 0b1111111111111111u;
    }

    /**
     * Get OFFM's OFFSET field.
     */
    inline uint16_t get_OFFM_OFFSET() volatile
    {
        return (OFFM >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set OFFM's OFFSET field.
     *
     * Offset Value
     */
    inline void set_OFFM_OFFSET(uint16_t value) volatile
    {
        uint32_t curr = OFFM;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        OFFM = curr;
    }

    /**
     * Get RESA's RESULT field.
     */
    inline uint16_t get_RESA_RESULT() volatile
    {
        return (RESA >> 0u) & 0b1111111111111111u;
    }

    /**
     * Get TSTMP's NVALCNT field.
     */
    inline uint8_t get_TSTMP_NVALCNT() volatile
    {
        return (TSTMP >> 24u) & 0b111111u;
    }

    /**
     * Get TSTMP's CFMDCNT field.
     */
    inline uint8_t get_TSTMP_CFMDCNT() volatile
    {
        return (TSTMP >> 16u) & 0b11111111u;
    }

    /**
     * Get TSTMP's RESULT field.
     */
    inline uint16_t get_TSTMP_RESULT() volatile
    {
        return (TSTMP >> 0u) & 0b1111111111111111u;
    }

    /**
     * Get all of TSTMP's bit fields.
     */
    inline void get_TSTMP(uint8_t &NVALCNT, uint8_t &CFMDCNT,
                          uint16_t &RESULT) volatile
    {
        uint32_t curr = TSTMP;

        NVALCNT = (curr >> 24u) & 0b111111u;
        CFMDCNT = (curr >> 16u) & 0b11111111u;
        RESULT = (curr >> 0u) & 0b1111111111111111u;
    }

    /**
     * Get CGSYNC's SDNEG field.
     */
    inline uint8_t get_CGSYNC_SDNEG() volatile
    {
        return (CGSYNC >> 24u) & 0b11111111u;
    }

    /**
     * Set CGSYNC's SDNEG field.
     *
     * Sign Delay Value for Negative Halfwave
     */
    inline void set_CGSYNC_SDNEG(uint8_t value) volatile
    {
        uint32_t curr = CGSYNC;

        curr &= ~(0b11111111u << 24u);
        curr |= (value & 0b11111111u) << 24u;

        CGSYNC = curr;
    }

    /**
     * Get CGSYNC's SDPOS field.
     */
    inline uint8_t get_CGSYNC_SDPOS() volatile
    {
        return (CGSYNC >> 16u) & 0b11111111u;
    }

    /**
     * Set CGSYNC's SDPOS field.
     *
     * Sign Delay Value for Positive Halfwave
     */
    inline void set_CGSYNC_SDPOS(uint8_t value) volatile
    {
        uint32_t curr = CGSYNC;

        curr &= ~(0b11111111u << 16u);
        curr |= (value & 0b11111111u) << 16u;

        CGSYNC = curr;
    }

    /**
     * Get CGSYNC's SDCAP field.
     */
    inline uint8_t get_CGSYNC_SDCAP() volatile
    {
        return (CGSYNC >> 8u) & 0b11111111u;
    }

    /**
     * Get CGSYNC's SDCOUNT field.
     */
    inline uint8_t get_CGSYNC_SDCOUNT() volatile
    {
        return (CGSYNC >> 0u) & 0b11111111u;
    }

    /**
     * Get all of CGSYNC's bit fields.
     */
    inline void get_CGSYNC(uint8_t &SDNEG, uint8_t &SDPOS, uint8_t &SDCAP,
                           uint8_t &SDCOUNT) volatile
    {
        uint32_t curr = CGSYNC;

        SDNEG = (curr >> 24u) & 0b11111111u;
        SDPOS = (curr >> 16u) & 0b11111111u;
        SDCAP = (curr >> 8u) & 0b11111111u;
        SDCOUNT = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of CGSYNC's bit fields.
     *
     * (read-write) Carrier Generator Synchronization Register
     */
    inline void set_CGSYNC(uint8_t SDNEG, uint8_t SDPOS) volatile
    {
        uint32_t curr = CGSYNC;

        curr &= ~(0b11111111u << 24u);
        curr |= (SDNEG & 0b11111111u) << 24u;
        curr &= ~(0b11111111u << 16u);
        curr |= (SDPOS & 0b11111111u) << 16u;

        CGSYNC = curr;
    }

    /**
     * Get RECTCFG's SGND bit.
     */
    inline DSD_CH0_RECTCFG_SGND get_RECTCFG_SGND() volatile
    {
        return DSD_CH0_RECTCFG_SGND(RECTCFG & (1u << 31u));
    }

    /**
     * Get RECTCFG's SGNCS bit.
     */
    inline DSD_CH0_RECTCFG_SGND get_RECTCFG_SGNCS() volatile
    {
        return DSD_CH0_RECTCFG_SGND(RECTCFG & (1u << 30u));
    }

    /**
     * Get RECTCFG's SDVAL bit.
     */
    inline DSD_CH0_RECTCFG_SDVAL get_RECTCFG_SDVAL() volatile
    {
        return DSD_CH0_RECTCFG_SDVAL(RECTCFG & (1u << 15u));
    }

    /**
     * Get RECTCFG's SSRC field.
     */
    inline DSD_CH0_RECTCFG_SSRC get_RECTCFG_SSRC() volatile
    {
        return DSD_CH0_RECTCFG_SSRC((RECTCFG >> 4u) & 0b11u);
    }

    /**
     * Set RECTCFG's SSRC field.
     *
     * Sign Source
     */
    inline void set_RECTCFG_SSRC(DSD_CH0_RECTCFG_SSRC value) volatile
    {
        uint32_t curr = RECTCFG;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        RECTCFG = curr;
    }

    /**
     * Get RECTCFG's RFEN bit.
     */
    inline DSD_CH0_RECTCFG_RFEN get_RECTCFG_RFEN() volatile
    {
        return DSD_CH0_RECTCFG_RFEN(RECTCFG & (1u << 0u));
    }

    /**
     * Set RECTCFG's RFEN bit.
     *
     * Rectification Enable
     */
    inline void set_RECTCFG_RFEN() volatile
    {
        RECTCFG |= 1u << 0u;
    }

    /**
     * Clear RECTCFG's RFEN bit.
     *
     * Rectification Enable
     */
    inline void clear_RECTCFG_RFEN() volatile
    {
        RECTCFG &= ~(1u << 0u);
    }

    /**
     * Toggle RECTCFG's RFEN bit.
     *
     * Rectification Enable
     */
    inline void toggle_RECTCFG_RFEN() volatile
    {
        RECTCFG ^= 1u << 0u;
    }

    /**
     * Get all of RECTCFG's bit fields.
     */
    inline void get_RECTCFG(DSD_CH0_RECTCFG_SGND &SGND,
                            DSD_CH0_RECTCFG_SGND &SGNCS,
                            DSD_CH0_RECTCFG_SDVAL &SDVAL,
                            DSD_CH0_RECTCFG_SSRC &SSRC,
                            DSD_CH0_RECTCFG_RFEN &RFEN) volatile
    {
        uint32_t curr = RECTCFG;

        SGND = DSD_CH0_RECTCFG_SGND(curr & (1u << 31u));
        SGNCS = DSD_CH0_RECTCFG_SGND(curr & (1u << 30u));
        SDVAL = DSD_CH0_RECTCFG_SDVAL(curr & (1u << 15u));
        SSRC = DSD_CH0_RECTCFG_SSRC((curr >> 4u) & 0b11u);
        RFEN = DSD_CH0_RECTCFG_RFEN(curr & (1u << 0u));
    }

    /**
     * Set all of RECTCFG's bit fields.
     *
     * (read-write) Rectification Configuration Register
     */
    inline void set_RECTCFG(DSD_CH0_RECTCFG_SSRC SSRC,
                            DSD_CH0_RECTCFG_RFEN RFEN) volatile
    {
        uint32_t curr = RECTCFG;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(SSRC) & 0b11u) << 4u;
        curr &= ~(0b1u << 0u);
        curr |= (std::to_underlying(RFEN) & 0b1u) << 0u;

        RECTCFG = curr;
    }
};

static_assert(sizeof(dsd_ch0) == dsd_ch0::size);

static volatile dsd_ch0 *const DSD_CH0 =
    reinterpret_cast<dsd_ch0 *>(0x40008100);

static volatile dsd_ch0 *const DSD_CH1 =
    reinterpret_cast<dsd_ch0 *>(0x40008200);

static volatile dsd_ch0 *const DSD_CH2 =
    reinterpret_cast<dsd_ch0 *>(0x40008300);

static volatile dsd_ch0 *const DSD_CH3 =
    reinterpret_cast<dsd_ch0 *>(0x40008400);

}; // namespace XMC4700
