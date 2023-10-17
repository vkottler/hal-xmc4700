/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_ARBCFG_ANONS : uint8_t
{
    analog_converter_off /*!< Analog converter off */,
    normal_operation_permanently = 3 /*!< Normal operation (permanently on) */
};
static_assert(sizeof(VADC_G0_ARBCFG_ANONS) == 1);

/**
 * Converts VADC_G0_ARBCFG_ANONS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_ARBCFG_ANONS instance)
{
    const char *result = "UNKNOWN VADC_G0_ARBCFG_ANONS";

    switch (instance)
    {
    case VADC_G0_ARBCFG_ANONS::analog_converter_off:
        result = "analog_converter_off";
        break;
    case VADC_G0_ARBCFG_ANONS::normal_operation_permanently:
        result = "normal_operation_permanently";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_ARBCFG_ANONS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_ARBCFG_ANONS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "analog_converter_off", 20)))
    {
        output = VADC_G0_ARBCFG_ANONS::analog_converter_off;
    }
    else if ((result = !strncmp(data, "normal_operation_permanently", 28)))
    {
        output = VADC_G0_ARBCFG_ANONS::normal_operation_permanently;
    }

    return result;
}

}; // namespace XMC4700
