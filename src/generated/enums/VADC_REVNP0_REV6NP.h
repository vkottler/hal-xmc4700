/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_REVNP0_REV6NP : uint8_t
{
    value1 /*!< Select service request line 0 of group x */,
    value2 = 3 /*!< Select service request line 3 of group x */,
    value3 = 4 /*!< Select shared service request line 0 */,
    value4 = 7 /*!< Select shared service request line 3 */
};
static_assert(sizeof(VADC_REVNP0_REV6NP) == 1);

static constexpr uint16_t VADC_REVNP0_REV6NP_id = 1556;

/**
 * Converts VADC_REVNP0_REV6NP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_REVNP0_REV6NP instance)
{
    const char *result = "UNKNOWN VADC_REVNP0_REV6NP";

    switch (instance)
    {
    case VADC_REVNP0_REV6NP::value1:
        result = "value1";
        break;
    case VADC_REVNP0_REV6NP::value2:
        result = "value2";
        break;
    case VADC_REVNP0_REV6NP::value3:
        result = "value3";
        break;
    case VADC_REVNP0_REV6NP::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_REVNP0_REV6NP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_REVNP0_REV6NP &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = VADC_REVNP0_REV6NP::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = VADC_REVNP0_REV6NP::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = VADC_REVNP0_REV6NP::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = VADC_REVNP0_REV6NP::value4;
    }

    return result;
}

}; // namespace XMC4700
