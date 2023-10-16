/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_RESET_RSTSET_LCKEN : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Enable reset when Lockup gets asserted */
};
static_assert(sizeof(SCU_RESET_RSTSET_LCKEN) == 1);

/**
 * Converts SCU_RESET_RSTSET_LCKEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_RESET_RSTSET_LCKEN instance)
{
    const char *result = "UNKNOWN SCU_RESET_RSTSET_LCKEN";

    switch (instance)
    {
    case SCU_RESET_RSTSET_LCKEN::value1:
        result = "value1";
        break;
    case SCU_RESET_RSTSET_LCKEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_RESET_RSTSET_LCKEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_RESET_RSTSET_LCKEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_RESET_RSTSET_LCKEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_RESET_RSTSET_LCKEN::value2;
    }

    return result;
}

}; // namespace XMC4700
