/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC0CFG0_MODE : uint8_t
{
    disableswitch_off_dac /*!< disable/switch-off DAC */,
    single_value_mode = 1 /*!< Single Value Mode */,
    data_mode = 2 /*!< Data Mode */,
    patgen_mode = 3 /*!< Patgen Mode */,
    noise_mode = 4 /*!< Noise Mode */,
    ramp_mode = 5 /*!< Ramp Mode */,
    na = 6 /*!< na */,
    na_ = 7 /*!< na */
};
static_assert(sizeof(DAC_DAC0CFG0_MODE) == 1);

/**
 * Converts DAC_DAC0CFG0_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG0_MODE instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG0_MODE";

    switch (instance)
    {
    case DAC_DAC0CFG0_MODE::disableswitch_off_dac:
        result = "disableswitch_off_dac";
        break;
    case DAC_DAC0CFG0_MODE::single_value_mode:
        result = "single_value_mode";
        break;
    case DAC_DAC0CFG0_MODE::data_mode:
        result = "data_mode";
        break;
    case DAC_DAC0CFG0_MODE::patgen_mode:
        result = "patgen_mode";
        break;
    case DAC_DAC0CFG0_MODE::noise_mode:
        result = "noise_mode";
        break;
    case DAC_DAC0CFG0_MODE::ramp_mode:
        result = "ramp_mode";
        break;
    case DAC_DAC0CFG0_MODE::na:
        result = "na";
        break;
    case DAC_DAC0CFG0_MODE::na_:
        result = "na_";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG0_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG0_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disableswitch_off_dac", 21)))
    {
        output = DAC_DAC0CFG0_MODE::disableswitch_off_dac;
    }
    else if ((result = !strncmp(data, "single_value_mode", 17)))
    {
        output = DAC_DAC0CFG0_MODE::single_value_mode;
    }
    else if ((result = !strncmp(data, "data_mode", 9)))
    {
        output = DAC_DAC0CFG0_MODE::data_mode;
    }
    else if ((result = !strncmp(data, "patgen_mode", 11)))
    {
        output = DAC_DAC0CFG0_MODE::patgen_mode;
    }
    else if ((result = !strncmp(data, "noise_mode", 10)))
    {
        output = DAC_DAC0CFG0_MODE::noise_mode;
    }
    else if ((result = !strncmp(data, "ramp_mode", 9)))
    {
        output = DAC_DAC0CFG0_MODE::ramp_mode;
    }
    else if ((result = !strncmp(data, "na", 2)))
    {
        output = DAC_DAC0CFG0_MODE::na;
    }
    else if ((result = !strncmp(data, "na_", 3)))
    {
        output = DAC_DAC0CFG0_MODE::na_;
    }

    return result;
}

}; // namespace XMC4700
