/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_SCTR_TRM : uint8_t
{
    value1 /*!< The shift control signal is considered as inactive and data frame transfers are not possible. */,
    value2 = 1 /*!< The shift control signal is considered active if it is at 1-level. This is the setting to be programmed to allow data transfers. */,
    value3 = 2 /*!< The shift control signal is considered active if it is at 0-level. It is recommended to avoid this setting and to use the inversion in the DX2 stage in case of a low-active signal. */,
    value4 = 3 /*!< The shift control signal is considered active without referring to the actual signal level. Data frame transfer is possible after each edge of the signal. */
};
static_assert(sizeof(USIC0_CH0_SCTR_TRM) == 1);

static constexpr uint16_t USIC0_CH0_SCTR_TRM_id = 3262;

/**
 * Converts USIC0_CH0_SCTR_TRM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_SCTR_TRM instance)
{
    const char *result = "UNKNOWN USIC0_CH0_SCTR_TRM";

    switch (instance)
    {
    case USIC0_CH0_SCTR_TRM::value1:
        result = "value1";
        break;
    case USIC0_CH0_SCTR_TRM::value2:
        result = "value2";
        break;
    case USIC0_CH0_SCTR_TRM::value3:
        result = "value3";
        break;
    case USIC0_CH0_SCTR_TRM::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_SCTR_TRM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_SCTR_TRM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_SCTR_TRM::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_SCTR_TRM::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_SCTR_TRM::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_SCTR_TRM::value4;
    }

    return result;
}

}; // namespace XMC4700
