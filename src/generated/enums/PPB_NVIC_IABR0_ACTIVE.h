/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_NVIC_IABR0_ACTIVE : uint16_t
{
    value1 /*!< interrupt not active */,
    value2 = 1 /*!< interrupt active */
};
static_assert(sizeof(PPB_NVIC_IABR0_ACTIVE) == 2);

/**
 * Converts PPB_NVIC_IABR0_ACTIVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_NVIC_IABR0_ACTIVE instance)
{
    const char *result = "UNKNOWN PPB_NVIC_IABR0_ACTIVE";

    switch (instance)
    {
    case PPB_NVIC_IABR0_ACTIVE::value1:
        result = "value1";
        break;
    case PPB_NVIC_IABR0_ACTIVE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_NVIC_IABR0_ACTIVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_NVIC_IABR0_ACTIVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_NVIC_IABR0_ACTIVE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_NVIC_IABR0_ACTIVE::value2;
    }

    return result;
}

}; // namespace XMC4700
