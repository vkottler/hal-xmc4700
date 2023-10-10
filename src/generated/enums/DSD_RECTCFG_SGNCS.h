/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_RECTCFG_SGNCS : uint8_t
{
    value1 /*!< Positive values */,
    value2 = 1 /*!< Negative values */
};
static_assert(sizeof(DSD_RECTCFG_SGNCS) == 1);

static constexpr uint16_t DSD_RECTCFG_SGNCS_id = 263;

/**
 * Converts DSD_RECTCFG_SGNCS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_RECTCFG_SGNCS instance)
{
    const char *result = "UNKNOWN DSD_RECTCFG_SGNCS";

    switch (instance)
    {
    case DSD_RECTCFG_SGNCS::value1:
        result = "value1";
        break;
    case DSD_RECTCFG_SGNCS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_RECTCFG_SGNCS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_RECTCFG_SGNCS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_RECTCFG_SGNCS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_RECTCFG_SGNCS::value2;
    }

    return result;
}

}; // namespace XMC4700