/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_DCTL_SftDiscon : uint8_t
{
    value1 /*!< Normal operation. When this bit is cleared after a soft disconnect, the core drives a device connect event to the USB host. When the device is reconnected, the USB host restarts device enumeration. */,
    value2 = 1 /*!< The core drives a device disconnect event to the USB host. */
};
static_assert(sizeof(USB0_DCTL_SftDiscon) == 1);

/**
 * Converts USB0_DCTL_SftDiscon to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_DCTL_SftDiscon instance)
{
    const char *result = "UNKNOWN USB0_DCTL_SftDiscon";

    switch (instance)
    {
    case USB0_DCTL_SftDiscon::value1:
        result = "value1";
        break;
    case USB0_DCTL_SftDiscon::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_DCTL_SftDiscon.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_DCTL_SftDiscon &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_DCTL_SftDiscon::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_DCTL_SftDiscon::value2;
    }

    return result;
}

}; // namespace XMC4700
