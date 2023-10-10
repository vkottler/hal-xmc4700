/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_MPU_RASR_A3_SRD : uint8_t
{
    value1 /*!< corresponding sub-region is enabled */,
    value2 = 1 /*!< corresponding sub-region is disabled */
};
static_assert(sizeof(PPB_MPU_RASR_A3_SRD) == 1);

static constexpr uint16_t PPB_MPU_RASR_A3_SRD_id = 825;

/**
 * Converts PPB_MPU_RASR_A3_SRD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_MPU_RASR_A3_SRD instance)
{
    const char *result = "UNKNOWN PPB_MPU_RASR_A3_SRD";

    switch (instance)
    {
    case PPB_MPU_RASR_A3_SRD::value1:
        result = "value1";
        break;
    case PPB_MPU_RASR_A3_SRD::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_MPU_RASR_A3_SRD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_MPU_RASR_A3_SRD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_MPU_RASR_A3_SRD::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_MPU_RASR_A3_SRD::value2;
    }

    return result;
}

}; // namespace XMC4700
