/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CFSR_INVPC : uint8_t
{
    value1 /*!< no invalid PC load UsageFault */,
    value2 = 1 /*!< the processor has attempted an illegal load of EXC_RETURN
                  to the PC, as a result of an invalid context, or an invalid
                  EXC_RETURN value. */
};
static_assert(sizeof(PPB_CFSR_INVPC) == 1);

static constexpr uint16_t PPB_CFSR_INVPC_id = 791;

/**
 * Converts PPB_CFSR_INVPC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CFSR_INVPC instance)
{
    const char *result = "UNKNOWN PPB_CFSR_INVPC";

    switch (instance)
    {
    case PPB_CFSR_INVPC::value1:
        result = "value1";
        break;
    case PPB_CFSR_INVPC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CFSR_INVPC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CFSR_INVPC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_CFSR_INVPC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_CFSR_INVPC::value2;
    }

    return result;
}

}; // namespace XMC4700
