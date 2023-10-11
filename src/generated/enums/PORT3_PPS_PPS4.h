/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT3_PPS_PPS4 : uint8_t
{
    value1 /*!< Pin Power Save of Pn.x is disabled. */,
    value2 = 1 /*!< Pin Power Save of Pn.x is enabled. */
};
static_assert(sizeof(PORT3_PPS_PPS4) == 1);

static constexpr uint16_t PORT3_PPS_PPS4_id = 1645;

/**
 * Converts PORT3_PPS_PPS4 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT3_PPS_PPS4 instance)
{
    const char *result = "UNKNOWN PORT3_PPS_PPS4";

    switch (instance)
    {
    case PORT3_PPS_PPS4::value1:
        result = "value1";
        break;
    case PORT3_PPS_PPS4::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT3_PPS_PPS4.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT3_PPS_PPS4 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT3_PPS_PPS4::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT3_PPS_PPS4::value2;
    }

    return result;
}

}; // namespace XMC4700
