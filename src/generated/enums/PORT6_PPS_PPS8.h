/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT6_PPS_PPS8 : uint8_t
{
    value1 /*!< Pin Power Save of Pn.x is disabled. */,
    value2 = 1 /*!< Pin Power Save of Pn.x is enabled. */
};
static_assert(sizeof(PORT6_PPS_PPS8) == 1);

/**
 * Converts PORT6_PPS_PPS8 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT6_PPS_PPS8 instance)
{
    const char *result = "UNKNOWN PORT6_PPS_PPS8";

    switch (instance)
    {
    case PORT6_PPS_PPS8::value1:
        result = "value1";
        break;
    case PORT6_PPS_PPS8::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT6_PPS_PPS8.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT6_PPS_PPS8 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT6_PPS_PPS8::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT6_PPS_PPS8::value2;
    }

    return result;
}

}; // namespace XMC4700
