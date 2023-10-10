/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CPUID_Implementer : uint8_t
{
    value1 = 65 /*!< ARM */
};
static_assert(sizeof(PPB_CPUID_Implementer) == 1);

static constexpr uint16_t PPB_CPUID_Implementer_id = 766;

/**
 * Converts PPB_CPUID_Implementer to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CPUID_Implementer instance)
{
    const char *result = "UNKNOWN PPB_CPUID_Implementer";

    switch (instance)
    {
    case PPB_CPUID_Implementer::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CPUID_Implementer.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CPUID_Implementer &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CPUID_Implementer::value1;
    }

    return result;
}

}; // namespace XMC4700
