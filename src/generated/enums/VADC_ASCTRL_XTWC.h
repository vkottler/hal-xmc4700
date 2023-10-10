/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_ASCTRL_XTWC : uint8_t
{
    value1 /*!< No write access to trigger configuration */,
    value2 = 1 /*!< Bitfields XTMODE and XTSEL can be written */
};
static_assert(sizeof(VADC_ASCTRL_XTWC) == 1);

static constexpr uint16_t VADC_ASCTRL_XTWC_id = 1467;

/**
 * Converts VADC_ASCTRL_XTWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_ASCTRL_XTWC instance)
{
    const char *result = "UNKNOWN VADC_ASCTRL_XTWC";

    switch (instance)
    {
    case VADC_ASCTRL_XTWC::value1:
        result = "value1";
        break;
    case VADC_ASCTRL_XTWC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_ASCTRL_XTWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_ASCTRL_XTWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_ASCTRL_XTWC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_ASCTRL_XTWC::value2;
    }

    return result;
}

}; // namespace XMC4700
