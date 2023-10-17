/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USB0_CH0_HCCHAR_EPDir : uint8_t
{
    out /*!< OUT */,
    in = 1 /*!< IN */
};
static_assert(sizeof(USB0_CH0_HCCHAR_EPDir) == 1);

/**
 * Converts USB0_CH0_HCCHAR_EPDir to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB0_CH0_HCCHAR_EPDir instance)
{
    const char *result = "UNKNOWN USB0_CH0_HCCHAR_EPDir";

    switch (instance)
    {
    case USB0_CH0_HCCHAR_EPDir::out:
        result = "out";
        break;
    case USB0_CH0_HCCHAR_EPDir::in:
        result = "in";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB0_CH0_HCCHAR_EPDir.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB0_CH0_HCCHAR_EPDir &output)
{
    bool result = false;

    if ((result = !strncmp(data, "out", 3)))
    {
        output = USB0_CH0_HCCHAR_EPDir::out;
    }
    else if ((result = !strncmp(data, "in", 2)))
    {
        output = USB0_CH0_HCCHAR_EPDir::in;
    }

    return result;
}

}; // namespace XMC4700
