/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_RESD_VF : uint8_t
{
    value1 /*!< No new result available */,
    value2 = 1 /*!< Bitfield RESULT has been updated with new result value and has not yet been read, or bit FCR has been updated */
};
static_assert(sizeof(VADC_G0_RESD_VF) == 1);

/**
 * Converts VADC_G0_RESD_VF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_RESD_VF instance)
{
    const char *result = "UNKNOWN VADC_G0_RESD_VF";

    switch (instance)
    {
    case VADC_G0_RESD_VF::value1:
        result = "value1";
        break;
    case VADC_G0_RESD_VF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_RESD_VF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_RESD_VF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_RESD_VF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_RESD_VF::value2;
    }

    return result;
}

}; // namespace XMC4700
