/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_PCR_SSCMode_TIWEN : uint8_t
{
    value1 /*!< No delay between data words of the same frame. */,
    value2 = 1 /*!< The inter-word delay Tiw is enabled and introduced between
                  data words of the same frame. */
};
static_assert(sizeof(USIC_PCR_SSCMode_TIWEN) == 1);

static constexpr uint16_t USIC_PCR_SSCMode_TIWEN_id = 1193;

/**
 * Converts USIC_PCR_SSCMode_TIWEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_PCR_SSCMode_TIWEN instance)
{
    const char *result = "UNKNOWN USIC_PCR_SSCMode_TIWEN";

    switch (instance)
    {
    case USIC_PCR_SSCMode_TIWEN::value1:
        result = "value1";
        break;
    case USIC_PCR_SSCMode_TIWEN::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_PCR_SSCMode_TIWEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_PCR_SSCMode_TIWEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_PCR_SSCMode_TIWEN::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_PCR_SSCMode_TIWEN::value2;
    }

    return result;
}

}; // namespace XMC4700
