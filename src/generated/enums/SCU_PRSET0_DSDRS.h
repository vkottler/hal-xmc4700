/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class SCU_PRSET0_DSDRS : uint8_t
{
    value1 /*!< No effect */,
    value2 = 1 /*!< Assert reset */
};
static_assert(sizeof(SCU_PRSET0_DSDRS) == 1);

static constexpr uint16_t SCU_PRSET0_DSDRS_id = 869;

/**
 * Converts SCU_PRSET0_DSDRS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SCU_PRSET0_DSDRS instance)
{
    const char *result = "UNKNOWN SCU_PRSET0_DSDRS";

    switch (instance)
    {
    case SCU_PRSET0_DSDRS::value1:
        result = "value1";
        break;
    case SCU_PRSET0_DSDRS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to SCU_PRSET0_DSDRS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SCU_PRSET0_DSDRS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = SCU_PRSET0_DSDRS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = SCU_PRSET0_DSDRS::value2;
    }

    return result;
}

}; // namespace XMC4700
