/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No action",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Initiate the start-up calibration phase (indication in bit GxARBCFG.CAL)",
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

enum class VADC_GLOBCFG_SUCAL : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< Initiate the start-up calibration phase (indication in bit GxARBCFG.CAL) */
};
static_assert(sizeof(VADC_GLOBCFG_SUCAL) == 1);

static constexpr uint16_t VADC_GLOBCFG_SUCAL_id = 750;

/**
 * Converts VADC_GLOBCFG_SUCAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBCFG_SUCAL instance)
{
    const char *result = "UNKNOWN VADC_GLOBCFG_SUCAL";

    switch (instance)
    {
    case VADC_GLOBCFG_SUCAL::value1:
        result = "value1";
        break;
    case VADC_GLOBCFG_SUCAL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBCFG_SUCAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBCFG_SUCAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBCFG_SUCAL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBCFG_SUCAL::value2;
    }

    return result;
}

}; // namespace XMC4700
