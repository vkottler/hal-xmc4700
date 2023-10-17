/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include "../enums/ETH0_CON_ETH0_CON_CRS.h"
#include "../enums/ETH0_CON_ETH0_CON_INFSEL.h"
#include "../enums/ETH0_CON_ETH0_CON_MDIO.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * Ethernet Control Register
 */
struct [[gnu::packed]] eth0_con
{
    /* Constant attributes. */
    static constexpr std::size_t size = 4; /*!< eth0_con's size in bytes. */

    /* Fields. */
    uint32_t ETH0_CON; /*!< (read-write) Ethernet 0 Port Control Register */

    /* Methods. */

    /**
     * Get ETH0_CON's INFSEL bit.
     *
     * Ethernet MAC Interface Selection
     */
    inline ETH0_CON_ETH0_CON_INFSEL get_ETH0_CON_INFSEL() volatile
    {
        return ETH0_CON_ETH0_CON_INFSEL(ETH0_CON & (1u << 26u));
    }

    /**
     * Set ETH0_CON's INFSEL bit.
     *
     * Ethernet MAC Interface Selection
     */
    inline void set_ETH0_CON_INFSEL() volatile
    {
        ETH0_CON |= 1u << 26u;
    }

    /**
     * Clear ETH0_CON's INFSEL bit.
     *
     * Ethernet MAC Interface Selection
     */
    inline void clear_ETH0_CON_INFSEL() volatile
    {
        ETH0_CON &= ~(1u << 26u);
    }

    /**
     * Toggle ETH0_CON's INFSEL bit.
     *
     * Ethernet MAC Interface Selection
     */
    inline void toggle_ETH0_CON_INFSEL() volatile
    {
        ETH0_CON ^= 1u << 26u;
    }

    /**
     * Get ETH0_CON's MDIO field.
     *
     * MDIO Input Select
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_MDIO() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 22u) & 0b11u);
    }

    /**
     * Set ETH0_CON's MDIO field.
     *
     * MDIO Input Select
     */
    inline void set_ETH0_CON_MDIO(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 22u);
        curr |= (std::to_underlying(value) & 0b11u) << 22u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's CLK_TX field.
     *
     * CLK_TX input
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_CLK_TX() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 18u) & 0b11u);
    }

    /**
     * Set ETH0_CON's CLK_TX field.
     *
     * CLK_TX input
     */
    inline void set_ETH0_CON_CLK_TX(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 18u);
        curr |= (std::to_underlying(value) & 0b11u) << 18u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's COL field.
     *
     * COL input
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_COL() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 16u) & 0b11u);
    }

    /**
     * Set ETH0_CON's COL field.
     *
     * COL input
     */
    inline void set_ETH0_CON_COL(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 16u);
        curr |= (std::to_underlying(value) & 0b11u) << 16u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's RXER field.
     *
     * RXER Input
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_RXER() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 14u) & 0b11u);
    }

    /**
     * Set ETH0_CON's RXER field.
     *
     * RXER Input
     */
    inline void set_ETH0_CON_RXER(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 14u);
        curr |= (std::to_underlying(value) & 0b11u) << 14u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's CRS field.
     *
     * CRS input
     */
    inline ETH0_CON_ETH0_CON_CRS get_ETH0_CON_CRS() volatile
    {
        return ETH0_CON_ETH0_CON_CRS((ETH0_CON >> 12u) & 0b11u);
    }

    /**
     * Set ETH0_CON's CRS field.
     *
     * CRS input
     */
    inline void set_ETH0_CON_CRS(ETH0_CON_ETH0_CON_CRS value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 12u);
        curr |= (std::to_underlying(value) & 0b11u) << 12u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's CRS_DV field.
     *
     * CRS_DV input
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_CRS_DV() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 10u) & 0b11u);
    }

    /**
     * Set ETH0_CON's CRS_DV field.
     *
     * CRS_DV input
     */
    inline void set_ETH0_CON_CRS_DV(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 10u);
        curr |= (std::to_underlying(value) & 0b11u) << 10u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's CLK_RMII field.
     *
     * RMII clock input
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_CLK_RMII() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 8u) & 0b11u);
    }

    /**
     * Set ETH0_CON's CLK_RMII field.
     *
     * RMII clock input
     */
    inline void set_ETH0_CON_CLK_RMII(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(value) & 0b11u) << 8u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's RXD3 field.
     *
     * MAC Receive Input 3
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_RXD3() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 6u) & 0b11u);
    }

    /**
     * Set ETH0_CON's RXD3 field.
     *
     * MAC Receive Input 3
     */
    inline void set_ETH0_CON_RXD3(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 6u);
        curr |= (std::to_underlying(value) & 0b11u) << 6u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's RXD2 field.
     *
     * MAC Receive Input 2
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_RXD2() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 4u) & 0b11u);
    }

    /**
     * Set ETH0_CON's RXD2 field.
     *
     * MAC Receive Input 2
     */
    inline void set_ETH0_CON_RXD2(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(value) & 0b11u) << 4u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's RXD1 field.
     *
     * MAC Receive Input 1
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_RXD1() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 2u) & 0b11u);
    }

    /**
     * Set ETH0_CON's RXD1 field.
     *
     * MAC Receive Input 1
     */
    inline void set_ETH0_CON_RXD1(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 2u);
        curr |= (std::to_underlying(value) & 0b11u) << 2u;

        ETH0_CON = curr;
    }

    /**
     * Get ETH0_CON's RXD0 field.
     *
     * MAC Receive Input 0
     */
    inline ETH0_CON_ETH0_CON_MDIO get_ETH0_CON_RXD0() volatile
    {
        return ETH0_CON_ETH0_CON_MDIO((ETH0_CON >> 0u) & 0b11u);
    }

    /**
     * Set ETH0_CON's RXD0 field.
     *
     * MAC Receive Input 0
     */
    inline void set_ETH0_CON_RXD0(ETH0_CON_ETH0_CON_MDIO value) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        ETH0_CON = curr;
    }

    /**
     * Get all of ETH0_CON's bit fields.
     *
     * (read-write) Ethernet 0 Port Control Register
     */
    inline void get_ETH0_CON(
        ETH0_CON_ETH0_CON_INFSEL &INFSEL, ETH0_CON_ETH0_CON_MDIO &MDIO,
        ETH0_CON_ETH0_CON_MDIO &CLK_TX, ETH0_CON_ETH0_CON_MDIO &COL,
        ETH0_CON_ETH0_CON_MDIO &RXER, ETH0_CON_ETH0_CON_CRS &CRS,
        ETH0_CON_ETH0_CON_MDIO &CRS_DV, ETH0_CON_ETH0_CON_MDIO &CLK_RMII,
        ETH0_CON_ETH0_CON_MDIO &RXD3, ETH0_CON_ETH0_CON_MDIO &RXD2,
        ETH0_CON_ETH0_CON_MDIO &RXD1, ETH0_CON_ETH0_CON_MDIO &RXD0) volatile
    {
        uint32_t curr = ETH0_CON;

        INFSEL = ETH0_CON_ETH0_CON_INFSEL(curr & (1u << 26u));
        MDIO = ETH0_CON_ETH0_CON_MDIO((curr >> 22u) & 0b11u);
        CLK_TX = ETH0_CON_ETH0_CON_MDIO((curr >> 18u) & 0b11u);
        COL = ETH0_CON_ETH0_CON_MDIO((curr >> 16u) & 0b11u);
        RXER = ETH0_CON_ETH0_CON_MDIO((curr >> 14u) & 0b11u);
        CRS = ETH0_CON_ETH0_CON_CRS((curr >> 12u) & 0b11u);
        CRS_DV = ETH0_CON_ETH0_CON_MDIO((curr >> 10u) & 0b11u);
        CLK_RMII = ETH0_CON_ETH0_CON_MDIO((curr >> 8u) & 0b11u);
        RXD3 = ETH0_CON_ETH0_CON_MDIO((curr >> 6u) & 0b11u);
        RXD2 = ETH0_CON_ETH0_CON_MDIO((curr >> 4u) & 0b11u);
        RXD1 = ETH0_CON_ETH0_CON_MDIO((curr >> 2u) & 0b11u);
        RXD0 = ETH0_CON_ETH0_CON_MDIO((curr >> 0u) & 0b11u);
    }

    /**
     * Set all of ETH0_CON's bit fields.
     *
     * (read-write) Ethernet 0 Port Control Register
     */
    inline void set_ETH0_CON(
        ETH0_CON_ETH0_CON_INFSEL INFSEL, ETH0_CON_ETH0_CON_MDIO MDIO,
        ETH0_CON_ETH0_CON_MDIO CLK_TX, ETH0_CON_ETH0_CON_MDIO COL,
        ETH0_CON_ETH0_CON_MDIO RXER, ETH0_CON_ETH0_CON_CRS CRS,
        ETH0_CON_ETH0_CON_MDIO CRS_DV, ETH0_CON_ETH0_CON_MDIO CLK_RMII,
        ETH0_CON_ETH0_CON_MDIO RXD3, ETH0_CON_ETH0_CON_MDIO RXD2,
        ETH0_CON_ETH0_CON_MDIO RXD1, ETH0_CON_ETH0_CON_MDIO RXD0) volatile
    {
        uint32_t curr = ETH0_CON;

        curr &= ~(0b1u << 26u);
        curr |= (std::to_underlying(INFSEL) & 0b1u) << 26u;
        curr &= ~(0b11u << 22u);
        curr |= (std::to_underlying(MDIO) & 0b11u) << 22u;
        curr &= ~(0b11u << 18u);
        curr |= (std::to_underlying(CLK_TX) & 0b11u) << 18u;
        curr &= ~(0b11u << 16u);
        curr |= (std::to_underlying(COL) & 0b11u) << 16u;
        curr &= ~(0b11u << 14u);
        curr |= (std::to_underlying(RXER) & 0b11u) << 14u;
        curr &= ~(0b11u << 12u);
        curr |= (std::to_underlying(CRS) & 0b11u) << 12u;
        curr &= ~(0b11u << 10u);
        curr |= (std::to_underlying(CRS_DV) & 0b11u) << 10u;
        curr &= ~(0b11u << 8u);
        curr |= (std::to_underlying(CLK_RMII) & 0b11u) << 8u;
        curr &= ~(0b11u << 6u);
        curr |= (std::to_underlying(RXD3) & 0b11u) << 6u;
        curr &= ~(0b11u << 4u);
        curr |= (std::to_underlying(RXD2) & 0b11u) << 4u;
        curr &= ~(0b11u << 2u);
        curr |= (std::to_underlying(RXD1) & 0b11u) << 2u;
        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(RXD0) & 0b11u) << 0u;

        ETH0_CON = curr;
    }
};

static_assert(sizeof(eth0_con) == eth0_con::size);

static volatile eth0_con *const ETH0_CON =
    reinterpret_cast<eth0_con *>(0x50004040);

}; // namespace XMC4700
