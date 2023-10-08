/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No receive update ongoing.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Message identifier, DLC, and data of the message object are currently updated.",
 *       "value": 1
 *     }
 *   },
 *   "unit_test": false,
 *   "json": false,
 *   "use_map": false,
 *   "underlying": "uint8_t",
 *   "namespace": [],
 *   "json_indent": null
 * }
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOSTAT_RXUPD : uint8_t
{
    value1 /*!< No receive update ongoing. */,
    value2 = 1 /*!< Message identifier, DLC, and data of the message object are currently updated. */
};
static_assert(sizeof(CAN_MO_MOSTAT_RXUPD) == 1);

static constexpr uint16_t CAN_MO_MOSTAT_RXUPD_id = 2132;

/**
 * Converts CAN_MO_MOSTAT_RXUPD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_RXUPD instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_RXUPD";

    switch (instance)
    {
    case CAN_MO_MOSTAT_RXUPD::value1:
        result = "value1";
        break;
    case CAN_MO_MOSTAT_RXUPD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_RXUPD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_RXUPD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOSTAT_RXUPD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOSTAT_RXUPD::value2;
    }

    return result;
}

}; // namespace XMC4700
