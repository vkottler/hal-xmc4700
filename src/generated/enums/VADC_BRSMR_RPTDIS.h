/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_BRSMR_RPTDIS : uint8_t
{
    value1 /*!< A cancelled conversion is repeated */,
    value2 = 1 /*!< A cancelled conversion is discarded */
};
static_assert(sizeof(VADC_BRSMR_RPTDIS) == 1);

/**
 * Converts VADC_BRSMR_RPTDIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BRSMR_RPTDIS instance)
{
    const char *result = "UNKNOWN VADC_BRSMR_RPTDIS";

    switch (instance)
    {
    case VADC_BRSMR_RPTDIS::value1:
        result = "value1";
        break;
    case VADC_BRSMR_RPTDIS::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BRSMR_RPTDIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BRSMR_RPTDIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_BRSMR_RPTDIS::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_BRSMR_RPTDIS::value2;
    }

    return result;
}

}; // namespace XMC4700
