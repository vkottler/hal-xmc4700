/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC0CFG0_RUN : uint8_t
{
    disabled /*!< DAC0 channel disabled */,
    operation = 1 /*!< DAC0 channel in operation */
};
static_assert(sizeof(DAC_DAC0CFG0_RUN) == 1);

/**
 * Converts DAC_DAC0CFG0_RUN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG0_RUN instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG0_RUN";

    switch (instance)
    {
    case DAC_DAC0CFG0_RUN::disabled:
        result = "disabled";
        break;
    case DAC_DAC0CFG0_RUN::operation:
        result = "operation";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG0_RUN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG0_RUN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = DAC_DAC0CFG0_RUN::disabled;
    }
    else if ((result = !strncmp(data, "operation", 9)))
    {
        output = DAC_DAC0CFG0_RUN::operation;
    }

    return result;
}

}; // namespace XMC4700
