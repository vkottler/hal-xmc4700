/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_MPU_RBAR_VALID : uint8_t
{
    mpu_rnr_not_changed_processor___updates_base__cont /*!< MPU_RNR not
                                                          changed, and the
                                                          processor: - updates
                                                          the base address for
                                                          the region specified
                                                          in the MPU_RNR -
                                                          ignores the value of
                                                          the REGION field */
        ,
    processor___updates_value_mpu_rnr_value_regio_cont =
        1 /*!< the processor: - updates the value of the MPU_RNR to the value
             of the REGION field - updates the base address for the region
             specified in the REGION field. */
};
static_assert(sizeof(PPB_MPU_RBAR_VALID) == 1);

/**
 * Converts PPB_MPU_RBAR_VALID to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_MPU_RBAR_VALID instance)
{
    const char *result = "UNKNOWN PPB_MPU_RBAR_VALID";

    switch (instance)
    {
    case PPB_MPU_RBAR_VALID::
        mpu_rnr_not_changed_processor___updates_base__cont:
        result = "mpu_rnr_not_changed_processor___updates_base__cont";
        break;
    case PPB_MPU_RBAR_VALID::
        processor___updates_value_mpu_rnr_value_regio_cont:
        result = "processor___updates_value_mpu_rnr_value_regio_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_MPU_RBAR_VALID.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_MPU_RBAR_VALID &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "mpu_rnr_not_changed_processor___updates_base__cont", 50)))
    {
        output = PPB_MPU_RBAR_VALID::
            mpu_rnr_not_changed_processor___updates_base__cont;
    }
    else if ((result = !strncmp(
                  data, "processor___updates_value_mpu_rnr_value_regio_cont",
                  50)))
    {
        output = PPB_MPU_RBAR_VALID::
            processor___updates_value_mpu_rnr_value_regio_cont;
    }

    return result;
}

}; // namespace XMC4700
