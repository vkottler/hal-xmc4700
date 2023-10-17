/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC : uint8_t
{
    no_interrupt /*!< No interrupt */,
    interrupt_generated = 1 /*!< Interrupt is generated */
};
static_assert(sizeof(SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC) == 1);

/**
 * Converts SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC instance)
{
    const char *result =
        "UNKNOWN SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC";

    switch (instance)
    {
    case SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC::no_interrupt:
        result = "no_interrupt";
        break;
    case SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC::
        interrupt_generated:
        result = "interrupt_generated";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data,
    SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_interrupt", 12)))
    {
        output =
            SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC::no_interrupt;
    }
    else if ((result = !strncmp(data, "interrupt_generated", 19)))
    {
        output = SDMMC_FORCE_EVENT_ACMD_ERR_STATUS_FE_ACMD_NOT_EXEC::
            interrupt_generated;
    }

    return result;
}

}; // namespace XMC4700
