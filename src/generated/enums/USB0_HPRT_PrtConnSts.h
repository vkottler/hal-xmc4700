/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HPRT_PrtConnSts : uint8_t
{
    no_device_attached_port /*!< No device is attached to the port. */,
    device_attached_port = 1 /*!< A device is attached to the port. */
};
static_assert(sizeof(USB0_HPRT_PrtConnSts) == 1);

/**
 * Converts USB0_HPRT_PrtConnSts to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HPRT_PrtConnSts instance)
{
    const char *result = "UNKNOWN USB0_HPRT_PrtConnSts";

    switch (instance)
    {
    case USB0_HPRT_PrtConnSts::no_device_attached_port:
        result = "no_device_attached_port";
        break;
    case USB0_HPRT_PrtConnSts::device_attached_port:
        result = "device_attached_port";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HPRT_PrtConnSts.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HPRT_PrtConnSts &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_device_attached_port", 23)))
    {
        output = USB0_HPRT_PrtConnSts::no_device_attached_port;
    }
    else if ((result = !strncmp(data, "device_attached_port", 20)))
    {
        output = USB0_HPRT_PrtConnSts::device_attached_port;
    }

    return result;
}

}; // namespace XMC4700
