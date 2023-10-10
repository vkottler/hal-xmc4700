/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS_FNCTL_TSOEXT : uint8_t
{
    value1 /*!< Extend by 1 ledts_clk */,
    value2 = 1 /*!< Extend by 4 ledts_clk */,
    value3 = 2 /*!< Extend by 8 ledts_clk */,
    value4 = 3 /*!< Extend by 16 ledts_clk */
};
static_assert(sizeof(LEDTS_FNCTL_TSOEXT) == 1);

static constexpr uint16_t LEDTS_FNCTL_TSOEXT_id = 587;

/**
 * Converts LEDTS_FNCTL_TSOEXT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS_FNCTL_TSOEXT instance)
{
    const char *result = "UNKNOWN LEDTS_FNCTL_TSOEXT";

    switch (instance)
    {
    case LEDTS_FNCTL_TSOEXT::value1:
        result = "value1";
        break;
    case LEDTS_FNCTL_TSOEXT::value2:
        result = "value2";
        break;
    case LEDTS_FNCTL_TSOEXT::value3:
        result = "value3";
        break;
    case LEDTS_FNCTL_TSOEXT::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS_FNCTL_TSOEXT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS_FNCTL_TSOEXT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS_FNCTL_TSOEXT::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS_FNCTL_TSOEXT::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = LEDTS_FNCTL_TSOEXT::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = LEDTS_FNCTL_TSOEXT::value4;
    }

    return result;
}

}; // namespace XMC4700