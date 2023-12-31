/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include "../enums/SCU_PLL_CLKMXSTAT_SYSCLKMUX.h"
#include "../ifgen/common.h"

namespace XMC4700
{

/**
 * System Control Unit
 */
struct [[gnu::packed]] scu_pll
{
    /* Constant attributes. */
    static constexpr std::size_t size = 44; /*!< scu_pll's size in bytes. */

    /* Fields. */
    const uint32_t PLLSTAT = {}; /*!< (read-only) PLL Status Register */
    uint32_t PLLCON0; /*!< (read-write) PLL Configuration 0 Register */
    uint32_t PLLCON1; /*!< (read-write) PLL Configuration 1 Register */
    uint32_t PLLCON2; /*!< (read-write) PLL Configuration 2 Register */
    const uint32_t USBPLLSTAT = {}; /*!< (read-only) USB PLL Status Register */
    uint32_t USBPLLCON; /*!< (read-write) USB PLL Configuration Register */
    static constexpr std::size_t reserved_padding0_length = 4;
    const uint32_t reserved_padding0[reserved_padding0_length] = {};
    const uint32_t CLKMXSTAT =
        {}; /*!< (read-only) Clock Multiplexing Status Register */

    /* Methods. */

    /**
     * Get PLLSTAT's PLLSP bit.
     *
     * Oscillator for PLL Valid Spike Status Bit
     */
    inline bool get_PLLSTAT_PLLSP() volatile
    {
        return PLLSTAT & (1u << 9u);
    }

    /**
     * Get PLLSTAT's PLLHV bit.
     *
     * Oscillator for PLL Valid High Status Bit
     */
    inline bool get_PLLSTAT_PLLHV() volatile
    {
        return PLLSTAT & (1u << 8u);
    }

    /**
     * Get PLLSTAT's PLLLV bit.
     *
     * Oscillator for PLL Valid Low Status Bit
     */
    inline bool get_PLLSTAT_PLLLV() volatile
    {
        return PLLSTAT & (1u << 7u);
    }

    /**
     * Get PLLSTAT's BY bit.
     *
     * Bypass Mode Status
     */
    inline bool get_PLLSTAT_BY() volatile
    {
        return PLLSTAT & (1u << 6u);
    }

    /**
     * Get PLLSTAT's K2RDY bit.
     *
     * K2 Divider Ready Status
     */
    inline bool get_PLLSTAT_K2RDY() volatile
    {
        return PLLSTAT & (1u << 5u);
    }

    /**
     * Get PLLSTAT's K1RDY bit.
     *
     * K1 Divider Ready Status
     */
    inline bool get_PLLSTAT_K1RDY() volatile
    {
        return PLLSTAT & (1u << 4u);
    }

    /**
     * Get PLLSTAT's VCOLOCK bit.
     *
     * PLL LOCK Status
     */
    inline bool get_PLLSTAT_VCOLOCK() volatile
    {
        return PLLSTAT & (1u << 2u);
    }

    /**
     * Get PLLSTAT's PWDSTAT bit.
     *
     * PLL Power-saving Mode Status
     */
    inline bool get_PLLSTAT_PWDSTAT() volatile
    {
        return PLLSTAT & (1u << 1u);
    }

    /**
     * Get PLLSTAT's VCOBYST bit.
     *
     * VCO Bypass Status
     */
    inline bool get_PLLSTAT_VCOBYST() volatile
    {
        return PLLSTAT & (1u << 0u);
    }

    /**
     * Get all of PLLSTAT's bit fields.
     *
     * (read-only) PLL Status Register
     */
    inline void get_PLLSTAT(bool &PLLSP, bool &PLLHV, bool &PLLLV, bool &BY,
                            bool &K2RDY, bool &K1RDY, bool &VCOLOCK,
                            bool &PWDSTAT, bool &VCOBYST) volatile
    {
        uint32_t curr = PLLSTAT;

        PLLSP = curr & (1u << 9u);
        PLLHV = curr & (1u << 8u);
        PLLLV = curr & (1u << 7u);
        BY = curr & (1u << 6u);
        K2RDY = curr & (1u << 5u);
        K1RDY = curr & (1u << 4u);
        VCOLOCK = curr & (1u << 2u);
        PWDSTAT = curr & (1u << 1u);
        VCOBYST = curr & (1u << 0u);
    }

    /**
     * Get PLLCON0's FOTR bit.
     *
     * Factory Oscillator Calibration
     */
    inline bool get_PLLCON0_FOTR() volatile
    {
        return PLLCON0 & (1u << 20u);
    }

    /**
     * Set PLLCON0's FOTR bit.
     *
     * Factory Oscillator Calibration
     */
    inline void set_PLLCON0_FOTR() volatile
    {
        PLLCON0 |= 1u << 20u;
    }

    /**
     * Clear PLLCON0's FOTR bit.
     *
     * Factory Oscillator Calibration
     */
    inline void clear_PLLCON0_FOTR() volatile
    {
        PLLCON0 &= ~(1u << 20u);
    }

    /**
     * Toggle PLLCON0's FOTR bit.
     *
     * Factory Oscillator Calibration
     */
    inline void toggle_PLLCON0_FOTR() volatile
    {
        PLLCON0 ^= 1u << 20u;
    }

    /**
     * Get PLLCON0's AOTREN bit.
     *
     * Automatic Oscillator Calibration Enable
     */
    inline bool get_PLLCON0_AOTREN() volatile
    {
        return PLLCON0 & (1u << 19u);
    }

    /**
     * Set PLLCON0's AOTREN bit.
     *
     * Automatic Oscillator Calibration Enable
     */
    inline void set_PLLCON0_AOTREN() volatile
    {
        PLLCON0 |= 1u << 19u;
    }

    /**
     * Clear PLLCON0's AOTREN bit.
     *
     * Automatic Oscillator Calibration Enable
     */
    inline void clear_PLLCON0_AOTREN() volatile
    {
        PLLCON0 &= ~(1u << 19u);
    }

    /**
     * Toggle PLLCON0's AOTREN bit.
     *
     * Automatic Oscillator Calibration Enable
     */
    inline void toggle_PLLCON0_AOTREN() volatile
    {
        PLLCON0 ^= 1u << 19u;
    }

    /**
     * Set PLLCON0's RESLD bit.
     *
     * Restart VCO Lock Detection
     */
    inline void set_PLLCON0_RESLD() volatile
    {
        PLLCON0 |= 1u << 18u;
    }

    /**
     * Clear PLLCON0's RESLD bit.
     *
     * Restart VCO Lock Detection
     */
    inline void clear_PLLCON0_RESLD() volatile
    {
        PLLCON0 &= ~(1u << 18u);
    }

    /**
     * Toggle PLLCON0's RESLD bit.
     *
     * Restart VCO Lock Detection
     */
    inline void toggle_PLLCON0_RESLD() volatile
    {
        PLLCON0 ^= 1u << 18u;
    }

    /**
     * Get PLLCON0's OSCRES bit.
     *
     * Oscillator Watchdog Reset
     */
    inline bool get_PLLCON0_OSCRES() volatile
    {
        return PLLCON0 & (1u << 17u);
    }

    /**
     * Set PLLCON0's OSCRES bit.
     *
     * Oscillator Watchdog Reset
     */
    inline void set_PLLCON0_OSCRES() volatile
    {
        PLLCON0 |= 1u << 17u;
    }

    /**
     * Clear PLLCON0's OSCRES bit.
     *
     * Oscillator Watchdog Reset
     */
    inline void clear_PLLCON0_OSCRES() volatile
    {
        PLLCON0 &= ~(1u << 17u);
    }

    /**
     * Toggle PLLCON0's OSCRES bit.
     *
     * Oscillator Watchdog Reset
     */
    inline void toggle_PLLCON0_OSCRES() volatile
    {
        PLLCON0 ^= 1u << 17u;
    }

    /**
     * Get PLLCON0's PLLPWD bit.
     *
     * PLL Power Saving Mode
     */
    inline bool get_PLLCON0_PLLPWD() volatile
    {
        return PLLCON0 & (1u << 16u);
    }

    /**
     * Set PLLCON0's PLLPWD bit.
     *
     * PLL Power Saving Mode
     */
    inline void set_PLLCON0_PLLPWD() volatile
    {
        PLLCON0 |= 1u << 16u;
    }

    /**
     * Clear PLLCON0's PLLPWD bit.
     *
     * PLL Power Saving Mode
     */
    inline void clear_PLLCON0_PLLPWD() volatile
    {
        PLLCON0 &= ~(1u << 16u);
    }

    /**
     * Toggle PLLCON0's PLLPWD bit.
     *
     * PLL Power Saving Mode
     */
    inline void toggle_PLLCON0_PLLPWD() volatile
    {
        PLLCON0 ^= 1u << 16u;
    }

    /**
     * Get PLLCON0's OSCDISCDIS bit.
     *
     * Oscillator Disconnect Disable
     */
    inline bool get_PLLCON0_OSCDISCDIS() volatile
    {
        return PLLCON0 & (1u << 6u);
    }

    /**
     * Set PLLCON0's OSCDISCDIS bit.
     *
     * Oscillator Disconnect Disable
     */
    inline void set_PLLCON0_OSCDISCDIS() volatile
    {
        PLLCON0 |= 1u << 6u;
    }

    /**
     * Clear PLLCON0's OSCDISCDIS bit.
     *
     * Oscillator Disconnect Disable
     */
    inline void clear_PLLCON0_OSCDISCDIS() volatile
    {
        PLLCON0 &= ~(1u << 6u);
    }

    /**
     * Toggle PLLCON0's OSCDISCDIS bit.
     *
     * Oscillator Disconnect Disable
     */
    inline void toggle_PLLCON0_OSCDISCDIS() volatile
    {
        PLLCON0 ^= 1u << 6u;
    }

    /**
     * Get PLLCON0's FINDIS bit.
     *
     * Disconnect Oscillator from VCO
     */
    inline bool get_PLLCON0_FINDIS() volatile
    {
        return PLLCON0 & (1u << 4u);
    }

    /**
     * Set PLLCON0's FINDIS bit.
     *
     * Disconnect Oscillator from VCO
     */
    inline void set_PLLCON0_FINDIS() volatile
    {
        PLLCON0 |= 1u << 4u;
    }

    /**
     * Clear PLLCON0's FINDIS bit.
     *
     * Disconnect Oscillator from VCO
     */
    inline void clear_PLLCON0_FINDIS() volatile
    {
        PLLCON0 &= ~(1u << 4u);
    }

    /**
     * Toggle PLLCON0's FINDIS bit.
     *
     * Disconnect Oscillator from VCO
     */
    inline void toggle_PLLCON0_FINDIS() volatile
    {
        PLLCON0 ^= 1u << 4u;
    }

    /**
     * Get PLLCON0's VCOTR bit.
     *
     * VCO Trim Control
     */
    inline bool get_PLLCON0_VCOTR() volatile
    {
        return PLLCON0 & (1u << 2u);
    }

    /**
     * Set PLLCON0's VCOTR bit.
     *
     * VCO Trim Control
     */
    inline void set_PLLCON0_VCOTR() volatile
    {
        PLLCON0 |= 1u << 2u;
    }

    /**
     * Clear PLLCON0's VCOTR bit.
     *
     * VCO Trim Control
     */
    inline void clear_PLLCON0_VCOTR() volatile
    {
        PLLCON0 &= ~(1u << 2u);
    }

    /**
     * Toggle PLLCON0's VCOTR bit.
     *
     * VCO Trim Control
     */
    inline void toggle_PLLCON0_VCOTR() volatile
    {
        PLLCON0 ^= 1u << 2u;
    }

    /**
     * Get PLLCON0's VCOPWD bit.
     *
     * VCO Power Saving Mode
     */
    inline bool get_PLLCON0_VCOPWD() volatile
    {
        return PLLCON0 & (1u << 1u);
    }

    /**
     * Set PLLCON0's VCOPWD bit.
     *
     * VCO Power Saving Mode
     */
    inline void set_PLLCON0_VCOPWD() volatile
    {
        PLLCON0 |= 1u << 1u;
    }

    /**
     * Clear PLLCON0's VCOPWD bit.
     *
     * VCO Power Saving Mode
     */
    inline void clear_PLLCON0_VCOPWD() volatile
    {
        PLLCON0 &= ~(1u << 1u);
    }

    /**
     * Toggle PLLCON0's VCOPWD bit.
     *
     * VCO Power Saving Mode
     */
    inline void toggle_PLLCON0_VCOPWD() volatile
    {
        PLLCON0 ^= 1u << 1u;
    }

    /**
     * Get PLLCON0's VCOBYP bit.
     *
     * VCO Bypass
     */
    inline bool get_PLLCON0_VCOBYP() volatile
    {
        return PLLCON0 & (1u << 0u);
    }

    /**
     * Set PLLCON0's VCOBYP bit.
     *
     * VCO Bypass
     */
    inline void set_PLLCON0_VCOBYP() volatile
    {
        PLLCON0 |= 1u << 0u;
    }

    /**
     * Clear PLLCON0's VCOBYP bit.
     *
     * VCO Bypass
     */
    inline void clear_PLLCON0_VCOBYP() volatile
    {
        PLLCON0 &= ~(1u << 0u);
    }

    /**
     * Toggle PLLCON0's VCOBYP bit.
     *
     * VCO Bypass
     */
    inline void toggle_PLLCON0_VCOBYP() volatile
    {
        PLLCON0 ^= 1u << 0u;
    }

    /**
     * Get all of PLLCON0's bit fields.
     *
     * (read-write) PLL Configuration 0 Register
     */
    inline void get_PLLCON0(bool &FOTR, bool &AOTREN, bool &OSCRES,
                            bool &PLLPWD, bool &OSCDISCDIS, bool &FINDIS,
                            bool &VCOTR, bool &VCOPWD, bool &VCOBYP) volatile
    {
        uint32_t curr = PLLCON0;

        FOTR = curr & (1u << 20u);
        AOTREN = curr & (1u << 19u);
        OSCRES = curr & (1u << 17u);
        PLLPWD = curr & (1u << 16u);
        OSCDISCDIS = curr & (1u << 6u);
        FINDIS = curr & (1u << 4u);
        VCOTR = curr & (1u << 2u);
        VCOPWD = curr & (1u << 1u);
        VCOBYP = curr & (1u << 0u);
    }

    /**
     * Set all of PLLCON0's bit fields.
     *
     * (read-write) PLL Configuration 0 Register
     */
    inline void set_PLLCON0(bool FOTR, bool AOTREN, bool RESLD, bool OSCRES,
                            bool PLLPWD, bool OSCDISCDIS, bool FINDIS,
                            bool VCOTR, bool VCOPWD, bool VCOBYP) volatile
    {
        uint32_t curr = PLLCON0;

        curr &= ~(0b1u << 20u);
        curr |= (FOTR & 0b1u) << 20u;
        curr &= ~(0b1u << 19u);
        curr |= (AOTREN & 0b1u) << 19u;
        curr &= ~(0b1u << 18u);
        curr |= (RESLD & 0b1u) << 18u;
        curr &= ~(0b1u << 17u);
        curr |= (OSCRES & 0b1u) << 17u;
        curr &= ~(0b1u << 16u);
        curr |= (PLLPWD & 0b1u) << 16u;
        curr &= ~(0b1u << 6u);
        curr |= (OSCDISCDIS & 0b1u) << 6u;
        curr &= ~(0b1u << 4u);
        curr |= (FINDIS & 0b1u) << 4u;
        curr &= ~(0b1u << 2u);
        curr |= (VCOTR & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (VCOPWD & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (VCOBYP & 0b1u) << 0u;

        PLLCON0 = curr;
    }

    /**
     * Get PLLCON1's PDIV field.
     *
     * P-Divider Value
     */
    inline uint8_t get_PLLCON1_PDIV() volatile
    {
        return (PLLCON1 >> 24u) & 0b1111u;
    }

    /**
     * Set PLLCON1's PDIV field.
     *
     * P-Divider Value
     */
    inline void set_PLLCON1_PDIV(uint8_t value) volatile
    {
        uint32_t curr = PLLCON1;

        curr &= ~(0b1111u << 24u);
        curr |= (value & 0b1111u) << 24u;

        PLLCON1 = curr;
    }

    /**
     * Get PLLCON1's K2DIV field.
     *
     * K2-Divider Value
     */
    inline uint8_t get_PLLCON1_K2DIV() volatile
    {
        return (PLLCON1 >> 16u) & 0b1111111u;
    }

    /**
     * Set PLLCON1's K2DIV field.
     *
     * K2-Divider Value
     */
    inline void set_PLLCON1_K2DIV(uint8_t value) volatile
    {
        uint32_t curr = PLLCON1;

        curr &= ~(0b1111111u << 16u);
        curr |= (value & 0b1111111u) << 16u;

        PLLCON1 = curr;
    }

    /**
     * Get PLLCON1's NDIV field.
     *
     * N-Divider Value
     */
    inline uint8_t get_PLLCON1_NDIV() volatile
    {
        return (PLLCON1 >> 8u) & 0b1111111u;
    }

    /**
     * Set PLLCON1's NDIV field.
     *
     * N-Divider Value
     */
    inline void set_PLLCON1_NDIV(uint8_t value) volatile
    {
        uint32_t curr = PLLCON1;

        curr &= ~(0b1111111u << 8u);
        curr |= (value & 0b1111111u) << 8u;

        PLLCON1 = curr;
    }

    /**
     * Get PLLCON1's K1DIV field.
     *
     * K1-Divider Value
     */
    inline uint8_t get_PLLCON1_K1DIV() volatile
    {
        return (PLLCON1 >> 0u) & 0b1111111u;
    }

    /**
     * Set PLLCON1's K1DIV field.
     *
     * K1-Divider Value
     */
    inline void set_PLLCON1_K1DIV(uint8_t value) volatile
    {
        uint32_t curr = PLLCON1;

        curr &= ~(0b1111111u << 0u);
        curr |= (value & 0b1111111u) << 0u;

        PLLCON1 = curr;
    }

    /**
     * Get all of PLLCON1's bit fields.
     *
     * (read-write) PLL Configuration 1 Register
     */
    inline void get_PLLCON1(uint8_t &PDIV, uint8_t &K2DIV, uint8_t &NDIV,
                            uint8_t &K1DIV) volatile
    {
        uint32_t curr = PLLCON1;

        PDIV = (curr >> 24u) & 0b1111u;
        K2DIV = (curr >> 16u) & 0b1111111u;
        NDIV = (curr >> 8u) & 0b1111111u;
        K1DIV = (curr >> 0u) & 0b1111111u;
    }

    /**
     * Set all of PLLCON1's bit fields.
     *
     * (read-write) PLL Configuration 1 Register
     */
    inline void set_PLLCON1(uint8_t PDIV, uint8_t K2DIV, uint8_t NDIV,
                            uint8_t K1DIV) volatile
    {
        uint32_t curr = PLLCON1;

        curr &= ~(0b1111u << 24u);
        curr |= (PDIV & 0b1111u) << 24u;
        curr &= ~(0b1111111u << 16u);
        curr |= (K2DIV & 0b1111111u) << 16u;
        curr &= ~(0b1111111u << 8u);
        curr |= (NDIV & 0b1111111u) << 8u;
        curr &= ~(0b1111111u << 0u);
        curr |= (K1DIV & 0b1111111u) << 0u;

        PLLCON1 = curr;
    }

    /**
     * Get PLLCON2's K1INSEL bit.
     *
     * K1-Divider Input Selection
     */
    inline bool get_PLLCON2_K1INSEL() volatile
    {
        return PLLCON2 & (1u << 8u);
    }

    /**
     * Set PLLCON2's K1INSEL bit.
     *
     * K1-Divider Input Selection
     */
    inline void set_PLLCON2_K1INSEL() volatile
    {
        PLLCON2 |= 1u << 8u;
    }

    /**
     * Clear PLLCON2's K1INSEL bit.
     *
     * K1-Divider Input Selection
     */
    inline void clear_PLLCON2_K1INSEL() volatile
    {
        PLLCON2 &= ~(1u << 8u);
    }

    /**
     * Toggle PLLCON2's K1INSEL bit.
     *
     * K1-Divider Input Selection
     */
    inline void toggle_PLLCON2_K1INSEL() volatile
    {
        PLLCON2 ^= 1u << 8u;
    }

    /**
     * Get PLLCON2's PINSEL bit.
     *
     * P-Divider Input Selection
     */
    inline bool get_PLLCON2_PINSEL() volatile
    {
        return PLLCON2 & (1u << 0u);
    }

    /**
     * Set PLLCON2's PINSEL bit.
     *
     * P-Divider Input Selection
     */
    inline void set_PLLCON2_PINSEL() volatile
    {
        PLLCON2 |= 1u << 0u;
    }

    /**
     * Clear PLLCON2's PINSEL bit.
     *
     * P-Divider Input Selection
     */
    inline void clear_PLLCON2_PINSEL() volatile
    {
        PLLCON2 &= ~(1u << 0u);
    }

    /**
     * Toggle PLLCON2's PINSEL bit.
     *
     * P-Divider Input Selection
     */
    inline void toggle_PLLCON2_PINSEL() volatile
    {
        PLLCON2 ^= 1u << 0u;
    }

    /**
     * Get all of PLLCON2's bit fields.
     *
     * (read-write) PLL Configuration 2 Register
     */
    inline void get_PLLCON2(bool &K1INSEL, bool &PINSEL) volatile
    {
        uint32_t curr = PLLCON2;

        K1INSEL = curr & (1u << 8u);
        PINSEL = curr & (1u << 0u);
    }

    /**
     * Set all of PLLCON2's bit fields.
     *
     * (read-write) PLL Configuration 2 Register
     */
    inline void set_PLLCON2(bool K1INSEL, bool PINSEL) volatile
    {
        uint32_t curr = PLLCON2;

        curr &= ~(0b1u << 8u);
        curr |= (K1INSEL & 0b1u) << 8u;
        curr &= ~(0b1u << 0u);
        curr |= (PINSEL & 0b1u) << 0u;

        PLLCON2 = curr;
    }

    /**
     * Get USBPLLSTAT's VCOLOCKED bit.
     *
     * PLL LOCK Status
     */
    inline bool get_USBPLLSTAT_VCOLOCKED() volatile
    {
        return USBPLLSTAT & (1u << 7u);
    }

    /**
     * Get USBPLLSTAT's BY bit.
     *
     * Bypass Mode Status
     */
    inline bool get_USBPLLSTAT_BY() volatile
    {
        return USBPLLSTAT & (1u << 6u);
    }

    /**
     * Get USBPLLSTAT's VCOLOCK bit.
     *
     * PLL VCO Lock Status
     */
    inline bool get_USBPLLSTAT_VCOLOCK() volatile
    {
        return USBPLLSTAT & (1u << 2u);
    }

    /**
     * Get USBPLLSTAT's PWDSTAT bit.
     *
     * PLL Power-saving Mode Status
     */
    inline bool get_USBPLLSTAT_PWDSTAT() volatile
    {
        return USBPLLSTAT & (1u << 1u);
    }

    /**
     * Get USBPLLSTAT's VCOBYST bit.
     *
     * VCO Bypass Status
     */
    inline bool get_USBPLLSTAT_VCOBYST() volatile
    {
        return USBPLLSTAT & (1u << 0u);
    }

    /**
     * Get all of USBPLLSTAT's bit fields.
     *
     * (read-only) USB PLL Status Register
     */
    inline void get_USBPLLSTAT(bool &VCOLOCKED, bool &BY, bool &VCOLOCK,
                               bool &PWDSTAT, bool &VCOBYST) volatile
    {
        uint32_t curr = USBPLLSTAT;

        VCOLOCKED = curr & (1u << 7u);
        BY = curr & (1u << 6u);
        VCOLOCK = curr & (1u << 2u);
        PWDSTAT = curr & (1u << 1u);
        VCOBYST = curr & (1u << 0u);
    }

    /**
     * Get USBPLLCON's PDIV field.
     *
     * P-Divider Value
     */
    inline uint8_t get_USBPLLCON_PDIV() volatile
    {
        return (USBPLLCON >> 24u) & 0b1111u;
    }

    /**
     * Set USBPLLCON's PDIV field.
     *
     * P-Divider Value
     */
    inline void set_USBPLLCON_PDIV(uint8_t value) volatile
    {
        uint32_t curr = USBPLLCON;

        curr &= ~(0b1111u << 24u);
        curr |= (value & 0b1111u) << 24u;

        USBPLLCON = curr;
    }

    /**
     * Set USBPLLCON's RESLD bit.
     *
     * Restart VCO Lock Detection
     */
    inline void set_USBPLLCON_RESLD() volatile
    {
        USBPLLCON |= 1u << 18u;
    }

    /**
     * Clear USBPLLCON's RESLD bit.
     *
     * Restart VCO Lock Detection
     */
    inline void clear_USBPLLCON_RESLD() volatile
    {
        USBPLLCON &= ~(1u << 18u);
    }

    /**
     * Toggle USBPLLCON's RESLD bit.
     *
     * Restart VCO Lock Detection
     */
    inline void toggle_USBPLLCON_RESLD() volatile
    {
        USBPLLCON ^= 1u << 18u;
    }

    /**
     * Get USBPLLCON's PLLPWD bit.
     *
     * PLL Power Saving Mode
     */
    inline bool get_USBPLLCON_PLLPWD() volatile
    {
        return USBPLLCON & (1u << 16u);
    }

    /**
     * Set USBPLLCON's PLLPWD bit.
     *
     * PLL Power Saving Mode
     */
    inline void set_USBPLLCON_PLLPWD() volatile
    {
        USBPLLCON |= 1u << 16u;
    }

    /**
     * Clear USBPLLCON's PLLPWD bit.
     *
     * PLL Power Saving Mode
     */
    inline void clear_USBPLLCON_PLLPWD() volatile
    {
        USBPLLCON &= ~(1u << 16u);
    }

    /**
     * Toggle USBPLLCON's PLLPWD bit.
     *
     * PLL Power Saving Mode
     */
    inline void toggle_USBPLLCON_PLLPWD() volatile
    {
        USBPLLCON ^= 1u << 16u;
    }

    /**
     * Get USBPLLCON's NDIV field.
     *
     * N-Divider Value
     */
    inline uint8_t get_USBPLLCON_NDIV() volatile
    {
        return (USBPLLCON >> 8u) & 0b1111111u;
    }

    /**
     * Set USBPLLCON's NDIV field.
     *
     * N-Divider Value
     */
    inline void set_USBPLLCON_NDIV(uint8_t value) volatile
    {
        uint32_t curr = USBPLLCON;

        curr &= ~(0b1111111u << 8u);
        curr |= (value & 0b1111111u) << 8u;

        USBPLLCON = curr;
    }

    /**
     * Get USBPLLCON's OSCDISCDIS bit.
     *
     * Oscillator Disconnect Disable
     */
    inline bool get_USBPLLCON_OSCDISCDIS() volatile
    {
        return USBPLLCON & (1u << 6u);
    }

    /**
     * Set USBPLLCON's OSCDISCDIS bit.
     *
     * Oscillator Disconnect Disable
     */
    inline void set_USBPLLCON_OSCDISCDIS() volatile
    {
        USBPLLCON |= 1u << 6u;
    }

    /**
     * Clear USBPLLCON's OSCDISCDIS bit.
     *
     * Oscillator Disconnect Disable
     */
    inline void clear_USBPLLCON_OSCDISCDIS() volatile
    {
        USBPLLCON &= ~(1u << 6u);
    }

    /**
     * Toggle USBPLLCON's OSCDISCDIS bit.
     *
     * Oscillator Disconnect Disable
     */
    inline void toggle_USBPLLCON_OSCDISCDIS() volatile
    {
        USBPLLCON ^= 1u << 6u;
    }

    /**
     * Get USBPLLCON's FINDIS bit.
     *
     * Disconnect Oscillator from VCO
     */
    inline bool get_USBPLLCON_FINDIS() volatile
    {
        return USBPLLCON & (1u << 4u);
    }

    /**
     * Set USBPLLCON's FINDIS bit.
     *
     * Disconnect Oscillator from VCO
     */
    inline void set_USBPLLCON_FINDIS() volatile
    {
        USBPLLCON |= 1u << 4u;
    }

    /**
     * Clear USBPLLCON's FINDIS bit.
     *
     * Disconnect Oscillator from VCO
     */
    inline void clear_USBPLLCON_FINDIS() volatile
    {
        USBPLLCON &= ~(1u << 4u);
    }

    /**
     * Toggle USBPLLCON's FINDIS bit.
     *
     * Disconnect Oscillator from VCO
     */
    inline void toggle_USBPLLCON_FINDIS() volatile
    {
        USBPLLCON ^= 1u << 4u;
    }

    /**
     * Get USBPLLCON's VCOTR bit.
     *
     * VCO Trim Control
     */
    inline bool get_USBPLLCON_VCOTR() volatile
    {
        return USBPLLCON & (1u << 2u);
    }

    /**
     * Set USBPLLCON's VCOTR bit.
     *
     * VCO Trim Control
     */
    inline void set_USBPLLCON_VCOTR() volatile
    {
        USBPLLCON |= 1u << 2u;
    }

    /**
     * Clear USBPLLCON's VCOTR bit.
     *
     * VCO Trim Control
     */
    inline void clear_USBPLLCON_VCOTR() volatile
    {
        USBPLLCON &= ~(1u << 2u);
    }

    /**
     * Toggle USBPLLCON's VCOTR bit.
     *
     * VCO Trim Control
     */
    inline void toggle_USBPLLCON_VCOTR() volatile
    {
        USBPLLCON ^= 1u << 2u;
    }

    /**
     * Get USBPLLCON's VCOPWD bit.
     *
     * VCO Power Saving Mode
     */
    inline bool get_USBPLLCON_VCOPWD() volatile
    {
        return USBPLLCON & (1u << 1u);
    }

    /**
     * Set USBPLLCON's VCOPWD bit.
     *
     * VCO Power Saving Mode
     */
    inline void set_USBPLLCON_VCOPWD() volatile
    {
        USBPLLCON |= 1u << 1u;
    }

    /**
     * Clear USBPLLCON's VCOPWD bit.
     *
     * VCO Power Saving Mode
     */
    inline void clear_USBPLLCON_VCOPWD() volatile
    {
        USBPLLCON &= ~(1u << 1u);
    }

    /**
     * Toggle USBPLLCON's VCOPWD bit.
     *
     * VCO Power Saving Mode
     */
    inline void toggle_USBPLLCON_VCOPWD() volatile
    {
        USBPLLCON ^= 1u << 1u;
    }

    /**
     * Get USBPLLCON's VCOBYP bit.
     *
     * VCO Bypass
     */
    inline bool get_USBPLLCON_VCOBYP() volatile
    {
        return USBPLLCON & (1u << 0u);
    }

    /**
     * Set USBPLLCON's VCOBYP bit.
     *
     * VCO Bypass
     */
    inline void set_USBPLLCON_VCOBYP() volatile
    {
        USBPLLCON |= 1u << 0u;
    }

    /**
     * Clear USBPLLCON's VCOBYP bit.
     *
     * VCO Bypass
     */
    inline void clear_USBPLLCON_VCOBYP() volatile
    {
        USBPLLCON &= ~(1u << 0u);
    }

    /**
     * Toggle USBPLLCON's VCOBYP bit.
     *
     * VCO Bypass
     */
    inline void toggle_USBPLLCON_VCOBYP() volatile
    {
        USBPLLCON ^= 1u << 0u;
    }

    /**
     * Get all of USBPLLCON's bit fields.
     *
     * (read-write) USB PLL Configuration Register
     */
    inline void get_USBPLLCON(uint8_t &PDIV, bool &PLLPWD, uint8_t &NDIV,
                              bool &OSCDISCDIS, bool &FINDIS, bool &VCOTR,
                              bool &VCOPWD, bool &VCOBYP) volatile
    {
        uint32_t curr = USBPLLCON;

        PDIV = (curr >> 24u) & 0b1111u;
        PLLPWD = curr & (1u << 16u);
        NDIV = (curr >> 8u) & 0b1111111u;
        OSCDISCDIS = curr & (1u << 6u);
        FINDIS = curr & (1u << 4u);
        VCOTR = curr & (1u << 2u);
        VCOPWD = curr & (1u << 1u);
        VCOBYP = curr & (1u << 0u);
    }

    /**
     * Set all of USBPLLCON's bit fields.
     *
     * (read-write) USB PLL Configuration Register
     */
    inline void set_USBPLLCON(uint8_t PDIV, bool RESLD, bool PLLPWD,
                              uint8_t NDIV, bool OSCDISCDIS, bool FINDIS,
                              bool VCOTR, bool VCOPWD, bool VCOBYP) volatile
    {
        uint32_t curr = USBPLLCON;

        curr &= ~(0b1111u << 24u);
        curr |= (PDIV & 0b1111u) << 24u;
        curr &= ~(0b1u << 18u);
        curr |= (RESLD & 0b1u) << 18u;
        curr &= ~(0b1u << 16u);
        curr |= (PLLPWD & 0b1u) << 16u;
        curr &= ~(0b1111111u << 8u);
        curr |= (NDIV & 0b1111111u) << 8u;
        curr &= ~(0b1u << 6u);
        curr |= (OSCDISCDIS & 0b1u) << 6u;
        curr &= ~(0b1u << 4u);
        curr |= (FINDIS & 0b1u) << 4u;
        curr &= ~(0b1u << 2u);
        curr |= (VCOTR & 0b1u) << 2u;
        curr &= ~(0b1u << 1u);
        curr |= (VCOPWD & 0b1u) << 1u;
        curr &= ~(0b1u << 0u);
        curr |= (VCOBYP & 0b1u) << 0u;

        USBPLLCON = curr;
    }

    /**
     * Get CLKMXSTAT's SYSCLKMUX field.
     *
     * Status of System Clock Multiplexing Upon Source Switching
     */
    inline SCU_PLL_CLKMXSTAT_SYSCLKMUX get_CLKMXSTAT_SYSCLKMUX() volatile
    {
        return SCU_PLL_CLKMXSTAT_SYSCLKMUX((CLKMXSTAT >> 0u) & 0b11u);
    }
};

static_assert(sizeof(scu_pll) == scu_pll::size);

static volatile scu_pll *const SCU_PLL =
    reinterpret_cast<scu_pll *>(0x50004710);

}; // namespace XMC4700
