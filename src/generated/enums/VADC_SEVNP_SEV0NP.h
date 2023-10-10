/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_SEVNP_SEV0NP : uint8_t
{
    value1 /*!< Select service request line 0 of group x */,
    value2 = 3 /*!< Select service request line 3 of group x */,
    value3 = 4 /*!< Select shared service request line 0 */,
    value4 = 7 /*!< Select shared service request line 3 */
};
static_assert(sizeof(VADC_SEVNP_SEV0NP) == 1);

static constexpr uint16_t VADC_SEVNP_SEV0NP_id = 1572;

/**
 * Converts VADC_SEVNP_SEV0NP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_SEVNP_SEV0NP instance)
{
    const char *result = "UNKNOWN VADC_SEVNP_SEV0NP";

    switch (instance)
    {
    case VADC_SEVNP_SEV0NP::value1:
        result = "value1";
        break;
    case VADC_SEVNP_SEV0NP::value2:
        result = "value2";
        break;
    case VADC_SEVNP_SEV0NP::value3:
        result = "value3";
        break;
    case VADC_SEVNP_SEV0NP::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_SEVNP_SEV0NP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_SEVNP_SEV0NP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_SEVNP_SEV0NP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_SEVNP_SEV0NP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_SEVNP_SEV0NP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_SEVNP_SEV0NP::value4;
    }

    return result;
}

}; // namespace XMC4700
