/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_KSCFG_NOMCFG : uint8_t
{
    run_mode_0_selected /*!< Run mode 0 is selected. */,
    run_mode_1_selected = 1 /*!< Run mode 1 is selected. */,
    stop_mode_0_selected = 2 /*!< Stop mode 0 is selected. */,
    stop_mode_1_selected = 3 /*!< Stop mode 1 is selected. */
};
static_assert(sizeof(USIC0_CH0_KSCFG_NOMCFG) == 1);

/**
 * Converts USIC0_CH0_KSCFG_NOMCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_KSCFG_NOMCFG instance)
{
    const char *result = "UNKNOWN USIC0_CH0_KSCFG_NOMCFG";

    switch (instance)
    {
    case USIC0_CH0_KSCFG_NOMCFG::run_mode_0_selected:
        result = "run_mode_0_selected";
        break;
    case USIC0_CH0_KSCFG_NOMCFG::run_mode_1_selected:
        result = "run_mode_1_selected";
        break;
    case USIC0_CH0_KSCFG_NOMCFG::stop_mode_0_selected:
        result = "stop_mode_0_selected";
        break;
    case USIC0_CH0_KSCFG_NOMCFG::stop_mode_1_selected:
        result = "stop_mode_1_selected";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_KSCFG_NOMCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_KSCFG_NOMCFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "run_mode_0_selected", 19)))
    {
        output = USIC0_CH0_KSCFG_NOMCFG::run_mode_0_selected;
    }
    else if ((result = !strncmp(data, "run_mode_1_selected", 19)))
    {
        output = USIC0_CH0_KSCFG_NOMCFG::run_mode_1_selected;
    }
    else if ((result = !strncmp(data, "stop_mode_0_selected", 20)))
    {
        output = USIC0_CH0_KSCFG_NOMCFG::stop_mode_0_selected;
    }
    else if ((result = !strncmp(data, "stop_mode_1_selected", 20)))
    {
        output = USIC0_CH0_KSCFG_NOMCFG::stop_mode_1_selected;
    }

    return result;
}

}; // namespace XMC4700
