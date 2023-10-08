/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Prescaler shadow transfer has not been requested",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Prescaler shadow transfer has been requested",
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

enum class CCU40_GCST_S0PSS : uint8_t
{
    value1 /*!< Prescaler shadow transfer has not been requested */,
    value2 = 1 /*!< Prescaler shadow transfer has been requested */
};
static_assert(sizeof(CCU40_GCST_S0PSS) == 1);

static constexpr uint16_t CCU40_GCST_S0PSS_id = 2524;

/**
 * Converts CCU40_GCST_S0PSS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_GCST_S0PSS instance)
{
    const char *result = "UNKNOWN CCU40_GCST_S0PSS";

    switch (instance)
    {
    case CCU40_GCST_S0PSS::value1:
        result = "value1";
        break;
    case CCU40_GCST_S0PSS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_GCST_S0PSS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_GCST_S0PSS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU40_GCST_S0PSS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU40_GCST_S0PSS::value2;
    }

    return result;
}

}; // namespace XMC4700
