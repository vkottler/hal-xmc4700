/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_EVFLAG_RESEV1 : uint8_t
{
    value1 /*!< No result event */,
    value2 = 1 /*!< A new result has been stored in register RESMx */
};
static_assert(sizeof(DSD_EVFLAG_RESEV1) == 1);

/**
 * Converts DSD_EVFLAG_RESEV1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_EVFLAG_RESEV1 instance)
{
    const char *result = "UNKNOWN DSD_EVFLAG_RESEV1";

    switch (instance)
    {
    case DSD_EVFLAG_RESEV1::value1:
        result = "value1";
        break;
    case DSD_EVFLAG_RESEV1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_EVFLAG_RESEV1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_EVFLAG_RESEV1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_EVFLAG_RESEV1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_EVFLAG_RESEV1::value2;
    }

    return result;
}

}; // namespace XMC4700
