/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Message object n is not enabled for frame reception.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Message object n is enabled for frame reception.",
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

enum class CAN_MO_MOSTAT_RXEN : uint8_t
{
    value1 /*!< Message object n is not enabled for frame reception. */,
    value2 = 1 /*!< Message object n is enabled for frame reception. */
};
static_assert(sizeof(CAN_MO_MOSTAT_RXEN) == 1);

static constexpr uint16_t CAN_MO_MOSTAT_RXEN_id = 2127;

/**
 * Converts CAN_MO_MOSTAT_RXEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_RXEN instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_RXEN";

    switch (instance)
    {
    case CAN_MO_MOSTAT_RXEN::value1:
        result = "value1";
        break;
    case CAN_MO_MOSTAT_RXEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_RXEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_RXEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOSTAT_RXEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOSTAT_RXEN::value2;
    }

    return result;
}

}; // namespace XMC4700
