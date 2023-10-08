/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Enabled",
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

enum class SCU_INTERRUPT_SRMSK_PRWARN : uint8_t
{
    value1 /*!< Disabled */,
    value2 = 1 /*!< Enabled */
};
static_assert(sizeof(SCU_INTERRUPT_SRMSK_PRWARN) == 1);

static constexpr uint16_t SCU_INTERRUPT_SRMSK_PRWARN_id = 594;

/**
 * Converts SCU_INTERRUPT_SRMSK_PRWARN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_INTERRUPT_SRMSK_PRWARN instance)
{
    const char *result = "UNKNOWN SCU_INTERRUPT_SRMSK_PRWARN";

    switch (instance)
    {
    case SCU_INTERRUPT_SRMSK_PRWARN::value1:
        result = "value1";
        break;
    case SCU_INTERRUPT_SRMSK_PRWARN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_INTERRUPT_SRMSK_PRWARN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_INTERRUPT_SRMSK_PRWARN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_INTERRUPT_SRMSK_PRWARN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_INTERRUPT_SRMSK_PRWARN::value2;
    }

    return result;
}

}; // namespace XMC4700
