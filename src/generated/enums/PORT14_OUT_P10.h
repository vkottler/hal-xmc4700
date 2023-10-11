/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT14_OUT_P10 : uint8_t
{
    value1 /*!< The output level of Pn.x is 0. */,
    value2 = 1 /*!< The output level of Pn.x is 1. */
};
static_assert(sizeof(PORT14_OUT_P10) == 1);

static constexpr uint16_t PORT14_OUT_P10_id = 1261;

/**
 * Converts PORT14_OUT_P10 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT14_OUT_P10 instance)
{
    const char *result = "UNKNOWN PORT14_OUT_P10";

    switch (instance)
    {
    case PORT14_OUT_P10::value1:
        result = "value1";
        break;
    case PORT14_OUT_P10::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT14_OUT_P10.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT14_OUT_P10 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT14_OUT_P10::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT14_OUT_P10::value2;
    }

    return result;
}

}; // namespace XMC4700
