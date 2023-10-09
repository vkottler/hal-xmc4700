/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT14_OUT_P13 : uint8_t
{
    value1 /*!< The output level of Pn.x is 0. */,
    value2 = 1 /*!< The output level of Pn.x is 1. */
};
static_assert(sizeof(PORT14_OUT_P13) == 1);

static constexpr uint16_t PORT14_OUT_P13_id = 651;

/**
 * Converts PORT14_OUT_P13 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT14_OUT_P13 instance)
{
    const char *result = "UNKNOWN PORT14_OUT_P13";

    switch (instance)
    {
    case PORT14_OUT_P13::value1:
        result = "value1";
        break;
    case PORT14_OUT_P13::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT14_OUT_P13.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT14_OUT_P13 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT14_OUT_P13::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT14_OUT_P13::value2;
    }

    return result;
}

}; // namespace XMC4700
