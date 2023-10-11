/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT5_PPS_PPS12 : uint8_t
{
    value1 /*!< Pin Power Save of Pn.x is disabled. */,
    value2 = 1 /*!< Pin Power Save of Pn.x is enabled. */
};
static_assert(sizeof(PORT5_PPS_PPS12) == 1);

static constexpr uint16_t PORT5_PPS_PPS12_id = 1841;

/**
 * Converts PORT5_PPS_PPS12 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT5_PPS_PPS12 instance)
{
    const char *result = "UNKNOWN PORT5_PPS_PPS12";

    switch (instance)
    {
    case PORT5_PPS_PPS12::value1:
        result = "value1";
        break;
    case PORT5_PPS_PPS12::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT5_PPS_PPS12.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT5_PPS_PPS12 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT5_PPS_PPS12::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT5_PPS_PPS12::value2;
    }

    return result;
}

}; // namespace XMC4700
