/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Standard operation",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Parity bits under test",
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

enum class SCU_PARITY_PMTSR_MTENPS : uint8_t
{
    value1 /*!< Standard operation */,
    value2 = 1 /*!< Parity bits under test */
};
static_assert(sizeof(SCU_PARITY_PMTSR_MTENPS) == 1);

static constexpr uint16_t SCU_PARITY_PMTSR_MTENPS_id = 2461;

/**
 * Converts SCU_PARITY_PMTSR_MTENPS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PARITY_PMTSR_MTENPS instance)
{
    const char *result = "UNKNOWN SCU_PARITY_PMTSR_MTENPS";

    switch (instance)
    {
    case SCU_PARITY_PMTSR_MTENPS::value1:
        result = "value1";
        break;
    case SCU_PARITY_PMTSR_MTENPS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PARITY_PMTSR_MTENPS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PARITY_PMTSR_MTENPS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PARITY_PMTSR_MTENPS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PARITY_PMTSR_MTENPS::value2;
    }

    return result;
}

}; // namespace XMC4700
