/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CPUID_Revision : uint8_t
{
    patch_1 = 1 /*!< Patch 1 */
};
static_assert(sizeof(PPB_CPUID_Revision) == 1);

/**
 * Converts PPB_CPUID_Revision to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CPUID_Revision instance)
{
    const char *result = "UNKNOWN PPB_CPUID_Revision";

    switch (instance)
    {
    case PPB_CPUID_Revision::patch_1:
        result = "patch_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CPUID_Revision.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CPUID_Revision &output)
{
    bool result = false;

    if ((result = !strncmp(data, "patch_1", 7)))
    {
        output = PPB_CPUID_Revision::patch_1;
    }

    return result;
}

}; // namespace XMC4700
