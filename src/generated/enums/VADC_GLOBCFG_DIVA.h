/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBCFG_DIVA : uint8_t
{
    value1 /*!< fADCI = fADC / 2 */,
    value2 = 1 /*!< fADCI = fADC / 2 */,
    value3 = 2 /*!< fADCI = fADC / 3 */,
    value4 = 31 /*!< fADCI = fADC / 32 */
};
static_assert(sizeof(VADC_GLOBCFG_DIVA) == 1);

static constexpr uint16_t VADC_GLOBCFG_DIVA_id = 3502;

/**
 * Converts VADC_GLOBCFG_DIVA to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBCFG_DIVA instance)
{
    const char *result = "UNKNOWN VADC_GLOBCFG_DIVA";

    switch (instance)
    {
    case VADC_GLOBCFG_DIVA::value1:
        result = "value1";
        break;
    case VADC_GLOBCFG_DIVA::value2:
        result = "value2";
        break;
    case VADC_GLOBCFG_DIVA::value3:
        result = "value3";
        break;
    case VADC_GLOBCFG_DIVA::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBCFG_DIVA.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBCFG_DIVA &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_GLOBCFG_DIVA::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_GLOBCFG_DIVA::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_GLOBCFG_DIVA::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_GLOBCFG_DIVA::value4;
    }

    return result;
}

}; // namespace XMC4700
