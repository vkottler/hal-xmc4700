/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_IMPRECISERR : uint8_t
{
    value1 /*!< no imprecise data bus error */,
    value2 = 1 /*!< a data bus error has occurred, but the return address in the stack frame is not related to the instruction that caused the error. */
};
static_assert(sizeof(PPB_CFSR_IMPRECISERR) == 1);

/**
 * Converts PPB_CFSR_IMPRECISERR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_IMPRECISERR instance)
{
    const char *result = "UNKNOWN PPB_CFSR_IMPRECISERR";

    switch (instance)
    {
    case PPB_CFSR_IMPRECISERR::value1:
        result = "value1";
        break;
    case PPB_CFSR_IMPRECISERR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_IMPRECISERR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_IMPRECISERR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CFSR_IMPRECISERR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CFSR_IMPRECISERR::value2;
    }

    return result;
}

}; // namespace XMC4700
