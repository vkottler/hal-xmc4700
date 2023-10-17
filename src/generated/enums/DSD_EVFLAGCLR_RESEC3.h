/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_EVFLAGCLR_RESEC3 : uint8_t
{
    no_action /*!< No action */,
    clear_bit_resevx = 1 /*!< Clear bit RESEVx */
};
static_assert(sizeof(DSD_EVFLAGCLR_RESEC3) == 1);

/**
 * Converts DSD_EVFLAGCLR_RESEC3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_EVFLAGCLR_RESEC3 instance)
{
    const char *result = "UNKNOWN DSD_EVFLAGCLR_RESEC3";

    switch (instance)
    {
    case DSD_EVFLAGCLR_RESEC3::no_action:
        result = "no_action";
        break;
    case DSD_EVFLAGCLR_RESEC3::clear_bit_resevx:
        result = "clear_bit_resevx";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_EVFLAGCLR_RESEC3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_EVFLAGCLR_RESEC3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = DSD_EVFLAGCLR_RESEC3::no_action;
    }
    else if ((result = !strncmp(data, "clear_bit_resevx", 16)))
    {
        output = DSD_EVFLAGCLR_RESEC3::clear_bit_resevx;
    }

    return result;
}

}; // namespace XMC4700
