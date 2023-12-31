/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_CCR_MODE : uint8_t
{
    usic_channel_disabled_all_protocol_related_st_cont /*!< The USIC channel is
                                                          disabled. All
                                                          protocol-related
                                                          state machines are
                                                          set to an idle state.
                                                        */
        ,
    ssc_spi_protocol_selected = 1 /*!< The SSC (SPI) protocol is selected. */,
    asc_sci_uart_protocol_selected =
        2 /*!< The ASC (SCI, UART) protocol is selected. */,
    iis_protocol_selected = 3 /*!< The IIS protocol is selected. */,
    iic_protocol_selected = 4 /*!< The IIC protocol is selected. */
};
static_assert(sizeof(USIC0_CH0_CCR_MODE) == 1);

/**
 * Converts USIC0_CH0_CCR_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_CCR_MODE instance)
{
    const char *result = "UNKNOWN USIC0_CH0_CCR_MODE";

    switch (instance)
    {
    case USIC0_CH0_CCR_MODE::
        usic_channel_disabled_all_protocol_related_st_cont:
        result = "usic_channel_disabled_all_protocol_related_st_cont";
        break;
    case USIC0_CH0_CCR_MODE::ssc_spi_protocol_selected:
        result = "ssc_spi_protocol_selected";
        break;
    case USIC0_CH0_CCR_MODE::asc_sci_uart_protocol_selected:
        result = "asc_sci_uart_protocol_selected";
        break;
    case USIC0_CH0_CCR_MODE::iis_protocol_selected:
        result = "iis_protocol_selected";
        break;
    case USIC0_CH0_CCR_MODE::iic_protocol_selected:
        result = "iic_protocol_selected";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_CCR_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_CCR_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "usic_channel_disabled_all_protocol_related_st_cont", 50)))
    {
        output = USIC0_CH0_CCR_MODE::
            usic_channel_disabled_all_protocol_related_st_cont;
    }
    else if ((result = !strncmp(data, "ssc_spi_protocol_selected", 25)))
    {
        output = USIC0_CH0_CCR_MODE::ssc_spi_protocol_selected;
    }
    else if ((result = !strncmp(data, "asc_sci_uart_protocol_selected", 30)))
    {
        output = USIC0_CH0_CCR_MODE::asc_sci_uart_protocol_selected;
    }
    else if ((result = !strncmp(data, "iis_protocol_selected", 21)))
    {
        output = USIC0_CH0_CCR_MODE::iis_protocol_selected;
    }
    else if ((result = !strncmp(data, "iic_protocol_selected", 21)))
    {
        output = USIC0_CH0_CCR_MODE::iic_protocol_selected;
    }

    return result;
}

}; // namespace XMC4700
