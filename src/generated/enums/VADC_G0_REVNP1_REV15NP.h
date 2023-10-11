/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_REVNP1_REV15NP : uint8_t
{
    value1 /*!< Select service request line 0 of group x */,
    value2 = 3 /*!< Select service request line 3 of group x */,
    value3 = 4 /*!< Select shared service request line 0 */,
    value4 = 7 /*!< Select shared service request line 3 */
};
static_assert(sizeof(VADC_G0_REVNP1_REV15NP) == 1);

static constexpr uint16_t VADC_G0_REVNP1_REV15NP_id = 3733;

/**
 * Converts VADC_G0_REVNP1_REV15NP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_REVNP1_REV15NP instance)
{
    const char *result = "UNKNOWN VADC_G0_REVNP1_REV15NP";

    switch (instance)
    {
    case VADC_G0_REVNP1_REV15NP::value1:
        result = "value1";
        break;
    case VADC_G0_REVNP1_REV15NP::value2:
        result = "value2";
        break;
    case VADC_G0_REVNP1_REV15NP::value3:
        result = "value3";
        break;
    case VADC_G0_REVNP1_REV15NP::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_REVNP1_REV15NP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_REVNP1_REV15NP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_G0_REVNP1_REV15NP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_G0_REVNP1_REV15NP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_G0_REVNP1_REV15NP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_G0_REVNP1_REV15NP::value4;
    }

    return result;
}

}; // namespace XMC4700
