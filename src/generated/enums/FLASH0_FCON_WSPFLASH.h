/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "PFLASH access in one clock cycle",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "PFLASH access in one clock cycle",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "PFLASH access in two clock cycles",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "PFLASH access in three clock cycles",
 *       "value": 3
 *     },
 *     "value5": {
 *       "description": "PFLASH access in fifteen clock cycles.",
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

enum class FLASH0_FCON_WSPFLASH : uint8_t
{
    value1 /*!< PFLASH access in one clock cycle */,
    value2 = 1 /*!< PFLASH access in one clock cycle */,
    value3 = 2 /*!< PFLASH access in two clock cycles */,
    value4 = 3 /*!< PFLASH access in three clock cycles */,
    value5 = 15 /*!< PFLASH access in fifteen clock cycles. */
};
static_assert(sizeof(FLASH0_FCON_WSPFLASH) == 1);

static constexpr uint16_t FLASH0_FCON_WSPFLASH_id = 1953;

/**
 * Converts FLASH0_FCON_WSPFLASH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FCON_WSPFLASH instance)
{
    const char *result = "UNKNOWN FLASH0_FCON_WSPFLASH";

    switch (instance)
    {
    case FLASH0_FCON_WSPFLASH::value1:
        result = "value1";
        break;
    case FLASH0_FCON_WSPFLASH::value2:
        result = "value2";
        break;
    case FLASH0_FCON_WSPFLASH::value3:
        result = "value3";
        break;
    case FLASH0_FCON_WSPFLASH::value4:
        result = "value4";
        break;
    case FLASH0_FCON_WSPFLASH::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FCON_WSPFLASH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FCON_WSPFLASH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FLASH0_FCON_WSPFLASH::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FLASH0_FCON_WSPFLASH::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = FLASH0_FCON_WSPFLASH::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = FLASH0_FCON_WSPFLASH::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = FLASH0_FCON_WSPFLASH::value5;
    }

    return result;
}

}; // namespace XMC4700
