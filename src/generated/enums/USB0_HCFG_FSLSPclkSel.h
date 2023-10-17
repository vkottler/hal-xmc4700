/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HCFG_FSLSPclkSel : uint8_t
{
    phy_clock_running_at_48_mhz = 1 /*!< PHY clock is running at 48 MHz */
};
static_assert(sizeof(USB0_HCFG_FSLSPclkSel) == 1);

/**
 * Converts USB0_HCFG_FSLSPclkSel to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HCFG_FSLSPclkSel instance)
{
    const char *result = "UNKNOWN USB0_HCFG_FSLSPclkSel";

    switch (instance)
    {
    case USB0_HCFG_FSLSPclkSel::phy_clock_running_at_48_mhz:
        result = "phy_clock_running_at_48_mhz";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HCFG_FSLSPclkSel.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HCFG_FSLSPclkSel &output)
{
    bool result = false;

    if ((result = !strncmp(data, "phy_clock_running_at_48_mhz", 27)))
    {
        output = USB0_HCFG_FSLSPclkSel::phy_clock_running_at_48_mhz;
    }

    return result;
}

}; // namespace XMC4700
