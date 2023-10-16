/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU0_EXICON_SS : uint8_t
{
    value1 /*!< Input A without additional combination */,
    value2 = 1 /*!< Input B without additional combination */,
    value3 = 2 /*!< Input A OR input B */,
    value4 = 3 /*!< Input A AND input B */
};
static_assert(sizeof(ERU0_EXICON_SS) == 1);

/**
 * Converts ERU0_EXICON_SS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXICON_SS instance)
{
    const char *result = "UNKNOWN ERU0_EXICON_SS";

    switch (instance)
    {
    case ERU0_EXICON_SS::value1:
        result = "value1";
        break;
    case ERU0_EXICON_SS::value2:
        result = "value2";
        break;
    case ERU0_EXICON_SS::value3:
        result = "value3";
        break;
    case ERU0_EXICON_SS::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXICON_SS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXICON_SS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = ERU0_EXICON_SS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = ERU0_EXICON_SS::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = ERU0_EXICON_SS::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = ERU0_EXICON_SS::value4;
    }

    return result;
}

}; // namespace XMC4700
