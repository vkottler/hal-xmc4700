/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FSR_PROIN : uint8_t
{
    no_protection_installed /*!< No protection is installed */,
    read_orand_write_protection_one_or_more_users_cont =
        1 /*!< Read or/and write protection for one or more users is configured
             and correctly confirmed in the User Configuration Block(s). */
};
static_assert(sizeof(FLASH0_FSR_PROIN) == 1);

/**
 * Converts FLASH0_FSR_PROIN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FSR_PROIN instance)
{
    const char *result = "UNKNOWN FLASH0_FSR_PROIN";

    switch (instance)
    {
    case FLASH0_FSR_PROIN::no_protection_installed:
        result = "no_protection_installed";
        break;
    case FLASH0_FSR_PROIN::read_orand_write_protection_one_or_more_users_cont:
        result = "read_orand_write_protection_one_or_more_users_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FSR_PROIN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FSR_PROIN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_protection_installed", 23)))
    {
        output = FLASH0_FSR_PROIN::no_protection_installed;
    }
    else if ((result = !strncmp(
                  data, "read_orand_write_protection_one_or_more_users_cont",
                  50)))
    {
        output = FLASH0_FSR_PROIN::
            read_orand_write_protection_one_or_more_users_cont;
    }

    return result;
}

}; // namespace XMC4700
