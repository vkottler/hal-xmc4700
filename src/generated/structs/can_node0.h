/**
 * \file
 * \brief Generated by ifgen (3.1.1).
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
struct [[gnu::packed]] can_node0
{
    /* Constant attributes. */
    static constexpr std::size_t size = 28; /*!< can_node0's size in bytes. */

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
    inline bool get_NCR_CALM() volatile
    {
        return NCR & (1u << 7u);
    }

    /**
     * Set NCR's CALM bit.
     */
    inline void set_NCR_CALM() volatile
    {
        NCR |= 1u << 7u;
    }

    /**
     * Clear NCR's CALM bit.
     */
    inline void clear_NCR_CALM() volatile
    {
        NCR &= ~(1u << 7u);
    }

    /**
     * Toggle NCR's CALM bit.
     */
    inline void toggle_NCR_CALM() volatile
    {
        NCR ^= 1u << 7u;
    }

    /**
     * Get NCR's CCE bit.
     */
    inline CAN_NODE0_NCR_CCE get_NCR_CCE() volatile
    {
        return CAN_NODE0_NCR_CCE(NCR & (1u << 6u));
    }

    /**
     * Set NCR's CCE bit.
     */
    inline void set_NCR_CCE() volatile
    {
        NCR |= 1u << 6u;
    }

    /**
     * Clear NCR's CCE bit.
     */
    inline void clear_NCR_CCE() volatile
    {
        NCR &= ~(1u << 6u);
    }

    /**
     * Toggle NCR's CCE bit.
     */
    inline void toggle_NCR_CCE() volatile
    {
        NCR ^= 1u << 6u;
    }

    /**
     * Get NCR's TXDIS bit.
     */
    inline bool get_NCR_TXDIS() volatile
    {
        return NCR & (1u << 5u);
    }

    /**
     * Set NCR's TXDIS bit.
     */
    inline void set_NCR_TXDIS() volatile
    {
        NCR |= 1u << 5u;
    }

    /**
     * Clear NCR's TXDIS bit.
     */
    inline void clear_NCR_TXDIS() volatile
    {
        NCR &= ~(1u << 5u);
    }

    /**
     * Toggle NCR's TXDIS bit.
     */
    inline void toggle_NCR_TXDIS() volatile
    {
        NCR ^= 1u << 5u;
    }

    /**
     * Get NCR's CANDIS bit.
     */
    inline bool get_NCR_CANDIS() volatile
    {
        return NCR & (1u << 4u);
    }

    /**
     * Set NCR's CANDIS bit.
     */
    inline void set_NCR_CANDIS() volatile
    {
        NCR |= 1u << 4u;
    }

    /**
     * Clear NCR's CANDIS bit.
     */
    inline void clear_NCR_CANDIS() volatile
    {
        NCR &= ~(1u << 4u);
    }

    /**
     * Toggle NCR's CANDIS bit.
     */
    inline void toggle_NCR_CANDIS() volatile
    {
        NCR ^= 1u << 4u;
    }

    /**
     * Get NCR's ALIE bit.
     */
    inline CAN_NODE0_NCR_ALIE get_NCR_ALIE() volatile
    {
        return CAN_NODE0_NCR_ALIE(NCR & (1u << 3u));
    }

    /**
     * Set NCR's ALIE bit.
     */
    inline void set_NCR_ALIE() volatile
    {
        NCR |= 1u << 3u;
    }

    /**
     * Clear NCR's ALIE bit.
     */
    inline void clear_NCR_ALIE() volatile
    {
        NCR &= ~(1u << 3u);
    }

    /**
     * Toggle NCR's ALIE bit.
     */
    inline void toggle_NCR_ALIE() volatile
    {
        NCR ^= 1u << 3u;
    }

    /**
     * Get NCR's LECIE bit.
     */
    inline CAN_NODE0_NCR_LECIE get_NCR_LECIE() volatile
    {
        return CAN_NODE0_NCR_LECIE(NCR & (1u << 2u));
    }

    /**
     * Set NCR's LECIE bit.
     */
    inline void set_NCR_LECIE() volatile
    {
        NCR |= 1u << 2u;
    }

    /**
     * Clear NCR's LECIE bit.
     */
    inline void clear_NCR_LECIE() volatile
    {
        NCR &= ~(1u << 2u);
    }

    /**
     * Toggle NCR's LECIE bit.
     */
    inline void toggle_NCR_LECIE() volatile
    {
        NCR ^= 1u << 2u;
    }

    /**
     * Get NCR's TRIE bit.
     */
    inline CAN_NODE0_NCR_TRIE get_NCR_TRIE() volatile
    {
        return CAN_NODE0_NCR_TRIE(NCR & (1u << 1u));
    }

    /**
     * Set NCR's TRIE bit.
     */
    inline void set_NCR_TRIE() volatile
    {
        NCR |= 1u << 1u;
    }

    /**
     * Clear NCR's TRIE bit.
     */
    inline void clear_NCR_TRIE() volatile
    {
        NCR &= ~(1u << 1u);
    }

    /**
     * Toggle NCR's TRIE bit.
     */
    inline void toggle_NCR_TRIE() volatile
    {
        NCR ^= 1u << 1u;
    }

    /**
     * Get NCR's INIT bit.
     */
    inline CAN_NODE0_NCR_INIT get_NCR_INIT() volatile
    {
        return CAN_NODE0_NCR_INIT(NCR & (1u << 0u));
    }

    /**
     * Set NCR's INIT bit.
     */
    inline void set_NCR_INIT() volatile
    {
        NCR |= 1u << 0u;
    }

    /**
     * Clear NCR's INIT bit.
     */
    inline void clear_NCR_INIT() volatile
    {
        NCR &= ~(1u << 0u);
    }

    /**
     * Toggle NCR's INIT bit.
     */
    inline void toggle_NCR_INIT() volatile
    {
        NCR ^= 1u << 0u;
    }

    /**
     * Get all of NCR's bit fields.
     */
    inline void get_NCR(bool &CALM, CAN_NODE0_NCR_CCE &CCE, bool &TXDIS, bool &CANDIS, CAN_NODE0_NCR_ALIE &ALIE, CAN_NODE0_NCR_LECIE &LECIE, CAN_NODE0_NCR_TRIE &TRIE, CAN_NODE0_NCR_INIT &INIT) volatile
    {
        uint32_t curr = NCR;

        CALM = curr & (1u << 7u);
        CCE = CAN_NODE0_NCR_CCE(curr & (1u << 6u));
        TXDIS = curr & (1u << 5u);
        CANDIS = curr & (1u << 4u);
        ALIE = CAN_NODE0_NCR_ALIE(curr & (1u << 3u));
        LECIE = CAN_NODE0_NCR_LECIE(curr & (1u << 2u));
        TRIE = CAN_NODE0_NCR_TRIE(curr & (1u << 1u));
        INIT = CAN_NODE0_NCR_INIT(curr & (1u << 0u));
    }

    /**
     * Set all of NCR's bit fields.
     */
    inline void set_NCR(bool CALM, CAN_NODE0_NCR_CCE CCE, bool TXDIS, bool CANDIS, CAN_NODE0_NCR_ALIE ALIE, CAN_NODE0_NCR_LECIE LECIE, CAN_NODE0_NCR_TRIE TRIE, CAN_NODE0_NCR_INIT INIT) volatile
    {
        uint32_t curr = NCR;

        curr &= ~(0b1u << 7u);
        curr |= (CALM & 0b1u) << 7u;
        curr &= ~(0b1u << 6u);
        curr |= (std::to_underlying(CCE) & 0b1u) << 6u;
        curr &= ~(0b1u << 5u);
        curr |= (TXDIS & 0b1u) << 5u;
        curr &= ~(0b1u << 4u);
        curr |= (CANDIS & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (std::to_underlying(ALIE) & 0b1u) << 3u;
        curr &= ~(0b1u << 2u);
        curr |= (std::to_underlying(LECIE) & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (std::to_underlying(TRIE) & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (std::to_underlying(INIT) & 0b1u) << 0u;

        NCR = curr;
    }

    /**
     * Get NSR's LOE bit.
     */
    inline CAN_NODE0_NSR_LOE get_NSR_LOE() volatile
    {
        return CAN_NODE0_NSR_LOE(NSR & (1u << 9u));
    }

    /**
     * Set NSR's LOE bit.
     */
    inline void set_NSR_LOE() volatile
    {
        NSR |= 1u << 9u;
    }

    /**
     * Clear NSR's LOE bit.
     */
    inline void clear_NSR_LOE() volatile
    {
        NSR &= ~(1u << 9u);
    }

    /**
     * Toggle NSR's LOE bit.
     */
    inline void toggle_NSR_LOE() volatile
    {
        NSR ^= 1u << 9u;
    }

    /**
     * Get NSR's LLE bit.
     */
    inline CAN_NODE0_NSR_LLE get_NSR_LLE() volatile
    {
        return CAN_NODE0_NSR_LLE(NSR & (1u << 8u));
    }

    /**
     * Set NSR's LLE bit.
     */
    inline void set_NSR_LLE() volatile
    {
        NSR |= 1u << 8u;
    }

    /**
     * Clear NSR's LLE bit.
     */
    inline void clear_NSR_LLE() volatile
    {
        NSR &= ~(1u << 8u);
    }

    /**
     * Toggle NSR's LLE bit.
     */
    inline void toggle_NSR_LLE() volatile
    {
        NSR ^= 1u << 8u;
    }

    /**
     * Get NSR's BOFF bit.
     */
    inline CAN_NODE0_NSR_BOFF get_NSR_BOFF() volatile
    {
        return CAN_NODE0_NSR_BOFF(NSR & (1u << 7u));
    }

    /**
     * Get NSR's EWRN bit.
     */
    inline CAN_NODE0_NSR_EWRN get_NSR_EWRN() volatile
    {
        return CAN_NODE0_NSR_EWRN(NSR & (1u << 6u));
    }

    /**
     * Get NSR's ALERT bit.
     */
    inline bool get_NSR_ALERT() volatile
    {
        return NSR & (1u << 5u);
    }

    /**
     * Set NSR's ALERT bit.
     */
    inline void set_NSR_ALERT() volatile
    {
        NSR |= 1u << 5u;
    }

    /**
     * Clear NSR's ALERT bit.
     */
    inline void clear_NSR_ALERT() volatile
    {
        NSR &= ~(1u << 5u);
    }

    /**
     * Toggle NSR's ALERT bit.
     */
    inline void toggle_NSR_ALERT() volatile
    {
        NSR ^= 1u << 5u;
    }

    /**
     * Get NSR's RXOK bit.
     */
    inline CAN_NODE0_NSR_RXOK get_NSR_RXOK() volatile
    {
        return CAN_NODE0_NSR_RXOK(NSR & (1u << 4u));
    }

    /**
     * Set NSR's RXOK bit.
     */
    inline void set_NSR_RXOK() volatile
    {
        NSR |= 1u << 4u;
    }

    /**
     * Clear NSR's RXOK bit.
     */
    inline void clear_NSR_RXOK() volatile
    {
        NSR &= ~(1u << 4u);
    }

    /**
     * Toggle NSR's RXOK bit.
     */
    inline void toggle_NSR_RXOK() volatile
    {
        NSR ^= 1u << 4u;
    }

    /**
     * Get NSR's TXOK bit.
     */
    inline CAN_NODE0_NSR_TXOK get_NSR_TXOK() volatile
    {
        return CAN_NODE0_NSR_TXOK(NSR & (1u << 3u));
    }

    /**
     * Set NSR's TXOK bit.
     */
    inline void set_NSR_TXOK() volatile
    {
        NSR |= 1u << 3u;
    }

    /**
     * Clear NSR's TXOK bit.
     */
    inline void clear_NSR_TXOK() volatile
    {
        NSR &= ~(1u << 3u);
    }

    /**
     * Toggle NSR's TXOK bit.
     */
    inline void toggle_NSR_TXOK() volatile
    {
        NSR ^= 1u << 3u;
    }

    /**
     * Get NSR's LEC field.
     */
    inline uint8_t get_NSR_LEC() volatile
    {
        return (NSR >> 0u) & 0b111u;
    }

    /**
     * Set NSR's LEC field.
     */
    inline void set_NSR_LEC(uint8_t value) volatile
    {
        uint32_t curr = NSR;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        NSR = curr;
    }

    /**
     * Get all of NSR's bit fields.
     */
    inline void get_NSR(CAN_NODE0_NSR_LOE &LOE, CAN_NODE0_NSR_LLE &LLE, CAN_NODE0_NSR_BOFF &BOFF, CAN_NODE0_NSR_EWRN &EWRN, bool &ALERT, CAN_NODE0_NSR_RXOK &RXOK, CAN_NODE0_NSR_TXOK &TXOK, uint8_t &LEC) volatile
    {
        uint32_t curr = NSR;

        LOE = CAN_NODE0_NSR_LOE(curr & (1u << 9u));
        LLE = CAN_NODE0_NSR_LLE(curr & (1u << 8u));
        BOFF = CAN_NODE0_NSR_BOFF(curr & (1u << 7u));
        EWRN = CAN_NODE0_NSR_EWRN(curr & (1u << 6u));
        ALERT = curr & (1u << 5u);
        RXOK = CAN_NODE0_NSR_RXOK(curr & (1u << 4u));
        TXOK = CAN_NODE0_NSR_TXOK(curr & (1u << 3u));
        LEC = (curr >> 0u) & 0b111u;
    }

    /**
     * Set all of NSR's bit fields.
     */
    inline void set_NSR(CAN_NODE0_NSR_LOE LOE, CAN_NODE0_NSR_LLE LLE, bool ALERT, CAN_NODE0_NSR_RXOK RXOK, CAN_NODE0_NSR_TXOK TXOK, uint8_t LEC) volatile
    {
        uint32_t curr = NSR;

        curr &= ~(0b1u << 9u);
        curr |= (std::to_underlying(LOE) & 0b1u) << 9u;
        curr &= ~(0b1u << 8u);
        curr |= (std::to_underlying(LLE) & 0b1u) << 8u;
        curr &= ~(0b1u << 5u);
        curr |= (ALERT & 0b1u) << 5u;
        curr &= ~(0b1u << 4u);
        curr |= (std::to_underlying(RXOK) & 0b1u) << 4u;
        curr &= ~(0b1u << 3u);
        curr |= (std::to_underlying(TXOK) & 0b1u) << 3u;
        curr &= ~(0b111u << 0u);
        curr |= (LEC & 0b111u) << 0u;

        NSR = curr;
    }

    /**
     * Get NIPR's CFCINP field.
     */
    inline CAN_NODE0_NIPR_CFCINP get_NIPR_CFCINP() volatile
    {
        return CAN_NODE0_NIPR_CFCINP((NIPR >> 12u) & 0b1111u);
    }

    /**
     * Set NIPR's CFCINP field.
     */
    inline void set_NIPR_CFCINP(CAN_NODE0_NIPR_CFCINP value) volatile
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(value) & 0b1111u) << 12u;

        NIPR = curr;
    }

    /**
     * Get NIPR's TRINP field.
     */
    inline CAN_NODE0_NIPR_TRINP get_NIPR_TRINP() volatile
    {
        return CAN_NODE0_NIPR_TRINP((NIPR >> 8u) & 0b1111u);
    }

    /**
     * Set NIPR's TRINP field.
     */
    inline void set_NIPR_TRINP(CAN_NODE0_NIPR_TRINP value) volatile
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(value) & 0b1111u) << 8u;

        NIPR = curr;
    }

    /**
     * Get NIPR's LECINP field.
     */
    inline CAN_NODE0_NIPR_LECINP get_NIPR_LECINP() volatile
    {
        return CAN_NODE0_NIPR_LECINP((NIPR >> 4u) & 0b1111u);
    }

    /**
     * Set NIPR's LECINP field.
     */
    inline void set_NIPR_LECINP(CAN_NODE0_NIPR_LECINP value) volatile
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(value) & 0b1111u) << 4u;

        NIPR = curr;
    }

    /**
     * Get NIPR's ALINP field.
     */
    inline CAN_NODE0_NIPR_ALINP get_NIPR_ALINP() volatile
    {
        return CAN_NODE0_NIPR_ALINP((NIPR >> 0u) & 0b1111u);
    }

    /**
     * Set NIPR's ALINP field.
     */
    inline void set_NIPR_ALINP(CAN_NODE0_NIPR_ALINP value) volatile
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(value) & 0b1111u) << 0u;

        NIPR = curr;
    }

    /**
     * Get all of NIPR's bit fields.
     */
    inline void get_NIPR(CAN_NODE0_NIPR_CFCINP &CFCINP, CAN_NODE0_NIPR_TRINP &TRINP, CAN_NODE0_NIPR_LECINP &LECINP, CAN_NODE0_NIPR_ALINP &ALINP) volatile
    {
        uint32_t curr = NIPR;

        CFCINP = CAN_NODE0_NIPR_CFCINP((curr >> 12u) & 0b1111u);
        TRINP = CAN_NODE0_NIPR_TRINP((curr >> 8u) & 0b1111u);
        LECINP = CAN_NODE0_NIPR_LECINP((curr >> 4u) & 0b1111u);
        ALINP = CAN_NODE0_NIPR_ALINP((curr >> 0u) & 0b1111u);
    }

    /**
     * Set all of NIPR's bit fields.
     */
    inline void set_NIPR(CAN_NODE0_NIPR_CFCINP CFCINP, CAN_NODE0_NIPR_TRINP TRINP, CAN_NODE0_NIPR_LECINP LECINP, CAN_NODE0_NIPR_ALINP ALINP) volatile
    {
        uint32_t curr = NIPR;

        curr &= ~(0b1111u << 12u);
        curr |= (std::to_underlying(CFCINP) & 0b1111u) << 12u;
        curr &= ~(0b1111u << 8u);
        curr |= (std::to_underlying(TRINP) & 0b1111u) << 8u;
        curr &= ~(0b1111u << 4u);
        curr |= (std::to_underlying(LECINP) & 0b1111u) << 4u;
        curr &= ~(0b1111u << 0u);
        curr |= (std::to_underlying(ALINP) & 0b1111u) << 0u;

        NIPR = curr;
    }

    /**
     * Get NPCR's LBM bit.
     */
    inline CAN_NODE0_NPCR_LBM get_NPCR_LBM() volatile
    {
        return CAN_NODE0_NPCR_LBM(NPCR & (1u << 8u));
    }

    /**
     * Set NPCR's LBM bit.
     */
    inline void set_NPCR_LBM() volatile
    {
        NPCR |= 1u << 8u;
    }

    /**
     * Clear NPCR's LBM bit.
     */
    inline void clear_NPCR_LBM() volatile
    {
        NPCR &= ~(1u << 8u);
    }

    /**
     * Toggle NPCR's LBM bit.
     */
    inline void toggle_NPCR_LBM() volatile
    {
        NPCR ^= 1u << 8u;
    }

    /**
     * Get NPCR's RXSEL field.
     */
    inline uint8_t get_NPCR_RXSEL() volatile
    {
        return (NPCR >> 0u) & 0b111u;
    }

    /**
     * Set NPCR's RXSEL field.
     */
    inline void set_NPCR_RXSEL(uint8_t value) volatile
    {
        uint32_t curr = NPCR;

        curr &= ~(0b111u << 0u);
        curr |= (value & 0b111u) << 0u;

        NPCR = curr;
    }

    /**
     * Get all of NPCR's bit fields.
     */
    inline void get_NPCR(CAN_NODE0_NPCR_LBM &LBM, uint8_t &RXSEL) volatile
    {
        uint32_t curr = NPCR;

        LBM = CAN_NODE0_NPCR_LBM(curr & (1u << 8u));
        RXSEL = (curr >> 0u) & 0b111u;
    }

    /**
     * Set all of NPCR's bit fields.
     */
    inline void set_NPCR(CAN_NODE0_NPCR_LBM LBM, uint8_t RXSEL) volatile
    {
        uint32_t curr = NPCR;

        curr &= ~(0b1u << 8u);
        curr |= (std::to_underlying(LBM) & 0b1u) << 8u;
        curr &= ~(0b111u << 0u);
        curr |= (RXSEL & 0b111u) << 0u;

        NPCR = curr;
    }

    /**
     * Get NBTR's DIV8 bit.
     */
    inline CAN_NODE0_NBTR_DIV8 get_NBTR_DIV8() volatile
    {
        return CAN_NODE0_NBTR_DIV8(NBTR & (1u << 15u));
    }

    /**
     * Set NBTR's DIV8 bit.
     */
    inline void set_NBTR_DIV8() volatile
    {
        NBTR |= 1u << 15u;
    }

    /**
     * Clear NBTR's DIV8 bit.
     */
    inline void clear_NBTR_DIV8() volatile
    {
        NBTR &= ~(1u << 15u);
    }

    /**
     * Toggle NBTR's DIV8 bit.
     */
    inline void toggle_NBTR_DIV8() volatile
    {
        NBTR ^= 1u << 15u;
    }

    /**
     * Get NBTR's TSEG2 field.
     */
    inline uint8_t get_NBTR_TSEG2() volatile
    {
        return (NBTR >> 12u) & 0b111u;
    }

    /**
     * Set NBTR's TSEG2 field.
     */
    inline void set_NBTR_TSEG2(uint8_t value) volatile
    {
        uint32_t curr = NBTR;

        curr &= ~(0b111u << 12u);
        curr |= (value & 0b111u) << 12u;

        NBTR = curr;
    }

    /**
     * Get NBTR's TSEG1 field.
     */
    inline uint8_t get_NBTR_TSEG1() volatile
    {
        return (NBTR >> 8u) & 0b1111u;
    }

    /**
     * Set NBTR's TSEG1 field.
     */
    inline void set_NBTR_TSEG1(uint8_t value) volatile
    {
        uint32_t curr = NBTR;

        curr &= ~(0b1111u << 8u);
        curr |= (value & 0b1111u) << 8u;

        NBTR = curr;
    }

    /**
     * Get NBTR's SJW field.
     */
    inline uint8_t get_NBTR_SJW() volatile
    {
        return (NBTR >> 6u) & 0b11u;
    }

    /**
     * Set NBTR's SJW field.
     */
    inline void set_NBTR_SJW(uint8_t value) volatile
    {
        uint32_t curr = NBTR;

        curr &= ~(0b11u << 6u);
        curr |= (value & 0b11u) << 6u;

        NBTR = curr;
    }

    /**
     * Get NBTR's BRP field.
     */
    inline uint8_t get_NBTR_BRP() volatile
    {
        return (NBTR >> 0u) & 0b111111u;
    }

    /**
     * Set NBTR's BRP field.
     */
    inline void set_NBTR_BRP(uint8_t value) volatile
    {
        uint32_t curr = NBTR;

        curr &= ~(0b111111u << 0u);
        curr |= (value & 0b111111u) << 0u;

        NBTR = curr;
    }

    /**
     * Get all of NBTR's bit fields.
     */
    inline void get_NBTR(CAN_NODE0_NBTR_DIV8 &DIV8, uint8_t &TSEG2, uint8_t &TSEG1, uint8_t &SJW, uint8_t &BRP) volatile
    {
        uint32_t curr = NBTR;

        DIV8 = CAN_NODE0_NBTR_DIV8(curr & (1u << 15u));
        TSEG2 = (curr >> 12u) & 0b111u;
        TSEG1 = (curr >> 8u) & 0b1111u;
        SJW = (curr >> 6u) & 0b11u;
        BRP = (curr >> 0u) & 0b111111u;
    }

    /**
     * Set all of NBTR's bit fields.
     */
    inline void set_NBTR(CAN_NODE0_NBTR_DIV8 DIV8, uint8_t TSEG2, uint8_t TSEG1, uint8_t SJW, uint8_t BRP) volatile
    {
        uint32_t curr = NBTR;

        curr &= ~(0b1u << 15u);
        curr |= (std::to_underlying(DIV8) & 0b1u) << 15u;
        curr &= ~(0b111u << 12u);
        curr |= (TSEG2 & 0b111u) << 12u;
        curr &= ~(0b1111u << 8u);
        curr |= (TSEG1 & 0b1111u) << 8u;
        curr &= ~(0b11u << 6u);
        curr |= (SJW & 0b11u) << 6u;
        curr &= ~(0b111111u << 0u);
        curr |= (BRP & 0b111111u) << 0u;

        NBTR = curr;
    }

    /**
     * Get NECNT's LEINC bit.
     */
    inline CAN_NODE0_NECNT_LEINC get_NECNT_LEINC() volatile
    {
        return CAN_NODE0_NECNT_LEINC(NECNT & (1u << 25u));
    }

    /**
     * Get NECNT's LETD bit.
     */
    inline CAN_NODE0_NECNT_LETD get_NECNT_LETD() volatile
    {
        return CAN_NODE0_NECNT_LETD(NECNT & (1u << 24u));
    }

    /**
     * Get NECNT's EWRNLVL field.
     */
    inline uint8_t get_NECNT_EWRNLVL() volatile
    {
        return (NECNT >> 16u) & 0b11111111u;
    }

    /**
     * Set NECNT's EWRNLVL field.
     */
    inline void set_NECNT_EWRNLVL(uint8_t value) volatile
    {
        uint32_t curr = NECNT;

        curr &= ~(0b11111111u << 16u);
        curr |= (value & 0b11111111u) << 16u;

        NECNT = curr;
    }

    /**
     * Get NECNT's TEC field.
     */
    inline uint8_t get_NECNT_TEC() volatile
    {
        return (NECNT >> 8u) & 0b11111111u;
    }

    /**
     * Set NECNT's TEC field.
     */
    inline void set_NECNT_TEC(uint8_t value) volatile
    {
        uint32_t curr = NECNT;

        curr &= ~(0b11111111u << 8u);
        curr |= (value & 0b11111111u) << 8u;

        NECNT = curr;
    }

    /**
     * Get NECNT's REC field.
     */
    inline uint8_t get_NECNT_REC() volatile
    {
        return (NECNT >> 0u) & 0b11111111u;
    }

    /**
     * Set NECNT's REC field.
     */
    inline void set_NECNT_REC(uint8_t value) volatile
    {
        uint32_t curr = NECNT;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        NECNT = curr;
    }

    /**
     * Get all of NECNT's bit fields.
     */
    inline void get_NECNT(CAN_NODE0_NECNT_LEINC &LEINC, CAN_NODE0_NECNT_LETD &LETD, uint8_t &EWRNLVL, uint8_t &TEC, uint8_t &REC) volatile
    {
        uint32_t curr = NECNT;

        LEINC = CAN_NODE0_NECNT_LEINC(curr & (1u << 25u));
        LETD = CAN_NODE0_NECNT_LETD(curr & (1u << 24u));
        EWRNLVL = (curr >> 16u) & 0b11111111u;
        TEC = (curr >> 8u) & 0b11111111u;
        REC = (curr >> 0u) & 0b11111111u;
    }

    /**
     * Set all of NECNT's bit fields.
     */
    inline void set_NECNT(uint8_t EWRNLVL, uint8_t TEC, uint8_t REC) volatile
    {
        uint32_t curr = NECNT;

        curr &= ~(0b11111111u << 16u);
        curr |= (EWRNLVL & 0b11111111u) << 16u;
        curr &= ~(0b11111111u << 8u);
        curr |= (TEC & 0b11111111u) << 8u;
        curr &= ~(0b11111111u << 0u);
        curr |= (REC & 0b11111111u) << 0u;

        NECNT = curr;
    }

    /**
     * Get NFCR's CFCOV bit.
     */
    inline CAN_NODE0_NFCR_CFCOV get_NFCR_CFCOV() volatile
    {
        return CAN_NODE0_NFCR_CFCOV(NFCR & (1u << 23u));
    }

    /**
     * Set NFCR's CFCOV bit.
     */
    inline void set_NFCR_CFCOV() volatile
    {
        NFCR |= 1u << 23u;
    }

    /**
     * Clear NFCR's CFCOV bit.
     */
    inline void clear_NFCR_CFCOV() volatile
    {
        NFCR &= ~(1u << 23u);
    }

    /**
     * Toggle NFCR's CFCOV bit.
     */
    inline void toggle_NFCR_CFCOV() volatile
    {
        NFCR ^= 1u << 23u;
    }

    /**
     * Get NFCR's CFCIE bit.
     */
    inline CAN_NODE0_NFCR_CFCIE get_NFCR_CFCIE() volatile
    {
        return CAN_NODE0_NFCR_CFCIE(NFCR & (1u << 22u));
    }

    /**
     * Set NFCR's CFCIE bit.
     */
    inline void set_NFCR_CFCIE() volatile
    {
        NFCR |= 1u << 22u;
    }

    /**
     * Clear NFCR's CFCIE bit.
     */
    inline void clear_NFCR_CFCIE() volatile
    {
        NFCR &= ~(1u << 22u);
    }

    /**
     * Toggle NFCR's CFCIE bit.
     */
    inline void toggle_NFCR_CFCIE() volatile
    {
        NFCR ^= 1u << 22u;
    }

    /**
     * Get NFCR's CFMOD field.
     */
    inline CAN_NODE0_NFCR_CFMOD get_NFCR_CFMOD() volatile
    {
        return CAN_NODE0_NFCR_CFMOD((NFCR >> 19u) & 0b11u);
    }

    /**
     * Set NFCR's CFMOD field.
     */
    inline void set_NFCR_CFMOD(CAN_NODE0_NFCR_CFMOD value) volatile
    {
        uint32_t curr = NFCR;

        curr &= ~(0b11u << 19u);
        curr |= (std::to_underlying(value) & 0b11u) << 19u;

        NFCR = curr;
    }

    /**
     * Get NFCR's CFSEL field.
     */
    inline uint8_t get_NFCR_CFSEL() volatile
    {
        return (NFCR >> 16u) & 0b111u;
    }

    /**
     * Set NFCR's CFSEL field.
     */
    inline void set_NFCR_CFSEL(uint8_t value) volatile
    {
        uint32_t curr = NFCR;

        curr &= ~(0b111u << 16u);
        curr |= (value & 0b111u) << 16u;

        NFCR = curr;
    }

    /**
     * Get NFCR's CFC field.
     */
    inline uint16_t get_NFCR_CFC() volatile
    {
        return (NFCR >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set NFCR's CFC field.
     */
    inline void set_NFCR_CFC(uint16_t value) volatile
    {
        uint32_t curr = NFCR;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        NFCR = curr;
    }

    /**
     * Get all of NFCR's bit fields.
     */
    inline void get_NFCR(CAN_NODE0_NFCR_CFCOV &CFCOV, CAN_NODE0_NFCR_CFCIE &CFCIE, CAN_NODE0_NFCR_CFMOD &CFMOD, uint8_t &CFSEL, uint16_t &CFC) volatile
    {
        uint32_t curr = NFCR;

        CFCOV = CAN_NODE0_NFCR_CFCOV(curr & (1u << 23u));
        CFCIE = CAN_NODE0_NFCR_CFCIE(curr & (1u << 22u));
        CFMOD = CAN_NODE0_NFCR_CFMOD((curr >> 19u) & 0b11u);
        CFSEL = (curr >> 16u) & 0b111u;
        CFC = (curr >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set all of NFCR's bit fields.
     */
    inline void set_NFCR(CAN_NODE0_NFCR_CFCOV CFCOV, CAN_NODE0_NFCR_CFCIE CFCIE, CAN_NODE0_NFCR_CFMOD CFMOD, uint8_t CFSEL, uint16_t CFC) volatile
    {
        uint32_t curr = NFCR;

        curr &= ~(0b1u << 23u);
        curr |= (std::to_underlying(CFCOV) & 0b1u) << 23u;
        curr &= ~(0b1u << 22u);
        curr |= (std::to_underlying(CFCIE) & 0b1u) << 22u;
        curr &= ~(0b11u << 19u);
        curr |= (std::to_underlying(CFMOD) & 0b11u) << 19u;
        curr &= ~(0b111u << 16u);
        curr |= (CFSEL & 0b111u) << 16u;
        curr &= ~(0b1111111111111111u << 0u);
        curr |= (CFC & 0b1111111111111111u) << 0u;

        NFCR = curr;
    }
};

static_assert(sizeof(can_node0) == can_node0::size);

static volatile can_node0 *const CAN_NODE0 = reinterpret_cast<can_node0 *>(0x48014200);

static volatile can_node0 *const CAN_NODE1 = reinterpret_cast<can_node0 *>(0x48014300);

static volatile can_node0 *const CAN_NODE2 = reinterpret_cast<can_node0 *>(0x48014400);

static volatile can_node0 *const CAN_NODE3 = reinterpret_cast<can_node0 *>(0x48014500);

static volatile can_node0 *const CAN_NODE4 = reinterpret_cast<can_node0 *>(0x48014600);

static volatile can_node0 *const CAN_NODE5 = reinterpret_cast<can_node0 *>(0x48014700);

}; // namespace XMC4700
