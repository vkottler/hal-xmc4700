/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Parity Checker is stopped",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Parity Checker is running",
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

enum class CCU80_GSTAT_PCRB : uint8_t
{
    value1 /*!< Parity Checker is stopped */,
    value2 = 1 /*!< Parity Checker is running */
};
static_assert(sizeof(CCU80_GSTAT_PCRB) == 1);

static constexpr uint16_t CCU80_GSTAT_PCRB_id = 1726;

/**
 * Converts CCU80_GSTAT_PCRB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GSTAT_PCRB instance)
{
    const char *result = "UNKNOWN CCU80_GSTAT_PCRB";

    switch (instance)
    {
    case CCU80_GSTAT_PCRB::value1:
        result = "value1";
        break;
    case CCU80_GSTAT_PCRB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GSTAT_PCRB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GSTAT_PCRB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GSTAT_PCRB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GSTAT_PCRB::value2;
    }

    return result;
}

}; // namespace XMC4700