/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_EMT : uint8_t
{
    clearing_cc8ystx_bits /*!< External Modulation functionality is clearing
                             the CC8ySTx bits. */
        ,
    gating_outputs =
        1 /*!< External Modulation functionality is gating the outputs. */
};
static_assert(sizeof(CCU80_CC80_TC_EMT) == 1);

/**
 * Converts CCU80_CC80_TC_EMT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_EMT instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_EMT";

    switch (instance)
    {
    case CCU80_CC80_TC_EMT::clearing_cc8ystx_bits:
        result = "clearing_cc8ystx_bits";
        break;
    case CCU80_CC80_TC_EMT::gating_outputs:
        result = "gating_outputs";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_EMT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_EMT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "clearing_cc8ystx_bits", 21)))
    {
        output = CCU80_CC80_TC_EMT::clearing_cc8ystx_bits;
    }
    else if ((result = !strncmp(data, "gating_outputs", 14)))
    {
        output = CCU80_CC80_TC_EMT::gating_outputs;
    }

    return result;
}

}; // namespace XMC4700
