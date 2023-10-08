/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Module clock is enabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Off: module is not clocked",
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

enum class VADC_CLC_DISS : uint8_t
{
    value1 /*!< Module clock is enabled */,
    value2 = 1 /*!< Off: module is not clocked */
};
static_assert(sizeof(VADC_CLC_DISS) == 1);

static constexpr uint16_t VADC_CLC_DISS_id = 744;

/**
 * Converts VADC_CLC_DISS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_CLC_DISS instance)
{
    const char *result = "UNKNOWN VADC_CLC_DISS";

    switch (instance)
    {
    case VADC_CLC_DISS::value1:
        result = "value1";
        break;
    case VADC_CLC_DISS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_CLC_DISS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_CLC_DISS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_CLC_DISS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_CLC_DISS::value2;
    }

    return result;
}

}; // namespace XMC4700
