/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "On request: enable the module clock",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Off request: stop the module clock",
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

enum class VADC_CLC_DISR : uint8_t
{
    value1 /*!< On request: enable the module clock */,
    value2 = 1 /*!< Off request: stop the module clock */
};
static_assert(sizeof(VADC_CLC_DISR) == 1);

static constexpr uint16_t VADC_CLC_DISR_id = 745;

/**
 * Converts VADC_CLC_DISR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_CLC_DISR instance)
{
    const char *result = "UNKNOWN VADC_CLC_DISR";

    switch (instance)
    {
    case VADC_CLC_DISR::value1:
        result = "value1";
        break;
    case VADC_CLC_DISR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_CLC_DISR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_CLC_DISR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_CLC_DISR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_CLC_DISR::value2;
    }

    return result;
}

}; // namespace XMC4700
