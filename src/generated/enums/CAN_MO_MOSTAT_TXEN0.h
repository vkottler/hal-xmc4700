/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOSTAT_TXEN0 : uint8_t
{
    value1 /*!< Message object n is not enabled for frame transmission. */,
    value2 = 1 /*!< Message object n is enabled for frame transmission. */
};
static_assert(sizeof(CAN_MO_MOSTAT_TXEN0) == 1);

static constexpr uint16_t CAN_MO_MOSTAT_TXEN0_id = 25;

/**
 * Converts CAN_MO_MOSTAT_TXEN0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_TXEN0 instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_TXEN0";

    switch (instance)
    {
    case CAN_MO_MOSTAT_TXEN0::value1:
        result = "value1";
        break;
    case CAN_MO_MOSTAT_TXEN0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_TXEN0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_TXEN0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOSTAT_TXEN0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOSTAT_TXEN0::value2;
    }

    return result;
}

}; // namespace XMC4700
