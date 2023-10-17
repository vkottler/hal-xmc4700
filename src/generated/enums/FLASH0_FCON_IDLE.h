/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FLASH0_FCON_IDLE : uint8_t
{
    normalstandard_flash_read_operation /*!< Normal/standard Flash read
                                           operation */
        ,
    dynamic_idle_program_flash_enabled_power_savi_cont =
        1 /*!< Dynamic idle of Program Flash enabled for power saving; static
             prefetching disabled */
};
static_assert(sizeof(FLASH0_FCON_IDLE) == 1);

/**
 * Converts FLASH0_FCON_IDLE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLASH0_FCON_IDLE instance)
{
    const char *result = "UNKNOWN FLASH0_FCON_IDLE";

    switch (instance)
    {
    case FLASH0_FCON_IDLE::normalstandard_flash_read_operation:
        result = "normalstandard_flash_read_operation";
        break;
    case FLASH0_FCON_IDLE::dynamic_idle_program_flash_enabled_power_savi_cont:
        result = "dynamic_idle_program_flash_enabled_power_savi_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLASH0_FCON_IDLE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLASH0_FCON_IDLE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "normalstandard_flash_read_operation", 35)))
    {
        output = FLASH0_FCON_IDLE::normalstandard_flash_read_operation;
    }
    else if ((result = !strncmp(
                  data, "dynamic_idle_program_flash_enabled_power_savi_cont",
                  50)))
    {
        output = FLASH0_FCON_IDLE::
            dynamic_idle_program_flash_enabled_power_savi_cont;
    }

    return result;
}

}; // namespace XMC4700
