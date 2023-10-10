/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_TRBSCR_CRBERI : uint8_t
{
    value1 /*!< No effect. */,
    value2 = 1 /*!< Clear TRBSR.RBERI. */
};
static_assert(sizeof(USIC_TRBSCR_CRBERI) == 1);

static constexpr uint16_t USIC_TRBSCR_CRBERI_id = 1380;

/**
 * Converts USIC_TRBSCR_CRBERI to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_TRBSCR_CRBERI instance)
{
    const char *result = "UNKNOWN USIC_TRBSCR_CRBERI";

    switch (instance)
    {
    case USIC_TRBSCR_CRBERI::value1:
        result = "value1";
        break;
    case USIC_TRBSCR_CRBERI::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_TRBSCR_CRBERI.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_TRBSCR_CRBERI &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_TRBSCR_CRBERI::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_TRBSCR_CRBERI::value2;
    }

    return result;
}

}; // namespace XMC4700