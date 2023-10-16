/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT5_IN_P11 : uint8_t
{
    value1 /*!< The input level of Pn.x is 0. */,
    value2 = 1 /*!< The input level of Pn.x is 1. */
};
static_assert(sizeof(PORT5_IN_P11) == 1);

/**
 * Converts PORT5_IN_P11 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT5_IN_P11 instance)
{
    const char *result = "UNKNOWN PORT5_IN_P11";

    switch (instance)
    {
    case PORT5_IN_P11::value1:
        result = "value1";
        break;
    case PORT5_IN_P11::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT5_IN_P11.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT5_IN_P11 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT5_IN_P11::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT5_IN_P11::value2;
    }

    return result;
}

}; // namespace XMC4700
