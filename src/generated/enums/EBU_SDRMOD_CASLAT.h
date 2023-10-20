/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_SDRMOD_CASLAT : uint8_t
{
    two_clocks_default_after_reset =
        2 /*!< Two clocks (default after reset) */,
    three_clocks = 3 /*!< Three clocks */
};
static_assert(sizeof(EBU_SDRMOD_CASLAT) == 1);

/**
 * Converts EBU_SDRMOD_CASLAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRMOD_CASLAT instance)
{
    const char *result = "UNKNOWN EBU_SDRMOD_CASLAT";

    switch (instance)
    {
    case EBU_SDRMOD_CASLAT::two_clocks_default_after_reset:
        result = "two_clocks_default_after_reset";
        break;
    case EBU_SDRMOD_CASLAT::three_clocks:
        result = "three_clocks";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRMOD_CASLAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRMOD_CASLAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "two_clocks_default_after_reset", 30)))
    {
        output = EBU_SDRMOD_CASLAT::two_clocks_default_after_reset;
    }
    else if ((result = !strncmp(data, "three_clocks", 12)))
    {
        output = EBU_SDRMOD_CASLAT::three_clocks;
    }

    return result;
}

}; // namespace XMC4700
