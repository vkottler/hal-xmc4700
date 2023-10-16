/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_MPU_RASR_A2_XN : uint8_t
{
    value1 /*!< instruction fetches enabled */,
    value2 = 1 /*!< instruction fetches disabled. */
};
static_assert(sizeof(PPB_MPU_RASR_A2_XN) == 1);

/**
 * Converts PPB_MPU_RASR_A2_XN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_MPU_RASR_A2_XN instance)
{
    const char *result = "UNKNOWN PPB_MPU_RASR_A2_XN";

    switch (instance)
    {
    case PPB_MPU_RASR_A2_XN::value1:
        result = "value1";
        break;
    case PPB_MPU_RASR_A2_XN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_MPU_RASR_A2_XN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_MPU_RASR_A2_XN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_MPU_RASR_A2_XN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_MPU_RASR_A2_XN::value2;
    }

    return result;
}

}; // namespace XMC4700
