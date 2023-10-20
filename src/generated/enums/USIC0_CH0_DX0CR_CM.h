/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_DX0CR_CM : uint8_t
{
    trigger_activation_disabled /*!< The trigger activation is disabled. */,
    rising_edge_activates_dxnt = 1 /*!< A rising edge activates DXnT. */,
    falling_edge_activates_dxnt = 2 /*!< A falling edge activates DXnT. */,
    both_edges_activate_dxnt = 3 /*!< Both edges activate DXnT. */
};
static_assert(sizeof(USIC0_CH0_DX0CR_CM) == 1);

/**
 * Converts USIC0_CH0_DX0CR_CM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_DX0CR_CM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_DX0CR_CM";

    switch (instance)
    {
    case USIC0_CH0_DX0CR_CM::trigger_activation_disabled:
        result = "trigger_activation_disabled";
        break;
    case USIC0_CH0_DX0CR_CM::rising_edge_activates_dxnt:
        result = "rising_edge_activates_dxnt";
        break;
    case USIC0_CH0_DX0CR_CM::falling_edge_activates_dxnt:
        result = "falling_edge_activates_dxnt";
        break;
    case USIC0_CH0_DX0CR_CM::both_edges_activate_dxnt:
        result = "both_edges_activate_dxnt";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_DX0CR_CM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_DX0CR_CM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "trigger_activation_disabled", 27)))
    {
        output = USIC0_CH0_DX0CR_CM::trigger_activation_disabled;
    }
    else if ((result = !strncmp(data, "rising_edge_activates_dxnt", 26)))
    {
        output = USIC0_CH0_DX0CR_CM::rising_edge_activates_dxnt;
    }
    else if ((result = !strncmp(data, "falling_edge_activates_dxnt", 27)))
    {
        output = USIC0_CH0_DX0CR_CM::falling_edge_activates_dxnt;
    }
    else if ((result = !strncmp(data, "both_edges_activate_dxnt", 24)))
    {
        output = USIC0_CH0_DX0CR_CM::both_edges_activate_dxnt;
    }

    return result;
}

}; // namespace XMC4700
