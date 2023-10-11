/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_SDRSTAT_SDERR : uint8_t
{
    value1 /*!< Reads running successfully */,
    value2 = 1 /*!< Read error condition has been detected */
};
static_assert(sizeof(EBU_SDRSTAT_SDERR) == 1);

static constexpr uint16_t EBU_SDRSTAT_SDERR_id = 567;

/**
 * Converts EBU_SDRSTAT_SDERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_SDRSTAT_SDERR instance)
{
    const char *result = "UNKNOWN EBU_SDRSTAT_SDERR";

    switch (instance)
    {
    case EBU_SDRSTAT_SDERR::value1:
        result = "value1";
        break;
    case EBU_SDRSTAT_SDERR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_SDRSTAT_SDERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_SDRSTAT_SDERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = EBU_SDRSTAT_SDERR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = EBU_SDRSTAT_SDERR::value2;
    }

    return result;
}

}; // namespace XMC4700
