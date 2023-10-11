/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT7_PPS_PPS7 : uint8_t
{
    value1 /*!< Pin Power Save of Pn.x is disabled. */,
    value2 = 1 /*!< Pin Power Save of Pn.x is enabled. */
};
static_assert(sizeof(PORT7_PPS_PPS7) == 1);

static constexpr uint16_t PORT7_PPS_PPS7_id = 2050;

/**
 * Converts PORT7_PPS_PPS7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT7_PPS_PPS7 instance)
{
    const char *result = "UNKNOWN PORT7_PPS_PPS7";

    switch (instance)
    {
    case PORT7_PPS_PPS7::value1:
        result = "value1";
        break;
    case PORT7_PPS_PPS7::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT7_PPS_PPS7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT7_PPS_PPS7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT7_PPS_PPS7::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT7_PPS_PPS7::value2;
    }

    return result;
}

}; // namespace XMC4700
