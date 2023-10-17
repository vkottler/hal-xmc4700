/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_BUSRCON0_AAP : uint8_t
{
    beginning_access /*!< Clock is enabled at beginning of access. */,
    after_address_phase = 1 /*!< Clock is enabled at after address phase. */
};
static_assert(sizeof(EBU_BUSRCON0_AAP) == 1);

/**
 * Converts EBU_BUSRCON0_AAP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_BUSRCON0_AAP instance)
{
    const char *result = "UNKNOWN EBU_BUSRCON0_AAP";

    switch (instance)
    {
    case EBU_BUSRCON0_AAP::beginning_access:
        result = "beginning_access";
        break;
    case EBU_BUSRCON0_AAP::after_address_phase:
        result = "after_address_phase";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_BUSRCON0_AAP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_BUSRCON0_AAP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "beginning_access", 16)))
    {
        output = EBU_BUSRCON0_AAP::beginning_access;
    }
    else if ((result = !strncmp(data, "after_address_phase", 19)))
    {
        output = EBU_BUSRCON0_AAP::after_address_phase;
    }

    return result;
}

}; // namespace XMC4700
