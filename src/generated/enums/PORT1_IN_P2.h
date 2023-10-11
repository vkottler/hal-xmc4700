/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PORT1_IN_P2 : uint8_t
{
    value1 /*!< The input level of Pn.x is 0. */,
    value2 = 1 /*!< The input level of Pn.x is 1. */
};
static_assert(sizeof(PORT1_IN_P2) == 1);

static constexpr uint16_t PORT1_IN_P2_id = 1189;

/**
 * Converts PORT1_IN_P2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PORT1_IN_P2 instance)
{
    const char *result = "UNKNOWN PORT1_IN_P2";

    switch (instance)
    {
    case PORT1_IN_P2::value1:
        result = "value1";
        break;
    case PORT1_IN_P2::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PORT1_IN_P2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PORT1_IN_P2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PORT1_IN_P2::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PORT1_IN_P2::value2;
    }

    return result;
}

}; // namespace XMC4700
