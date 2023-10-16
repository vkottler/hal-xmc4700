/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOFCR_RMM : uint8_t
{
    value1 /*!< Remote monitoring is disabled: Identifier, IDE bit, and DLC of message object n remain unchanged upon the reception of a matching Remote Frame. */,
    value2 = 1 /*!< Remote monitoring is enabled: Identifier, IDE bit, and DLC of a matching Remote Frame are copied to transmit object n in order to monitor incoming Remote Frames. */
};
static_assert(sizeof(CAN_MO_MOFCR_RMM) == 1);

/**
 * Converts CAN_MO_MOFCR_RMM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOFCR_RMM instance)
{
    const char *result = "UNKNOWN CAN_MO_MOFCR_RMM";

    switch (instance)
    {
    case CAN_MO_MOFCR_RMM::value1:
        result = "value1";
        break;
    case CAN_MO_MOFCR_RMM::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOFCR_RMM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOFCR_RMM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOFCR_RMM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOFCR_RMM::value2;
    }

    return result;
}

}; // namespace XMC4700
