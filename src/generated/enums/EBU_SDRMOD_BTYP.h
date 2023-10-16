/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_SDRMOD_BTYP : uint8_t
{
    value1 /*!< Only this value should be written (default after reset) */
};
static_assert(sizeof(EBU_SDRMOD_BTYP) == 1);

/**
 * Converts EBU_SDRMOD_BTYP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRMOD_BTYP instance)
{
    const char *result = "UNKNOWN EBU_SDRMOD_BTYP";

    switch (instance)
    {
    case EBU_SDRMOD_BTYP::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRMOD_BTYP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRMOD_BTYP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_SDRMOD_BTYP::value1;
    }

    return result;
}

}; // namespace XMC4700
