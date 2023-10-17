/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR : uint8_t
{
    no_error /*!< No Error */,
    end_bit_error_generated = 1 /*!< End Bit Error Generated */
};
static_assert(sizeof(SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR) == 1);

/**
 * Converts SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR instance)
{
    const char *result = "UNKNOWN SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR";

    switch (instance)
    {
    case SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR::no_error:
        result = "no_error";
        break;
    case SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR::end_bit_error_generated:
        result = "end_bit_error_generated";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_error", 8)))
    {
        output = SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR::no_error;
    }
    else if ((result = !strncmp(data, "end_bit_error_generated", 23)))
    {
        output = SDMMC_INT_STATUS_ERR_CMD_END_BIT_ERR::end_bit_error_generated;
    }

    return result;
}

}; // namespace XMC4700
