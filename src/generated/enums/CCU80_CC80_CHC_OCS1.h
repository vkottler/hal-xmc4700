/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_CHC_OCS1 : uint8_t
{
    cc8yst1_signal_path_connected_ccu8xouty0 /*!< CC8yST1 signal path is
                                                connected to the CCU8x.OUTy0 */
        ,
    inverted_cc8yst1_signal_path_connected_ccu8xouty0 =
        1 /*!< Inverted CC8yST1 signal path is connected to the CCU8x.OUTy0 */
};
static_assert(sizeof(CCU80_CC80_CHC_OCS1) == 1);

/**
 * Converts CCU80_CC80_CHC_OCS1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_CHC_OCS1 instance)
{
    const char *result = "UNKNOWN CCU80_CC80_CHC_OCS1";

    switch (instance)
    {
    case CCU80_CC80_CHC_OCS1::cc8yst1_signal_path_connected_ccu8xouty0:
        result = "cc8yst1_signal_path_connected_ccu8xouty0";
        break;
    case CCU80_CC80_CHC_OCS1::
        inverted_cc8yst1_signal_path_connected_ccu8xouty0:
        result = "inverted_cc8yst1_signal_path_connected_ccu8xouty0";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_CHC_OCS1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_CHC_OCS1 &output)
{
    bool result = false;

    if ((result =
             !strncmp(data, "cc8yst1_signal_path_connected_ccu8xouty0", 40)))
    {
        output = CCU80_CC80_CHC_OCS1::cc8yst1_signal_path_connected_ccu8xouty0;
    }
    else if ((result = !strncmp(
                  data, "inverted_cc8yst1_signal_path_connected_ccu8xouty0",
                  49)))
    {
        output = CCU80_CC80_CHC_OCS1::
            inverted_cc8yst1_signal_path_connected_ccu8xouty0;
    }

    return result;
}

}; // namespace XMC4700
