/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Disconnected",
 *       "value": 1
 *     },
 *     "value2": {
 *       "description": "External, from input A, direct",
 *       "value": 2
 *     },
 *     "value3": {
 *       "description": "External, from input A, inverted",
 *       "value": 3
 *     },
 *     "value4": {
 *       "description": "External, from input B, direct",
 *       "value": 4
 *     },
 *     "value5": {
 *       "description": "External, from input B, inverted",
 *       "value": 5
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

enum class DSD_CH0_DICFG_DSRC : uint8_t
{
    value1 = 1 /*!< Disconnected */,
    value2 = 2 /*!< External, from input A, direct */,
    value3 = 3 /*!< External, from input A, inverted */,
    value4 = 4 /*!< External, from input B, direct */,
    value5 = 5 /*!< External, from input B, inverted */
};
static_assert(sizeof(DSD_CH0_DICFG_DSRC) == 1);

static constexpr uint16_t DSD_CH0_DICFG_DSRC_id = 1591;

/**
 * Converts DSD_CH0_DICFG_DSRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_DICFG_DSRC instance)
{
    const char *result = "UNKNOWN DSD_CH0_DICFG_DSRC";

    switch (instance)
    {
    case DSD_CH0_DICFG_DSRC::value1:
        result = "value1";
        break;
    case DSD_CH0_DICFG_DSRC::value2:
        result = "value2";
        break;
    case DSD_CH0_DICFG_DSRC::value3:
        result = "value3";
        break;
    case DSD_CH0_DICFG_DSRC::value4:
        result = "value4";
        break;
    case DSD_CH0_DICFG_DSRC::value5:
        result = "value5";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_DICFG_DSRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_DICFG_DSRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CH0_DICFG_DSRC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CH0_DICFG_DSRC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_CH0_DICFG_DSRC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_CH0_DICFG_DSRC::value4;
    }
    else if ((result = !strncmp(data, "value5", 6)))
    {
        output = DSD_CH0_DICFG_DSRC::value5;
    }

    return result;
}

}; // namespace XMC4700
