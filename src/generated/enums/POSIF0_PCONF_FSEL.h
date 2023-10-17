/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_FSEL : uint8_t
{
    hall_sensor_mode_enabled /*!< Hall Sensor Mode enabled */,
    quadrature_decoder_mode_enabled =
        1 /*!< Quadrature Decoder Mode enabled */,
    stand_alone_multi_channel_mode_enabled =
        2 /*!< stand-alone Multi-Channel Mode enabled */,
    quadrature_decoder_stand_alone_multi_channel__cont =
        3 /*!< Quadrature Decoder and stand-alone Multi-Channel Mode enabled */
};
static_assert(sizeof(POSIF0_PCONF_FSEL) == 1);

/**
 * Converts POSIF0_PCONF_FSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_FSEL instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_FSEL";

    switch (instance)
    {
    case POSIF0_PCONF_FSEL::hall_sensor_mode_enabled:
        result = "hall_sensor_mode_enabled";
        break;
    case POSIF0_PCONF_FSEL::quadrature_decoder_mode_enabled:
        result = "quadrature_decoder_mode_enabled";
        break;
    case POSIF0_PCONF_FSEL::stand_alone_multi_channel_mode_enabled:
        result = "stand_alone_multi_channel_mode_enabled";
        break;
    case POSIF0_PCONF_FSEL::quadrature_decoder_stand_alone_multi_channel__cont:
        result = "quadrature_decoder_stand_alone_multi_channel__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_FSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_FSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "hall_sensor_mode_enabled", 24)))
    {
        output = POSIF0_PCONF_FSEL::hall_sensor_mode_enabled;
    }
    else if ((result = !strncmp(data, "quadrature_decoder_mode_enabled", 31)))
    {
        output = POSIF0_PCONF_FSEL::quadrature_decoder_mode_enabled;
    }
    else if ((result = !strncmp(data, "stand_alone_multi_channel_mode_enabled",
                                38)))
    {
        output = POSIF0_PCONF_FSEL::stand_alone_multi_channel_mode_enabled;
    }
    else if ((result = !strncmp(
                  data, "quadrature_decoder_stand_alone_multi_channel__cont",
                  50)))
    {
        output = POSIF0_PCONF_FSEL::
            quadrature_decoder_stand_alone_multi_channel__cont;
    }

    return result;
}

}; // namespace XMC4700
