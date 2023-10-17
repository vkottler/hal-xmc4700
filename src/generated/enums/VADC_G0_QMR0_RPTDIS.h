/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_QMR0_RPTDIS : uint8_t
{
    repeated /*!< A cancelled conversion is repeated */,
    discarded = 1 /*!< A cancelled conversion is discarded */
};
static_assert(sizeof(VADC_G0_QMR0_RPTDIS) == 1);

/**
 * Converts VADC_G0_QMR0_RPTDIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QMR0_RPTDIS instance)
{
    const char *result = "UNKNOWN VADC_G0_QMR0_RPTDIS";

    switch (instance)
    {
    case VADC_G0_QMR0_RPTDIS::repeated:
        result = "repeated";
        break;
    case VADC_G0_QMR0_RPTDIS::discarded:
        result = "discarded";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QMR0_RPTDIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QMR0_RPTDIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "repeated", 8)))
    {
        output = VADC_G0_QMR0_RPTDIS::repeated;
    }
    else if ((result = !strncmp(data, "discarded", 9)))
    {
        output = VADC_G0_QMR0_RPTDIS::discarded;
    }

    return result;
}

}; // namespace XMC4700
