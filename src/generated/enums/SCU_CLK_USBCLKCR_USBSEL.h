/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_USBCLKCR_USBSEL : uint8_t
{
    usb_pll_clock /*!< USB PLL Clock */,
    pll_clock = 1 /*!< PLL Clock */
};
static_assert(sizeof(SCU_CLK_USBCLKCR_USBSEL) == 1);

/**
 * Converts SCU_CLK_USBCLKCR_USBSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_USBCLKCR_USBSEL instance)
{
    const char *result = "UNKNOWN SCU_CLK_USBCLKCR_USBSEL";

    switch (instance)
    {
    case SCU_CLK_USBCLKCR_USBSEL::usb_pll_clock:
        result = "usb_pll_clock";
        break;
    case SCU_CLK_USBCLKCR_USBSEL::pll_clock:
        result = "pll_clock";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_USBCLKCR_USBSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_USBCLKCR_USBSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "usb_pll_clock", 13)))
    {
        output = SCU_CLK_USBCLKCR_USBSEL::usb_pll_clock;
    }
    else if ((result = !strncmp(data, "pll_clock", 9)))
    {
        output = SCU_CLK_USBCLKCR_USBSEL::pll_clock;
    }

    return result;
}

}; // namespace XMC4700
