/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_CLC_EBUDIVACK : uint8_t
{
    efault_after_reset /*!< EBU is running off input clock (default after
                          reset) */
        ,
    ivided_by_2 = 1 /*!< EBU is running off input clock divided by 2 */,
    ivided_by_3 = 2 /*!< EBU is running off input clock divided by 3 */,
    ivided_by_4 = 3 /*!< EBU is running off input clock divided by 4 */
};
static_assert(sizeof(EBU_CLC_EBUDIVACK) == 1);

/**
 * Converts EBU_CLC_EBUDIVACK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_CLC_EBUDIVACK instance)
{
    const char *result = "UNKNOWN EBU_CLC_EBUDIVACK";

    switch (instance)
    {
    case EBU_CLC_EBUDIVACK::efault_after_reset:
        result = "efault_after_reset";
        break;
    case EBU_CLC_EBUDIVACK::ivided_by_2:
        result = "ivided_by_2";
        break;
    case EBU_CLC_EBUDIVACK::ivided_by_3:
        result = "ivided_by_3";
        break;
    case EBU_CLC_EBUDIVACK::ivided_by_4:
        result = "ivided_by_4";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_CLC_EBUDIVACK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_CLC_EBUDIVACK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "efault_after_reset", 18)))
    {
        output = EBU_CLC_EBUDIVACK::efault_after_reset;
    }
    else if ((result = !strncmp(data, "ivided_by_2", 11)))
    {
        output = EBU_CLC_EBUDIVACK::ivided_by_2;
    }
    else if ((result = !strncmp(data, "ivided_by_3", 11)))
    {
        output = EBU_CLC_EBUDIVACK::ivided_by_3;
    }
    else if ((result = !strncmp(data, "ivided_by_4", 11)))
    {
        output = EBU_CLC_EBUDIVACK::ivided_by_4;
    }

    return result;
}

}; // namespace XMC4700
