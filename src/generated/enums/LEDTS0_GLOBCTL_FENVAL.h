/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_GLOBCTL_FENVAL : uint8_t
{
    value1 /*!< Disable */,
    value2 = 1 /*!< Enable */
};
static_assert(sizeof(LEDTS0_GLOBCTL_FENVAL) == 1);

static constexpr uint16_t LEDTS0_GLOBCTL_FENVAL_id = 1011;

/**
 * Converts LEDTS0_GLOBCTL_FENVAL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_GLOBCTL_FENVAL instance)
{
    const char *result = "UNKNOWN LEDTS0_GLOBCTL_FENVAL";

    switch (instance)
    {
    case LEDTS0_GLOBCTL_FENVAL::value1:
        result = "value1";
        break;
    case LEDTS0_GLOBCTL_FENVAL::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_GLOBCTL_FENVAL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_GLOBCTL_FENVAL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_GLOBCTL_FENVAL::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_GLOBCTL_FENVAL::value2;
    }

    return result;
}

}; // namespace XMC4700
