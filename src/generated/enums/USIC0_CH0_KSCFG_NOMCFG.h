/**
 * \file
 * \brief Generated by ifgen (3.1.1).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class USIC0_CH0_KSCFG_NOMCFG : uint8_t
{
    value1 /*!< Run mode 0 is selected. */,
    value2 = 1 /*!< Run mode 1 is selected. */,
    value3 = 2 /*!< Stop mode 0 is selected. */,
    value4 = 3 /*!< Stop mode 1 is selected. */
};
static_assert(sizeof(USIC0_CH0_KSCFG_NOMCFG) == 1);

/**
 * Converts USIC0_CH0_KSCFG_NOMCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USIC0_CH0_KSCFG_NOMCFG instance)
{
    const char *result = "UNKNOWN USIC0_CH0_KSCFG_NOMCFG";

    switch (instance)
    {
    case USIC0_CH0_KSCFG_NOMCFG::value1:
        result = "value1";
        break;
    case USIC0_CH0_KSCFG_NOMCFG::value2:
        result = "value2";
        break;
    case USIC0_CH0_KSCFG_NOMCFG::value3:
        result = "value3";
        break;
    case USIC0_CH0_KSCFG_NOMCFG::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to USIC0_CH0_KSCFG_NOMCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USIC0_CH0_KSCFG_NOMCFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = USIC0_CH0_KSCFG_NOMCFG::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = USIC0_CH0_KSCFG_NOMCFG::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = USIC0_CH0_KSCFG_NOMCFG::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = USIC0_CH0_KSCFG_NOMCFG::value4;
    }

    return result;
}

}; // namespace XMC4700
