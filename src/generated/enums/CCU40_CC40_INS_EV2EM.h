/**
 * \file
 * \brief Generated by ifgen (3.1.7).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU40_CC40_INS_EV2EM : uint8_t
{
    no_action /*!< No action */,
    signal_active_rising_edge = 1 /*!< Signal active on rising edge */,
    signal_active_falling_edge = 2 /*!< Signal active on falling edge */,
    signal_active_both_edges = 3 /*!< Signal active on both edges */
};
static_assert(sizeof(CCU40_CC40_INS_EV2EM) == 1);

/**
 * Converts CCU40_CC40_INS_EV2EM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU40_CC40_INS_EV2EM instance)
{
    const char *result = "UNKNOWN CCU40_CC40_INS_EV2EM";

    switch (instance)
    {
    case CCU40_CC40_INS_EV2EM::no_action:
        result = "no_action";
        break;
    case CCU40_CC40_INS_EV2EM::signal_active_rising_edge:
        result = "signal_active_rising_edge";
        break;
    case CCU40_CC40_INS_EV2EM::signal_active_falling_edge:
        result = "signal_active_falling_edge";
        break;
    case CCU40_CC40_INS_EV2EM::signal_active_both_edges:
        result = "signal_active_both_edges";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU40_CC40_INS_EV2EM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU40_CC40_INS_EV2EM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "no_action", 9)))
    {
        output = CCU40_CC40_INS_EV2EM::no_action;
    }
    else if ((result = !strncmp(data, "signal_active_rising_edge", 25)))
    {
        output = CCU40_CC40_INS_EV2EM::signal_active_rising_edge;
    }
    else if ((result = !strncmp(data, "signal_active_falling_edge", 26)))
    {
        output = CCU40_CC40_INS_EV2EM::signal_active_falling_edge;
    }
    else if ((result = !strncmp(data, "signal_active_both_edges", 24)))
    {
        output = CCU40_CC40_INS_EV2EM::signal_active_both_edges;
    }

    return result;
}

}; // namespace XMC4700
