/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "External hibernate request inactive",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "External hibernate request active",
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

enum class SCU_HIBERNATE_HDCR_HIB : uint8_t
{
    value1 /*!< External hibernate request inactive */,
    value2 = 1 /*!< External hibernate request active */
};
static_assert(sizeof(SCU_HIBERNATE_HDCR_HIB) == 1);

static constexpr uint16_t SCU_HIBERNATE_HDCR_HIB_id = 1339;

/**
 * Converts SCU_HIBERNATE_HDCR_HIB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCR_HIB instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCR_HIB";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCR_HIB::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCR_HIB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCR_HIB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCR_HIB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIB::value2;
    }

    return result;
}

}; // namespace XMC4700