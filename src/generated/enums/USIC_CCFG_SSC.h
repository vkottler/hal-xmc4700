/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_CCFG_SSC : uint8_t
{
    value1 /*!< The SSC protocol is not available. */,
    value2 = 1 /*!< The SSC protocol is available. */
};
static_assert(sizeof(USIC_CCFG_SSC) == 1);

static constexpr uint16_t USIC_CCFG_SSC_id = 1092;

/**
 * Converts USIC_CCFG_SSC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_CCFG_SSC instance)
{
    const char *result = "UNKNOWN USIC_CCFG_SSC";

    switch (instance)
    {
    case USIC_CCFG_SSC::value1:
        result = "value1";
        break;
    case USIC_CCFG_SSC::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_CCFG_SSC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_CCFG_SSC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_CCFG_SSC::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_CCFG_SSC::value2;
    }

    return result;
}

}; // namespace XMC4700
