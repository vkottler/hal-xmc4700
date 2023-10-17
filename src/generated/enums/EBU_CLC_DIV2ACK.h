/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_CLC_DIV2ACK : uint8_t
{
    using_standard_clocking_mode_clock_input_sele_cont /*!< EBU is using
                                                          standard clocking
                                                          mode. clock input
                                                          selected by SYNC
                                                          bitfield (default
                                                          after reset). */
        ,
    running_off_ahb_bus_clock_divided_by_2 =
        1 /*!< EBU is running off AHB bus clock divided by 2. */
};
static_assert(sizeof(EBU_CLC_DIV2ACK) == 1);

/**
 * Converts EBU_CLC_DIV2ACK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_CLC_DIV2ACK instance)
{
    const char *result = "UNKNOWN EBU_CLC_DIV2ACK";

    switch (instance)
    {
    case EBU_CLC_DIV2ACK::using_standard_clocking_mode_clock_input_sele_cont:
        result = "using_standard_clocking_mode_clock_input_sele_cont";
        break;
    case EBU_CLC_DIV2ACK::running_off_ahb_bus_clock_divided_by_2:
        result = "running_off_ahb_bus_clock_divided_by_2";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_CLC_DIV2ACK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_CLC_DIV2ACK &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "using_standard_clocking_mode_clock_input_sele_cont", 50)))
    {
        output = EBU_CLC_DIV2ACK::
            using_standard_clocking_mode_clock_input_sele_cont;
    }
    else if ((result = !strncmp(data, "running_off_ahb_bus_clock_divided_by_2",
                                38)))
    {
        output = EBU_CLC_DIV2ACK::running_off_ahb_bus_clock_divided_by_2;
    }

    return result;
}

}; // namespace XMC4700
