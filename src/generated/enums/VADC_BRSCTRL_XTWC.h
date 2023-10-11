/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_BRSCTRL_XTWC : uint8_t
{
    value1 /*!< No write access to trigger configuration */,
    value2 = 1 /*!< Bitfields XTMODE and XTSEL can be written */
};
static_assert(sizeof(VADC_BRSCTRL_XTWC) == 1);

static constexpr uint16_t VADC_BRSCTRL_XTWC_id = 3533;

/**
 * Converts VADC_BRSCTRL_XTWC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_BRSCTRL_XTWC instance)
{
    const char *result = "UNKNOWN VADC_BRSCTRL_XTWC";

    switch (instance)
    {
    case VADC_BRSCTRL_XTWC::value1:
        result = "value1";
        break;
    case VADC_BRSCTRL_XTWC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_BRSCTRL_XTWC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_BRSCTRL_XTWC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_BRSCTRL_XTWC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_BRSCTRL_XTWC::value2;
    }

    return result;
}

}; // namespace XMC4700
