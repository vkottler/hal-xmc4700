/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_PSR_IICMode_SLSEL : uint8_t
{
    not_selected_slave /*!< The device is not selected as slave. */,
    selected_slave = 1 /*!< The device is selected as slave. */
};
static_assert(sizeof(USIC0_CH0_PSR_IICMode_SLSEL) == 1);

/**
 * Converts USIC0_CH0_PSR_IICMode_SLSEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_PSR_IICMode_SLSEL instance)
{
    const char *result = "UNKNOWN USIC0_CH0_PSR_IICMode_SLSEL";

    switch (instance)
    {
    case USIC0_CH0_PSR_IICMode_SLSEL::not_selected_slave:
        result = "not_selected_slave";
        break;
    case USIC0_CH0_PSR_IICMode_SLSEL::selected_slave:
        result = "selected_slave";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_PSR_IICMode_SLSEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_PSR_IICMode_SLSEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_selected_slave", 18)))
    {
        output = USIC0_CH0_PSR_IICMode_SLSEL::not_selected_slave;
    }
    else if ((result = !strncmp(data, "selected_slave", 14)))
    {
        output = USIC0_CH0_PSR_IICMode_SLSEL::selected_slave;
    }

    return result;
}

}; // namespace XMC4700
