/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FSR_WPROIN1 : uint8_t
{
    no_write_protection_installed_user_1 /*!< No write protection installed for
                                            user 1 */
        ,
    sector_write_protection_user_1_configured_cor_cont =
        1 /*!< Sector write protection for user 1 is configured and correctly
             confirmed in the User Configuration Block 1. */
};
static_assert(sizeof(FLASH0_FSR_WPROIN1) == 1);

/**
 * Converts FLASH0_FSR_WPROIN1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FSR_WPROIN1 instance)
{
    const char *result = "UNKNOWN FLASH0_FSR_WPROIN1";

    switch (instance)
    {
    case FLASH0_FSR_WPROIN1::no_write_protection_installed_user_1:
        result = "no_write_protection_installed_user_1";
        break;
    case FLASH0_FSR_WPROIN1::
        sector_write_protection_user_1_configured_cor_cont:
        result = "sector_write_protection_user_1_configured_cor_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FSR_WPROIN1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FSR_WPROIN1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_write_protection_installed_user_1", 36)))
    {
        output = FLASH0_FSR_WPROIN1::no_write_protection_installed_user_1;
    }
    else if ((result = !strncmp(
                  data, "sector_write_protection_user_1_configured_cor_cont",
                  50)))
    {
        output = FLASH0_FSR_WPROIN1::
            sector_write_protection_user_1_configured_cor_cont;
    }

    return result;
}

}; // namespace XMC4700
