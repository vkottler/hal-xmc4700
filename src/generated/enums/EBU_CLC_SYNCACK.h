/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_CLC_SYNCACK : uint8_t
{
    asynchronous_ahb_bus_clock_using_separate_clo_cont /*!< the EBU is
                                                          asynchronous to the
                                                          AHB bus clock and is
                                                          using a separate
                                                          clock source */
        ,
    synchronous_ahb_bus_clock_default_after_reset =
        1 /*!< EBU is synchronous to the AHB bus clock (default after reset) */
};
static_assert(sizeof(EBU_CLC_SYNCACK) == 1);

/**
 * Converts EBU_CLC_SYNCACK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_CLC_SYNCACK instance)
{
    const char *result = "UNKNOWN EBU_CLC_SYNCACK";

    switch (instance)
    {
    case EBU_CLC_SYNCACK::asynchronous_ahb_bus_clock_using_separate_clo_cont:
        result = "asynchronous_ahb_bus_clock_using_separate_clo_cont";
        break;
    case EBU_CLC_SYNCACK::synchronous_ahb_bus_clock_default_after_reset:
        result = "synchronous_ahb_bus_clock_default_after_reset";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_CLC_SYNCACK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_CLC_SYNCACK &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "asynchronous_ahb_bus_clock_using_separate_clo_cont", 50)))
    {
        output = EBU_CLC_SYNCACK::
            asynchronous_ahb_bus_clock_using_separate_clo_cont;
    }
    else if ((result = !strncmp(
                  data, "synchronous_ahb_bus_clock_default_after_reset", 45)))
    {
        output =
            EBU_CLC_SYNCACK::synchronous_ahb_bus_clock_default_after_reset;
    }

    return result;
}

}; // namespace XMC4700
