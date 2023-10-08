/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Mask the interrupt assertion to the application.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Unmask the interrupt assertion to the application.",
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

enum class USB0_GAHBCFG_GlblIntrMsk : uint8_t
{
    value1 /*!< Mask the interrupt assertion to the application. */,
    value2 = 1 /*!< Unmask the interrupt assertion to the application. */
};
static_assert(sizeof(USB0_GAHBCFG_GlblIntrMsk) == 1);

static constexpr uint16_t USB0_GAHBCFG_GlblIntrMsk_id = 324;

/**
 * Converts USB0_GAHBCFG_GlblIntrMsk to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_GAHBCFG_GlblIntrMsk instance)
{
    const char *result = "UNKNOWN USB0_GAHBCFG_GlblIntrMsk";

    switch (instance)
    {
    case USB0_GAHBCFG_GlblIntrMsk::value1:
        result = "value1";
        break;
    case USB0_GAHBCFG_GlblIntrMsk::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_GAHBCFG_GlblIntrMsk.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_GAHBCFG_GlblIntrMsk &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_GAHBCFG_GlblIntrMsk::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_GAHBCFG_GlblIntrMsk::value2;
    }

    return result;
}

}; // namespace XMC4700