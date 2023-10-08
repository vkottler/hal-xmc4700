/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Prescaler is stopped",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Prescaler is running",
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

enum class CCU80_GSTAT_PRB : uint8_t
{
    value1 /*!< Prescaler is stopped */,
    value2 = 1 /*!< Prescaler is running */
};
static_assert(sizeof(CCU80_GSTAT_PRB) == 1);

static constexpr uint16_t CCU80_GSTAT_PRB_id = 1727;

/**
 * Converts CCU80_GSTAT_PRB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GSTAT_PRB instance)
{
    const char *result = "UNKNOWN CCU80_GSTAT_PRB";

    switch (instance)
    {
    case CCU80_GSTAT_PRB::value1:
        result = "value1";
        break;
    case CCU80_GSTAT_PRB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GSTAT_PRB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GSTAT_PRB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GSTAT_PRB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GSTAT_PRB::value2;
    }

    return result;
}

}; // namespace XMC4700
