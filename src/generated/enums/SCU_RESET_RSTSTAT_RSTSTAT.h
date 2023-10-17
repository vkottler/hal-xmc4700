/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_RSTSTAT_RSTSTAT : uint8_t
{
    porst_reset = 1 /*!< PORST reset */,
    swd_reset = 2 /*!< SWD reset */,
    pv_reset = 4 /*!< PV reset */,
    cpu_system_reset = 8 /*!< CPU system reset */,
    cpu_lockup_reset = 16 /*!< CPU lockup reset */,
    wdt_reset = 32 /*!< WDT reset */,
    parity_error_reset = 128 /*!< Parity Error reset */
};
static_assert(sizeof(SCU_RESET_RSTSTAT_RSTSTAT) == 1);

/**
 * Converts SCU_RESET_RSTSTAT_RSTSTAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_RSTSTAT_RSTSTAT instance)
{
    const char *result = "UNKNOWN SCU_RESET_RSTSTAT_RSTSTAT";

    switch (instance)
    {
    case SCU_RESET_RSTSTAT_RSTSTAT::porst_reset:
        result = "porst_reset";
        break;
    case SCU_RESET_RSTSTAT_RSTSTAT::swd_reset:
        result = "swd_reset";
        break;
    case SCU_RESET_RSTSTAT_RSTSTAT::pv_reset:
        result = "pv_reset";
        break;
    case SCU_RESET_RSTSTAT_RSTSTAT::cpu_system_reset:
        result = "cpu_system_reset";
        break;
    case SCU_RESET_RSTSTAT_RSTSTAT::cpu_lockup_reset:
        result = "cpu_lockup_reset";
        break;
    case SCU_RESET_RSTSTAT_RSTSTAT::wdt_reset:
        result = "wdt_reset";
        break;
    case SCU_RESET_RSTSTAT_RSTSTAT::parity_error_reset:
        result = "parity_error_reset";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_RSTSTAT_RSTSTAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_RSTSTAT_RSTSTAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "porst_reset", 11)))
    {
        output = SCU_RESET_RSTSTAT_RSTSTAT::porst_reset;
    }
    else if ((result = !strncmp(data, "swd_reset", 9)))
    {
        output = SCU_RESET_RSTSTAT_RSTSTAT::swd_reset;
    }
    else if ((result = !strncmp(data, "pv_reset", 8)))
    {
        output = SCU_RESET_RSTSTAT_RSTSTAT::pv_reset;
    }
    else if ((result = !strncmp(data, "cpu_system_reset", 16)))
    {
        output = SCU_RESET_RSTSTAT_RSTSTAT::cpu_system_reset;
    }
    else if ((result = !strncmp(data, "cpu_lockup_reset", 16)))
    {
        output = SCU_RESET_RSTSTAT_RSTSTAT::cpu_lockup_reset;
    }
    else if ((result = !strncmp(data, "wdt_reset", 9)))
    {
        output = SCU_RESET_RSTSTAT_RSTSTAT::wdt_reset;
    }
    else if ((result = !strncmp(data, "parity_error_reset", 18)))
    {
        output = SCU_RESET_RSTSTAT_RSTSTAT::parity_error_reset;
    }

    return result;
}

}; // namespace XMC4700
