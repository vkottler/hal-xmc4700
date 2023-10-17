/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_MODCON_EXTLOCK : uint8_t
{
    not_locked_after_ebu_gains_ownership /*!< External bus is not locked after
                                            the EBU gains ownership */
        ,
    locked_after_ebu_gains_ownership =
        1 /*!< External bus is locked after the EBU gains ownership */
};
static_assert(sizeof(EBU_MODCON_EXTLOCK) == 1);

/**
 * Converts EBU_MODCON_EXTLOCK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_MODCON_EXTLOCK instance)
{
    const char *result = "UNKNOWN EBU_MODCON_EXTLOCK";

    switch (instance)
    {
    case EBU_MODCON_EXTLOCK::not_locked_after_ebu_gains_ownership:
        result = "not_locked_after_ebu_gains_ownership";
        break;
    case EBU_MODCON_EXTLOCK::locked_after_ebu_gains_ownership:
        result = "locked_after_ebu_gains_ownership";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_MODCON_EXTLOCK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_MODCON_EXTLOCK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "not_locked_after_ebu_gains_ownership", 36)))
    {
        output = EBU_MODCON_EXTLOCK::not_locked_after_ebu_gains_ownership;
    }
    else if ((result = !strncmp(data, "locked_after_ebu_gains_ownership", 32)))
    {
        output = EBU_MODCON_EXTLOCK::locked_after_ebu_gains_ownership;
    }

    return result;
}

}; // namespace XMC4700
