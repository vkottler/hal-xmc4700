/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT15_OUT_P15 : uint8_t
{
    _0 /*!< The output level of Pn.x is 0. */,
    _1 = 1 /*!< The output level of Pn.x is 1. */
};
static_assert(sizeof(PORT15_OUT_P15) == 1);

/**
 * Converts PORT15_OUT_P15 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT15_OUT_P15 instance)
{
    const char *result = "UNKNOWN PORT15_OUT_P15";

    switch (instance)
    {
    case PORT15_OUT_P15::_0:
        result = "_0";
        break;
    case PORT15_OUT_P15::_1:
        result = "_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT15_OUT_P15.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT15_OUT_P15 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = PORT15_OUT_P15::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = PORT15_OUT_P15::_1;
    }

    return result;
}

}; // namespace XMC4700
