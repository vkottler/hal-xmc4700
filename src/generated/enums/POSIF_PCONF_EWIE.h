/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class POSIF_PCONF_EWIE : uint8_t
{
    value1 /*!< External wrong hall event emulation signal, POSIFx.EWHE[D...A],
              is disabled */
        ,
    value2 = 1 /*!< External wrong hall event emulation signal,
                  POSIFx.EWHE[D...A], is enabled. */
};
static_assert(sizeof(POSIF_PCONF_EWIE) == 1);

static constexpr uint16_t POSIF_PCONF_EWIE_id = 692;

/**
 * Converts POSIF_PCONF_EWIE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(POSIF_PCONF_EWIE instance)
{
    const char *result = "UNKNOWN POSIF_PCONF_EWIE";

    switch (instance)
    {
    case POSIF_PCONF_EWIE::value1:
        result = "value1";
        break;
    case POSIF_PCONF_EWIE::value2:
        result = "value2";
        break;
    }

    return result;
}

/**
 * Converts a C string to POSIF_PCONF_EWIE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, POSIF_PCONF_EWIE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = POSIF_PCONF_EWIE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = POSIF_PCONF_EWIE::value2;
    }

    return result;
}

}; // namespace XMC4700
