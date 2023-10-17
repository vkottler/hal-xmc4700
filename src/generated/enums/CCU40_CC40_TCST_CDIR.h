/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_TCST_CDIR : uint8_t
{
    up /*!< Timer is counting up */,
    down = 1 /*!< Timer is counting down */
};
static_assert(sizeof(CCU40_CC40_TCST_CDIR) == 1);

/**
 * Converts CCU40_CC40_TCST_CDIR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TCST_CDIR instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TCST_CDIR";

    switch (instance)
    {
    case CCU40_CC40_TCST_CDIR::up:
        result = "up";
        break;
    case CCU40_CC40_TCST_CDIR::down:
        result = "down";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TCST_CDIR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TCST_CDIR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "up", 2)))
    {
        output = CCU40_CC40_TCST_CDIR::up;
    }
    else if ((result = !strncmp(data, "down", 4)))
    {
        output = CCU40_CC40_TCST_CDIR::down;
    }

    return result;
}

}; // namespace XMC4700
