/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_SCTR_HPCDIR : uint8_t
{
    pins_with_hardware_pin_control_enabled_select_cont /*!< The pin(s) with
                                                          hardware pin control
                                                          enabled are selected
                                                          to be in input mode.
                                                        */
        ,
    _ = 1 /*!< The pin(s) with hardware pin control enabled are selected to be
             in output mode. */
};
static_assert(sizeof(USIC0_CH0_SCTR_HPCDIR) == 1);

/**
 * Converts USIC0_CH0_SCTR_HPCDIR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_SCTR_HPCDIR instance)
{
    const char *result = "UNKNOWN USIC0_CH0_SCTR_HPCDIR";

    switch (instance)
    {
    case USIC0_CH0_SCTR_HPCDIR::
        pins_with_hardware_pin_control_enabled_select_cont:
        result = "pins_with_hardware_pin_control_enabled_select_cont";
        break;
    case USIC0_CH0_SCTR_HPCDIR::_:
        result = "_";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_SCTR_HPCDIR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_SCTR_HPCDIR &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "pins_with_hardware_pin_control_enabled_select_cont", 50)))
    {
        output = USIC0_CH0_SCTR_HPCDIR::
            pins_with_hardware_pin_control_enabled_select_cont;
    }
    else if ((result = !strncmp(data, "_", 1)))
    {
        output = USIC0_CH0_SCTR_HPCDIR::_;
    }

    return result;
}

}; // namespace XMC4700
