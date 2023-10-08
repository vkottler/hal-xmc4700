/**
 * \file
 * \brief Generated by ifgen (2.6.2).
 * {
 *   "enum": {
 *     "value1": {
 *       "description": "instruction fetches enabled",
 *       "value": 0
 *     },
 *     "value2": {
 *       "description": "instruction fetches disabled.",
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

enum class PPB_MPU_RASR_A1_XN : uint8_t
{
    value1 /*!< instruction fetches enabled */,
    value2 = 1 /*!< instruction fetches disabled. */
};
static_assert(sizeof(PPB_MPU_RASR_A1_XN) == 1);

static constexpr uint16_t PPB_MPU_RASR_A1_XN_id = 2604;

/**
 * Converts PPB_MPU_RASR_A1_XN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_MPU_RASR_A1_XN instance)
{
    const char *result = "UNKNOWN PPB_MPU_RASR_A1_XN";

    switch (instance)
    {
    case PPB_MPU_RASR_A1_XN::value1:
        result = "value1";
        break;
    case PPB_MPU_RASR_A1_XN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_MPU_RASR_A1_XN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_MPU_RASR_A1_XN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_MPU_RASR_A1_XN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_MPU_RASR_A1_XN::value2;
    }

    return result;
}

}; // namespace XMC4700
