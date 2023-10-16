/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBTF_MDWC : uint8_t
{
    value1 /*!< No write access to parameters */,
    value2 = 1 /*!< Bitfield PDD can be written */
};
static_assert(sizeof(VADC_GLOBTF_MDWC) == 1);

/**
 * Converts VADC_GLOBTF_MDWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBTF_MDWC instance)
{
    const char *result = "UNKNOWN VADC_GLOBTF_MDWC";

    switch (instance)
    {
    case VADC_GLOBTF_MDWC::value1:
        result = "value1";
        break;
    case VADC_GLOBTF_MDWC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBTF_MDWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBTF_MDWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBTF_MDWC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBTF_MDWC::value2;
    }

    return result;
}

}; // namespace XMC4700
