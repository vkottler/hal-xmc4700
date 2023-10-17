/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT4_PPS_PPS15 : uint8_t
{
    disabled /*!< Pin Power Save of Pn.x is disabled. */,
    enabled = 1 /*!< Pin Power Save of Pn.x is enabled. */
};
static_assert(sizeof(PORT4_PPS_PPS15) == 1);

/**
 * Converts PORT4_PPS_PPS15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT4_PPS_PPS15 instance)
{
    const char *result = "UNKNOWN PORT4_PPS_PPS15";

    switch (instance)
    {
    case PORT4_PPS_PPS15::disabled:
        result = "disabled";
        break;
    case PORT4_PPS_PPS15::enabled:
        result = "enabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT4_PPS_PPS15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT4_PPS_PPS15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = PORT4_PPS_PPS15::disabled;
    }
    else if ((result = !strncmp(data, "enabled", 7)))
    {
        output = PORT4_PPS_PPS15::enabled;
    }

    return result;
}

}; // namespace XMC4700
