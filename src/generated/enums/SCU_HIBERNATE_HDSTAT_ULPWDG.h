/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_HIBERNATE_HDSTAT_ULPWDG : uint8_t
{
    did_not_occur /*!< Watchdog alarm did not occur */,
    occurred = 1 /*!< Watchdog alarm occurred */
};
static_assert(sizeof(SCU_HIBERNATE_HDSTAT_ULPWDG) == 1);

/**
 * Converts SCU_HIBERNATE_HDSTAT_ULPWDG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_HIBERNATE_HDSTAT_ULPWDG instance)
{
    const char *result = "UNKNOWN SCU_HIBERNATE_HDSTAT_ULPWDG";

    switch (instance)
    {
    case SCU_HIBERNATE_HDSTAT_ULPWDG::did_not_occur:
        result = "did_not_occur";
        break;
    case SCU_HIBERNATE_HDSTAT_ULPWDG::occurred:
        result = "occurred";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_HIBERNATE_HDSTAT_ULPWDG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_HIBERNATE_HDSTAT_ULPWDG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "did_not_occur", 13)))
    {
        output = SCU_HIBERNATE_HDSTAT_ULPWDG::did_not_occur;
    }
    else if ((result = !strncmp(data, "occurred", 8)))
    {
        output = SCU_HIBERNATE_HDSTAT_ULPWDG::occurred;
    }

    return result;
}

}; // namespace XMC4700
