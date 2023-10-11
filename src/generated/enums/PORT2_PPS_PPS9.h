/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT2_PPS_PPS9 : uint8_t
{
    value1 /*!< Pin Power Save of Pn.x is disabled. */,
    value2 = 1 /*!< Pin Power Save of Pn.x is enabled. */
};
static_assert(sizeof(PORT2_PPS_PPS9) == 1);

static constexpr uint16_t PORT2_PPS_PPS9_id = 1528;

/**
 * Converts PORT2_PPS_PPS9 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT2_PPS_PPS9 instance)
{
    const char *result = "UNKNOWN PORT2_PPS_PPS9";

    switch (instance)
    {
    case PORT2_PPS_PPS9::value1:
        result = "value1";
        break;
    case PORT2_PPS_PPS9::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT2_PPS_PPS9.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT2_PPS_PPS9 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT2_PPS_PPS9::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT2_PPS_PPS9::value2;
    }

    return result;
}

}; // namespace XMC4700
