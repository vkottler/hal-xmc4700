/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDSET_ULPWDG : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Set watchdog alarm */
};
static_assert(sizeof(SCU_HIBERNATE_HDSET_ULPWDG) == 1);

/**
 * Converts SCU_HIBERNATE_HDSET_ULPWDG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDSET_ULPWDG instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDSET_ULPWDG";

    switch (instance)
    {
    case SCU_HIBERNATE_HDSET_ULPWDG::value1:
        result = "value1";
        break;
    case SCU_HIBERNATE_HDSET_ULPWDG::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDSET_ULPWDG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDSET_ULPWDG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_HIBERNATE_HDSET_ULPWDG::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_HIBERNATE_HDSET_ULPWDG::value2;
    }

    return result;
}

}; // namespace XMC4700
