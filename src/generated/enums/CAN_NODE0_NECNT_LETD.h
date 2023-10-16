/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_NODE0_NECNT_LETD : uint8_t
{
    value1 /*!< The last error occurred while the CAN node x was receiver (REC has been incremented). */,
    value2 = 1 /*!< The last error occurred while the CAN node x was transmitter (TEC has been incremented). */
};
static_assert(sizeof(CAN_NODE0_NECNT_LETD) == 1);

/**
 * Converts CAN_NODE0_NECNT_LETD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NECNT_LETD instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NECNT_LETD";

    switch (instance)
    {
    case CAN_NODE0_NECNT_LETD::value1:
        result = "value1";
        break;
    case CAN_NODE0_NECNT_LETD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NECNT_LETD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NECNT_LETD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_NODE0_NECNT_LETD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_NODE0_NECNT_LETD::value2;
    }

    return result;
}

}; // namespace XMC4700