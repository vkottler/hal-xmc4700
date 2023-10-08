/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No action",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Clear bit ALEVx",
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

enum class DSD_EVFLAGCLR_ALEC3 : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< Clear bit ALEVx */
};
static_assert(sizeof(DSD_EVFLAGCLR_ALEC3) == 1);

static constexpr uint16_t DSD_EVFLAGCLR_ALEC3_id = 2376;

/**
 * Converts DSD_EVFLAGCLR_ALEC3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_EVFLAGCLR_ALEC3 instance)
{
    const char *result = "UNKNOWN DSD_EVFLAGCLR_ALEC3";

    switch (instance)
    {
    case DSD_EVFLAGCLR_ALEC3::value1:
        result = "value1";
        break;
    case DSD_EVFLAGCLR_ALEC3::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_EVFLAGCLR_ALEC3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_EVFLAGCLR_ALEC3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_EVFLAGCLR_ALEC3::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_EVFLAGCLR_ALEC3::value2;
    }

    return result;
}

}; // namespace XMC4700
