/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "CCU8x.IGBTA",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "CCU8x.IGBTB",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "CCU8x.IGBTC",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "CCU8x.IGBTD",
 *       "value": 3
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

enum class CCU80_GPCHK_PCDS : uint8_t
{
    value1 /*!< CCU8x.IGBTA */,
    value2 = 1 /*!< CCU8x.IGBTB */,
    value3 = 2 /*!< CCU8x.IGBTC */,
    value4 = 3 /*!< CCU8x.IGBTD */
};
static_assert(sizeof(CCU80_GPCHK_PCDS) == 1);

static constexpr uint16_t CCU80_GPCHK_PCDS_id = 1745;

/**
 * Converts CCU80_GPCHK_PCDS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GPCHK_PCDS instance)
{
    const char *result = "UNKNOWN CCU80_GPCHK_PCDS";

    switch (instance)
    {
    case CCU80_GPCHK_PCDS::value1:
        result = "value1";
        break;
    case CCU80_GPCHK_PCDS::value2:
        result = "value2";
        break;
    case CCU80_GPCHK_PCDS::value3:
        result = "value3";
        break;
    case CCU80_GPCHK_PCDS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GPCHK_PCDS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GPCHK_PCDS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = CCU80_GPCHK_PCDS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = CCU80_GPCHK_PCDS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = CCU80_GPCHK_PCDS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = CCU80_GPCHK_PCDS::value4;
    }

    return result;
}

}; // namespace XMC4700