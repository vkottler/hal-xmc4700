/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Full speed",
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

enum class USB0_HPRT_PrtSpd : uint8_t
{
    value1 = 1 /*!< Full speed */
};
static_assert(sizeof(USB0_HPRT_PrtSpd) == 1);

static constexpr uint16_t USB0_HPRT_PrtSpd_id = 352;

/**
 * Converts USB0_HPRT_PrtSpd to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HPRT_PrtSpd instance)
{
    const char *result = "UNKNOWN USB0_HPRT_PrtSpd";

    switch (instance)
    {
    case USB0_HPRT_PrtSpd::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HPRT_PrtSpd.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HPRT_PrtSpd &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_HPRT_PrtSpd::value1;
    }

    return result;
}

}; // namespace XMC4700