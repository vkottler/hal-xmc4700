/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_C0V_FFL : uint8_t
{
    no_new_value_was_captured_into_specific_captu_cont /*!< No new value was
                                                          captured into the
                                                          specific capture
                                                          register */
        ,
    new_value_was_captured_into_specific_register =
        1 /*!< A new value was captured into the specific register */
};
static_assert(sizeof(CCU80_CC80_C0V_FFL) == 1);

/**
 * Converts CCU80_CC80_C0V_FFL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_C0V_FFL instance)
{
    const char *result = "UNKNOWN CCU80_CC80_C0V_FFL";

    switch (instance)
    {
    case CCU80_CC80_C0V_FFL::
        no_new_value_was_captured_into_specific_captu_cont:
        result = "no_new_value_was_captured_into_specific_captu_cont";
        break;
    case CCU80_CC80_C0V_FFL::new_value_was_captured_into_specific_register:
        result = "new_value_was_captured_into_specific_register";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_C0V_FFL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_C0V_FFL &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "no_new_value_was_captured_into_specific_captu_cont", 50)))
    {
        output = CCU80_CC80_C0V_FFL::
            no_new_value_was_captured_into_specific_captu_cont;
    }
    else if ((result = !strncmp(
                  data, "new_value_was_captured_into_specific_register", 45)))
    {
        output =
            CCU80_CC80_C0V_FFL::new_value_was_captured_into_specific_register;
    }

    return result;
}

}; // namespace XMC4700
