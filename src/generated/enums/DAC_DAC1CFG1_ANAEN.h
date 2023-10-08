/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "DAC1 is set to standby (analog output only)",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "enable DAC1 (analog output only)",
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

enum class DAC_DAC1CFG1_ANAEN : uint8_t
{
    value1 /*!< DAC1 is set to standby (analog output only) */,
    value2 = 1 /*!< enable DAC1 (analog output only) */
};
static_assert(sizeof(DAC_DAC1CFG1_ANAEN) == 1);

static constexpr uint16_t DAC_DAC1CFG1_ANAEN_id = 2156;

/**
 * Converts DAC_DAC1CFG1_ANAEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC1CFG1_ANAEN instance)
{
    const char *result = "UNKNOWN DAC_DAC1CFG1_ANAEN";

    switch (instance)
    {
    case DAC_DAC1CFG1_ANAEN::value1:
        result = "value1";
        break;
    case DAC_DAC1CFG1_ANAEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC1CFG1_ANAEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC1CFG1_ANAEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DAC_DAC1CFG1_ANAEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DAC_DAC1CFG1_ANAEN::value2;
    }

    return result;
}

}; // namespace XMC4700
