/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_MPU_RBAR_A1_VALID : uint8_t
{
    value1 /*!< MPU_RNR not changed, and the processor: - updates the base address for the region specified in the MPU_RNR - ignores the value of the REGION field */,
    value2 = 1 /*!< the processor: - updates the value of the MPU_RNR to the value of the REGION field - updates the base address for the region specified in the REGION field. */
};
static_assert(sizeof(PPB_MPU_RBAR_A1_VALID) == 1);

static constexpr uint16_t PPB_MPU_RBAR_A1_VALID_id = 2417;

/**
 * Converts PPB_MPU_RBAR_A1_VALID to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_MPU_RBAR_A1_VALID instance)
{
    const char *result = "UNKNOWN PPB_MPU_RBAR_A1_VALID";

    switch (instance)
    {
    case PPB_MPU_RBAR_A1_VALID::value1:
        result = "value1";
        break;
    case PPB_MPU_RBAR_A1_VALID::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_MPU_RBAR_A1_VALID.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_MPU_RBAR_A1_VALID &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_MPU_RBAR_A1_VALID::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_MPU_RBAR_A1_VALID::value2;
    }

    return result;
}

}; // namespace XMC4700
