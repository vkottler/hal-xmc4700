/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_GLOBCFG_MCSEL : uint8_t
{
    value1 /*!< Internal clock off, no source selected */,
    value2 = 1 /*!< fDSD */
};
static_assert(sizeof(DSD_GLOBCFG_MCSEL) == 1);

/**
 * Converts DSD_GLOBCFG_MCSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_GLOBCFG_MCSEL instance)
{
    const char *result = "UNKNOWN DSD_GLOBCFG_MCSEL";

    switch (instance)
    {
    case DSD_GLOBCFG_MCSEL::value1:
        result = "value1";
        break;
    case DSD_GLOBCFG_MCSEL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_GLOBCFG_MCSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_GLOBCFG_MCSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_GLOBCFG_MCSEL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_GLOBCFG_MCSEL::value2;
    }

    return result;
}

}; // namespace XMC4700
