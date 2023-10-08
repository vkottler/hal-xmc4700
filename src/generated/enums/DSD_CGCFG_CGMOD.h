/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Stopped",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Square wave",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "Triangle",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "Sine wave",
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

enum class DSD_CGCFG_CGMOD : uint8_t
{
    value1 /*!< Stopped */,
    value2 = 1 /*!< Square wave */,
    value3 = 2 /*!< Triangle */,
    value4 = 3 /*!< Sine wave */
};
static_assert(sizeof(DSD_CGCFG_CGMOD) == 1);

static constexpr uint16_t DSD_CGCFG_CGMOD_id = 2367;

/**
 * Converts DSD_CGCFG_CGMOD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CGCFG_CGMOD instance)
{
    const char *result = "UNKNOWN DSD_CGCFG_CGMOD";

    switch (instance)
    {
    case DSD_CGCFG_CGMOD::value1:
        result = "value1";
        break;
    case DSD_CGCFG_CGMOD::value2:
        result = "value2";
        break;
    case DSD_CGCFG_CGMOD::value3:
        result = "value3";
        break;
    case DSD_CGCFG_CGMOD::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CGCFG_CGMOD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CGCFG_CGMOD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CGCFG_CGMOD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CGCFG_CGMOD::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_CGCFG_CGMOD::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_CGCFG_CGMOD::value4;
    }

    return result;
}

}; // namespace XMC4700