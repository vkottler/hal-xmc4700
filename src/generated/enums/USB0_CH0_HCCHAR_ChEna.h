/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_CH0_HCCHAR_ChEna : uint8_t
{
    not_ready_scattergather_mode_disabled_channel_cont /*!< Scatter/Gather mode
                                                          enabled: Indicates
                                                          that the descriptor
                                                          structure is not yet
                                                          ready. Scatter/Gather
                                                          mode disabled:
                                                          Channel disabled */
        ,
    data_buffer_with_data_setup_this_channel_can__cont =
        1 /*!< Scatter/Gather mode enabled: Indicates that the descriptor
             structure and data buffer with data is setup and this channel can
             access the descriptor. Scatter/Gather mode disabled: Channel
             enabled */
};
static_assert(sizeof(USB0_CH0_HCCHAR_ChEna) == 1);

/**
 * Converts USB0_CH0_HCCHAR_ChEna to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_CH0_HCCHAR_ChEna instance)
{
    const char *result = "UNKNOWN USB0_CH0_HCCHAR_ChEna";

    switch (instance)
    {
    case USB0_CH0_HCCHAR_ChEna::
        not_ready_scattergather_mode_disabled_channel_cont:
        result = "not_ready_scattergather_mode_disabled_channel_cont";
        break;
    case USB0_CH0_HCCHAR_ChEna::
        data_buffer_with_data_setup_this_channel_can__cont:
        result = "data_buffer_with_data_setup_this_channel_can__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_CH0_HCCHAR_ChEna.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_CH0_HCCHAR_ChEna &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "not_ready_scattergather_mode_disabled_channel_cont", 50)))
    {
        output = USB0_CH0_HCCHAR_ChEna::
            not_ready_scattergather_mode_disabled_channel_cont;
    }
    else if ((result = !strncmp(
                  data, "data_buffer_with_data_setup_this_channel_can__cont",
                  50)))
    {
        output = USB0_CH0_HCCHAR_ChEna::
            data_buffer_with_data_setup_this_channel_can__cont;
    }

    return result;
}

}; // namespace XMC4700
