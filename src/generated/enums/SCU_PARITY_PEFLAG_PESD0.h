/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PARITY_PEFLAG_PESD0 : uint8_t
{
    value1 /*!< No parity error detected */,
    value2 = 1 /*!< Parity error detected */
};
static_assert(sizeof(SCU_PARITY_PEFLAG_PESD0) == 1);

/**
 * Converts SCU_PARITY_PEFLAG_PESD0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PARITY_PEFLAG_PESD0 instance)
{
    const char *result = "UNKNOWN SCU_PARITY_PEFLAG_PESD0";

    switch (instance)
    {
    case SCU_PARITY_PEFLAG_PESD0::value1:
        result = "value1";
        break;
    case SCU_PARITY_PEFLAG_PESD0::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PARITY_PEFLAG_PESD0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PARITY_PEFLAG_PESD0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PARITY_PEFLAG_PESD0::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PARITY_PEFLAG_PESD0::value2;
    }

    return result;
}

}; // namespace XMC4700
