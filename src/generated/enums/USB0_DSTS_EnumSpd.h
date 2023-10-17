/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DSTS_EnumSpd : uint8_t
{
    full_speed_phy_clock_running_at_48_mhz =
        3 /*!< Full speed (PHY clock is running at 48 MHz) */
};
static_assert(sizeof(USB0_DSTS_EnumSpd) == 1);

/**
 * Converts USB0_DSTS_EnumSpd to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DSTS_EnumSpd instance)
{
    const char *result = "UNKNOWN USB0_DSTS_EnumSpd";

    switch (instance)
    {
    case USB0_DSTS_EnumSpd::full_speed_phy_clock_running_at_48_mhz:
        result = "full_speed_phy_clock_running_at_48_mhz";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DSTS_EnumSpd.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DSTS_EnumSpd &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "full_speed_phy_clock_running_at_48_mhz", 38)))
    {
        output = USB0_DSTS_EnumSpd::full_speed_phy_clock_running_at_48_mhz;
    }

    return result;
}

}; // namespace XMC4700
