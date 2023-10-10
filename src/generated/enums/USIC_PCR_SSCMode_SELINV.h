/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_PCR_SSCMode_SELINV : uint8_t
{
    value1 /*!< The SELO outputs have the same polarity as the MSLS signal
              (active high). */
        ,
    value2 = 1 /*!< The SELO outputs have the inverted polarity to the MSLS
                  signal (active low). */
};
static_assert(sizeof(USIC_PCR_SSCMode_SELINV) == 1);

static constexpr uint16_t USIC_PCR_SSCMode_SELINV_id = 1200;

/**
 * Converts USIC_PCR_SSCMode_SELINV to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_PCR_SSCMode_SELINV instance)
{
    const char *result = "UNKNOWN USIC_PCR_SSCMode_SELINV";

    switch (instance)
    {
    case USIC_PCR_SSCMode_SELINV::value1:
        result = "value1";
        break;
    case USIC_PCR_SSCMode_SELINV::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_PCR_SSCMode_SELINV.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_PCR_SSCMode_SELINV &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_PCR_SSCMode_SELINV::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_PCR_SSCMode_SELINV::value2;
    }

    return result;
}

}; // namespace XMC4700