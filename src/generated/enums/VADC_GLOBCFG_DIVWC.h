/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBCFG_DIVWC : uint8_t
{
    value1 /*!< No write access to divider parameters */,
    value2 = 1 /*!< Bitfields DIVA, DCMSB, DIVD can be written */
};
static_assert(sizeof(VADC_GLOBCFG_DIVWC) == 1);

static constexpr uint16_t VADC_GLOBCFG_DIVWC_id = 755;

/**
 * Converts VADC_GLOBCFG_DIVWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBCFG_DIVWC instance)
{
    const char *result = "UNKNOWN VADC_GLOBCFG_DIVWC";

    switch (instance)
    {
    case VADC_GLOBCFG_DIVWC::value1:
        result = "value1";
        break;
    case VADC_GLOBCFG_DIVWC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBCFG_DIVWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBCFG_DIVWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBCFG_DIVWC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBCFG_DIVWC::value2;
    }

    return result;
}

}; // namespace XMC4700
