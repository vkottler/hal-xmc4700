/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDCR_RTCE : uint8_t
{
    value1 /*!< Wake-up event disabled */,
    value2 = 1 /*!< Wake-up event enabled */
};
static_assert(sizeof(SCU_HIBERNATE_HDCR_RTCE) == 1);

/**
 * Converts SCU_HIBERNATE_HDCR_RTCE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDCR_RTCE instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDCR_RTCE";

    switch (instance)
    {
    case SCU_HIBERNATE_HDCR_RTCE::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDCR_RTCE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDCR_RTCE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDCR_RTCE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDCR_RTCE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDCR_RTCE::value2;
    }

    return result;
}

}; // namespace XMC4700
