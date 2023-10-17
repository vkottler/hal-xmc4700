/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_DX1CR_DCEN : uint8_t
{
    dependent_insw_selection /*!< The receive shift clock is dependent on INSW
                                selection. */
        ,
    connected_selected_data_input_line_this_setti_cont =
        1 /*!< The receive shift clock is connected to the selected data input
             line. This setting is used if delay compensation is required in
             SSC and IIS protocols, else DCEN should always be 0. */
};
static_assert(sizeof(USIC0_CH0_DX1CR_DCEN) == 1);

/**
 * Converts USIC0_CH0_DX1CR_DCEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_DX1CR_DCEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_DX1CR_DCEN";

    switch (instance)
    {
    case USIC0_CH0_DX1CR_DCEN::dependent_insw_selection:
        result = "dependent_insw_selection";
        break;
    case USIC0_CH0_DX1CR_DCEN::
        connected_selected_data_input_line_this_setti_cont:
        result = "connected_selected_data_input_line_this_setti_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_DX1CR_DCEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_DX1CR_DCEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "dependent_insw_selection", 24)))
    {
        output = USIC0_CH0_DX1CR_DCEN::dependent_insw_selection;
    }
    else if ((result = !strncmp(
                  data, "connected_selected_data_input_line_this_setti_cont",
                  50)))
    {
        output = USIC0_CH0_DX1CR_DCEN::
            connected_selected_data_input_line_this_setti_cont;
    }

    return result;
}

}; // namespace XMC4700
