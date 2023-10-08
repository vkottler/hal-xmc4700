/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Scatter/Gather mode enabled: Indicates that the descriptor structure is not yet ready. Scatter/Gather mode disabled: Channel disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Scatter/Gather mode enabled: Indicates that the descriptor structure and data buffer with data is setup and this channel can access the descriptor. Scatter/Gather mode disabled: Channel enabled",
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

enum class USB0_CH0_HCCHAR_ChEna : uint8_t
{
    value1 /*!< Scatter/Gather mode enabled: Indicates that the descriptor structure is not yet ready. Scatter/Gather mode disabled: Channel disabled */,
    value2 = 1 /*!< Scatter/Gather mode enabled: Indicates that the descriptor structure and data buffer with data is setup and this channel can access the descriptor. Scatter/Gather mode disabled: Channel enabled */
};
static_assert(sizeof(USB0_CH0_HCCHAR_ChEna) == 1);

static constexpr uint16_t USB0_CH0_HCCHAR_ChEna_id = 808;

/**
 * Converts USB0_CH0_HCCHAR_ChEna to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_CH0_HCCHAR_ChEna instance)
{
    const char *result = "UNKNOWN USB0_CH0_HCCHAR_ChEna";

    switch (instance)
    {
    case USB0_CH0_HCCHAR_ChEna::value1:
        result = "value1";
        break;
    case USB0_CH0_HCCHAR_ChEna::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_CH0_HCCHAR_ChEna.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_CH0_HCCHAR_ChEna &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_CH0_HCCHAR_ChEna::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_CH0_HCCHAR_ChEna::value2;
    }

    return result;
}

}; // namespace XMC4700
