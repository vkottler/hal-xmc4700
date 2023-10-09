/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBRESD_VF : uint8_t
{
    value1 /*!< Read access: No new valid data available Write access: No
              effect */
        ,
    value2 = 1 /*!< Read access: Bitfield RESULT contains valid data and has
                  not yet been read, or bit FCR has been updated Write access:
                  Clear this valid flag and the data reduction counter
                  (overrides a hardware set action) */
};
static_assert(sizeof(VADC_GLOBRESD_VF) == 1);

static constexpr uint16_t VADC_GLOBRESD_VF_id = 806;

/**
 * Converts VADC_GLOBRESD_VF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBRESD_VF instance)
{
    const char *result = "UNKNOWN VADC_GLOBRESD_VF";

    switch (instance)
    {
    case VADC_GLOBRESD_VF::value1:
        result = "value1";
        break;
    case VADC_GLOBRESD_VF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBRESD_VF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBRESD_VF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBRESD_VF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBRESD_VF::value2;
    }

    return result;
}

}; // namespace XMC4700
