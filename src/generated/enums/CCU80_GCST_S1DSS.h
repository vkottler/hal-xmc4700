/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Dither shadow transfer has not been requested",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Dither shadow transfer has been requested",
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

enum class CCU80_GCST_S1DSS : uint8_t
{
    value1 /*!< Dither shadow transfer has not been requested */,
    value2 = 1 /*!< Dither shadow transfer has been requested */
};
static_assert(sizeof(CCU80_GCST_S1DSS) == 1);

static constexpr uint16_t CCU80_GCST_S1DSS_id = 1739;

/**
 * Converts CCU80_GCST_S1DSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GCST_S1DSS instance)
{
    const char *result = "UNKNOWN CCU80_GCST_S1DSS";

    switch (instance)
    {
    case CCU80_GCST_S1DSS::value1:
        result = "value1";
        break;
    case CCU80_GCST_S1DSS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GCST_S1DSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GCST_S1DSS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GCST_S1DSS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GCST_S1DSS::value2;
    }

    return result;
}

}; // namespace XMC4700
