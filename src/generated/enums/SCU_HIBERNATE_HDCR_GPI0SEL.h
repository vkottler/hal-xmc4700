/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "HIB_IO_1 pin selected",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "HIB_IO_0 pin selected",
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

enum class SCU_HIBERNATE_HDCR_GPI0SEL : uint8_t
{
    value1 /*!< HIB_IO_1 pin selected */,
    value2 = 1 /*!< HIB_IO_0 pin selected */
};
static_assert(sizeof(SCU_HIBERNATE_HDCR_GPI0SEL) == 1);

static constexpr uint16_t SCU_HIBERNATE_HDCR_GPI0SEL_id = 1335;

/**
 * Converts SCU_HIBERNATE_HDCR_GPI0SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCR_GPI0SEL instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCR_GPI0SEL";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCR_GPI0SEL::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCR_GPI0SEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCR_GPI0SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCR_GPI0SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCR_GPI0SEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCR_GPI0SEL::value2;
    }

    return result;
}

}; // namespace XMC4700