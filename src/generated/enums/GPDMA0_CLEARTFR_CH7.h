/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_CLEARTFR_CH7 : uint8_t
{
    no_effect /*!< no effect */,
    clear_status = 1 /*!< clear status */
};
static_assert(sizeof(GPDMA0_CLEARTFR_CH7) == 1);

/**
 * Converts GPDMA0_CLEARTFR_CH7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_CLEARTFR_CH7 instance)
{
    const char *result = "UNKNOWN GPDMA0_CLEARTFR_CH7";

    switch (instance)
    {
    case GPDMA0_CLEARTFR_CH7::no_effect:
        result = "no_effect";
        break;
    case GPDMA0_CLEARTFR_CH7::clear_status:
        result = "clear_status";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_CLEARTFR_CH7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_CLEARTFR_CH7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_effect", 9)))
    {
        output = GPDMA0_CLEARTFR_CH7::no_effect;
    }
    else if ((result = !strncmp(data, "clear_status", 12)))
    {
        output = GPDMA0_CLEARTFR_CH7::clear_status;
    }

    return result;
}

}; // namespace XMC4700
