/**
 * \file
 * \brief Generated by ifgen (3.0.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class DSD_DICFG_ITRMODE : uint8_t
{
    value1 /*!< No integration trigger, integrator bypassed, INTEN = 0 all the
              time */
        ,
    value2 = 1 /*!< Trigger event upon a falling edge */,
    value3 = 2 /*!< Trigger event upon a rising edge */,
    value4 = 3 /*!< No trigger, integrator active all the time, INTEN = 1 all
                  the time */
};
static_assert(sizeof(DSD_DICFG_ITRMODE) == 1);

static constexpr uint16_t DSD_DICFG_ITRMODE_id = 250;

/**
 * Converts DSD_DICFG_ITRMODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DSD_DICFG_ITRMODE instance)
{
    const char *result = "UNKNOWN DSD_DICFG_ITRMODE";

    switch (instance)
    {
    case DSD_DICFG_ITRMODE::value1:
        result = "value1";
        break;
    case DSD_DICFG_ITRMODE::value2:
        result = "value2";
        break;
    case DSD_DICFG_ITRMODE::value3:
        result = "value3";
        break;
    case DSD_DICFG_ITRMODE::value4:
        result = "value4";
        break;
    }

    return result;
}

/**
 * Converts a C string to DSD_DICFG_ITRMODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DSD_DICFG_ITRMODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "value1", 6)))
    {
        output = DSD_DICFG_ITRMODE::value1;
    }
    else if ((result = !strncmp(data, "value2", 6)))
    {
        output = DSD_DICFG_ITRMODE::value2;
    }
    else if ((result = !strncmp(data, "value3", 6)))
    {
        output = DSD_DICFG_ITRMODE::value3;
    }
    else if ((result = !strncmp(data, "value4", 6)))
    {
        output = DSD_DICFG_ITRMODE::value4;
    }

    return result;
}

}; // namespace XMC4700