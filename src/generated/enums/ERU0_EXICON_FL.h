/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU0_EXICON_FL : uint8_t
{
    not_been_detected /*!< The enabled edge event has not been detected */,
    been_detected = 1 /*!< The enabled edge event has been detected */
};
static_assert(sizeof(ERU0_EXICON_FL) == 1);

/**
 * Converts ERU0_EXICON_FL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXICON_FL instance)
{
    const char *result = "UNKNOWN ERU0_EXICON_FL";

    switch (instance)
    {
    case ERU0_EXICON_FL::not_been_detected:
        result = "not_been_detected";
        break;
    case ERU0_EXICON_FL::been_detected:
        result = "been_detected";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXICON_FL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXICON_FL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_been_detected", 17)))
    {
        output = ERU0_EXICON_FL::not_been_detected;
    }
    else if ((result = !strncmp(data, "been_detected", 13)))
    {
        output = ERU0_EXICON_FL::been_detected;
    }

    return result;
}

}; // namespace XMC4700
