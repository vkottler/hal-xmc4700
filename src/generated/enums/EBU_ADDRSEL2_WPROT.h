/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_ADDRSEL2_WPROT : uint8_t
{
    value1 /*!< Region is enabled for write accesses */,
    value2 = 1 /*!< Region is write protected. */
};
static_assert(sizeof(EBU_ADDRSEL2_WPROT) == 1);

static constexpr uint16_t EBU_ADDRSEL2_WPROT_id = 393;

/**
 * Converts EBU_ADDRSEL2_WPROT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_ADDRSEL2_WPROT instance)
{
    const char *result = "UNKNOWN EBU_ADDRSEL2_WPROT";

    switch (instance)
    {
    case EBU_ADDRSEL2_WPROT::value1:
        result = "value1";
        break;
    case EBU_ADDRSEL2_WPROT::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_ADDRSEL2_WPROT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_ADDRSEL2_WPROT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_ADDRSEL2_WPROT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_ADDRSEL2_WPROT::value2;
    }

    return result;
}

}; // namespace XMC4700
