/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No new value was captured into the specific capture register",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "A new value was captured into the specific register",
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

enum class CCU80_CC80_C0V_FFL : uint8_t
{
    value1 /*!< No new value was captured into the specific capture register */,
    value2 = 1 /*!< A new value was captured into the specific register */
};
static_assert(sizeof(CCU80_CC80_C0V_FFL) == 1);

static constexpr uint16_t CCU80_CC80_C0V_FFL_id = 1883;

/**
 * Converts CCU80_CC80_C0V_FFL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_C0V_FFL instance)
{
    const char *result = "UNKNOWN CCU80_CC80_C0V_FFL";

    switch (instance)
    {
    case CCU80_CC80_C0V_FFL::value1:
        result = "value1";
        break;
    case CCU80_CC80_C0V_FFL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_C0V_FFL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_C0V_FFL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_C0V_FFL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_C0V_FFL::value2;
    }

    return result;
}

}; // namespace XMC4700
