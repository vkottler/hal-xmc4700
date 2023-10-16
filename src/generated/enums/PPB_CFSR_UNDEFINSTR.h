/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_UNDEFINSTR : uint8_t
{
    value1 /*!< no undefined instruction UsageFault */,
    value2 = 1 /*!< the processor has attempted to execute an undefined instruction. */
};
static_assert(sizeof(PPB_CFSR_UNDEFINSTR) == 1);

/**
 * Converts PPB_CFSR_UNDEFINSTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_UNDEFINSTR instance)
{
    const char *result = "UNKNOWN PPB_CFSR_UNDEFINSTR";

    switch (instance)
    {
    case PPB_CFSR_UNDEFINSTR::value1:
        result = "value1";
        break;
    case PPB_CFSR_UNDEFINSTR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_UNDEFINSTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_UNDEFINSTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CFSR_UNDEFINSTR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CFSR_UNDEFINSTR::value2;
    }

    return result;
}

}; // namespace XMC4700
