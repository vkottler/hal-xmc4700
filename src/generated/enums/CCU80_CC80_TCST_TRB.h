/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Timer is stopped",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Timer is running",
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

enum class CCU80_CC80_TCST_TRB : uint8_t
{
    value1 /*!< Timer is stopped */,
    value2 = 1 /*!< Timer is running */
};
static_assert(sizeof(CCU80_CC80_TCST_TRB) == 1);

static constexpr uint16_t CCU80_CC80_TCST_TRB_id = 1844;

/**
 * Converts CCU80_CC80_TCST_TRB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TCST_TRB instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TCST_TRB";

    switch (instance)
    {
    case CCU80_CC80_TCST_TRB::value1:
        result = "value1";
        break;
    case CCU80_CC80_TCST_TRB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TCST_TRB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TCST_TRB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_TCST_TRB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_TCST_TRB::value2;
    }

    return result;
}

}; // namespace XMC4700
