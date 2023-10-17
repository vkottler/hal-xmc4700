/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_TC_ENDM : uint8_t
{
    run_bit_only_default_stop /*!< Clears the timer run bit only (default stop)
                               */
        ,
    only_flush = 1 /*!< Clears the timer only (flush) */,
    run_bit_flushstop = 2 /*!< Clears the timer and run bit (flush/stop) */
};
static_assert(sizeof(CCU40_CC40_TC_ENDM) == 1);

/**
 * Converts CCU40_CC40_TC_ENDM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_TC_ENDM instance)
{
    const char *result = "UNKNOWN CCU40_CC40_TC_ENDM";

    switch (instance)
    {
    case CCU40_CC40_TC_ENDM::run_bit_only_default_stop:
        result = "run_bit_only_default_stop";
        break;
    case CCU40_CC40_TC_ENDM::only_flush:
        result = "only_flush";
        break;
    case CCU40_CC40_TC_ENDM::run_bit_flushstop:
        result = "run_bit_flushstop";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_TC_ENDM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_TC_ENDM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "run_bit_only_default_stop", 25)))
    {
        output = CCU40_CC40_TC_ENDM::run_bit_only_default_stop;
    }
    else if ((result = !strncmp(data, "only_flush", 10)))
    {
        output = CCU40_CC40_TC_ENDM::only_flush;
    }
    else if ((result = !strncmp(data, "run_bit_flushstop", 17)))
    {
        output = CCU40_CC40_TC_ENDM::run_bit_flushstop;
    }

    return result;
}

}; // namespace XMC4700
