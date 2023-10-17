/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_TC_CCS : uint8_t
{
    specific_capture_register_done_w_cont /*!< The capture into a specific
                                             capture register is done with the
                                             rules linked with the full flags,
                                             described at . */
        ,
    capture_registers_always_done_re_cont =
        1 /*!< The capture into the capture registers is always done regardless
             of the full flag status (even if the register has not been read
             back). */
};
static_assert(sizeof(CCU80_CC80_TC_CCS) == 1);

/**
 * Converts CCU80_CC80_TC_CCS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_TC_CCS instance)
{
    const char *result = "UNKNOWN CCU80_CC80_TC_CCS";

    switch (instance)
    {
    case CCU80_CC80_TC_CCS::specific_capture_register_done_w_cont:
        result = "specific_capture_register_done_w_cont";
        break;
    case CCU80_CC80_TC_CCS::capture_registers_always_done_re_cont:
        result = "capture_registers_always_done_re_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_TC_CCS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_TC_CCS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "specific_capture_register_done_w_cont", 37)))
    {
        output = CCU80_CC80_TC_CCS::specific_capture_register_done_w_cont;
    }
    else if ((result =
                  !strncmp(data, "capture_registers_always_done_re_cont", 37)))
    {
        output = CCU80_CC80_TC_CCS::capture_registers_always_done_re_cont;
    }

    return result;
}

}; // namespace XMC4700
