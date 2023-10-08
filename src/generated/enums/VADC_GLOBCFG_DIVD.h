/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "fADCD = fADC",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "fADCD = fADC / 2",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "fADCD = fADC / 3",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "fADCD = fADC / 4",
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

enum class VADC_GLOBCFG_DIVD : uint8_t
{
    value1 /*!< fADCD = fADC */,
    value2 = 1 /*!< fADCD = fADC / 2 */,
    value3 = 2 /*!< fADCD = fADC / 3 */,
    value4 = 3 /*!< fADCD = fADC / 4 */
};
static_assert(sizeof(VADC_GLOBCFG_DIVD) == 1);

static constexpr uint16_t VADC_GLOBCFG_DIVD_id = 756;

/**
 * Converts VADC_GLOBCFG_DIVD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBCFG_DIVD instance)
{
    const char *result = "UNKNOWN VADC_GLOBCFG_DIVD";

    switch (instance)
    {
    case VADC_GLOBCFG_DIVD::value1:
        result = "value1";
        break;
    case VADC_GLOBCFG_DIVD::value2:
        result = "value2";
        break;
    case VADC_GLOBCFG_DIVD::value3:
        result = "value3";
        break;
    case VADC_GLOBCFG_DIVD::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBCFG_DIVD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBCFG_DIVD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBCFG_DIVD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBCFG_DIVD::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_GLOBCFG_DIVD::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_GLOBCFG_DIVD::value4;
    }

    return result;
}

}; // namespace XMC4700
