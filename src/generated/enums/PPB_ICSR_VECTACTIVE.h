/**
 * \file
 * \brief Generated by ifgen (3.0.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_ICSR_VECTACTIVE : uint16_t
{
    value1 /*!< Thread mode */
};
static_assert(sizeof(PPB_ICSR_VECTACTIVE) == 2);

static constexpr uint16_t PPB_ICSR_VECTACTIVE_id = 2376;

/**
 * Converts PPB_ICSR_VECTACTIVE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_ICSR_VECTACTIVE instance)
{
    const char *result = "UNKNOWN PPB_ICSR_VECTACTIVE";

    switch (instance)
    {
    case PPB_ICSR_VECTACTIVE::value1:
        result = "value1";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_ICSR_VECTACTIVE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_ICSR_VECTACTIVE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = PPB_ICSR_VECTACTIVE::value1;
    }

    return result;
}

}; // namespace XMC4700
