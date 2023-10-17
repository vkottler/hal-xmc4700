/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT5_PDISC_PDIS15 : uint8_t
{
    enabled /*!< Pad Pn.x is enabled. */,
    disabled = 1 /*!< Pad Pn.x is disabled. */
};
static_assert(sizeof(PORT5_PDISC_PDIS15) == 1);

/**
 * Converts PORT5_PDISC_PDIS15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT5_PDISC_PDIS15 instance)
{
    const char *result = "UNKNOWN PORT5_PDISC_PDIS15";

    switch (instance)
    {
    case PORT5_PDISC_PDIS15::enabled:
        result = "enabled";
        break;
    case PORT5_PDISC_PDIS15::disabled:
        result = "disabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT5_PDISC_PDIS15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT5_PDISC_PDIS15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "enabled", 7)))
    {
        output = PORT5_PDISC_PDIS15::enabled;
    }
    else if ((result = !strncmp(data, "disabled", 8)))
    {
        output = PORT5_PDISC_PDIS15::disabled;
    }

    return result;
}

}; // namespace XMC4700
