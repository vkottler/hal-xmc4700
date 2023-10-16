/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_INTERRUPT_SRSET_HDCRSET : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< set the status bit */
};
static_assert(sizeof(SCU_INTERRUPT_SRSET_HDCRSET) == 1);

/**
 * Converts SCU_INTERRUPT_SRSET_HDCRSET to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_INTERRUPT_SRSET_HDCRSET instance)
{
    const char *result = "UNKNOWN SCU_INTERRUPT_SRSET_HDCRSET";

    switch (instance)
    {
    case SCU_INTERRUPT_SRSET_HDCRSET::value1:
        result = "value1";
        break;
    case SCU_INTERRUPT_SRSET_HDCRSET::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_INTERRUPT_SRSET_HDCRSET.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_INTERRUPT_SRSET_HDCRSET &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_INTERRUPT_SRSET_HDCRSET::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_INTERRUPT_SRSET_HDCRSET::value2;
    }

    return result;
}

}; // namespace XMC4700
