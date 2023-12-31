/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_HCFG_FrListEn : uint8_t
{
    _8_entries /*!< 8 Entries */,
    _16_entries = 1 /*!< 16 Entries */,
    _32_entries = 2 /*!< 32 Entries */,
    _64_entries = 3 /*!< 64 Entries */
};
static_assert(sizeof(USB0_HCFG_FrListEn) == 1);

/**
 * Converts USB0_HCFG_FrListEn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_HCFG_FrListEn instance)
{
    const char *result = "UNKNOWN USB0_HCFG_FrListEn";

    switch (instance)
    {
    case USB0_HCFG_FrListEn::_8_entries:
        result = "_8_entries";
        break;
    case USB0_HCFG_FrListEn::_16_entries:
        result = "_16_entries";
        break;
    case USB0_HCFG_FrListEn::_32_entries:
        result = "_32_entries";
        break;
    case USB0_HCFG_FrListEn::_64_entries:
        result = "_64_entries";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_HCFG_FrListEn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_HCFG_FrListEn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_8_entries", 10)))
    {
        output = USB0_HCFG_FrListEn::_8_entries;
    }
    else if ((result = !strncmp(data, "_16_entries", 11)))
    {
        output = USB0_HCFG_FrListEn::_16_entries;
    }
    else if ((result = !strncmp(data, "_32_entries", 11)))
    {
        output = USB0_HCFG_FrListEn::_32_entries;
    }
    else if ((result = !strncmp(data, "_64_entries", 11)))
    {
        output = USB0_HCFG_FrListEn::_64_entries;
    }

    return result;
}

}; // namespace XMC4700
