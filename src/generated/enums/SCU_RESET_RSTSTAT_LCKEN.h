/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Reset by Lockup disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Reset by Lockup enabled",
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

enum class SCU_RESET_RSTSTAT_LCKEN : uint8_t
{
    value1 /*!< Reset by Lockup disabled */,
    value2 = 1 /*!< Reset by Lockup enabled */
};
static_assert(sizeof(SCU_RESET_RSTSTAT_LCKEN) == 1);

static constexpr uint16_t SCU_RESET_RSTSTAT_LCKEN_id = 2018;

/**
 * Converts SCU_RESET_RSTSTAT_LCKEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_RSTSTAT_LCKEN instance)
{
    const char *result = "UNKNOWN SCU_RESET_RSTSTAT_LCKEN";

    switch (instance)
    {
    case SCU_RESET_RSTSTAT_LCKEN::value1:
        result = "value1";
        break;
    case SCU_RESET_RSTSTAT_LCKEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_RSTSTAT_LCKEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_RSTSTAT_LCKEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_RESET_RSTSTAT_LCKEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_RESET_RSTSTAT_LCKEN::value2;
    }

    return result;
}

}; // namespace XMC4700