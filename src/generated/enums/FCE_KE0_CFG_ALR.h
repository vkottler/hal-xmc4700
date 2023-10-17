/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class FCE_KE0_CFG_ALR : uint8_t
{
    disables_automatic_reload_length_field /*!< Disables automatic reload of
                                              the LENGTH field. */
        ,
    enables_automatic_reload_length_field_at_end__cont =
        1 /*!< Enables automatic reload of the LENGTH field at the end of a
             message. */
};
static_assert(sizeof(FCE_KE0_CFG_ALR) == 1);

/**
 * Converts FCE_KE0_CFG_ALR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FCE_KE0_CFG_ALR instance)
{
    const char *result = "UNKNOWN FCE_KE0_CFG_ALR";

    switch (instance)
    {
    case FCE_KE0_CFG_ALR::disables_automatic_reload_length_field:
        result = "disables_automatic_reload_length_field";
        break;
    case FCE_KE0_CFG_ALR::enables_automatic_reload_length_field_at_end__cont:
        result = "enables_automatic_reload_length_field_at_end__cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to FCE_KE0_CFG_ALR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FCE_KE0_CFG_ALR &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "disables_automatic_reload_length_field", 38)))
    {
        output = FCE_KE0_CFG_ALR::disables_automatic_reload_length_field;
    }
    else if ((result = !strncmp(
                  data, "enables_automatic_reload_length_field_at_end__cont",
                  50)))
    {
        output = FCE_KE0_CFG_ALR::
            enables_automatic_reload_length_field_at_end__cont;
    }

    return result;
}

}; // namespace XMC4700
