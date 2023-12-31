/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_NVIC_ISPR0_SETPEND : uint16_t
{
    not_pending /*!< interrupt is not pending */,
    pending = 1 /*!< interrupt is pending. */
};
static_assert(sizeof(PPB_NVIC_ISPR0_SETPEND) == 2);

/**
 * Converts PPB_NVIC_ISPR0_SETPEND to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_NVIC_ISPR0_SETPEND instance)
{
    const char *result = "UNKNOWN PPB_NVIC_ISPR0_SETPEND";

    switch (instance)
    {
    case PPB_NVIC_ISPR0_SETPEND::not_pending:
        result = "not_pending";
        break;
    case PPB_NVIC_ISPR0_SETPEND::pending:
        result = "pending";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_NVIC_ISPR0_SETPEND.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_NVIC_ISPR0_SETPEND &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_pending", 11)))
    {
        output = PPB_NVIC_ISPR0_SETPEND::not_pending;
    }
    else if ((result = !strncmp(data, "pending", 7)))
    {
        output = PPB_NVIC_ISPR0_SETPEND::pending;
    }

    return result;
}

}; // namespace XMC4700
