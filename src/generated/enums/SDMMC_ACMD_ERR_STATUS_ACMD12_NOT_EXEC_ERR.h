/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR : uint8_t
{
    executed /*!< Executed */,
    not_executed = 1 /*!< Not Executed */
};
static_assert(sizeof(SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR) == 1);

/**
 * Converts SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR instance)
{
    const char *result = "UNKNOWN SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR";

    switch (instance)
    {
    case SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR::executed:
        result = "executed";
        break;
    case SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR::not_executed:
        result = "not_executed";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "executed", 8)))
    {
        output = SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR::executed;
    }
    else if ((result = !strncmp(data, "not_executed", 12)))
    {
        output = SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR::not_executed;
    }

    return result;
}

}; // namespace XMC4700
