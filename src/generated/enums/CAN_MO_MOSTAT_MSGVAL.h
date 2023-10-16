/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOSTAT_MSGVAL : uint8_t
{
    value1 /*!< Message object n is not valid. */,
    value2 = 1 /*!< Message object n is valid. */
};
static_assert(sizeof(CAN_MO_MOSTAT_MSGVAL) == 1);

/**
 * Converts CAN_MO_MOSTAT_MSGVAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_MSGVAL instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_MSGVAL";

    switch (instance)
    {
    case CAN_MO_MOSTAT_MSGVAL::value1:
        result = "value1";
        break;
    case CAN_MO_MOSTAT_MSGVAL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_MSGVAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_MSGVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOSTAT_MSGVAL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOSTAT_MSGVAL::value2;
    }

    return result;
}

}; // namespace XMC4700
