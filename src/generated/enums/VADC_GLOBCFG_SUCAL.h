/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBCFG_SUCAL : uint8_t
{
    no_action /*!< No action */,
    initiate_start_up_calibration_phase_indicatio_cont =
        1 /*!< Initiate the start-up calibration phase (indication in bit
             GxARBCFG.CAL) */
};
static_assert(sizeof(VADC_GLOBCFG_SUCAL) == 1);

/**
 * Converts VADC_GLOBCFG_SUCAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBCFG_SUCAL instance)
{
    const char *result = "UNKNOWN VADC_GLOBCFG_SUCAL";

    switch (instance)
    {
    case VADC_GLOBCFG_SUCAL::no_action:
        result = "no_action";
        break;
    case VADC_GLOBCFG_SUCAL::
        initiate_start_up_calibration_phase_indicatio_cont:
        result = "initiate_start_up_calibration_phase_indicatio_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBCFG_SUCAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBCFG_SUCAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = VADC_GLOBCFG_SUCAL::no_action;
    }
    else if ((result = !strncmp(
                  data, "initiate_start_up_calibration_phase_indicatio_cont",
                  50)))
    {
        output = VADC_GLOBCFG_SUCAL::
            initiate_start_up_calibration_phase_indicatio_cont;
    }

    return result;
}

}; // namespace XMC4700
