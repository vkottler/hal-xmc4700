/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC_FMR_CRDV1 : uint8_t
{
    value1 /*!< No action. */,
    value2 = 1 /*!< Bits RBUF01SR.RDV01 and RBUF01SR.RDV11 are cleared. */
};
static_assert(sizeof(USIC_FMR_CRDV1) == 1);

static constexpr uint16_t USIC_FMR_CRDV1_id = 1333;

/**
 * Converts USIC_FMR_CRDV1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC_FMR_CRDV1 instance)
{
    const char *result = "UNKNOWN USIC_FMR_CRDV1";

    switch (instance)
    {
    case USIC_FMR_CRDV1::value1:
        result = "value1";
        break;
    case USIC_FMR_CRDV1::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC_FMR_CRDV1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC_FMR_CRDV1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC_FMR_CRDV1::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC_FMR_CRDV1::value2;
    }

    return result;
}

}; // namespace XMC4700
