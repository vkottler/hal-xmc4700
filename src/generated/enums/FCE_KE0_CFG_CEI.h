/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "Configuration Error Interrupt is disabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Configuration Error Interrupt is enabled",
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

enum class FCE_KE0_CFG_CEI : uint8_t
{
    value1 /*!< Configuration Error Interrupt is disabled */,
    value2 = 1 /*!< Configuration Error Interrupt is enabled */
};
static_assert(sizeof(FCE_KE0_CFG_CEI) == 1);

static constexpr uint16_t FCE_KE0_CFG_CEI_id = 2016;

/**
 * Converts FCE_KE0_CFG_CEI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FCE_KE0_CFG_CEI instance)
{
    const char *result = "UNKNOWN FCE_KE0_CFG_CEI";

    switch (instance)
    {
    case FCE_KE0_CFG_CEI::value1:
        result = "value1";
        break;
    case FCE_KE0_CFG_CEI::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to FCE_KE0_CFG_CEI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FCE_KE0_CFG_CEI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = FCE_KE0_CFG_CEI::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = FCE_KE0_CFG_CEI::value2;
    }

    return result;
}

}; // namespace XMC4700