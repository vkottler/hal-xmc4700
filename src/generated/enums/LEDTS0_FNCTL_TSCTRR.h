/**
 * \file
 * \brief Generated by ifgen (2.6.3).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class LEDTS0_FNCTL_TSCTRR : uint8_t
{
    value1 /*!< Disable TS-counter automatic reset */,
    value2 =
        1 /*!< Enable TS-counter automatic reset to 00H on the first pad turn
             of a new TSIN[x]. Triggered on compare match in time slice. */
};
static_assert(sizeof(LEDTS0_FNCTL_TSCTRR) == 1);

static constexpr uint16_t LEDTS0_FNCTL_TSCTRR_id = 875;

/**
 * Converts LEDTS0_FNCTL_TSCTRR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LEDTS0_FNCTL_TSCTRR instance)
{
    const char *result = "UNKNOWN LEDTS0_FNCTL_TSCTRR";

    switch (instance)
    {
    case LEDTS0_FNCTL_TSCTRR::value1:
        result = "value1";
        break;
    case LEDTS0_FNCTL_TSCTRR::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to LEDTS0_FNCTL_TSCTRR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LEDTS0_FNCTL_TSCTRR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = LEDTS0_FNCTL_TSCTRR::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = LEDTS0_FNCTL_TSCTRR::value2;
    }

    return result;
}

}; // namespace XMC4700
