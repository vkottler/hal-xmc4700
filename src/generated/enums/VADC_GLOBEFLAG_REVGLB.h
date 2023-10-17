/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_GLOBEFLAG_REVGLB : uint8_t
{
    no_result_event /*!< No result event */,
    new_result_was_stored_register_globres =
        1 /*!< New result was stored in register GLOBRES */
};
static_assert(sizeof(VADC_GLOBEFLAG_REVGLB) == 1);

/**
 * Converts VADC_GLOBEFLAG_REVGLB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_GLOBEFLAG_REVGLB instance)
{
    const char *result = "UNKNOWN VADC_GLOBEFLAG_REVGLB";

    switch (instance)
    {
    case VADC_GLOBEFLAG_REVGLB::no_result_event:
        result = "no_result_event";
        break;
    case VADC_GLOBEFLAG_REVGLB::new_result_was_stored_register_globres:
        result = "new_result_was_stored_register_globres";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_GLOBEFLAG_REVGLB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_GLOBEFLAG_REVGLB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_result_event", 15)))
    {
        output = VADC_GLOBEFLAG_REVGLB::no_result_event;
    }
    else if ((result = !strncmp(data, "new_result_was_stored_register_globres",
                                38)))
    {
        output = VADC_GLOBEFLAG_REVGLB::new_result_was_stored_register_globres;
    }

    return result;
}

}; // namespace XMC4700
