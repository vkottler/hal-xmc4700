/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR : uint8_t
{
    value1 /*!< Executed */,
    value2 = 1 /*!< Not Executed */
};
static_assert(sizeof(SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR) == 1);

static constexpr uint16_t SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR_id = 1025;

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
    case SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR::value1:
        result = "value1";
        break;
    case SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR::value2:
        result = "value2";
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

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_ACMD_ERR_STATUS_ACMD12_NOT_EXEC_ERR::value2;
    }

    return result;
}

}; // namespace XMC4700
