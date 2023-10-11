/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDCR_HIBIO0POL : uint8_t
{
    value1 /*!< Direct value */,
    value2 = 1 /*!< Inverted value */
};
static_assert(sizeof(SCU_HIBERNATE_HDCR_HIBIO0POL) == 1);

static constexpr uint16_t SCU_HIBERNATE_HDCR_HIBIO0POL_id = 2610;

/**
 * Converts SCU_HIBERNATE_HDCR_HIBIO0POL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCR_HIBIO0POL instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCR_HIBIO0POL";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCR_HIBIO0POL::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO0POL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCR_HIBIO0POL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCR_HIBIO0POL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0POL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO0POL::value2;
    }

    return result;
}

}; // namespace XMC4700
