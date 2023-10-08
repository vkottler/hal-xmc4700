/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "On-chip carrier generator",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Sign of result of next channel",
 *       "value": 1
 *     },
 *     "value3": {
 *       "description": "External sign signal A",
 *       "value": 2
 *     },
 *     "value4": {
 *       "description": "External sign signal B",
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

enum class DSD_CH0_RECTCFG_SSRC : uint8_t
{
    value1 /*!< On-chip carrier generator */,
    value2 = 1 /*!< Sign of result of next channel */,
    value3 = 2 /*!< External sign signal A */,
    value4 = 3 /*!< External sign signal B */
};
static_assert(sizeof(DSD_CH0_RECTCFG_SSRC) == 1);

static constexpr uint16_t DSD_CH0_RECTCFG_SSRC_id = 1604;

/**
 * Converts DSD_CH0_RECTCFG_SSRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CH0_RECTCFG_SSRC instance)
{
    const char *result = "UNKNOWN DSD_CH0_RECTCFG_SSRC";

    switch (instance)
    {
    case DSD_CH0_RECTCFG_SSRC::value1:
        result = "value1";
        break;
    case DSD_CH0_RECTCFG_SSRC::value2:
        result = "value2";
        break;
    case DSD_CH0_RECTCFG_SSRC::value3:
        result = "value3";
        break;
    case DSD_CH0_RECTCFG_SSRC::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CH0_RECTCFG_SSRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CH0_RECTCFG_SSRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CH0_RECTCFG_SSRC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CH0_RECTCFG_SSRC::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_CH0_RECTCFG_SSRC::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_CH0_RECTCFG_SSRC::value4;
    }

    return result;
}

}; // namespace XMC4700