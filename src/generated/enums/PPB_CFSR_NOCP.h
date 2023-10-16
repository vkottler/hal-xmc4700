/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_NOCP : uint8_t
{
    value1 /*!< no UsageFault caused by attempting to access a coprocessor */,
    value2 = 1 /*!< the processor has attempted to access a coprocessor. */
};
static_assert(sizeof(PPB_CFSR_NOCP) == 1);

/**
 * Converts PPB_CFSR_NOCP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_NOCP instance)
{
    const char *result = "UNKNOWN PPB_CFSR_NOCP";

    switch (instance)
    {
    case PPB_CFSR_NOCP::value1:
        result = "value1";
        break;
    case PPB_CFSR_NOCP::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_NOCP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_NOCP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CFSR_NOCP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CFSR_NOCP::value2;
    }

    return result;
}

}; // namespace XMC4700
