/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CAN_MO_MOAR_IDE : uint8_t
{
    standard_frames_with_11_bit_identifier /*!< Message object n handles
                                              standard frames with 11-bit
                                              identifier. */
        ,
    extended_frames_with_29_bit_identifier =
        1 /*!< Message object n handles extended frames with 29-bit identifier.
           */
};
static_assert(sizeof(CAN_MO_MOAR_IDE) == 1);

/**
 * Converts CAN_MO_MOAR_IDE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CAN_MO_MOAR_IDE instance)
{
    const char *result = "UNKNOWN CAN_MO_MOAR_IDE";

    switch (instance)
    {
    case CAN_MO_MOAR_IDE::standard_frames_with_11_bit_identifier:
        result = "standard_frames_with_11_bit_identifier";
        break;
    case CAN_MO_MOAR_IDE::extended_frames_with_29_bit_identifier:
        result = "extended_frames_with_29_bit_identifier";
        break;
    }

    return result;
}

/**
 * Converts a C string to CAN_MO_MOAR_IDE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CAN_MO_MOAR_IDE &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "standard_frames_with_11_bit_identifier", 38)))
    {
        output = CAN_MO_MOAR_IDE::standard_frames_with_11_bit_identifier;
    }
    else if ((result = !strncmp(data, "extended_frames_with_29_bit_identifier",
                                38)))
    {
        output = CAN_MO_MOAR_IDE::extended_frames_with_29_bit_identifier;
    }

    return result;
}

}; // namespace XMC4700
