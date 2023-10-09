/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_QINR0_EXTR : uint8_t
{
    value1 /*!< A valid queue entry immediately leads to a conversion request.
            */
        ,
    value2 = 1 /*!< A valid queue entry waits for a trigger event to occur
                  before issuing a conversion request. */
};
static_assert(sizeof(VADC_G0_QINR0_EXTR) == 1);

static constexpr uint16_t VADC_G0_QINR0_EXTR_id = 964;

/**
 * Converts VADC_G0_QINR0_EXTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_QINR0_EXTR instance)
{
    const char *result = "UNKNOWN VADC_G0_QINR0_EXTR";

    switch (instance)
    {
    case VADC_G0_QINR0_EXTR::value1:
        result = "value1";
        break;
    case VADC_G0_QINR0_EXTR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_QINR0_EXTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_QINR0_EXTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_QINR0_EXTR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_QINR0_EXTR::value2;
    }

    return result;
}

}; // namespace XMC4700
