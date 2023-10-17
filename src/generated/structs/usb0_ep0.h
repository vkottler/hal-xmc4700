/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include "../enums/USB0_EP0_DIEPCTL0_MPS.h"
#include "../enums/USB0_EP0_DIEPCTL0_NAKSts.h"
#include "../enums/USB0_EP0_DOEPTSIZ0_SUPCnt.h"
#include "../enums/USB0_EP0_DTXFSTS0_INEPTxFSpcAvail.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Universal Serial Bus
 */
struct [[gnu::packed]] usb0_ep0
{
    /* Constant attributes. */
    static constexpr std::size_t size = 544; /*!< usb0_ep0's size in bytes. */

    /* Fields. */
    uint32_t DIEPCTL0; /*!< (read-write) Device Control IN Endpoint Control
                          Register */
    const uint32_t reserved_padding0 = {};
    uint32_t DIEPINT0; /*!< (read-write) Device Endpoint Interrupt Register */
    const uint32_t reserved_padding1 = {};
    uint32_t DIEPTSIZ0; /*!< (read-write) Device IN Endpoint Transfer Size
                           Register */
    uint32_t
        DIEPDMA0; /*!< (read-write) Device Endpoint DMA Address Register */
    const uint32_t DTXFSTS0 = {}; /*!< (read-only) Device IN Endpoint Transmit
                                     FIFO Status Register */
    const uint32_t DIEPDMAB0 =
        {}; /*!< (read-only) Device Endpoint DMA Buffer Address Register */
    static constexpr std::size_t reserved_padding2_length = 120;
    const uint32_t reserved_padding2[reserved_padding2_length] = {};
    uint32_t DOEPCTL0; /*!< (read-write) Device Control OUT Endpoint Control
                          Register */
    const uint32_t reserved_padding3 = {};
    uint32_t DOEPINT0; /*!< (read-write) Device Endpoint Interrupt Register */
    const uint32_t reserved_padding4 = {};
    uint32_t DOEPTSIZ0; /*!< (read-write) Device OUT Endpoint Transfer Size
                           Register */
    uint32_t
        DOEPDMA0; /*!< (read-write) Device Endpoint DMA Address Register */
    const uint32_t reserved_padding5 = {};
    const uint32_t DOEPDMAB0 =
        {}; /*!< (read-only) Device Endpoint DMA Buffer Address Register */

    /* Methods. */

    /**
     * Get DIEPCTL0's EPEna bit.
     *
     * Endpoint Enable
     */
    inline bool get_DIEPCTL0_EPEna() volatile
    {
        return DIEPCTL0 & (1u << 31u);
    }

    /**
     * Set DIEPCTL0's EPEna bit.
     *
     * Endpoint Enable
     */
    inline void set_DIEPCTL0_EPEna() volatile
    {
        DIEPCTL0 |= 1u << 31u;
    }

    /**
     * Clear DIEPCTL0's EPEna bit.
     *
     * Endpoint Enable
     */
    inline void clear_DIEPCTL0_EPEna() volatile
    {
        DIEPCTL0 &= ~(1u << 31u);
    }

    /**
     * Toggle DIEPCTL0's EPEna bit.
     *
     * Endpoint Enable
     */
    inline void toggle_DIEPCTL0_EPEna() volatile
    {
        DIEPCTL0 ^= 1u << 31u;
    }

    /**
     * Get DIEPCTL0's EPDis bit.
     *
     * Endpoint Disable
     */
    inline bool get_DIEPCTL0_EPDis() volatile
    {
        return DIEPCTL0 & (1u << 30u);
    }

    /**
     * Set DIEPCTL0's EPDis bit.
     *
     * Endpoint Disable
     */
    inline void set_DIEPCTL0_EPDis() volatile
    {
        DIEPCTL0 |= 1u << 30u;
    }

    /**
     * Clear DIEPCTL0's EPDis bit.
     *
     * Endpoint Disable
     */
    inline void clear_DIEPCTL0_EPDis() volatile
    {
        DIEPCTL0 &= ~(1u << 30u);
    }

    /**
     * Toggle DIEPCTL0's EPDis bit.
     *
     * Endpoint Disable
     */
    inline void toggle_DIEPCTL0_EPDis() volatile
    {
        DIEPCTL0 ^= 1u << 30u;
    }

    /**
     * Set DIEPCTL0's SNAK bit.
     *
     * Set NAK
     */
    inline void set_DIEPCTL0_SNAK() volatile
    {
        DIEPCTL0 |= 1u << 27u;
    }

    /**
     * Clear DIEPCTL0's SNAK bit.
     *
     * Set NAK
     */
    inline void clear_DIEPCTL0_SNAK() volatile
    {
        DIEPCTL0 &= ~(1u << 27u);
    }

    /**
     * Toggle DIEPCTL0's SNAK bit.
     *
     * Set NAK
     */
    inline void toggle_DIEPCTL0_SNAK() volatile
    {
        DIEPCTL0 ^= 1u << 27u;
    }

    /**
     * Set DIEPCTL0's CNAK bit.
     *
     * Clear NAK
     */
    inline void set_DIEPCTL0_CNAK() volatile
    {
        DIEPCTL0 |= 1u << 26u;
    }

    /**
     * Clear DIEPCTL0's CNAK bit.
     *
     * Clear NAK
     */
    inline void clear_DIEPCTL0_CNAK() volatile
    {
        DIEPCTL0 &= ~(1u << 26u);
    }

    /**
     * Toggle DIEPCTL0's CNAK bit.
     *
     * Clear NAK
     */
    inline void toggle_DIEPCTL0_CNAK() volatile
    {
        DIEPCTL0 ^= 1u << 26u;
    }

    /**
     * Get DIEPCTL0's TxFNum field.
     *
     * TxFIFO Number
     */
    inline uint8_t get_DIEPCTL0_TxFNum() volatile
    {
        return (DIEPCTL0 >> 22u) & 0b1111u;
    }

    /**
     * Set DIEPCTL0's TxFNum field.
     *
     * TxFIFO Number
     */
    inline void set_DIEPCTL0_TxFNum(uint8_t value) volatile
    {
        uint32_t curr = DIEPCTL0;

        curr &= ~(0b1111u << 22u);
        curr |= (value & 0b1111u) << 22u;

        DIEPCTL0 = curr;
    }

    /**
     * Get DIEPCTL0's Stall bit.
     *
     * STALL Handshake
     */
    inline bool get_DIEPCTL0_Stall() volatile
    {
        return DIEPCTL0 & (1u << 21u);
    }

    /**
     * Set DIEPCTL0's Stall bit.
     *
     * STALL Handshake
     */
    inline void set_DIEPCTL0_Stall() volatile
    {
        DIEPCTL0 |= 1u << 21u;
    }

    /**
     * Clear DIEPCTL0's Stall bit.
     *
     * STALL Handshake
     */
    inline void clear_DIEPCTL0_Stall() volatile
    {
        DIEPCTL0 &= ~(1u << 21u);
    }

    /**
     * Toggle DIEPCTL0's Stall bit.
     *
     * STALL Handshake
     */
    inline void toggle_DIEPCTL0_Stall() volatile
    {
        DIEPCTL0 ^= 1u << 21u;
    }

    /**
     * Get DIEPCTL0's EPType field.
     *
     * Endpoint Type
     */
    inline uint8_t get_DIEPCTL0_EPType() volatile
    {
        return (DIEPCTL0 >> 18u) & 0b11u;
    }

    /**
     * Get DIEPCTL0's NAKSts bit.
     *
     * NAK Status
     */
    inline USB0_EP0_DIEPCTL0_NAKSts get_DIEPCTL0_NAKSts() volatile
    {
        return USB0_EP0_DIEPCTL0_NAKSts(DIEPCTL0 & (1u << 17u));
    }

    /**
     * Get DIEPCTL0's USBActEP bit.
     *
     * USB Active Endpoint
     */
    inline bool get_DIEPCTL0_USBActEP() volatile
    {
        return DIEPCTL0 & (1u << 15u);
    }

    /**
     * Get DIEPCTL0's MPS field.
     *
     * Maximum Packet Size
     */
    inline USB0_EP0_DIEPCTL0_MPS get_DIEPCTL0_MPS() volatile
    {
        return USB0_EP0_DIEPCTL0_MPS((DIEPCTL0 >> 0u) & 0b11u);
    }

    /**
     * Set DIEPCTL0's MPS field.
     *
     * Maximum Packet Size
     */
    inline void set_DIEPCTL0_MPS(USB0_EP0_DIEPCTL0_MPS value) volatile
    {
        uint32_t curr = DIEPCTL0;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        DIEPCTL0 = curr;
    }

    /**
     * Get all of DIEPCTL0's bit fields.
     *
     * (read-write) Device Control IN Endpoint Control Register
     */
    inline void get_DIEPCTL0(bool &EPEna, bool &EPDis, uint8_t &TxFNum,
                             bool &Stall, uint8_t &EPType,
                             USB0_EP0_DIEPCTL0_NAKSts &NAKSts, bool &USBActEP,
                             USB0_EP0_DIEPCTL0_MPS &MPS) volatile
    {
        uint32_t curr = DIEPCTL0;

        EPEna = curr & (1u << 31u);
        EPDis = curr & (1u << 30u);
        TxFNum = (curr >> 22u) & 0b1111u;
        Stall = curr & (1u << 21u);
        EPType = (curr >> 18u) & 0b11u;
        NAKSts = USB0_EP0_DIEPCTL0_NAKSts(curr & (1u << 17u));
        USBActEP = curr & (1u << 15u);
        MPS = USB0_EP0_DIEPCTL0_MPS((curr >> 0u) & 0b11u);
    }

    /**
     * Set all of DIEPCTL0's bit fields.
     *
     * (read-write) Device Control IN Endpoint Control Register
     */
    inline void set_DIEPCTL0(bool EPEna, bool EPDis, bool SNAK, bool CNAK,
                             uint8_t TxFNum, bool Stall,
                             USB0_EP0_DIEPCTL0_MPS MPS) volatile
    {
        uint32_t curr = DIEPCTL0;

        curr &= ~(0b1u << 31u);
        curr |= (EPEna & 0b1u) << 31u;
        curr &= ~(0b1u << 30u);
        curr |= (EPDis & 0b1u) << 30u;
        curr &= ~(0b1u << 27u);
        curr |= (SNAK & 0b1u) << 27u;
        curr &= ~(0b1u << 26u);
        curr |= (CNAK & 0b1u) << 26u;
        curr &= ~(0b1111u << 22u);
        curr |= (TxFNum & 0b1111u) << 22u;
        curr &= ~(0b1u << 21u);
        curr |= (Stall & 0b1u) << 21u;
        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(MPS) & 0b11u) << 0u;

        DIEPCTL0 = curr;
    }

    /**
     * Get DIEPINT0's BNAIntr bit.
     *
     * BNA (Buffer Not Available) Interrupt
     */
    inline bool get_DIEPINT0_BNAIntr() volatile
    {
        return DIEPINT0 & (1u << 9u);
    }

    /**
     * Set DIEPINT0's BNAIntr bit.
     *
     * BNA (Buffer Not Available) Interrupt
     */
    inline void set_DIEPINT0_BNAIntr() volatile
    {
        DIEPINT0 |= 1u << 9u;
    }

    /**
     * Clear DIEPINT0's BNAIntr bit.
     *
     * BNA (Buffer Not Available) Interrupt
     */
    inline void clear_DIEPINT0_BNAIntr() volatile
    {
        DIEPINT0 &= ~(1u << 9u);
    }

    /**
     * Toggle DIEPINT0's BNAIntr bit.
     *
     * BNA (Buffer Not Available) Interrupt
     */
    inline void toggle_DIEPINT0_BNAIntr() volatile
    {
        DIEPINT0 ^= 1u << 9u;
    }

    /**
     * Get DIEPINT0's TxFEmp bit.
     *
     * Transmit FIFO Empty
     */
    inline bool get_DIEPINT0_TxFEmp() volatile
    {
        return DIEPINT0 & (1u << 7u);
    }

    /**
     * Get DIEPINT0's INEPNakEff bit.
     *
     * IN Endpoint NAK Effective
     */
    inline bool get_DIEPINT0_INEPNakEff() volatile
    {
        return DIEPINT0 & (1u << 6u);
    }

    /**
     * Set DIEPINT0's INEPNakEff bit.
     *
     * IN Endpoint NAK Effective
     */
    inline void set_DIEPINT0_INEPNakEff() volatile
    {
        DIEPINT0 |= 1u << 6u;
    }

    /**
     * Clear DIEPINT0's INEPNakEff bit.
     *
     * IN Endpoint NAK Effective
     */
    inline void clear_DIEPINT0_INEPNakEff() volatile
    {
        DIEPINT0 &= ~(1u << 6u);
    }

    /**
     * Toggle DIEPINT0's INEPNakEff bit.
     *
     * IN Endpoint NAK Effective
     */
    inline void toggle_DIEPINT0_INEPNakEff() volatile
    {
        DIEPINT0 ^= 1u << 6u;
    }

    /**
     * Get DIEPINT0's INTknTXFEmp bit.
     *
     * IN Token Received When TxFIFO is Empty
     */
    inline bool get_DIEPINT0_INTknTXFEmp() volatile
    {
        return DIEPINT0 & (1u << 4u);
    }

    /**
     * Set DIEPINT0's INTknTXFEmp bit.
     *
     * IN Token Received When TxFIFO is Empty
     */
    inline void set_DIEPINT0_INTknTXFEmp() volatile
    {
        DIEPINT0 |= 1u << 4u;
    }

    /**
     * Clear DIEPINT0's INTknTXFEmp bit.
     *
     * IN Token Received When TxFIFO is Empty
     */
    inline void clear_DIEPINT0_INTknTXFEmp() volatile
    {
        DIEPINT0 &= ~(1u << 4u);
    }

    /**
     * Toggle DIEPINT0's INTknTXFEmp bit.
     *
     * IN Token Received When TxFIFO is Empty
     */
    inline void toggle_DIEPINT0_INTknTXFEmp() volatile
    {
        DIEPINT0 ^= 1u << 4u;
    }

    /**
     * Get DIEPINT0's TimeOUT bit.
     *
     * Timeout Condition
     */
    inline bool get_DIEPINT0_TimeOUT() volatile
    {
        return DIEPINT0 & (1u << 3u);
    }

    /**
     * Set DIEPINT0's TimeOUT bit.
     *
     * Timeout Condition
     */
    inline void set_DIEPINT0_TimeOUT() volatile
    {
        DIEPINT0 |= 1u << 3u;
    }

    /**
     * Clear DIEPINT0's TimeOUT bit.
     *
     * Timeout Condition
     */
    inline void clear_DIEPINT0_TimeOUT() volatile
    {
        DIEPINT0 &= ~(1u << 3u);
    }

    /**
     * Toggle DIEPINT0's TimeOUT bit.
     *
     * Timeout Condition
     */
    inline void toggle_DIEPINT0_TimeOUT() volatile
    {
        DIEPINT0 ^= 1u << 3u;
    }

    /**
     * Get DIEPINT0's AHBErr bit.
     *
     * AHB Error
     */
    inline bool get_DIEPINT0_AHBErr() volatile
    {
        return DIEPINT0 & (1u << 2u);
    }

    /**
     * Set DIEPINT0's AHBErr bit.
     *
     * AHB Error
     */
    inline void set_DIEPINT0_AHBErr() volatile
    {
        DIEPINT0 |= 1u << 2u;
    }

    /**
     * Clear DIEPINT0's AHBErr bit.
     *
     * AHB Error
     */
    inline void clear_DIEPINT0_AHBErr() volatile
    {
        DIEPINT0 &= ~(1u << 2u);
    }

    /**
     * Toggle DIEPINT0's AHBErr bit.
     *
     * AHB Error
     */
    inline void toggle_DIEPINT0_AHBErr() volatile
    {
        DIEPINT0 ^= 1u << 2u;
    }

    /**
     * Get DIEPINT0's EPDisbld bit.
     *
     * Endpoint Disabled Interrupt
     */
    inline bool get_DIEPINT0_EPDisbld() volatile
    {
        return DIEPINT0 & (1u << 1u);
    }

    /**
     * Set DIEPINT0's EPDisbld bit.
     *
     * Endpoint Disabled Interrupt
     */
    inline void set_DIEPINT0_EPDisbld() volatile
    {
        DIEPINT0 |= 1u << 1u;
    }

    /**
     * Clear DIEPINT0's EPDisbld bit.
     *
     * Endpoint Disabled Interrupt
     */
    inline void clear_DIEPINT0_EPDisbld() volatile
    {
        DIEPINT0 &= ~(1u << 1u);
    }

    /**
     * Toggle DIEPINT0's EPDisbld bit.
     *
     * Endpoint Disabled Interrupt
     */
    inline void toggle_DIEPINT0_EPDisbld() volatile
    {
        DIEPINT0 ^= 1u << 1u;
    }

    /**
     * Get DIEPINT0's XferCompl bit.
     *
     * Transfer Completed Interrupt
     */
    inline bool get_DIEPINT0_XferCompl() volatile
    {
        return DIEPINT0 & (1u << 0u);
    }

    /**
     * Set DIEPINT0's XferCompl bit.
     *
     * Transfer Completed Interrupt
     */
    inline void set_DIEPINT0_XferCompl() volatile
    {
        DIEPINT0 |= 1u << 0u;
    }

    /**
     * Clear DIEPINT0's XferCompl bit.
     *
     * Transfer Completed Interrupt
     */
    inline void clear_DIEPINT0_XferCompl() volatile
    {
        DIEPINT0 &= ~(1u << 0u);
    }

    /**
     * Toggle DIEPINT0's XferCompl bit.
     *
     * Transfer Completed Interrupt
     */
    inline void toggle_DIEPINT0_XferCompl() volatile
    {
        DIEPINT0 ^= 1u << 0u;
    }

    /**
     * Get all of DIEPINT0's bit fields.
     *
     * (read-write) Device Endpoint Interrupt Register
     */
    inline void get_DIEPINT0(bool &BNAIntr, bool &TxFEmp, bool &INEPNakEff,
                             bool &INTknTXFEmp, bool &TimeOUT, bool &AHBErr,
                             bool &EPDisbld, bool &XferCompl) volatile
    {
        uint32_t curr = DIEPINT0;

        BNAIntr = curr & (1u << 9u);
        TxFEmp = curr & (1u << 7u);
        INEPNakEff = curr & (1u << 6u);
        INTknTXFEmp = curr & (1u << 4u);
        TimeOUT = curr & (1u << 3u);
        AHBErr = curr & (1u << 2u);
        EPDisbld = curr & (1u << 1u);
        XferCompl = curr & (1u << 0u);
    }

    /**
     * Set all of DIEPINT0's bit fields.
     *
     * (read-write) Device Endpoint Interrupt Register
     */
    inline void set_DIEPINT0(bool BNAIntr, bool INEPNakEff, bool INTknTXFEmp,
                             bool TimeOUT, bool AHBErr, bool EPDisbld,
                             bool XferCompl) volatile
    {
        uint32_t curr = DIEPINT0;

        curr &= ~(0b1u << 9u);
        curr |= (BNAIntr & 0b1u) << 9u;
        curr &= ~(0b1u << 6u);
        curr |= (INEPNakEff & 0b1u) << 6u;
        curr &= ~(0b1u << 4u);
        curr |= (INTknTXFEmp & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (TimeOUT & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (AHBErr & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (EPDisbld & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (XferCompl & 0b1u) << 0u;

        DIEPINT0 = curr;
    }

    /**
     * Get DIEPTSIZ0's PktCnt field.
     *
     * Packet Count
     */
    inline uint8_t get_DIEPTSIZ0_PktCnt() volatile
    {
        return (DIEPTSIZ0 >> 19u) & 0b11u;
    }

    /**
     * Set DIEPTSIZ0's PktCnt field.
     *
     * Packet Count
     */
    inline void set_DIEPTSIZ0_PktCnt(uint8_t value) volatile
    {
        uint32_t curr = DIEPTSIZ0;

        curr &= ~(0b11u << 19u);
        curr |= (value & 0b11u) << 19u;

        DIEPTSIZ0 = curr;
    }

    /**
     * Get DIEPTSIZ0's XferSize field.
     *
     * Transfer Size
     */
    inline uint8_t get_DIEPTSIZ0_XferSize() volatile
    {
        return (DIEPTSIZ0 >> 0u) & 0b1111111u;
    }

    /**
     * Set DIEPTSIZ0's XferSize field.
     *
     * Transfer Size
     */
    inline void set_DIEPTSIZ0_XferSize(uint8_t value) volatile
    {
        uint32_t curr = DIEPTSIZ0;

        curr &= ~(0b1111111u << 0u);
        curr |= (value & 0b1111111u) << 0u;

        DIEPTSIZ0 = curr;
    }

    /**
     * Get all of DIEPTSIZ0's bit fields.
     *
     * (read-write) Device IN Endpoint Transfer Size Register
     */
    inline void get_DIEPTSIZ0(uint8_t &PktCnt, uint8_t &XferSize) volatile
    {
        uint32_t curr = DIEPTSIZ0;

        PktCnt = (curr >> 19u) & 0b11u;
        XferSize = (curr >> 0u) & 0b1111111u;
    }

    /**
     * Set all of DIEPTSIZ0's bit fields.
     *
     * (read-write) Device IN Endpoint Transfer Size Register
     */
    inline void set_DIEPTSIZ0(uint8_t PktCnt, uint8_t XferSize) volatile
    {
        uint32_t curr = DIEPTSIZ0;

        curr &= ~(0b11u << 19u);
        curr |= (PktCnt & 0b11u) << 19u;
        curr &= ~(0b1111111u << 0u);
        curr |= (XferSize & 0b1111111u) << 0u;

        DIEPTSIZ0 = curr;
    }

    /**
     * Get DIEPDMA0's DMAAddr field.
     *
     * DMA Address
     */
    inline uint32_t get_DIEPDMA0_DMAAddr() volatile
    {
        return (DIEPDMA0 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set DIEPDMA0's DMAAddr field.
     *
     * DMA Address
     */
    inline void set_DIEPDMA0_DMAAddr(uint32_t value) volatile
    {
        uint32_t curr = DIEPDMA0;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        DIEPDMA0 = curr;
    }

    /**
     * Get DTXFSTS0's INEPTxFSpcAvail field.
     *
     * IN Endpoint TxFIFO Space Avail
     */
    inline USB0_EP0_DTXFSTS0_INEPTxFSpcAvail
    get_DTXFSTS0_INEPTxFSpcAvail() volatile
    {
        return USB0_EP0_DTXFSTS0_INEPTxFSpcAvail((DTXFSTS0 >> 0u) &
                                                 0b1111111111111111u);
    }

    /**
     * Get DIEPDMAB0's DMABufferAddr field.
     *
     * DMA Buffer Address
     */
    inline uint32_t get_DIEPDMAB0_DMABufferAddr() volatile
    {
        return (DIEPDMAB0 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get DOEPCTL0's EPEna bit.
     *
     * Endpoint Enable
     */
    inline bool get_DOEPCTL0_EPEna() volatile
    {
        return DOEPCTL0 & (1u << 31u);
    }

    /**
     * Set DOEPCTL0's EPEna bit.
     *
     * Endpoint Enable
     */
    inline void set_DOEPCTL0_EPEna() volatile
    {
        DOEPCTL0 |= 1u << 31u;
    }

    /**
     * Clear DOEPCTL0's EPEna bit.
     *
     * Endpoint Enable
     */
    inline void clear_DOEPCTL0_EPEna() volatile
    {
        DOEPCTL0 &= ~(1u << 31u);
    }

    /**
     * Toggle DOEPCTL0's EPEna bit.
     *
     * Endpoint Enable
     */
    inline void toggle_DOEPCTL0_EPEna() volatile
    {
        DOEPCTL0 ^= 1u << 31u;
    }

    /**
     * Get DOEPCTL0's EPDis bit.
     *
     * Endpoint Disable
     */
    inline bool get_DOEPCTL0_EPDis() volatile
    {
        return DOEPCTL0 & (1u << 30u);
    }

    /**
     * Set DOEPCTL0's SNAK bit.
     *
     * Set NAK
     */
    inline void set_DOEPCTL0_SNAK() volatile
    {
        DOEPCTL0 |= 1u << 27u;
    }

    /**
     * Clear DOEPCTL0's SNAK bit.
     *
     * Set NAK
     */
    inline void clear_DOEPCTL0_SNAK() volatile
    {
        DOEPCTL0 &= ~(1u << 27u);
    }

    /**
     * Toggle DOEPCTL0's SNAK bit.
     *
     * Set NAK
     */
    inline void toggle_DOEPCTL0_SNAK() volatile
    {
        DOEPCTL0 ^= 1u << 27u;
    }

    /**
     * Set DOEPCTL0's CNAK bit.
     *
     * Clear NAK
     */
    inline void set_DOEPCTL0_CNAK() volatile
    {
        DOEPCTL0 |= 1u << 26u;
    }

    /**
     * Clear DOEPCTL0's CNAK bit.
     *
     * Clear NAK
     */
    inline void clear_DOEPCTL0_CNAK() volatile
    {
        DOEPCTL0 &= ~(1u << 26u);
    }

    /**
     * Toggle DOEPCTL0's CNAK bit.
     *
     * Clear NAK
     */
    inline void toggle_DOEPCTL0_CNAK() volatile
    {
        DOEPCTL0 ^= 1u << 26u;
    }

    /**
     * Get DOEPCTL0's Stall bit.
     *
     * STALL Handshake
     */
    inline bool get_DOEPCTL0_Stall() volatile
    {
        return DOEPCTL0 & (1u << 21u);
    }

    /**
     * Set DOEPCTL0's Stall bit.
     *
     * STALL Handshake
     */
    inline void set_DOEPCTL0_Stall() volatile
    {
        DOEPCTL0 |= 1u << 21u;
    }

    /**
     * Clear DOEPCTL0's Stall bit.
     *
     * STALL Handshake
     */
    inline void clear_DOEPCTL0_Stall() volatile
    {
        DOEPCTL0 &= ~(1u << 21u);
    }

    /**
     * Toggle DOEPCTL0's Stall bit.
     *
     * STALL Handshake
     */
    inline void toggle_DOEPCTL0_Stall() volatile
    {
        DOEPCTL0 ^= 1u << 21u;
    }

    /**
     * Get DOEPCTL0's Snp bit.
     *
     * Snoop Mode
     */
    inline bool get_DOEPCTL0_Snp() volatile
    {
        return DOEPCTL0 & (1u << 20u);
    }

    /**
     * Set DOEPCTL0's Snp bit.
     *
     * Snoop Mode
     */
    inline void set_DOEPCTL0_Snp() volatile
    {
        DOEPCTL0 |= 1u << 20u;
    }

    /**
     * Clear DOEPCTL0's Snp bit.
     *
     * Snoop Mode
     */
    inline void clear_DOEPCTL0_Snp() volatile
    {
        DOEPCTL0 &= ~(1u << 20u);
    }

    /**
     * Toggle DOEPCTL0's Snp bit.
     *
     * Snoop Mode
     */
    inline void toggle_DOEPCTL0_Snp() volatile
    {
        DOEPCTL0 ^= 1u << 20u;
    }

    /**
     * Get DOEPCTL0's EPType field.
     *
     * Endpoint Type
     */
    inline uint8_t get_DOEPCTL0_EPType() volatile
    {
        return (DOEPCTL0 >> 18u) & 0b11u;
    }

    /**
     * Get DOEPCTL0's NAKSts bit.
     *
     * NAK Status
     */
    inline USB0_EP0_DIEPCTL0_NAKSts get_DOEPCTL0_NAKSts() volatile
    {
        return USB0_EP0_DIEPCTL0_NAKSts(DOEPCTL0 & (1u << 17u));
    }

    /**
     * Get DOEPCTL0's USBActEP bit.
     *
     * USB Active Endpoint
     */
    inline bool get_DOEPCTL0_USBActEP() volatile
    {
        return DOEPCTL0 & (1u << 15u);
    }

    /**
     * Get DOEPCTL0's MPS field.
     *
     * Maximum Packet Size
     */
    inline USB0_EP0_DIEPCTL0_MPS get_DOEPCTL0_MPS() volatile
    {
        return USB0_EP0_DIEPCTL0_MPS((DOEPCTL0 >> 0u) & 0b11u);
    }

    /**
     * Get all of DOEPCTL0's bit fields.
     *
     * (read-write) Device Control OUT Endpoint Control Register
     */
    inline void get_DOEPCTL0(bool &EPEna, bool &EPDis, bool &Stall, bool &Snp,
                             uint8_t &EPType, USB0_EP0_DIEPCTL0_NAKSts &NAKSts,
                             bool &USBActEP,
                             USB0_EP0_DIEPCTL0_MPS &MPS) volatile
    {
        uint32_t curr = DOEPCTL0;

        EPEna = curr & (1u << 31u);
        EPDis = curr & (1u << 30u);
        Stall = curr & (1u << 21u);
        Snp = curr & (1u << 20u);
        EPType = (curr >> 18u) & 0b11u;
        NAKSts = USB0_EP0_DIEPCTL0_NAKSts(curr & (1u << 17u));
        USBActEP = curr & (1u << 15u);
        MPS = USB0_EP0_DIEPCTL0_MPS((curr >> 0u) & 0b11u);
    }

    /**
     * Set all of DOEPCTL0's bit fields.
     *
     * (read-write) Device Control OUT Endpoint Control Register
     */
    inline void set_DOEPCTL0(bool EPEna, bool SNAK, bool CNAK, bool Stall,
                             bool Snp) volatile
    {
        uint32_t curr = DOEPCTL0;

        curr &= ~(0b1u << 31u);
        curr |= (EPEna & 0b1u) << 31u;
        curr &= ~(0b1u << 27u);
        curr |= (SNAK & 0b1u) << 27u;
        curr &= ~(0b1u << 26u);
        curr |= (CNAK & 0b1u) << 26u;
        curr &= ~(0b1u << 21u);
        curr |= (Stall & 0b1u) << 21u;
        curr &= ~(0b1u << 20u);
        curr |= (Snp & 0b1u) << 20u;

        DOEPCTL0 = curr;
    }

    /**
     * Get DOEPINT0's NYETIntrpt bit.
     *
     * NYET interrupt
     */
    inline bool get_DOEPINT0_NYETIntrpt() volatile
    {
        return DOEPINT0 & (1u << 14u);
    }

    /**
     * Set DOEPINT0's NYETIntrpt bit.
     *
     * NYET interrupt
     */
    inline void set_DOEPINT0_NYETIntrpt() volatile
    {
        DOEPINT0 |= 1u << 14u;
    }

    /**
     * Clear DOEPINT0's NYETIntrpt bit.
     *
     * NYET interrupt
     */
    inline void clear_DOEPINT0_NYETIntrpt() volatile
    {
        DOEPINT0 &= ~(1u << 14u);
    }

    /**
     * Toggle DOEPINT0's NYETIntrpt bit.
     *
     * NYET interrupt
     */
    inline void toggle_DOEPINT0_NYETIntrpt() volatile
    {
        DOEPINT0 ^= 1u << 14u;
    }

    /**
     * Get DOEPINT0's NAKIntrpt bit.
     *
     * NAK interrupt
     */
    inline bool get_DOEPINT0_NAKIntrpt() volatile
    {
        return DOEPINT0 & (1u << 13u);
    }

    /**
     * Set DOEPINT0's NAKIntrpt bit.
     *
     * NAK interrupt
     */
    inline void set_DOEPINT0_NAKIntrpt() volatile
    {
        DOEPINT0 |= 1u << 13u;
    }

    /**
     * Clear DOEPINT0's NAKIntrpt bit.
     *
     * NAK interrupt
     */
    inline void clear_DOEPINT0_NAKIntrpt() volatile
    {
        DOEPINT0 &= ~(1u << 13u);
    }

    /**
     * Toggle DOEPINT0's NAKIntrpt bit.
     *
     * NAK interrupt
     */
    inline void toggle_DOEPINT0_NAKIntrpt() volatile
    {
        DOEPINT0 ^= 1u << 13u;
    }

    /**
     * Get DOEPINT0's BbleErrIntrpt bit.
     *
     * BbleErr (Babble Error) interrupt
     */
    inline bool get_DOEPINT0_BbleErrIntrpt() volatile
    {
        return DOEPINT0 & (1u << 12u);
    }

    /**
     * Set DOEPINT0's BbleErrIntrpt bit.
     *
     * BbleErr (Babble Error) interrupt
     */
    inline void set_DOEPINT0_BbleErrIntrpt() volatile
    {
        DOEPINT0 |= 1u << 12u;
    }

    /**
     * Clear DOEPINT0's BbleErrIntrpt bit.
     *
     * BbleErr (Babble Error) interrupt
     */
    inline void clear_DOEPINT0_BbleErrIntrpt() volatile
    {
        DOEPINT0 &= ~(1u << 12u);
    }

    /**
     * Toggle DOEPINT0's BbleErrIntrpt bit.
     *
     * BbleErr (Babble Error) interrupt
     */
    inline void toggle_DOEPINT0_BbleErrIntrpt() volatile
    {
        DOEPINT0 ^= 1u << 12u;
    }

    /**
     * Get DOEPINT0's PktDrpSts bit.
     *
     * Packet Dropped Status
     */
    inline bool get_DOEPINT0_PktDrpSts() volatile
    {
        return DOEPINT0 & (1u << 11u);
    }

    /**
     * Set DOEPINT0's PktDrpSts bit.
     *
     * Packet Dropped Status
     */
    inline void set_DOEPINT0_PktDrpSts() volatile
    {
        DOEPINT0 |= 1u << 11u;
    }

    /**
     * Clear DOEPINT0's PktDrpSts bit.
     *
     * Packet Dropped Status
     */
    inline void clear_DOEPINT0_PktDrpSts() volatile
    {
        DOEPINT0 &= ~(1u << 11u);
    }

    /**
     * Toggle DOEPINT0's PktDrpSts bit.
     *
     * Packet Dropped Status
     */
    inline void toggle_DOEPINT0_PktDrpSts() volatile
    {
        DOEPINT0 ^= 1u << 11u;
    }

    /**
     * Get DOEPINT0's BNAIntr bit.
     *
     * BNA (Buffer Not Available) Interrupt
     */
    inline bool get_DOEPINT0_BNAIntr() volatile
    {
        return DOEPINT0 & (1u << 9u);
    }

    /**
     * Set DOEPINT0's BNAIntr bit.
     *
     * BNA (Buffer Not Available) Interrupt
     */
    inline void set_DOEPINT0_BNAIntr() volatile
    {
        DOEPINT0 |= 1u << 9u;
    }

    /**
     * Clear DOEPINT0's BNAIntr bit.
     *
     * BNA (Buffer Not Available) Interrupt
     */
    inline void clear_DOEPINT0_BNAIntr() volatile
    {
        DOEPINT0 &= ~(1u << 9u);
    }

    /**
     * Toggle DOEPINT0's BNAIntr bit.
     *
     * BNA (Buffer Not Available) Interrupt
     */
    inline void toggle_DOEPINT0_BNAIntr() volatile
    {
        DOEPINT0 ^= 1u << 9u;
    }

    /**
     * Get DOEPINT0's Back2BackSETup bit.
     *
     * Back-to-Back SETUP Packets Received
     */
    inline bool get_DOEPINT0_Back2BackSETup() volatile
    {
        return DOEPINT0 & (1u << 6u);
    }

    /**
     * Set DOEPINT0's Back2BackSETup bit.
     *
     * Back-to-Back SETUP Packets Received
     */
    inline void set_DOEPINT0_Back2BackSETup() volatile
    {
        DOEPINT0 |= 1u << 6u;
    }

    /**
     * Clear DOEPINT0's Back2BackSETup bit.
     *
     * Back-to-Back SETUP Packets Received
     */
    inline void clear_DOEPINT0_Back2BackSETup() volatile
    {
        DOEPINT0 &= ~(1u << 6u);
    }

    /**
     * Toggle DOEPINT0's Back2BackSETup bit.
     *
     * Back-to-Back SETUP Packets Received
     */
    inline void toggle_DOEPINT0_Back2BackSETup() volatile
    {
        DOEPINT0 ^= 1u << 6u;
    }

    /**
     * Get DOEPINT0's StsPhseRcvd bit.
     *
     * Status Phase Received For Control Write
     */
    inline bool get_DOEPINT0_StsPhseRcvd() volatile
    {
        return DOEPINT0 & (1u << 5u);
    }

    /**
     * Set DOEPINT0's StsPhseRcvd bit.
     *
     * Status Phase Received For Control Write
     */
    inline void set_DOEPINT0_StsPhseRcvd() volatile
    {
        DOEPINT0 |= 1u << 5u;
    }

    /**
     * Clear DOEPINT0's StsPhseRcvd bit.
     *
     * Status Phase Received For Control Write
     */
    inline void clear_DOEPINT0_StsPhseRcvd() volatile
    {
        DOEPINT0 &= ~(1u << 5u);
    }

    /**
     * Toggle DOEPINT0's StsPhseRcvd bit.
     *
     * Status Phase Received For Control Write
     */
    inline void toggle_DOEPINT0_StsPhseRcvd() volatile
    {
        DOEPINT0 ^= 1u << 5u;
    }

    /**
     * Get DOEPINT0's OUTTknEPdis bit.
     *
     * OUT Token Received When Endpoint Disabled
     */
    inline bool get_DOEPINT0_OUTTknEPdis() volatile
    {
        return DOEPINT0 & (1u << 4u);
    }

    /**
     * Set DOEPINT0's OUTTknEPdis bit.
     *
     * OUT Token Received When Endpoint Disabled
     */
    inline void set_DOEPINT0_OUTTknEPdis() volatile
    {
        DOEPINT0 |= 1u << 4u;
    }

    /**
     * Clear DOEPINT0's OUTTknEPdis bit.
     *
     * OUT Token Received When Endpoint Disabled
     */
    inline void clear_DOEPINT0_OUTTknEPdis() volatile
    {
        DOEPINT0 &= ~(1u << 4u);
    }

    /**
     * Toggle DOEPINT0's OUTTknEPdis bit.
     *
     * OUT Token Received When Endpoint Disabled
     */
    inline void toggle_DOEPINT0_OUTTknEPdis() volatile
    {
        DOEPINT0 ^= 1u << 4u;
    }

    /**
     * Get DOEPINT0's SetUp bit.
     *
     * SETUP Phase Done
     */
    inline bool get_DOEPINT0_SetUp() volatile
    {
        return DOEPINT0 & (1u << 3u);
    }

    /**
     * Set DOEPINT0's SetUp bit.
     *
     * SETUP Phase Done
     */
    inline void set_DOEPINT0_SetUp() volatile
    {
        DOEPINT0 |= 1u << 3u;
    }

    /**
     * Clear DOEPINT0's SetUp bit.
     *
     * SETUP Phase Done
     */
    inline void clear_DOEPINT0_SetUp() volatile
    {
        DOEPINT0 &= ~(1u << 3u);
    }

    /**
     * Toggle DOEPINT0's SetUp bit.
     *
     * SETUP Phase Done
     */
    inline void toggle_DOEPINT0_SetUp() volatile
    {
        DOEPINT0 ^= 1u << 3u;
    }

    /**
     * Get DOEPINT0's AHBErr bit.
     *
     * AHB Error
     */
    inline bool get_DOEPINT0_AHBErr() volatile
    {
        return DOEPINT0 & (1u << 2u);
    }

    /**
     * Set DOEPINT0's AHBErr bit.
     *
     * AHB Error
     */
    inline void set_DOEPINT0_AHBErr() volatile
    {
        DOEPINT0 |= 1u << 2u;
    }

    /**
     * Clear DOEPINT0's AHBErr bit.
     *
     * AHB Error
     */
    inline void clear_DOEPINT0_AHBErr() volatile
    {
        DOEPINT0 &= ~(1u << 2u);
    }

    /**
     * Toggle DOEPINT0's AHBErr bit.
     *
     * AHB Error
     */
    inline void toggle_DOEPINT0_AHBErr() volatile
    {
        DOEPINT0 ^= 1u << 2u;
    }

    /**
     * Get DOEPINT0's EPDisbld bit.
     *
     * Endpoint Disabled Interrupt
     */
    inline bool get_DOEPINT0_EPDisbld() volatile
    {
        return DOEPINT0 & (1u << 1u);
    }

    /**
     * Set DOEPINT0's EPDisbld bit.
     *
     * Endpoint Disabled Interrupt
     */
    inline void set_DOEPINT0_EPDisbld() volatile
    {
        DOEPINT0 |= 1u << 1u;
    }

    /**
     * Clear DOEPINT0's EPDisbld bit.
     *
     * Endpoint Disabled Interrupt
     */
    inline void clear_DOEPINT0_EPDisbld() volatile
    {
        DOEPINT0 &= ~(1u << 1u);
    }

    /**
     * Toggle DOEPINT0's EPDisbld bit.
     *
     * Endpoint Disabled Interrupt
     */
    inline void toggle_DOEPINT0_EPDisbld() volatile
    {
        DOEPINT0 ^= 1u << 1u;
    }

    /**
     * Get DOEPINT0's XferCompl bit.
     *
     * Transfer Completed Interrupt
     */
    inline bool get_DOEPINT0_XferCompl() volatile
    {
        return DOEPINT0 & (1u << 0u);
    }

    /**
     * Set DOEPINT0's XferCompl bit.
     *
     * Transfer Completed Interrupt
     */
    inline void set_DOEPINT0_XferCompl() volatile
    {
        DOEPINT0 |= 1u << 0u;
    }

    /**
     * Clear DOEPINT0's XferCompl bit.
     *
     * Transfer Completed Interrupt
     */
    inline void clear_DOEPINT0_XferCompl() volatile
    {
        DOEPINT0 &= ~(1u << 0u);
    }

    /**
     * Toggle DOEPINT0's XferCompl bit.
     *
     * Transfer Completed Interrupt
     */
    inline void toggle_DOEPINT0_XferCompl() volatile
    {
        DOEPINT0 ^= 1u << 0u;
    }

    /**
     * Get all of DOEPINT0's bit fields.
     *
     * (read-write) Device Endpoint Interrupt Register
     */
    inline void get_DOEPINT0(bool &NYETIntrpt, bool &NAKIntrpt,
                             bool &BbleErrIntrpt, bool &PktDrpSts,
                             bool &BNAIntr, bool &Back2BackSETup,
                             bool &StsPhseRcvd, bool &OUTTknEPdis, bool &SetUp,
                             bool &AHBErr, bool &EPDisbld,
                             bool &XferCompl) volatile
    {
        uint32_t curr = DOEPINT0;

        NYETIntrpt = curr & (1u << 14u);
        NAKIntrpt = curr & (1u << 13u);
        BbleErrIntrpt = curr & (1u << 12u);
        PktDrpSts = curr & (1u << 11u);
        BNAIntr = curr & (1u << 9u);
        Back2BackSETup = curr & (1u << 6u);
        StsPhseRcvd = curr & (1u << 5u);
        OUTTknEPdis = curr & (1u << 4u);
        SetUp = curr & (1u << 3u);
        AHBErr = curr & (1u << 2u);
        EPDisbld = curr & (1u << 1u);
        XferCompl = curr & (1u << 0u);
    }

    /**
     * Set all of DOEPINT0's bit fields.
     *
     * (read-write) Device Endpoint Interrupt Register
     */
    inline void set_DOEPINT0(bool NYETIntrpt, bool NAKIntrpt,
                             bool BbleErrIntrpt, bool PktDrpSts, bool BNAIntr,
                             bool Back2BackSETup, bool StsPhseRcvd,
                             bool OUTTknEPdis, bool SetUp, bool AHBErr,
                             bool EPDisbld, bool XferCompl) volatile
    {
        uint32_t curr = DOEPINT0;

        curr &= ~(0b1u << 14u);
        curr |= (NYETIntrpt & 0b1u) << 14u;
        curr &= ~(0b1u << 13u);
        curr |= (NAKIntrpt & 0b1u) << 13u;
        curr &= ~(0b1u << 12u);
        curr |= (BbleErrIntrpt & 0b1u) << 12u;
        curr &= ~(0b1u << 11u);
        curr |= (PktDrpSts & 0b1u) << 11u;
        curr &= ~(0b1u << 9u);
        curr |= (BNAIntr & 0b1u) << 9u;
        curr &= ~(0b1u << 6u);
        curr |= (Back2BackSETup & 0b1u) << 6u;
        curr &= ~(0b1u << 5u);
        curr |= (StsPhseRcvd & 0b1u) << 5u;
        curr &= ~(0b1u << 4u);
        curr |= (OUTTknEPdis & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (SetUp & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (AHBErr & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (EPDisbld & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (XferCompl & 0b1u) << 0u;

        DOEPINT0 = curr;
    }

    /**
     * Get DOEPTSIZ0's SUPCnt field.
     *
     * SETUP Packet Count
     */
    inline USB0_EP0_DOEPTSIZ0_SUPCnt get_DOEPTSIZ0_SUPCnt() volatile
    {
        return USB0_EP0_DOEPTSIZ0_SUPCnt((DOEPTSIZ0 >> 29u) & 0b11u);
    }

    /**
     * Set DOEPTSIZ0's SUPCnt field.
     *
     * SETUP Packet Count
     */
    inline void set_DOEPTSIZ0_SUPCnt(USB0_EP0_DOEPTSIZ0_SUPCnt value) volatile
    {
        uint32_t curr = DOEPTSIZ0;

        curr &= ~(0b11u << 29u);
        curr |= (std::to_underlying(value) & 0b11u) << 29u;

        DOEPTSIZ0 = curr;
    }

    /**
     * Get DOEPTSIZ0's PktCnt field.
     *
     * Packet Count
     */
    inline uint8_t get_DOEPTSIZ0_PktCnt() volatile
    {
        return (DOEPTSIZ0 >> 19u) & 0b11u;
    }

    /**
     * Set DOEPTSIZ0's PktCnt field.
     *
     * Packet Count
     */
    inline void set_DOEPTSIZ0_PktCnt(uint8_t value) volatile
    {
        uint32_t curr = DOEPTSIZ0;

        curr &= ~(0b11u << 19u);
        curr |= (value & 0b11u) << 19u;

        DOEPTSIZ0 = curr;
    }

    /**
     * Get DOEPTSIZ0's XferSize field.
     *
     * Transfer Size
     */
    inline uint8_t get_DOEPTSIZ0_XferSize() volatile
    {
        return (DOEPTSIZ0 >> 0u) & 0b1111111u;
    }

    /**
     * Set DOEPTSIZ0's XferSize field.
     *
     * Transfer Size
     */
    inline void set_DOEPTSIZ0_XferSize(uint8_t value) volatile
    {
        uint32_t curr = DOEPTSIZ0;

        curr &= ~(0b1111111u << 0u);
        curr |= (value & 0b1111111u) << 0u;

        DOEPTSIZ0 = curr;
    }

    /**
     * Get all of DOEPTSIZ0's bit fields.
     *
     * (read-write) Device OUT Endpoint Transfer Size Register
     */
    inline void get_DOEPTSIZ0(USB0_EP0_DOEPTSIZ0_SUPCnt &SUPCnt,
                              uint8_t &PktCnt, uint8_t &XferSize) volatile
    {
        uint32_t curr = DOEPTSIZ0;

        SUPCnt = USB0_EP0_DOEPTSIZ0_SUPCnt((curr >> 29u) & 0b11u);
        PktCnt = (curr >> 19u) & 0b11u;
        XferSize = (curr >> 0u) & 0b1111111u;
    }

    /**
     * Set all of DOEPTSIZ0's bit fields.
     *
     * (read-write) Device OUT Endpoint Transfer Size Register
     */
    inline void set_DOEPTSIZ0(USB0_EP0_DOEPTSIZ0_SUPCnt SUPCnt, uint8_t PktCnt,
                              uint8_t XferSize) volatile
    {
        uint32_t curr = DOEPTSIZ0;

        curr &= ~(0b11u << 29u);
        curr |= (std::to_underlying(SUPCnt) & 0b11u) << 29u;
        curr &= ~(0b11u << 19u);
        curr |= (PktCnt & 0b11u) << 19u;
        curr &= ~(0b1111111u << 0u);
        curr |= (XferSize & 0b1111111u) << 0u;

        DOEPTSIZ0 = curr;
    }

    /**
     * Get DOEPDMA0's DMAAddr field.
     *
     * DMA Address
     */
    inline uint32_t get_DOEPDMA0_DMAAddr() volatile
    {
        return (DOEPDMA0 >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Set DOEPDMA0's DMAAddr field.
     *
     * DMA Address
     */
    inline void set_DOEPDMA0_DMAAddr(uint32_t value) volatile
    {
        uint32_t curr = DOEPDMA0;

        curr &= ~(0b11111111111111111111111111111111u << 0u);
        curr |= (value & 0b11111111111111111111111111111111u) << 0u;

        DOEPDMA0 = curr;
    }

    /**
     * Get DOEPDMAB0's DMABufferAddr field.
     *
     * DMA Buffer Address
     */
    inline uint32_t get_DOEPDMAB0_DMABufferAddr() volatile
    {
        return (DOEPDMAB0 >> 0u) & 0b11111111111111111111111111111111u;
    }
};

static_assert(sizeof(usb0_ep0) == usb0_ep0::size);

static volatile usb0_ep0 *const USB0_EP0 =
    reinterpret_cast<usb0_ep0 *>(0x50040900);

}; // namespace XMC4700
