/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "IN data packet received",
 *       "value": 2
 *     },
 *     "value2": {
 *       "description": "IN transfer completed (triggers an interrupt)",
 *       "value": 3
 *     },
 *     "value3": {
 *       "description": "Data toggle error (triggers an interrupt)",
 *       "value": 5
 *     },
 *     "value4": {
 *       "description": "Channel halted (triggers an interrupt)",
 *       "value": 7
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

enum class USB0_GRXSTSP_HOSTMODE_PktSts : uint8_t
{
    value1 = 2 /*!< IN data packet received */,
    value2 = 3 /*!< IN transfer completed (triggers an interrupt) */,
    value3 = 5 /*!< Data toggle error (triggers an interrupt) */,
    value4 = 7 /*!< Channel halted (triggers an interrupt) */
};
static_assert(sizeof(USB0_GRXSTSP_HOSTMODE_PktSts) == 1);

static constexpr uint16_t USB0_GRXSTSP_HOSTMODE_PktSts_id = 341;

/**
 * Converts USB0_GRXSTSP_HOSTMODE_PktSts to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GRXSTSP_HOSTMODE_PktSts instance)
{
    const char *result = "UNKNOWN USB0_GRXSTSP_HOSTMODE_PktSts";

    switch (instance)
    {
    case USB0_GRXSTSP_HOSTMODE_PktSts::value1:
        result = "value1";
        break;
    case USB0_GRXSTSP_HOSTMODE_PktSts::value2:
        result = "value2";
        break;
    case USB0_GRXSTSP_HOSTMODE_PktSts::value3:
        result = "value3";
        break;
    case USB0_GRXSTSP_HOSTMODE_PktSts::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GRXSTSP_HOSTMODE_PktSts.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GRXSTSP_HOSTMODE_PktSts &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GRXSTSP_HOSTMODE_PktSts::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GRXSTSP_HOSTMODE_PktSts::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USB0_GRXSTSP_HOSTMODE_PktSts::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USB0_GRXSTSP_HOSTMODE_PktSts::value4;
    }

    return result;
}

}; // namespace XMC4700
