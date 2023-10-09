/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include "../enums/CAN_NODE0_NBTR_DIV8.h"
#include "../enums/CAN_NODE0_NCR_ALIE.h"
#include "../enums/CAN_NODE0_NCR_CCE.h"
#include "../enums/CAN_NODE0_NCR_INIT.h"
#include "../enums/CAN_NODE0_NCR_LECIE.h"
#include "../enums/CAN_NODE0_NCR_TRIE.h"
#include "../enums/CAN_NODE0_NECNT_LEINC.h"
#include "../enums/CAN_NODE0_NECNT_LETD.h"
#include "../enums/CAN_NODE0_NFCR_CFCIE.h"
#include "../enums/CAN_NODE0_NFCR_CFCOV.h"
#include "../enums/CAN_NODE0_NFCR_CFMOD.h"
#include "../enums/CAN_NODE0_NIPR_ALINP.h"
#include "../enums/CAN_NODE0_NIPR_CFCINP.h"
#include "../enums/CAN_NODE0_NIPR_LECINP.h"
#include "../enums/CAN_NODE0_NIPR_TRINP.h"
#include "../enums/CAN_NODE0_NPCR_LBM.h"
#include "../enums/CAN_NODE0_NSR_BOFF.h"
#include "../enums/CAN_NODE0_NSR_EWRN.h"
#include "../enums/CAN_NODE0_NSR_LLE.h"
#include "../enums/CAN_NODE0_NSR_LOE.h"
#include "../enums/CAN_NODE0_NSR_RXOK.h"
#include "../enums/CAN_NODE0_NSR_TXOK.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Controller Area Networks
 */
struct [[gnu::packed]] can_node
{
    /* Constant attributes. */
    static constexpr uint16_t id = 1;       /*!< can_node's identifier. */
    static constexpr std::size_t size = 28; /*!< can_node's size in bytes. */

    /* Fields. */
    uint32_t NCR;   /*!< (read-write) Node Control Register */
    uint32_t NSR;   /*!< (read-write) Node Status Register */
    uint32_t NIPR;  /*!< (read-write) Node Interrupt Pointer Register */
    uint32_t NPCR;  /*!< (read-write) Node Port Control Register */
    uint32_t NBTR;  /*!< (read-write) Node Bit Timing Register */
    uint32_t NECNT; /*!< (read-write) Node Error Counter Register */
    uint32_t NFCR;  /*!< (read-write) Node Frame Counter Register */

    /* Methods. */

    /**
     * Get NCR's CALM bit.
     */
    bool get_NCR_CALM()
    {
        return NCR & (1u << 7u);
    }

    /**
     * Set NCR's CALM bit.
     */
    inline void set_NCR_CALM()
    {
        NCR |= 1u << 7u;
    }

    /**
     * Clear NCR's CALM bit.
     */
    inline void clear_NCR_CALM()
    {
        NCR &= ~(1u << 7u);
    }

    /**
     * Toggle NCR's CALM bit.
     */
    inline void toggle_NCR_CALM()
    {
        NCR ^= 1u << 7u;
    }

    /**
     * Get NCR's CCE bit.
     */
    CAN_NODE0_NCR_CCE get_NCR_CCE()
    {
        return CAN_NODE0_NCR_CCE(NCR & (1u << 6u));
    }

    /**
     * Set NCR's CCE bit.
     */
    inline void set_NCR_CCE()
    {
        NCR |= 1u << 6u;
    }

    /**
     * Clear NCR's CCE bit.
     */
    inline void clear_NCR_CCE()
    {
        NCR &= ~(1u << 6u);
    }

    /**
     * Toggle NCR's CCE bit.
     */
    inline void toggle_NCR_CCE()
    {
        NCR ^= 1u << 6u;
    }

    /**
     * Get NCR's TXDIS bit.
     */
    bool get_NCR_TXDIS()
    {
        return NCR & (1u << 5u);
    }

    /**
     * Set NCR's TXDIS bit.
     */
    inline void set_NCR_TXDIS()
    {
        NCR |= 1u << 5u;
    }

    /**
     * Clear NCR's TXDIS bit.
     */
    inline void clear_NCR_TXDIS()
    {
        NCR &= ~(1u << 5u);
    }

    /**
     * Toggle NCR's TXDIS bit.
     */
    inline void toggle_NCR_TXDIS()
    {
        NCR ^= 1u << 5u;
    }

    /**
     * Get NCR's CANDIS bit.
     */
    bool get_NCR_CANDIS()
    {
        return NCR & (1u << 4u);
    }

    /**
     * Set NCR's CANDIS bit.
     */
    inline void set_NCR_CANDIS()
    {
        NCR |= 1u << 4u;
    }

    /**
     * Clear NCR's CANDIS bit.
     */
    inline void clear_NCR_CANDIS()
    {
        NCR &= ~(1u << 4u);
    }

    /**
     * Toggle NCR's CANDIS bit.
     */
    inline void toggle_NCR_CANDIS()
    {
        NCR ^= 1u << 4u;
    }

    /**
     * Get NCR's ALIE bit.
     */
    CAN_NODE0_NCR_ALIE get_NCR_ALIE()
    {
        return CAN_NODE0_NCR_ALIE(NCR & (1u << 3u));
    }

    /**
     * Set NCR's ALIE bit.
     */
    inline void set_NCR_ALIE()
    {
        NCR |= 1u << 3u;
    }

    /**
     * Clear NCR's ALIE bit.
     */
    inline void clear_NCR_ALIE()
    {
        NCR &= ~(1u << 3u);
    }

    /**
     * Toggle NCR's ALIE bit.
     */
    inline void toggle_NCR_ALIE()
    {
        NCR ^= 1u << 3u;
    }

    /**
     * Get NCR's LECIE bit.
     */
    CAN_NODE0_NCR_LECIE get_NCR_LECIE()
    {
        return CAN_NODE0_NCR_LECIE(NCR & (1u << 2u));
    }

    /**
     * Set NCR's LECIE bit.
     */
    inline void set_NCR_LECIE()
    {
        NCR |= 1u << 2u;
    }

    /**
     * Clear NCR's LECIE bit.
     */
    inline void clear_NCR_LECIE()
    {
        NCR &= ~(1u << 2u);
    }

    /**
     * Toggle NCR's LECIE bit.
     */
    inline void toggle_NCR_LECIE()
    {
        NCR ^= 1u << 2u;
    }

    /**
     * Get NCR's TRIE bit.
     */
    CAN_NODE0_NCR_TRIE get_NCR_TRIE()
    {
        return CAN_NODE0_NCR_TRIE(NCR & (1u << 1u));
    }

    /**
     * Set NCR's TRIE bit.
     */
    inline void set_NCR_TRIE()
    {
        NCR |= 1u << 1u;
    }

    /**
     * Clear NCR's TRIE bit.
     */
    inline void clear_NCR_TRIE()
    {
        NCR &= ~(1u << 1u);
    }

    /**
     * Toggle NCR's TRIE bit.
     */
    inline void toggle_NCR_TRIE()
    {
        NCR ^= 1u << 1u;
    }

    /**
     * Get NCR's INIT bit.
     */
    CAN_NODE0_NCR_INIT get_NCR_INIT()
    {
        return CAN_NODE0_NCR_INIT(NCR & (1u << 0u));
    }

    /**
     * Set NCR's INIT bit.
     */
    inline void set_NCR_INIT()
    {
        NCR |= 1u << 0u;
    }

    /**
     * Clear NCR's INIT bit.
     */
    inline void clear_NCR_INIT()
    {
        NCR &= ~(1u << 0u);
    }

    /**
     * Toggle NCR's INIT bit.
     */
    inline void toggle_NCR_INIT()
    {
        NCR ^= 1u << 0u;
    }

    /**
     * Get NSR's LOE bit.
     */
    CAN_NODE0_NSR_LOE get_NSR_LOE()
    {
        return CAN_NODE0_NSR_LOE(NSR & (1u << 9u));
    }

    /**
     * Set NSR's LOE bit.
     */
    inline void set_NSR_LOE()
    {
        NSR |= 1u << 9u;
    }

    /**
     * Clear NSR's LOE bit.
     */
    inline void clear_NSR_LOE()
    {
        NSR &= ~(1u << 9u);
    }

    /**
     * Toggle NSR's LOE bit.
     */
    inline void toggle_NSR_LOE()
    {
        NSR ^= 1u << 9u;
    }

    /**
     * Get NSR's LLE bit.
     */
    CAN_NODE0_NSR_LLE get_NSR_LLE()
    {
        return CAN_NODE0_NSR_LLE(NSR & (1u << 8u));
    }

    /**
     * Set NSR's LLE bit.
     */
    inline void set_NSR_LLE()
    {
        NSR |= 1u << 8u;
    }

    /**
     * Clear NSR's LLE bit.
     */
    inline void clear_NSR_LLE()
    {
        NSR &= ~(1u << 8u);
    }

    /**
     * Toggle NSR's LLE bit.
     */
    inline void toggle_NSR_LLE()
    {
        NSR ^= 1u << 8u;
    }

    /**
     * Get NSR's BOFF bit.
     */
    CAN_NODE0_NSR_BOFF get_NSR_BOFF()
    {
        return CAN_NODE0_NSR_BOFF(NSR & (1u << 7u));
    }

    /**
     * Get NSR's EWRN bit.
     */
    CAN_NODE0_NSR_EWRN get_NSR_EWRN()
    {
        return CAN_NODE0_NSR_EWRN(NSR & (1u << 6u));
    }

    /**
     * Get NSR's ALERT bit.
     */
    bool get_NSR_ALERT()
    {
        return NSR & (1u << 5u);
    }

    /**
     * Set NSR's ALERT bit.
     */
    inline void set_NSR_ALERT()
    {
        NSR |= 1u << 5u;
    }

    /**
     * Clear NSR's ALERT bit.
     */
    inline void clear_NSR_ALERT()
    {
        NSR &= ~(1u << 5u);
    }

    /**
     * Toggle NSR's ALERT bit.
     */
    inline void toggle_NSR_ALERT()
    {
        NSR ^= 1u << 5u;
    }

    /**
     * Get NSR's RXOK bit.
     */
    CAN_NODE0_NSR_RXOK get_NSR_RXOK()
    {
        return CAN_NODE0_NSR_RXOK(NSR & (1u << 4u));
    }

    /**
     * Set NSR's RXOK bit.
     */
    inline void set_NSR_RXOK()
    {
        NSR |= 1u << 4u;
    }

    /**
     * Clear NSR's RXOK bit.
     */
    inline void clear_NSR_RXOK()
    {
        NSR &= ~(1u << 4u);
    }

    /**
     * Toggle NSR's RXOK bit.
     */
    inline void toggle_NSR_RXOK()
    {
        NSR ^= 1u << 4u;
    }

    /**
     * Get NSR's TXOK bit.
     */
    CAN_NODE0_NSR_TXOK get_NSR_TXOK()
    {
        return CAN_NODE0_NSR_TXOK(NSR & (1u << 3u));
    }

    /**
     * Set NSR's TXOK bit.
     */
    inline void set_NSR_TXOK()
    {
        NSR |= 1u << 3u;
    }

    /**
     * Clear NSR's TXOK bit.
     */
    inline void clear_NSR_TXOK()
    {
        NSR &= ~(1u << 3u);
    }

    /**
     * Toggle NSR's TXOK bit.
     */
    inline void toggle_NSR_TXOK()
    {
        NSR ^= 1u << 3u;
    }

    /**
     * Get NSR's LEC field.
     */
    uint8_t get_NSR_LEC()
    {
        return (NSR >> 0u) & 0b111u;
    }

    /**
     * Set NSR's LEC field.
     */
    inline void set_NSR_LEC(uint8_t value)
    {
        uint32_t curr = NSR;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        NSR = curr;
    }

    /**
     * Get NIPR's CFCINP field.
     */
    CAN_NODE0_NIPR_CFCINP get_NIPR_CFCINP()
    {
        return CAN_NODE0_NIPR_CFCINP((NIPR >> 12u) & 0b1111u);
    }

    /**
     * Set NIPR's CFCINP field.
     */
    inline void set_NIPR_CFCINP(CAN_NODE0_NIPR_CFCINP value)
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(value) & 0b1111u) << 12u;

        NIPR = curr;
    }

    /**
     * Get NIPR's TRINP field.
     */
    CAN_NODE0_NIPR_TRINP get_NIPR_TRINP()
    {
        return CAN_NODE0_NIPR_TRINP((NIPR >> 8u) & 0b1111u);
    }

    /**
     * Set NIPR's TRINP field.
     */
    inline void set_NIPR_TRINP(CAN_NODE0_NIPR_TRINP value)
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(value) & 0b1111u) << 8u;

        NIPR = curr;
    }

    /**
     * Get NIPR's LECINP field.
     */
    CAN_NODE0_NIPR_LECINP get_NIPR_LECINP()
    {
        return CAN_NODE0_NIPR_LECINP((NIPR >> 4u) & 0b1111u);
    }

    /**
     * Set NIPR's LECINP field.
     */
    inline void set_NIPR_LECINP(CAN_NODE0_NIPR_LECINP value)
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(value) & 0b1111u) << 4u;

        NIPR = curr;
    }

    /**
     * Get NIPR's ALINP field.
     */
    CAN_NODE0_NIPR_ALINP get_NIPR_ALINP()
    {
        return CAN_NODE0_NIPR_ALINP((NIPR >> 0u) & 0b1111u);
    }

    /**
     * Set NIPR's ALINP field.
     */
    inline void set_NIPR_ALINP(CAN_NODE0_NIPR_ALINP value)
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        NIPR = curr;
    }

    /**
     * Get NPCR's LBM bit.
     */
    CAN_NODE0_NPCR_LBM get_NPCR_LBM()
    {
        return CAN_NODE0_NPCR_LBM(NPCR & (1u << 8u));
    }

    /**
     * Set NPCR's LBM bit.
     */
    inline void set_NPCR_LBM()
    {
        NPCR |= 1u << 8u;
    }

    /**
     * Clear NPCR's LBM bit.
     */
    inline void clear_NPCR_LBM()
    {
        NPCR &= ~(1u << 8u);
    }

    /**
     * Toggle NPCR's LBM bit.
     */
    inline void toggle_NPCR_LBM()
    {
        NPCR ^= 1u << 8u;
    }

    /**
     * Get NPCR's RXSEL field.
     */
    uint8_t get_NPCR_RXSEL()
    {
        return (NPCR >> 0u) & 0b111u;
    }

    /**
     * Set NPCR's RXSEL field.
     */
    inline void set_NPCR_RXSEL(uint8_t value)
    {
        uint32_t curr = NPCR;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        NPCR = curr;
    }

    /**
     * Get NBTR's DIV8 bit.
     */
    CAN_NODE0_NBTR_DIV8 get_NBTR_DIV8()
    {
        return CAN_NODE0_NBTR_DIV8(NBTR & (1u << 15u));
    }

    /**
     * Set NBTR's DIV8 bit.
     */
    inline void set_NBTR_DIV8()
    {
        NBTR |= 1u << 15u;
    }

    /**
     * Clear NBTR's DIV8 bit.
     */
    inline void clear_NBTR_DIV8()
    {
        NBTR &= ~(1u << 15u);
    }

    /**
     * Toggle NBTR's DIV8 bit.
     */
    inline void toggle_NBTR_DIV8()
    {
        NBTR ^= 1u << 15u;
    }

    /**
     * Get NBTR's TSEG2 field.
     */
    uint8_t get_NBTR_TSEG2()
    {
        return (NBTR >> 12u) & 0b111u;
    }

    /**
     * Set NBTR's TSEG2 field.
     */
    inline void set_NBTR_TSEG2(uint8_t value)
    {
        uint32_t curr = NBTR;

        curr &= ~(0b111u << 12u);
        curr |= (value & 0b111u) << 12u;

        NBTR = curr;
    }

    /**
     * Get NBTR's TSEG1 field.
     */
    uint8_t get_NBTR_TSEG1()
    {
        return (NBTR >> 8u) & 0b1111u;
    }

    /**
     * Set NBTR's TSEG1 field.
     */
    inline void set_NBTR_TSEG1(uint8_t value)
    {
        uint32_t curr = NBTR;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        NBTR = curr;
    }

    /**
     * Get NBTR's SJW field.
     */
    uint8_t get_NBTR_SJW()
    {
        return (NBTR >> 6u) & 0b11u;
    }

    /**
     * Set NBTR's SJW field.
     */
    inline void set_NBTR_SJW(uint8_t value)
    {
        uint32_t curr = NBTR;

        curr &= ~(0b11u << 6u);
        curr |= (value & 0b11u) << 6u;

        NBTR = curr;
    }

    /**
     * Get NBTR's BRP field.
     */
    uint8_t get_NBTR_BRP()
    {
        return (NBTR >> 0u) & 0b111111u;
    }

    /**
     * Set NBTR's BRP field.
     */
    inline void set_NBTR_BRP(uint8_t value)
    {
        uint32_t curr = NBTR;

        curr &= ~(0b111111u << 0u);
        curr |= (value & 0b111111u) << 0u;

        NBTR = curr;
    }

    /**
     * Get NECNT's LEINC bit.
     */
    CAN_NODE0_NECNT_LEINC get_NECNT_LEINC()
    {
        return CAN_NODE0_NECNT_LEINC(NECNT & (1u << 25u));
    }

    /**
     * Get NECNT's LETD bit.
     */
    CAN_NODE0_NECNT_LETD get_NECNT_LETD()
    {
        return CAN_NODE0_NECNT_LETD(NECNT & (1u << 24u));
    }

    /**
     * Get NECNT's EWRNLVL field.
     */
    uint8_t get_NECNT_EWRNLVL()
    {
        return (NECNT >> 16u) & 0b11111111u;
    }

    /**
     * Set NECNT's EWRNLVL field.
     */
    inline void set_NECNT_EWRNLVL(uint8_t value)
    {
        uint32_t curr = NECNT;

        curr &= ~(0b11111111u << 16u);
        curr |= (value & 0b11111111u) << 16u;

        NECNT = curr;
    }

    /**
     * Get NECNT's TEC field.
     */
    uint8_t get_NECNT_TEC()
    {
        return (NECNT >> 8u) & 0b11111111u;
    }

    /**
     * Set NECNT's TEC field.
     */
    inline void set_NECNT_TEC(uint8_t value)
    {
        uint32_t curr = NECNT;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        NECNT = curr;
    }

    /**
     * Get NECNT's REC field.
     */
    uint8_t get_NECNT_REC()
    {
        return (NECNT >> 0u) & 0b11111111u;
    }

    /**
     * Set NECNT's REC field.
     */
    inline void set_NECNT_REC(uint8_t value)
    {
        uint32_t curr = NECNT;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        NECNT = curr;
    }

    /**
     * Get NFCR's CFCOV bit.
     */
    CAN_NODE0_NFCR_CFCOV get_NFCR_CFCOV()
    {
        return CAN_NODE0_NFCR_CFCOV(NFCR & (1u << 23u));
    }

    /**
     * Set NFCR's CFCOV bit.
     */
    inline void set_NFCR_CFCOV()
    {
        NFCR |= 1u << 23u;
    }

    /**
     * Clear NFCR's CFCOV bit.
     */
    inline void clear_NFCR_CFCOV()
    {
        NFCR &= ~(1u << 23u);
    }

    /**
     * Toggle NFCR's CFCOV bit.
     */
    inline void toggle_NFCR_CFCOV()
    {
        NFCR ^= 1u << 23u;
    }

    /**
     * Get NFCR's CFCIE bit.
     */
    CAN_NODE0_NFCR_CFCIE get_NFCR_CFCIE()
    {
        return CAN_NODE0_NFCR_CFCIE(NFCR & (1u << 22u));
    }

    /**
     * Set NFCR's CFCIE bit.
     */
    inline void set_NFCR_CFCIE()
    {
        NFCR |= 1u << 22u;
    }

    /**
     * Clear NFCR's CFCIE bit.
     */
    inline void clear_NFCR_CFCIE()
    {
        NFCR &= ~(1u << 22u);
    }

    /**
     * Toggle NFCR's CFCIE bit.
     */
    inline void toggle_NFCR_CFCIE()
    {
        NFCR ^= 1u << 22u;
    }

    /**
     * Get NFCR's CFMOD field.
     */
    CAN_NODE0_NFCR_CFMOD get_NFCR_CFMOD()
    {
        return CAN_NODE0_NFCR_CFMOD((NFCR >> 19u) & 0b11u);
    }

    /**
     * Set NFCR's CFMOD field.
     */
    inline void set_NFCR_CFMOD(CAN_NODE0_NFCR_CFMOD value)
    {
        uint32_t curr = NFCR;

        curr &= ~(0b11u << 19u);
        curr |= (std::to_underlying(value) & 0b11u) << 19u;

        NFCR = curr;
    }

    /**
     * Get NFCR's CFSEL field.
     */
    uint8_t get_NFCR_CFSEL()
    {
        return (NFCR >> 16u) & 0b111u;
    }

    /**
     * Set NFCR's CFSEL field.
     */
    inline void set_NFCR_CFSEL(uint8_t value)
    {
        uint32_t curr = NFCR;

        curr &= ~(0b111u << 16u);
        curr |= (value & 0b111u) << 16u;

        NFCR = curr;
    }

    /**
     * Get NFCR's CFC field.
     */
    uint16_t get_NFCR_CFC()
    {
        return (NFCR >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set NFCR's CFC field.
     */
    inline void set_NFCR_CFC(uint16_t value)
    {
        uint32_t curr = NFCR;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        NFCR = curr;
    }
};

static_assert(sizeof(can_node) == can_node::size);

static volatile can_node *const CAN_NODE0 =
    reinterpret_cast<can_node *>(0x48014200);

static volatile can_node *const CAN_NODE1 =
    reinterpret_cast<can_node *>(0x48014300);

static volatile can_node *const CAN_NODE2 =
    reinterpret_cast<can_node *>(0x48014400);

static volatile can_node *const CAN_NODE3 =
    reinterpret_cast<can_node *>(0x48014500);

static volatile can_node *const CAN_NODE4 =
    reinterpret_cast<can_node *>(0x48014600);

static volatile can_node *const CAN_NODE5 =
    reinterpret_cast<can_node *>(0x48014700);

}; // namespace XMC4700
