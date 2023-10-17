/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT0_PDISC_PDIS15 : uint8_t
{
    enabled /*!< Pad Pn.x is enabled. */,
    disabled = 1 /*!< Pad Pn.x is disabled. */
};
static_assert(sizeof(PORT0_PDISC_PDIS15) == 1);

/**
 * Converts PORT0_PDISC_PDIS15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT0_PDISC_PDIS15 instance)
{
    const char *result = "UNKNOWN PORT0_PDISC_PDIS15";

    switch (instance)
    {
    case PORT0_PDISC_PDIS15::enabled:
        result = "enabled";
        break;
    case PORT0_PDISC_PDIS15::disabled:
        result = "disabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT0_PDISC_PDIS15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT0_PDISC_PDIS15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "enabled", 7)))
    {
        output = PORT0_PDISC_PDIS15::enabled;
    }
    else if ((result = !strncmp(data, "disabled", 8)))
    {
        output = PORT0_PDISC_PDIS15::disabled;
    }

    return result;
}

}; // namespace XMC4700
