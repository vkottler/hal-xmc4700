/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOSTAT_TXPND : uint8_t
{
    value1 /*!< No CAN message has been transmitted. */,
    value2 = 1 /*!< A CAN message from message object n has been transmitted
                  successfully over the CAN bus. */
};
static_assert(sizeof(CAN_MO_MOSTAT_TXPND) == 1);

static constexpr uint16_t CAN_MO_MOSTAT_TXPND_id = 2133;

/**
 * Converts CAN_MO_MOSTAT_TXPND to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_TXPND instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_TXPND";

    switch (instance)
    {
    case CAN_MO_MOSTAT_TXPND::value1:
        result = "value1";
        break;
    case CAN_MO_MOSTAT_TXPND::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_TXPND.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_TXPND &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOSTAT_TXPND::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOSTAT_TXPND::value2;
    }

    return result;
}

}; // namespace XMC4700
