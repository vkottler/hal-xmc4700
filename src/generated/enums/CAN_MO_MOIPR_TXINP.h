/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Interrupt output line INT_O0 is selected.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Interrupt output line INT_O1 is selected.",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Interrupt output line INT_O14 is selected.",
 *       "value": 14
 *     },
 *     "value4": {
 *       "description": "Interrupt output line INT_O15 is selected.",
 *       "value": 15
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

enum class CAN_MO_MOIPR_TXINP : uint8_t
{
    value1 /*!< Interrupt output line INT_O0 is selected. */,
    value2 = 1 /*!< Interrupt output line INT_O1 is selected. */,
    value3 = 14 /*!< Interrupt output line INT_O14 is selected. */,
    value4 = 15 /*!< Interrupt output line INT_O15 is selected. */
};
static_assert(sizeof(CAN_MO_MOIPR_TXINP) == 1);

static constexpr uint16_t CAN_MO_MOIPR_TXINP_id = 2118;

/**
 * Converts CAN_MO_MOIPR_TXINP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOIPR_TXINP instance)
{
    const char *result = "UNKNOWN CAN_MO_MOIPR_TXINP";

    switch (instance)
    {
    case CAN_MO_MOIPR_TXINP::value1:
        result = "value1";
        break;
    case CAN_MO_MOIPR_TXINP::value2:
        result = "value2";
        break;
    case CAN_MO_MOIPR_TXINP::value3:
        result = "value3";
        break;
    case CAN_MO_MOIPR_TXINP::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOIPR_TXINP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOIPR_TXINP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CAN_MO_MOIPR_TXINP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CAN_MO_MOIPR_TXINP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CAN_MO_MOIPR_TXINP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CAN_MO_MOIPR_TXINP::value4;
    }

    return result;
}

}; // namespace XMC4700