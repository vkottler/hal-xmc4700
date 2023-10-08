/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Stopped (cleared at the end of a period)",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Running",
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

enum class DSD_CGCFG_RUN : uint8_t
{
    value1 /*!< Stopped (cleared at the end of a period) */,
    value2 = 1 /*!< Running */
};
static_assert(sizeof(DSD_CGCFG_RUN) == 1);

static constexpr uint16_t DSD_CGCFG_RUN_id = 2363;

/**
 * Converts DSD_CGCFG_RUN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CGCFG_RUN instance)
{
    const char *result = "UNKNOWN DSD_CGCFG_RUN";

    switch (instance)
    {
    case DSD_CGCFG_RUN::value1:
        result = "value1";
        break;
    case DSD_CGCFG_RUN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CGCFG_RUN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CGCFG_RUN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_CGCFG_RUN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_CGCFG_RUN::value2;
    }

    return result;
}

}; // namespace XMC4700