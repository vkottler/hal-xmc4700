/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_PRSTAT1_PPORTSRS : uint8_t
{
    value1 /*!< Reset de-asserted */,
    value2 = 1 /*!< Reset asserted */
};
static_assert(sizeof(SCU_RESET_PRSTAT1_PPORTSRS) == 1);

/**
 * Converts SCU_RESET_PRSTAT1_PPORTSRS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_PRSTAT1_PPORTSRS instance)
{
    const char *result = "UNKNOWN SCU_RESET_PRSTAT1_PPORTSRS";

    switch (instance)
    {
    case SCU_RESET_PRSTAT1_PPORTSRS::value1:
        result = "value1";
        break;
    case SCU_RESET_PRSTAT1_PPORTSRS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_PRSTAT1_PPORTSRS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_PRSTAT1_PPORTSRS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_RESET_PRSTAT1_PPORTSRS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_RESET_PRSTAT1_PPORTSRS::value2;
    }

    return result;
}

}; // namespace XMC4700
