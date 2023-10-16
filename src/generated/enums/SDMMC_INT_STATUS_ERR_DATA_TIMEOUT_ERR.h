/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR : uint8_t
{
    value1 /*!< No Error */,
    value2 = 1 /*!< Timeout */
};
static_assert(sizeof(SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR) == 1);

/**
 * Converts SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR instance)
{
    const char *result = "UNKNOWN SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR";

    switch (instance)
    {
    case SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR::value1:
        result = "value1";
        break;
    case SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SDMMC_INT_STATUS_ERR_DATA_TIMEOUT_ERR::value2;
    }

    return result;
}

}; // namespace XMC4700
