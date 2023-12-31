/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Flexible CRC Engine
 */
struct [[gnu::packed]] fce_ke0
{
    /* Constant attributes. */
    static constexpr std::size_t size = 32; /*!< fce_ke0's size in bytes. */

    /* Fields. */
    uint32_t IR;             /*!< (read-write) Input Register */
    const uint32_t RES = {}; /*!< (read-only) CRC Result Register */
    uint32_t CFG;            /*!< (read-write) CRC Configuration Register */
    uint32_t STS;            /*!< (read-write) CRC Status Register */
    uint32_t LENGTH;         /*!< (read-write) CRC Length Register */
    uint32_t CHECK;          /*!< (read-write) CRC Check Register */
    uint32_t CRC;            /*!< (read-write) CRC Register */
    uint32_t CTR;            /*!< (read-write) CRC Test Register */

    /* Methods. */

    /**
     * Get IR's IR field.
     *
     * Input Register
     */
    inline uint32_t get_IR_IR() volatile
    {
        return (IR >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set IR's IR field.
     *
     * Input Register
     */
    inline void set_IR_IR(uint32_t value) volatile
    {
        uint32_t curr = IR;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        IR = curr;
    }

    /**
     * Get RES's RES field.
     *
     * Result Register
     */
    inline uint32_t get_RES_RES() volatile
    {
        return (RES >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get CFG's XSEL bit.
     *
     * Selects the value to be xored with the final CRC
     */
    inline bool get_CFG_XSEL() volatile
    {
        return CFG & (1u << 10u);
    }

    /**
     * Set CFG's XSEL bit.
     *
     * Selects the value to be xored with the final CRC
     */
    inline void set_CFG_XSEL() volatile
    {
        CFG |= 1u << 10u;
    }

    /**
     * Clear CFG's XSEL bit.
     *
     * Selects the value to be xored with the final CRC
     */
    inline void clear_CFG_XSEL() volatile
    {
        CFG &= ~(1u << 10u);
    }

    /**
     * Toggle CFG's XSEL bit.
     *
     * Selects the value to be xored with the final CRC
     */
    inline void toggle_CFG_XSEL() volatile
    {
        CFG ^= 1u << 10u;
    }

    /**
     * Get CFG's REFOUT bit.
     *
     * CRC 32-Bit Wise Reflection
     */
    inline bool get_CFG_REFOUT() volatile
    {
        return CFG & (1u << 9u);
    }

    /**
     * Set CFG's REFOUT bit.
     *
     * CRC 32-Bit Wise Reflection
     */
    inline void set_CFG_REFOUT() volatile
    {
        CFG |= 1u << 9u;
    }

    /**
     * Clear CFG's REFOUT bit.
     *
     * CRC 32-Bit Wise Reflection
     */
    inline void clear_CFG_REFOUT() volatile
    {
        CFG &= ~(1u << 9u);
    }

    /**
     * Toggle CFG's REFOUT bit.
     *
     * CRC 32-Bit Wise Reflection
     */
    inline void toggle_CFG_REFOUT() volatile
    {
        CFG ^= 1u << 9u;
    }

    /**
     * Get CFG's REFIN bit.
     *
     * IR Byte Wise Reflection
     */
    inline bool get_CFG_REFIN() volatile
    {
        return CFG & (1u << 8u);
    }

    /**
     * Set CFG's REFIN bit.
     *
     * IR Byte Wise Reflection
     */
    inline void set_CFG_REFIN() volatile
    {
        CFG |= 1u << 8u;
    }

    /**
     * Clear CFG's REFIN bit.
     *
     * IR Byte Wise Reflection
     */
    inline void clear_CFG_REFIN() volatile
    {
        CFG &= ~(1u << 8u);
    }

    /**
     * Toggle CFG's REFIN bit.
     *
     * IR Byte Wise Reflection
     */
    inline void toggle_CFG_REFIN() volatile
    {
        CFG ^= 1u << 8u;
    }

    /**
     * Get CFG's ALR bit.
     *
     * Automatic Length Reload
     */
    inline bool get_CFG_ALR() volatile
    {
        return CFG & (1u << 5u);
    }

    /**
     * Set CFG's ALR bit.
     *
     * Automatic Length Reload
     */
    inline void set_CFG_ALR() volatile
    {
        CFG |= 1u << 5u;
    }

    /**
     * Clear CFG's ALR bit.
     *
     * Automatic Length Reload
     */
    inline void clear_CFG_ALR() volatile
    {
        CFG &= ~(1u << 5u);
    }

    /**
     * Toggle CFG's ALR bit.
     *
     * Automatic Length Reload
     */
    inline void toggle_CFG_ALR() volatile
    {
        CFG ^= 1u << 5u;
    }

    /**
     * Get CFG's CCE bit.
     *
     * CRC Check Comparison
     */
    inline bool get_CFG_CCE() volatile
    {
        return CFG & (1u << 4u);
    }

    /**
     * Set CFG's CCE bit.
     *
     * CRC Check Comparison
     */
    inline void set_CFG_CCE() volatile
    {
        CFG |= 1u << 4u;
    }

    /**
     * Clear CFG's CCE bit.
     *
     * CRC Check Comparison
     */
    inline void clear_CFG_CCE() volatile
    {
        CFG &= ~(1u << 4u);
    }

    /**
     * Toggle CFG's CCE bit.
     *
     * CRC Check Comparison
     */
    inline void toggle_CFG_CCE() volatile
    {
        CFG ^= 1u << 4u;
    }

    /**
     * Get CFG's BEI bit.
     *
     * Bus Error Interrupt
     */
    inline bool get_CFG_BEI() volatile
    {
        return CFG & (1u << 3u);
    }

    /**
     * Set CFG's BEI bit.
     *
     * Bus Error Interrupt
     */
    inline void set_CFG_BEI() volatile
    {
        CFG |= 1u << 3u;
    }

    /**
     * Clear CFG's BEI bit.
     *
     * Bus Error Interrupt
     */
    inline void clear_CFG_BEI() volatile
    {
        CFG &= ~(1u << 3u);
    }

    /**
     * Toggle CFG's BEI bit.
     *
     * Bus Error Interrupt
     */
    inline void toggle_CFG_BEI() volatile
    {
        CFG ^= 1u << 3u;
    }

    /**
     * Get CFG's LEI bit.
     *
     * Length Error Interrupt
     */
    inline bool get_CFG_LEI() volatile
    {
        return CFG & (1u << 2u);
    }

    /**
     * Set CFG's LEI bit.
     *
     * Length Error Interrupt
     */
    inline void set_CFG_LEI() volatile
    {
        CFG |= 1u << 2u;
    }

    /**
     * Clear CFG's LEI bit.
     *
     * Length Error Interrupt
     */
    inline void clear_CFG_LEI() volatile
    {
        CFG &= ~(1u << 2u);
    }

    /**
     * Toggle CFG's LEI bit.
     *
     * Length Error Interrupt
     */
    inline void toggle_CFG_LEI() volatile
    {
        CFG ^= 1u << 2u;
    }

    /**
     * Get CFG's CEI bit.
     *
     * Configuration Error Interrupt
     */
    inline bool get_CFG_CEI() volatile
    {
        return CFG & (1u << 1u);
    }

    /**
     * Set CFG's CEI bit.
     *
     * Configuration Error Interrupt
     */
    inline void set_CFG_CEI() volatile
    {
        CFG |= 1u << 1u;
    }

    /**
     * Clear CFG's CEI bit.
     *
     * Configuration Error Interrupt
     */
    inline void clear_CFG_CEI() volatile
    {
        CFG &= ~(1u << 1u);
    }

    /**
     * Toggle CFG's CEI bit.
     *
     * Configuration Error Interrupt
     */
    inline void toggle_CFG_CEI() volatile
    {
        CFG ^= 1u << 1u;
    }

    /**
     * Get CFG's CMI bit.
     *
     * CRC Mismatch Interrupt
     */
    inline bool get_CFG_CMI() volatile
    {
        return CFG & (1u << 0u);
    }

    /**
     * Set CFG's CMI bit.
     *
     * CRC Mismatch Interrupt
     */
    inline void set_CFG_CMI() volatile
    {
        CFG |= 1u << 0u;
    }

    /**
     * Clear CFG's CMI bit.
     *
     * CRC Mismatch Interrupt
     */
    inline void clear_CFG_CMI() volatile
    {
        CFG &= ~(1u << 0u);
    }

    /**
     * Toggle CFG's CMI bit.
     *
     * CRC Mismatch Interrupt
     */
    inline void toggle_CFG_CMI() volatile
    {
        CFG ^= 1u << 0u;
    }

    /**
     * Get all of CFG's bit fields.
     *
     * (read-write) CRC Configuration Register
     */
    inline void get_CFG(bool &XSEL, bool &REFOUT, bool &REFIN, bool &ALR,
                        bool &CCE, bool &BEI, bool &LEI, bool &CEI,
                        bool &CMI) volatile
    {
        uint32_t curr = CFG;

        XSEL = curr & (1u << 10u);
        REFOUT = curr & (1u << 9u);
        REFIN = curr & (1u << 8u);
        ALR = curr & (1u << 5u);
        CCE = curr & (1u << 4u);
        BEI = curr & (1u << 3u);
        LEI = curr & (1u << 2u);
        CEI = curr & (1u << 1u);
        CMI = curr & (1u << 0u);
    }

    /**
     * Set all of CFG's bit fields.
     *
     * (read-write) CRC Configuration Register
     */
    inline void set_CFG(bool XSEL, bool REFOUT, bool REFIN, bool ALR, bool CCE,
                        bool BEI, bool LEI, bool CEI, bool CMI) volatile
    {
        uint32_t curr = CFG;

        curr &= ~(0b1u << 10u);
        curr |= (XSEL & 0b1u) << 10u;
        curr &= ~(0b1u << 9u);
        curr |= (REFOUT & 0b1u) << 9u;
        curr &= ~(0b1u << 8u);
        curr |= (REFIN & 0b1u) << 8u;
        curr &= ~(0b1u << 5u);
        curr |= (ALR & 0b1u) << 5u;
        curr &= ~(0b1u << 4u);
        curr |= (CCE & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (BEI & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (LEI & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (CEI & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (CMI & 0b1u) << 0u;

        CFG = curr;
    }

    /**
     * Get STS's BEF bit.
     *
     * Bus Error Flag
     */
    inline bool get_STS_BEF() volatile
    {
        return STS & (1u << 3u);
    }

    /**
     * Set STS's BEF bit.
     *
     * Bus Error Flag
     */
    inline void set_STS_BEF() volatile
    {
        STS |= 1u << 3u;
    }

    /**
     * Clear STS's BEF bit.
     *
     * Bus Error Flag
     */
    inline void clear_STS_BEF() volatile
    {
        STS &= ~(1u << 3u);
    }

    /**
     * Toggle STS's BEF bit.
     *
     * Bus Error Flag
     */
    inline void toggle_STS_BEF() volatile
    {
        STS ^= 1u << 3u;
    }

    /**
     * Get STS's LEF bit.
     *
     * Length Error Flag
     */
    inline bool get_STS_LEF() volatile
    {
        return STS & (1u << 2u);
    }

    /**
     * Set STS's LEF bit.
     *
     * Length Error Flag
     */
    inline void set_STS_LEF() volatile
    {
        STS |= 1u << 2u;
    }

    /**
     * Clear STS's LEF bit.
     *
     * Length Error Flag
     */
    inline void clear_STS_LEF() volatile
    {
        STS &= ~(1u << 2u);
    }

    /**
     * Toggle STS's LEF bit.
     *
     * Length Error Flag
     */
    inline void toggle_STS_LEF() volatile
    {
        STS ^= 1u << 2u;
    }

    /**
     * Get STS's CEF bit.
     *
     * Configuration Error Flag
     */
    inline bool get_STS_CEF() volatile
    {
        return STS & (1u << 1u);
    }

    /**
     * Set STS's CEF bit.
     *
     * Configuration Error Flag
     */
    inline void set_STS_CEF() volatile
    {
        STS |= 1u << 1u;
    }

    /**
     * Clear STS's CEF bit.
     *
     * Configuration Error Flag
     */
    inline void clear_STS_CEF() volatile
    {
        STS &= ~(1u << 1u);
    }

    /**
     * Toggle STS's CEF bit.
     *
     * Configuration Error Flag
     */
    inline void toggle_STS_CEF() volatile
    {
        STS ^= 1u << 1u;
    }

    /**
     * Get STS's CMF bit.
     *
     * CRC Mismatch Flag
     */
    inline bool get_STS_CMF() volatile
    {
        return STS & (1u << 0u);
    }

    /**
     * Set STS's CMF bit.
     *
     * CRC Mismatch Flag
     */
    inline void set_STS_CMF() volatile
    {
        STS |= 1u << 0u;
    }

    /**
     * Clear STS's CMF bit.
     *
     * CRC Mismatch Flag
     */
    inline void clear_STS_CMF() volatile
    {
        STS &= ~(1u << 0u);
    }

    /**
     * Toggle STS's CMF bit.
     *
     * CRC Mismatch Flag
     */
    inline void toggle_STS_CMF() volatile
    {
        STS ^= 1u << 0u;
    }

    /**
     * Get all of STS's bit fields.
     *
     * (read-write) CRC Status Register
     */
    inline void get_STS(bool &BEF, bool &LEF, bool &CEF, bool &CMF) volatile
    {
        uint32_t curr = STS;

        BEF = curr & (1u << 3u);
        LEF = curr & (1u << 2u);
        CEF = curr & (1u << 1u);
        CMF = curr & (1u << 0u);
    }

    /**
     * Set all of STS's bit fields.
     *
     * (read-write) CRC Status Register
     */
    inline void set_STS(bool BEF, bool LEF, bool CEF, bool CMF) volatile
    {
        uint32_t curr = STS;

        curr &= ~(0b1u << 3u);
        curr |= (BEF & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (LEF & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (CEF & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (CMF & 0b1u) << 0u;

        STS = curr;
    }

    /**
     * Get LENGTH's LENGTH field.
     *
     * Message Length Register
     */
    inline uint16_t get_LENGTH_LENGTH() volatile
    {
        return (LENGTH >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set LENGTH's LENGTH field.
     *
     * Message Length Register
     */
    inline void set_LENGTH_LENGTH(uint16_t value) volatile
    {
        uint32_t curr = LENGTH;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        LENGTH = curr;
    }

    /**
     * Get CHECK's CHECK field.
     *
     * CHECK Register
     */
    inline uint32_t get_CHECK_CHECK() volatile
    {
        return (CHECK >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set CHECK's CHECK field.
     *
     * CHECK Register
     */
    inline void set_CHECK_CHECK(uint32_t value) volatile
    {
        uint32_t curr = CHECK;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        CHECK = curr;
    }

    /**
     * Get CRC's CRC field.
     *
     * CRC Register
     */
    inline uint32_t get_CRC_CRC() volatile
    {
        return (CRC >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set CRC's CRC field.
     *
     * CRC Register
     */
    inline void set_CRC_CRC(uint32_t value) volatile
    {
        uint32_t curr = CRC;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        CRC = curr;
    }

    /**
     * Get CTR's FRM_CHECK bit.
     *
     * Force Check Register Mismatch
     */
    inline bool get_CTR_FRM_CHECK() volatile
    {
        return CTR & (1u << 2u);
    }

    /**
     * Set CTR's FRM_CHECK bit.
     *
     * Force Check Register Mismatch
     */
    inline void set_CTR_FRM_CHECK() volatile
    {
        CTR |= 1u << 2u;
    }

    /**
     * Clear CTR's FRM_CHECK bit.
     *
     * Force Check Register Mismatch
     */
    inline void clear_CTR_FRM_CHECK() volatile
    {
        CTR &= ~(1u << 2u);
    }

    /**
     * Toggle CTR's FRM_CHECK bit.
     *
     * Force Check Register Mismatch
     */
    inline void toggle_CTR_FRM_CHECK() volatile
    {
        CTR ^= 1u << 2u;
    }

    /**
     * Get CTR's FRM_CFG bit.
     *
     * Force CFG Register Mismatch
     */
    inline bool get_CTR_FRM_CFG() volatile
    {
        return CTR & (1u << 1u);
    }

    /**
     * Set CTR's FRM_CFG bit.
     *
     * Force CFG Register Mismatch
     */
    inline void set_CTR_FRM_CFG() volatile
    {
        CTR |= 1u << 1u;
    }

    /**
     * Clear CTR's FRM_CFG bit.
     *
     * Force CFG Register Mismatch
     */
    inline void clear_CTR_FRM_CFG() volatile
    {
        CTR &= ~(1u << 1u);
    }

    /**
     * Toggle CTR's FRM_CFG bit.
     *
     * Force CFG Register Mismatch
     */
    inline void toggle_CTR_FRM_CFG() volatile
    {
        CTR ^= 1u << 1u;
    }

    /**
     * Get CTR's FCM bit.
     *
     * Force CRC Mismatch
     */
    inline bool get_CTR_FCM() volatile
    {
        return CTR & (1u << 0u);
    }

    /**
     * Set CTR's FCM bit.
     *
     * Force CRC Mismatch
     */
    inline void set_CTR_FCM() volatile
    {
        CTR |= 1u << 0u;
    }

    /**
     * Clear CTR's FCM bit.
     *
     * Force CRC Mismatch
     */
    inline void clear_CTR_FCM() volatile
    {
        CTR &= ~(1u << 0u);
    }

    /**
     * Toggle CTR's FCM bit.
     *
     * Force CRC Mismatch
     */
    inline void toggle_CTR_FCM() volatile
    {
        CTR ^= 1u << 0u;
    }

    /**
     * Get all of CTR's bit fields.
     *
     * (read-write) CRC Test Register
     */
    inline void get_CTR(bool &FRM_CHECK, bool &FRM_CFG, bool &FCM) volatile
    {
        uint32_t curr = CTR;

        FRM_CHECK = curr & (1u << 2u);
        FRM_CFG = curr & (1u << 1u);
        FCM = curr & (1u << 0u);
    }

    /**
     * Set all of CTR's bit fields.
     *
     * (read-write) CRC Test Register
     */
    inline void set_CTR(bool FRM_CHECK, bool FRM_CFG, bool FCM) volatile
    {
        uint32_t curr = CTR;

        curr &= ~(0b1u << 2u);
        curr |= (FRM_CHECK & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (FRM_CFG & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (FCM & 0b1u) << 0u;

        CTR = curr;
    }
};

static_assert(sizeof(fce_ke0) == fce_ke0::size);

static volatile fce_ke0 *const FCE_KE0 =
    reinterpret_cast<fce_ke0 *>(0x50020020);

static volatile fce_ke0 *const FCE_KE1 =
    reinterpret_cast<fce_ke0 *>(0x50020040);

static volatile fce_ke0 *const FCE_KE2 =
    reinterpret_cast<fce_ke0 *>(0x50020060);

static volatile fce_ke0 *const FCE_KE3 =
    reinterpret_cast<fce_ke0 *>(0x50020080);

}; // namespace XMC4700
