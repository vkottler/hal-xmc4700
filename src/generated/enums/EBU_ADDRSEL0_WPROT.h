/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_ADDRSEL0_WPROT : uint8_t
{
    enabled_write_accesses /*!< Region is enabled for write accesses */,
    write_protected = 1 /*!< Region is write protected. */
};
static_assert(sizeof(EBU_ADDRSEL0_WPROT) == 1);

/**
 * Converts EBU_ADDRSEL0_WPROT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_ADDRSEL0_WPROT instance)
{
    const char *result = "UNKNOWN EBU_ADDRSEL0_WPROT";

    switch (instance)
    {
    case EBU_ADDRSEL0_WPROT::enabled_write_accesses:
        result = "enabled_write_accesses";
        break;
    case EBU_ADDRSEL0_WPROT::write_protected:
        result = "write_protected";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_ADDRSEL0_WPROT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_ADDRSEL0_WPROT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "enabled_write_accesses", 22)))
    {
        output = EBU_ADDRSEL0_WPROT::enabled_write_accesses;
    }
    else if ((result = !strncmp(data, "write_protected", 15)))
    {
        output = EBU_ADDRSEL0_WPROT::write_protected;
    }

    return result;
}

}; // namespace XMC4700
