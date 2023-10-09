/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_ICSR_PENDSTSET : uint8_t
{
    value1 /*!< no effect */,
    value2 = 1 /*!< changes SysTick exception state to pending. */
};
static_assert(sizeof(PPB_ICSR_PENDSTSET) == 1);

static constexpr uint16_t PPB_ICSR_PENDSTSET_id = 2557;

/**
 * Converts PPB_ICSR_PENDSTSET to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_ICSR_PENDSTSET instance)
{
    const char *result = "UNKNOWN PPB_ICSR_PENDSTSET";

    switch (instance)
    {
    case PPB_ICSR_PENDSTSET::value1:
        result = "value1";
        break;
    case PPB_ICSR_PENDSTSET::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_ICSR_PENDSTSET.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_ICSR_PENDSTSET &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_ICSR_PENDSTSET::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = PPB_ICSR_PENDSTSET::value2;
    }

    return result;
}

}; // namespace XMC4700
