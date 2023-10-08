/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Even parity enabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Odd parity enabled",
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

enum class CCU80_GPCHK_PCTS : uint8_t
{
    value1 /*!< Even parity enabled */,
    value2 = 1 /*!< Odd parity enabled */
};
static_assert(sizeof(CCU80_GPCHK_PCTS) == 1);

static constexpr uint16_t CCU80_GPCHK_PCTS_id = 1744;

/**
 * Converts CCU80_GPCHK_PCTS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GPCHK_PCTS instance)
{
    const char *result = "UNKNOWN CCU80_GPCHK_PCTS";

    switch (instance)
    {
    case CCU80_GPCHK_PCTS::value1:
        result = "value1";
        break;
    case CCU80_GPCHK_PCTS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GPCHK_PCTS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GPCHK_PCTS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GPCHK_PCTS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GPCHK_PCTS::value2;
    }

    return result;
}

}; // namespace XMC4700