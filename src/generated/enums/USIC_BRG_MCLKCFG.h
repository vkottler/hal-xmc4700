/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_BRG_MCLKCFG : uint8_t
{
    value1 /*!< The passive level is 0. */,
    value2 = 1 /*!< The passive level is 1. */
};
static_assert(sizeof(USIC_BRG_MCLKCFG) == 1);

static constexpr uint16_t USIC_BRG_MCLKCFG_id = 1100;

/**
 * Converts USIC_BRG_MCLKCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_BRG_MCLKCFG instance)
{
    const char *result = "UNKNOWN USIC_BRG_MCLKCFG";

    switch (instance)
    {
    case USIC_BRG_MCLKCFG::value1:
        result = "value1";
        break;
    case USIC_BRG_MCLKCFG::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_BRG_MCLKCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_BRG_MCLKCFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_BRG_MCLKCFG::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_BRG_MCLKCFG::value2;
    }

    return result;
}

}; // namespace XMC4700
