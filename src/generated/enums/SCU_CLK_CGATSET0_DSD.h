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
 *       "description": "Enable gating",
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

enum class SCU_CLK_CGATSET0_DSD : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Enable gating */
};
static_assert(sizeof(SCU_CLK_CGATSET0_DSD) == 1);

static constexpr uint16_t SCU_CLK_CGATSET0_DSD_id = 1194;

/**
 * Converts SCU_CLK_CGATSET0_DSD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CGATSET0_DSD instance)
{
    const char *result = "UNKNOWN SCU_CLK_CGATSET0_DSD";

    switch (instance)
    {
    case SCU_CLK_CGATSET0_DSD::value1:
        result = "value1";
        break;
    case SCU_CLK_CGATSET0_DSD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CGATSET0_DSD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CGATSET0_DSD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_CGATSET0_DSD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_CGATSET0_DSD::value2;
    }

    return result;
}

}; // namespace XMC4700