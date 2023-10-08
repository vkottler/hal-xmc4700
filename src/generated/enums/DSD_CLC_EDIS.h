/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Sleep mode request is enabled and functional",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Module disregards the sleep mode control signal",
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

enum class DSD_CLC_EDIS : uint8_t
{
    value1 /*!< Sleep mode request is enabled and functional */,
    value2 = 1 /*!< Module disregards the sleep mode control signal */
};
static_assert(sizeof(DSD_CLC_EDIS) == 1);

static constexpr uint16_t DSD_CLC_EDIS_id = 2350;

/**
 * Converts DSD_CLC_EDIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CLC_EDIS instance)
{
    const char *result = "UNKNOWN DSD_CLC_EDIS";

    switch (instance)
    {
    case DSD_CLC_EDIS::value1:
        result = "value1";
        break;
    case DSD_CLC_EDIS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CLC_EDIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CLC_EDIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CLC_EDIS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CLC_EDIS::value2;
    }

    return result;
}

}; // namespace XMC4700