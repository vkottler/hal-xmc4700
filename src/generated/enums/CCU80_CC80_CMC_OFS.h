/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Override functionality disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Status bit trigger override connected to Event 1; Status bit value override connected to Event 2",
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

enum class CCU80_CC80_CMC_OFS : uint8_t
{
    value1 /*!< Override functionality disabled */,
    value2 = 1 /*!< Status bit trigger override connected to Event 1; Status bit value override connected to Event 2 */
};
static_assert(sizeof(CCU80_CC80_CMC_OFS) == 1);

static constexpr uint16_t CCU80_CC80_CMC_OFS_id = 1833;

/**
 * Converts CCU80_CC80_CMC_OFS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_CMC_OFS instance)
{
    const char *result = "UNKNOWN CCU80_CC80_CMC_OFS";

    switch (instance)
    {
    case CCU80_CC80_CMC_OFS::value1:
        result = "value1";
        break;
    case CCU80_CC80_CMC_OFS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_CMC_OFS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_CMC_OFS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_CC80_CMC_OFS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_CC80_CMC_OFS::value2;
    }

    return result;
}

}; // namespace XMC4700