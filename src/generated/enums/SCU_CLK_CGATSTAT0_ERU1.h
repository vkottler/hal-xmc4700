/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_CLK_CGATSTAT0_ERU1 : uint8_t
{
    de_asserted /*!< Gating de-asserted */,
    asserted = 1 /*!< Gating asserted */
};
static_assert(sizeof(SCU_CLK_CGATSTAT0_ERU1) == 1);

/**
 * Converts SCU_CLK_CGATSTAT0_ERU1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_CLK_CGATSTAT0_ERU1 instance)
{
    const char *result = "UNKNOWN SCU_CLK_CGATSTAT0_ERU1";

    switch (instance)
    {
    case SCU_CLK_CGATSTAT0_ERU1::de_asserted:
        result = "de_asserted";
        break;
    case SCU_CLK_CGATSTAT0_ERU1::asserted:
        result = "asserted";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_CLK_CGATSTAT0_ERU1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_CLK_CGATSTAT0_ERU1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "de_asserted", 11)))
    {
        output = SCU_CLK_CGATSTAT0_ERU1::de_asserted;
    }
    else if ((result = !strncmp(data, "asserted", 8)))
    {
        output = SCU_CLK_CGATSTAT0_ERU1::asserted;
    }

    return result;
}

}; // namespace XMC4700
