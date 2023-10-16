/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_NVIC_ICPR1_CLRPEND : uint16_t
{
    value3 /*!< interrupt is not pending */,
    value4 = 1 /*!< interrupt is pending. */
};
static_assert(sizeof(PPB_NVIC_ICPR1_CLRPEND) == 2);

/**
 * Converts PPB_NVIC_ICPR1_CLRPEND to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_NVIC_ICPR1_CLRPEND instance)
{
    const char *result = "UNKNOWN PPB_NVIC_ICPR1_CLRPEND";

    switch (instance)
    {
    case PPB_NVIC_ICPR1_CLRPEND::value3:
        result = "value3";
        break;
    case PPB_NVIC_ICPR1_CLRPEND::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_NVIC_ICPR1_CLRPEND.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_NVIC_ICPR1_CLRPEND &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value3", 6)))
    {
        output = PPB_NVIC_ICPR1_CLRPEND::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = PPB_NVIC_ICPR1_CLRPEND::value4;
    }

    return result;
}

}; // namespace XMC4700
