/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "FS-only, connected device can supports also only FS.",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "FS-only, even if the connected device can support HS",
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

enum class USB0_HCFG_FSLSSupp : uint8_t
{
    value1 /*!< FS-only, connected device can supports also only FS. */,
    value2 = 1 /*!< FS-only, even if the connected device can support HS */
};
static_assert(sizeof(USB0_HCFG_FSLSSupp) == 1);

static constexpr uint16_t USB0_HCFG_FSLSSupp_id = 347;

/**
 * Converts USB0_HCFG_FSLSSupp to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HCFG_FSLSSupp instance)
{
    const char *result = "UNKNOWN USB0_HCFG_FSLSSupp";

    switch (instance)
    {
    case USB0_HCFG_FSLSSupp::value1:
        result = "value1";
        break;
    case USB0_HCFG_FSLSSupp::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HCFG_FSLSSupp.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HCFG_FSLSSupp &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USB0_HCFG_FSLSSupp::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USB0_HCFG_FSLSSupp::value2;
    }

    return result;
}

}; // namespace XMC4700
