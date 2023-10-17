/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_SDRSTAT_SDERR : uint8_t
{
    s_running_successfully /*!< Reads running successfully */,
    _error_condition_has_been_detected =
        1 /*!< Read error condition has been detected */
};
static_assert(sizeof(EBU_SDRSTAT_SDERR) == 1);

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
    case EBU_SDRSTAT_SDERR::s_running_successfully:
        result = "s_running_successfully";
        break;
    case EBU_SDRSTAT_SDERR::_error_condition_has_been_detected:
        result = "_error_condition_has_been_detected";
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

    if ((result = !strncmp(data, "s_running_successfully", 22)))
    {
        output = EBU_SDRSTAT_SDERR::s_running_successfully;
    }
    else if ((result =
                  !strncmp(data, "_error_condition_has_been_detected", 34)))
    {
        output = EBU_SDRSTAT_SDERR::_error_condition_has_been_detected;
    }

    return result;
}

}; // namespace XMC4700
