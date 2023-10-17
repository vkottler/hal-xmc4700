/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DCFG_DevSpd : uint8_t
{
    full_speed_usb_11_transceiver_clock_48_mhz =
        3 /*!< Full speed (USB 1.1 transceiver clock is 48 MHz) */
};
static_assert(sizeof(USB0_DCFG_DevSpd) == 1);

/**
 * Converts USB0_DCFG_DevSpd to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCFG_DevSpd instance)
{
    const char *result = "UNKNOWN USB0_DCFG_DevSpd";

    switch (instance)
    {
    case USB0_DCFG_DevSpd::full_speed_usb_11_transceiver_clock_48_mhz:
        result = "full_speed_usb_11_transceiver_clock_48_mhz";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCFG_DevSpd.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCFG_DevSpd &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "full_speed_usb_11_transceiver_clock_48_mhz", 42)))
    {
        output = USB0_DCFG_DevSpd::full_speed_usb_11_transceiver_clock_48_mhz;
    }

    return result;
}

}; // namespace XMC4700
