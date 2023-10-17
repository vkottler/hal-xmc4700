/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_CGCFG_SGNCG : uint8_t
{
    positive_values /*!< Positive values */,
    negative_values = 1 /*!< Negative values */
};
static_assert(sizeof(DSD_CGCFG_SGNCG) == 1);

/**
 * Converts DSD_CGCFG_SGNCG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_CGCFG_SGNCG instance)
{
    const char *result = "UNKNOWN DSD_CGCFG_SGNCG";

    switch (instance)
    {
    case DSD_CGCFG_SGNCG::positive_values:
        result = "positive_values";
        break;
    case DSD_CGCFG_SGNCG::negative_values:
        result = "negative_values";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_CGCFG_SGNCG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_CGCFG_SGNCG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "positive_values", 15)))
    {
        output = DSD_CGCFG_SGNCG::positive_values;
    }
    else if ((result = !strncmp(data, "negative_values", 15)))
    {
        output = DSD_CGCFG_SGNCG::negative_values;
    }

    return result;
}

}; // namespace XMC4700
