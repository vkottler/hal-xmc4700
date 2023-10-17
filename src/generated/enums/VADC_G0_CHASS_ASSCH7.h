/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_CHASS_ASSCH7 : uint8_t
{
    can_be_background_channel_converted_cont /*!< Channel y can be a background
                                                channel converted with lowest
                                                priority */
        ,
    priority_channel_within_group_x =
        1 /*!< Channel y is a priority channel within group x */
};
static_assert(sizeof(VADC_G0_CHASS_ASSCH7) == 1);

/**
 * Converts VADC_G0_CHASS_ASSCH7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_CHASS_ASSCH7 instance)
{
    const char *result = "UNKNOWN VADC_G0_CHASS_ASSCH7";

    switch (instance)
    {
    case VADC_G0_CHASS_ASSCH7::can_be_background_channel_converted_cont:
        result = "can_be_background_channel_converted_cont";
        break;
    case VADC_G0_CHASS_ASSCH7::priority_channel_within_group_x:
        result = "priority_channel_within_group_x";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_CHASS_ASSCH7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_CHASS_ASSCH7 &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "can_be_background_channel_converted_cont", 40)))
    {
        output =
            VADC_G0_CHASS_ASSCH7::can_be_background_channel_converted_cont;
    }
    else if ((result = !strncmp(data, "priority_channel_within_group_x", 31)))
    {
        output = VADC_G0_CHASS_ASSCH7::priority_channel_within_group_x;
    }

    return result;
}

}; // namespace XMC4700
