/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_HOST_CTRL_SD_8BIT_MODE : uint8_t
{
    bus_width_selected_by_data_transfer_width /*!< Bus Width is selected by
                                                 Data Transfer Width */
        ,
    _8_bit_bus_width = 1 /*!< 8-bit Bus Width */
};
static_assert(sizeof(SDMMC_HOST_CTRL_SD_8BIT_MODE) == 1);

/**
 * Converts SDMMC_HOST_CTRL_SD_8BIT_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_HOST_CTRL_SD_8BIT_MODE instance)
{
    const char *result = "UNKNOWN SDMMC_HOST_CTRL_SD_8BIT_MODE";

    switch (instance)
    {
    case SDMMC_HOST_CTRL_SD_8BIT_MODE::
        bus_width_selected_by_data_transfer_width:
        result = "bus_width_selected_by_data_transfer_width";
        break;
    case SDMMC_HOST_CTRL_SD_8BIT_MODE::_8_bit_bus_width:
        result = "_8_bit_bus_width";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_HOST_CTRL_SD_8BIT_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_HOST_CTRL_SD_8BIT_MODE &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "bus_width_selected_by_data_transfer_width", 41)))
    {
        output = SDMMC_HOST_CTRL_SD_8BIT_MODE::
            bus_width_selected_by_data_transfer_width;
    }
    else if ((result = !strncmp(data, "_8_bit_bus_width", 16)))
    {
        output = SDMMC_HOST_CTRL_SD_8BIT_MODE::_8_bit_bus_width;
    }

    return result;
}

}; // namespace XMC4700
