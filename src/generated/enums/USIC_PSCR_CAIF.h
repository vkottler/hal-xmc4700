/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_PSCR_CAIF : uint8_t
{
    value1 /*!< No action */,
    value2 = 1 /*!< Flag PSR.AIF is cleared. */
};
static_assert(sizeof(USIC_PSCR_CAIF) == 1);

static constexpr uint16_t USIC_PSCR_CAIF_id = 1300;

/**
 * Converts USIC_PSCR_CAIF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_PSCR_CAIF instance)
{
    const char *result = "UNKNOWN USIC_PSCR_CAIF";

    switch (instance)
    {
    case USIC_PSCR_CAIF::value1:
        result = "value1";
        break;
    case USIC_PSCR_CAIF::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_PSCR_CAIF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_PSCR_CAIF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_PSCR_CAIF::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_PSCR_CAIF::value2;
    }

    return result;
}

}; // namespace XMC4700
