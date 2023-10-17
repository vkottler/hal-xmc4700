/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class VADC_G0_SEFLAG_SEV1 : uint8_t
{
    no_source_event /*!< No source event */,
    source_event_has_occurred = 1 /*!< A source event has occurred */
};
static_assert(sizeof(VADC_G0_SEFLAG_SEV1) == 1);

/**
 * Converts VADC_G0_SEFLAG_SEV1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(VADC_G0_SEFLAG_SEV1 instance)
{
    const char *result = "UNKNOWN VADC_G0_SEFLAG_SEV1";

    switch (instance)
    {
    case VADC_G0_SEFLAG_SEV1::no_source_event:
        result = "no_source_event";
        break;
    case VADC_G0_SEFLAG_SEV1::source_event_has_occurred:
        result = "source_event_has_occurred";
        break;
    }

    return result;
}

/**
 * Converts a C string to VADC_G0_SEFLAG_SEV1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, VADC_G0_SEFLAG_SEV1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_source_event", 15)))
    {
        output = VADC_G0_SEFLAG_SEV1::no_source_event;
    }
    else if ((result = !strncmp(data, "source_event_has_occurred", 25)))
    {
        output = VADC_G0_SEFLAG_SEV1::source_event_has_occurred;
    }

    return result;
}

}; // namespace XMC4700
