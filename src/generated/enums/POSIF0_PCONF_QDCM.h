/**
 * \file
 * \brief Generated by ifgen (3.1.4).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF0_PCONF_QDCM : uint8_t
{
    quadrature_mode /*!< Position encoder is in Quadrature Mode */,
    direction_count_mode =
        1 /*!< Position encoder is in Direction Count Mode. */
};
static_assert(sizeof(POSIF0_PCONF_QDCM) == 1);

/**
 * Converts POSIF0_PCONF_QDCM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF0_PCONF_QDCM instance)
{
    const char *result = "UNKNOWN POSIF0_PCONF_QDCM";

    switch (instance)
    {
    case POSIF0_PCONF_QDCM::quadrature_mode:
        result = "quadrature_mode";
        break;
    case POSIF0_PCONF_QDCM::direction_count_mode:
        result = "direction_count_mode";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF0_PCONF_QDCM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF0_PCONF_QDCM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "quadrature_mode", 15)))
    {
        output = POSIF0_PCONF_QDCM::quadrature_mode;
    }
    else if ((result = !strncmp(data, "direction_count_mode", 20)))
    {
        output = POSIF0_PCONF_QDCM::direction_count_mode;
    }

    return result;
}

}; // namespace XMC4700
