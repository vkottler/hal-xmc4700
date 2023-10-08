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
 *       "description": "Disable gating",
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

enum class SCU_CLK_CGATCLR2_DMA1 : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Disable gating */
};
static_assert(sizeof(SCU_CLK_CGATCLR2_DMA1) == 1);

static constexpr uint16_t SCU_CLK_CGATCLR2_DMA1_id = 1245;

/**
 * Converts SCU_CLK_CGATCLR2_DMA1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CGATCLR2_DMA1 instance)
{
    const char *result = "UNKNOWN SCU_CLK_CGATCLR2_DMA1";

    switch (instance)
    {
    case SCU_CLK_CGATCLR2_DMA1::value1:
        result = "value1";
        break;
    case SCU_CLK_CGATCLR2_DMA1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CGATCLR2_DMA1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CGATCLR2_DMA1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_CLK_CGATCLR2_DMA1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_CLK_CGATCLR2_DMA1::value2;
    }

    return result;
}

}; // namespace XMC4700
