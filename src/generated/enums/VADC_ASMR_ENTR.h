/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_ASMR_ENTR : uint8_t
{
    value1 /*!< External trigger disabled */,
    value2 = 1 /*!< The selected edge at the selected trigger input signal
                  REQTR generates the load event */
};
static_assert(sizeof(VADC_ASMR_ENTR) == 1);

static constexpr uint16_t VADC_ASMR_ENTR_id = 1477;

/**
 * Converts VADC_ASMR_ENTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_ASMR_ENTR instance)
{
    const char *result = "UNKNOWN VADC_ASMR_ENTR";

    switch (instance)
    {
    case VADC_ASMR_ENTR::value1:
        result = "value1";
        break;
    case VADC_ASMR_ENTR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_ASMR_ENTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_ASMR_ENTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_ASMR_ENTR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_ASMR_ENTR::value2;
    }

    return result;
}

}; // namespace XMC4700
