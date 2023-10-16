/**
 * \file
 * \brief Generated by ifgen (3.1.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_KSCFG_MODEN : uint8_t
{
    value1 /*!< The module is switched off immediately (without respecting a stop condition). It does not react on mode control actions and the module clock is switched off. The module does not react on read accesses and ignores write accesses (except to KSCFG). */,
    value2 = 1 /*!< The module is switched on and can operate. After writing 1 to MODEN, it is recommended to read register KSCFG to avoid pipeline effects in the control block before accessing other Service Request Processing registers. */
};
static_assert(sizeof(USIC0_CH0_KSCFG_MODEN) == 1);

/**
 * Converts USIC0_CH0_KSCFG_MODEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_KSCFG_MODEN instance)
{
    const char *result = "UNKNOWN USIC0_CH0_KSCFG_MODEN";

    switch (instance)
    {
    case USIC0_CH0_KSCFG_MODEN::value1:
        result = "value1";
        break;
    case USIC0_CH0_KSCFG_MODEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_KSCFG_MODEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_KSCFG_MODEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_KSCFG_MODEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_KSCFG_MODEN::value2;
    }

    return result;
}

}; // namespace XMC4700