/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No transmission of message object n is requested.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Transmission of message object n on the CAN bus is requested.",
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

enum class CAN_MO_MOSTAT_TXRQ : uint8_t
{
    value1 /*!< No transmission of message object n is requested. */,
    value2 = 1 /*!< Transmission of message object n on the CAN bus is requested. */
};
static_assert(sizeof(CAN_MO_MOSTAT_TXRQ) == 1);

static constexpr uint16_t CAN_MO_MOSTAT_TXRQ_id = 2126;

/**
 * Converts CAN_MO_MOSTAT_TXRQ to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOSTAT_TXRQ instance)
{
    const char *result = "UNKNOWN CAN_MO_MOSTAT_TXRQ";

    switch (instance)
    {
    case CAN_MO_MOSTAT_TXRQ::value1:
        result = "value1";
        break;
    case CAN_MO_MOSTAT_TXRQ::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOSTAT_TXRQ.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOSTAT_TXRQ &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOSTAT_TXRQ::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOSTAT_TXRQ::value2;
    }

    return result;
}

}; // namespace XMC4700