/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_ADDRSEL3_ALTENAB : uint8_t
{
    value1 /*!< Memory region is disabled (default after reset). */,
    value2 = 1 /*!< Memory region is enabled. */
};
static_assert(sizeof(EBU_ADDRSEL3_ALTENAB) == 1);

/**
 * Converts EBU_ADDRSEL3_ALTENAB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_ADDRSEL3_ALTENAB instance)
{
    const char *result = "UNKNOWN EBU_ADDRSEL3_ALTENAB";

    switch (instance)
    {
    case EBU_ADDRSEL3_ALTENAB::value1:
        result = "value1";
        break;
    case EBU_ADDRSEL3_ALTENAB::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_ADDRSEL3_ALTENAB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_ADDRSEL3_ALTENAB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_ADDRSEL3_ALTENAB::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_ADDRSEL3_ALTENAB::value2;
    }

    return result;
}

}; // namespace XMC4700
