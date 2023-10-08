/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No warning limit exceeded.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "One of the error counters REC or TEC reached the warning limit EWRNLVL.",
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

enum class CAN_NODE0_NSR_EWRN : uint8_t
{
    value1 /*!< No warning limit exceeded. */,
    value2 = 1 /*!< One of the error counters REC or TEC reached the warning limit EWRNLVL. */
};
static_assert(sizeof(CAN_NODE0_NSR_EWRN) == 1);

static constexpr uint16_t CAN_NODE0_NSR_EWRN_id = 849;

/**
 * Converts CAN_NODE0_NSR_EWRN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_NODE0_NSR_EWRN instance)
{
    const char *result = "UNKNOWN CAN_NODE0_NSR_EWRN";

    switch (instance)
    {
    case CAN_NODE0_NSR_EWRN::value1:
        result = "value1";
        break;
    case CAN_NODE0_NSR_EWRN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_NODE0_NSR_EWRN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_NODE0_NSR_EWRN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_NODE0_NSR_EWRN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_NODE0_NSR_EWRN::value2;
    }

    return result;
}

}; // namespace XMC4700
