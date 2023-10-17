/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class GPDMA0_MASKTFR_CH7 : uint8_t
{
    masked /*!< masked */,
    unmasked = 1 /*!< unmasked */
};
static_assert(sizeof(GPDMA0_MASKTFR_CH7) == 1);

/**
 * Converts GPDMA0_MASKTFR_CH7 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPDMA0_MASKTFR_CH7 instance)
{
    const char *result = "UNKNOWN GPDMA0_MASKTFR_CH7";

    switch (instance)
    {
    case GPDMA0_MASKTFR_CH7::masked:
        result = "masked";
        break;
    case GPDMA0_MASKTFR_CH7::unmasked:
        result = "unmasked";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPDMA0_MASKTFR_CH7.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPDMA0_MASKTFR_CH7 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "masked", 6)))
    {
        output = GPDMA0_MASKTFR_CH7::masked;
    }
    else if ((result = !strncmp(data, "unmasked", 8)))
    {
        output = GPDMA0_MASKTFR_CH7::unmasked;
    }

    return result;
}

}; // namespace XMC4700
