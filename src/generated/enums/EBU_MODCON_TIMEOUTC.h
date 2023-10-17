/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class EBU_MODCON_TIMEOUTC : uint8_t
{
    disabled /*!< Time-out is disabled. */,
    generated_after_1_8_clock_cycles =
        1 /*!< Time-out is generated after 1 8 clock cycles. */,
    generated_after_255_8_clock_cycles =
        255 /*!< Time-out is generated after 255 8 clock cycles. */
};
static_assert(sizeof(EBU_MODCON_TIMEOUTC) == 1);

/**
 * Converts EBU_MODCON_TIMEOUTC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(EBU_MODCON_TIMEOUTC instance)
{
    const char *result = "UNKNOWN EBU_MODCON_TIMEOUTC";

    switch (instance)
    {
    case EBU_MODCON_TIMEOUTC::disabled:
        result = "disabled";
        break;
    case EBU_MODCON_TIMEOUTC::generated_after_1_8_clock_cycles:
        result = "generated_after_1_8_clock_cycles";
        break;
    case EBU_MODCON_TIMEOUTC::generated_after_255_8_clock_cycles:
        result = "generated_after_255_8_clock_cycles";
        break;
    }

    return result;
}

/**
 * Converts a C string to EBU_MODCON_TIMEOUTC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, EBU_MODCON_TIMEOUTC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disabled", 8)))
    {
        output = EBU_MODCON_TIMEOUTC::disabled;
    }
    else if ((result = !strncmp(data, "generated_after_1_8_clock_cycles", 32)))
    {
        output = EBU_MODCON_TIMEOUTC::generated_after_1_8_clock_cycles;
    }
    else if ((result =
                  !strncmp(data, "generated_after_255_8_clock_cycles", 34)))
    {
        output = EBU_MODCON_TIMEOUTC::generated_after_255_8_clock_cycles;
    }

    return result;
}

}; // namespace XMC4700
