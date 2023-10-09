/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_ERR_ACMD_ERR : uint8_t
{
    value1 /*!< No Error */,
    value2 = 1 /*!< Error */
};
static_assert(sizeof(SDMMC_INT_STATUS_ERR_ACMD_ERR) == 1);

static constexpr uint16_t SDMMC_INT_STATUS_ERR_ACMD_ERR_id = 1492;

/**
 * Converts SDMMC_INT_STATUS_ERR_ACMD_ERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_INT_STATUS_ERR_ACMD_ERR instance)
{
    const char *result = "UNKNOWN SDMMC_INT_STATUS_ERR_ACMD_ERR";

    switch (instance)
    {
    case SDMMC_INT_STATUS_ERR_ACMD_ERR::value1:
        result = "value1";
        break;
    case SDMMC_INT_STATUS_ERR_ACMD_ERR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_INT_STATUS_ERR_ACMD_ERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_INT_STATUS_ERR_ACMD_ERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_INT_STATUS_ERR_ACMD_ERR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_INT_STATUS_ERR_ACMD_ERR::value2;
    }

    return result;
}

}; // namespace XMC4700
