/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_GLOBRC_CH3RUN : uint8_t
{
    value1 /*!< Stop channel x */,
    value2 = 1 /*!< Demodulator channel x is enabled and runs */
};
static_assert(sizeof(DSD_GLOBRC_CH3RUN) == 1);

/**
 * Converts DSD_GLOBRC_CH3RUN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_GLOBRC_CH3RUN instance)
{
    const char *result = "UNKNOWN DSD_GLOBRC_CH3RUN";

    switch (instance)
    {
    case DSD_GLOBRC_CH3RUN::value1:
        result = "value1";
        break;
    case DSD_GLOBRC_CH3RUN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_GLOBRC_CH3RUN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_GLOBRC_CH3RUN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_GLOBRC_CH3RUN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_GLOBRC_CH3RUN::value2;
    }

    return result;
}

}; // namespace XMC4700
