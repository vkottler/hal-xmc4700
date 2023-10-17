/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HPRT_PrtEna : uint8_t
{
    disabled /*!< Port disabled */,
    enabled = 1 /*!< Port enabled */
};
static_assert(sizeof(USB0_HPRT_PrtEna) == 1);

/**
 * Converts USB0_HPRT_PrtEna to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HPRT_PrtEna instance)
{
    const char *result = "UNKNOWN USB0_HPRT_PrtEna";

    switch (instance)
    {
    case USB0_HPRT_PrtEna::disabled:
        result = "disabled";
        break;
    case USB0_HPRT_PrtEna::enabled:
        result = "enabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HPRT_PrtEna.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HPRT_PrtEna &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = USB0_HPRT_PrtEna::disabled;
    }
    else if ((result = !strncmp(data, "enabled", 7)))
    {
        output = USB0_HPRT_PrtEna::enabled;
    }

    return result;
}

}; // namespace XMC4700
