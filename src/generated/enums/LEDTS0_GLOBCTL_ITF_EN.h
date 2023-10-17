/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_GLOBCTL_ITF_EN : uint8_t
{
    disable /*!< Disable */,
    enable = 1 /*!< Enable */
};
static_assert(sizeof(LEDTS0_GLOBCTL_ITF_EN) == 1);

/**
 * Converts LEDTS0_GLOBCTL_ITF_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_GLOBCTL_ITF_EN instance)
{
    const char *result = "UNKNOWN LEDTS0_GLOBCTL_ITF_EN";

    switch (instance)
    {
    case LEDTS0_GLOBCTL_ITF_EN::disable:
        result = "disable";
        break;
    case LEDTS0_GLOBCTL_ITF_EN::enable:
        result = "enable";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_GLOBCTL_ITF_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_GLOBCTL_ITF_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disable", 7)))
    {
        output = LEDTS0_GLOBCTL_ITF_EN::disable;
    }
    else if ((result = !strncmp(data, "enable", 6)))
    {
        output = LEDTS0_GLOBCTL_ITF_EN::enable;
    }

    return result;
}

}; // namespace XMC4700
