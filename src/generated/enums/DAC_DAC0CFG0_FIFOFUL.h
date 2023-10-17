/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DAC_DAC0CFG0_FIFOFUL : uint8_t
{
    not_full /*!< FIFO not full */,
    full = 1 /*!< FIFO full */
};
static_assert(sizeof(DAC_DAC0CFG0_FIFOFUL) == 1);

/**
 * Converts DAC_DAC0CFG0_FIFOFUL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DAC_DAC0CFG0_FIFOFUL instance)
{
    const char *result = "UNKNOWN DAC_DAC0CFG0_FIFOFUL";

    switch (instance)
    {
    case DAC_DAC0CFG0_FIFOFUL::not_full:
        result = "not_full";
        break;
    case DAC_DAC0CFG0_FIFOFUL::full:
        result = "full";
        break;
    }

    return result;
}

/**
 * Converts a C string to DAC_DAC0CFG0_FIFOFUL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DAC_DAC0CFG0_FIFOFUL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_full", 8)))
    {
        output = DAC_DAC0CFG0_FIFOFUL::not_full;
    }
    else if ((result = !strncmp(data, "full", 4)))
    {
        output = DAC_DAC0CFG0_FIFOFUL::full;
    }

    return result;
}

}; // namespace XMC4700
