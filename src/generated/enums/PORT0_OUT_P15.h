/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT0_OUT_P15 : uint8_t
{
    0 /*!< The output level of Pn.x is 0. */,
    1 = 1 /*!< The output level of Pn.x is 1. */
};
static_assert(sizeof(PORT0_OUT_P15) == 1);

/**
 * Converts PORT0_OUT_P15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT0_OUT_P15 instance)
{
    const char *result = "UNKNOWN PORT0_OUT_P15";

    switch (instance)
    {
    case PORT0_OUT_P15::0:
        result = "0";
        break;
    case PORT0_OUT_P15::1:
        result = "1";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT0_OUT_P15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT0_OUT_P15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "0", 1)))
    {
        output = PORT0_OUT_P15::0;
    }
    else if ((result = !strncmp(data, "1", 1)))
    {
        output = PORT0_OUT_P15::1;
    }

    return result;
}

}; // namespace XMC4700
