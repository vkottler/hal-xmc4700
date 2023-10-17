/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SDMMC_CON_SDMMC_CON_CDSEL : uint8_t
{
    p110_input_pin_selected /*!< P1.10 input pin selected */,
    software_bit_cdsval_selected = 1 /*!< Software bit CDSVAL is selected */
};
static_assert(sizeof(SDMMC_CON_SDMMC_CON_CDSEL) == 1);

/**
 * Converts SDMMC_CON_SDMMC_CON_CDSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SDMMC_CON_SDMMC_CON_CDSEL instance)
{
    const char *result = "UNKNOWN SDMMC_CON_SDMMC_CON_CDSEL";

    switch (instance)
    {
    case SDMMC_CON_SDMMC_CON_CDSEL::p110_input_pin_selected:
        result = "p110_input_pin_selected";
        break;
    case SDMMC_CON_SDMMC_CON_CDSEL::software_bit_cdsval_selected:
        result = "software_bit_cdsval_selected";
        break;
    }

    return result;
}

/**
 * Converts a C string to SDMMC_CON_SDMMC_CON_CDSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SDMMC_CON_SDMMC_CON_CDSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "p110_input_pin_selected", 23)))
    {
        output = SDMMC_CON_SDMMC_CON_CDSEL::p110_input_pin_selected;
    }
    else if ((result = !strncmp(data, "software_bit_cdsval_selected", 28)))
    {
        output = SDMMC_CON_SDMMC_CON_CDSEL::software_bit_cdsval_selected;
    }

    return result;
}

}; // namespace XMC4700
