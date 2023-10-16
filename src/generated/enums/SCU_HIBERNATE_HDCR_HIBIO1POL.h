/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDCR_HIBIO1POL : uint8_t
{
    value1 /*!< Direct value */,
    value2 = 1 /*!< Inverted value */
};
static_assert(sizeof(SCU_HIBERNATE_HDCR_HIBIO1POL) == 1);

/**
 * Converts SCU_HIBERNATE_HDCR_HIBIO1POL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCR_HIBIO1POL instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCR_HIBIO1POL";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCR_HIBIO1POL::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCR_HIBIO1POL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCR_HIBIO1POL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCR_HIBIO1POL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1POL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCR_HIBIO1POL::value2;
    }

    return result;
}

}; // namespace XMC4700
