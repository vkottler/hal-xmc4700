/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_GCTRL_PCIS : uint8_t
{
    module_clock /*!< Module clock */,
    ccu8xeclka = 1 /*!< CCU8x.ECLKA */,
    ccu8xeclkb = 2 /*!< CCU8x.ECLKB */,
    ccu8xeclkc = 3 /*!< CCU8x.ECLKC */
};
static_assert(sizeof(CCU80_GCTRL_PCIS) == 1);

/**
 * Converts CCU80_GCTRL_PCIS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_GCTRL_PCIS instance)
{
    const char *result = "UNKNOWN CCU80_GCTRL_PCIS";

    switch (instance)
    {
    case CCU80_GCTRL_PCIS::module_clock:
        result = "module_clock";
        break;
    case CCU80_GCTRL_PCIS::ccu8xeclka:
        result = "ccu8xeclka";
        break;
    case CCU80_GCTRL_PCIS::ccu8xeclkb:
        result = "ccu8xeclkb";
        break;
    case CCU80_GCTRL_PCIS::ccu8xeclkc:
        result = "ccu8xeclkc";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_GCTRL_PCIS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_GCTRL_PCIS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "module_clock", 12)))
    {
        output = CCU80_GCTRL_PCIS::module_clock;
    }
    else if ((result = !strncmp(data, "ccu8xeclka", 10)))
    {
        output = CCU80_GCTRL_PCIS::ccu8xeclka;
    }
    else if ((result = !strncmp(data, "ccu8xeclkb", 10)))
    {
        output = CCU80_GCTRL_PCIS::ccu8xeclkb;
    }
    else if ((result = !strncmp(data, "ccu8xeclkc", 10)))
    {
        output = CCU80_GCTRL_PCIS::ccu8xeclkc;
    }

    return result;
}

}; // namespace XMC4700
