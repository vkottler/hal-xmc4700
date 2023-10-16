/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DLR_LNEN_LN3 : uint8_t
{
    value1 /*!< Disables the line */,
    value2 = 1 /*!< Enables the line and resets a pending request */
};
static_assert(sizeof(DLR_LNEN_LN3) == 1);

/**
 * Converts DLR_LNEN_LN3 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DLR_LNEN_LN3 instance)
{
    const char *result = "UNKNOWN DLR_LNEN_LN3";

    switch (instance)
    {
    case DLR_LNEN_LN3::value1:
        result = "value1";
        break;
    case DLR_LNEN_LN3::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DLR_LNEN_LN3.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DLR_LNEN_LN3 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DLR_LNEN_LN3::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DLR_LNEN_LN3::value2;
    }

    return result;
}

}; // namespace XMC4700
