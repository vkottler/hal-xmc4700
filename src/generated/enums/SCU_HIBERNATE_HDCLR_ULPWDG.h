/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "No effect",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "Clear watchdog alarm",
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

enum class SCU_HIBERNATE_HDCLR_ULPWDG : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Clear watchdog alarm */
};
static_assert(sizeof(SCU_HIBERNATE_HDCLR_ULPWDG) == 1);

static constexpr uint16_t SCU_HIBERNATE_HDCLR_ULPWDG_id = 1323;

/**
 * Converts SCU_HIBERNATE_HDCLR_ULPWDG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCLR_ULPWDG instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCLR_ULPWDG";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCLR_ULPWDG::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCLR_ULPWDG::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCLR_ULPWDG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCLR_ULPWDG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCLR_ULPWDG::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCLR_ULPWDG::value2;
    }

    return result;
}

}; // namespace XMC4700