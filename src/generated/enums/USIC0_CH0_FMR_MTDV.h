/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_FMR_MTDV : uint8_t
{
    no_action /*!< No action. */,
    bit_tdv_set_te_unchanged = 1 /*!< Bit TDV is set, TE is unchanged. */,
    bits_tdv_te_cleared = 2 /*!< Bits TDV and TE are cleared. */
};
static_assert(sizeof(USIC0_CH0_FMR_MTDV) == 1);

/**
 * Converts USIC0_CH0_FMR_MTDV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_FMR_MTDV instance)
{
    const char *result = "UNKNOWN USIC0_CH0_FMR_MTDV";

    switch (instance)
    {
    case USIC0_CH0_FMR_MTDV::no_action:
        result = "no_action";
        break;
    case USIC0_CH0_FMR_MTDV::bit_tdv_set_te_unchanged:
        result = "bit_tdv_set_te_unchanged";
        break;
    case USIC0_CH0_FMR_MTDV::bits_tdv_te_cleared:
        result = "bits_tdv_te_cleared";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_FMR_MTDV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_FMR_MTDV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = USIC0_CH0_FMR_MTDV::no_action;
    }
    else if ((result = !strncmp(data, "bit_tdv_set_te_unchanged", 24)))
    {
        output = USIC0_CH0_FMR_MTDV::bit_tdv_set_te_unchanged;
    }
    else if ((result = !strncmp(data, "bits_tdv_te_cleared", 19)))
    {
        output = USIC0_CH0_FMR_MTDV::bits_tdv_te_cleared;
    }

    return result;
}

}; // namespace XMC4700
