/**
 * \file
 * \brief Generated by ifgen (3.1.6).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class CCU80_CC80_CHC_OCS2 : uint8_t
{
    inverted_cc8yst1_signal_path_connected_ccu8xouty1 /*!< Inverted CC8yST1
                                                         signal path is
                                                         connected to the
                                                         CCU8x.OUTy1 */
        ,
    cc8yst1_signal_path_connected_ccu8xouty1 =
        1 /*!< CC8yST1 signal path is connected to the CCU8x.OUTy1 */
};
static_assert(sizeof(CCU80_CC80_CHC_OCS2) == 1);

/**
 * Converts CCU80_CC80_CHC_OCS2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCU80_CC80_CHC_OCS2 instance)
{
    const char *result = "UNKNOWN CCU80_CC80_CHC_OCS2";

    switch (instance)
    {
    case CCU80_CC80_CHC_OCS2::
        inverted_cc8yst1_signal_path_connected_ccu8xouty1:
        result = "inverted_cc8yst1_signal_path_connected_ccu8xouty1";
        break;
    case CCU80_CC80_CHC_OCS2::cc8yst1_signal_path_connected_ccu8xouty1:
        result = "cc8yst1_signal_path_connected_ccu8xouty1";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCU80_CC80_CHC_OCS2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCU80_CC80_CHC_OCS2 &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "inverted_cc8yst1_signal_path_connected_ccu8xouty1", 49)))
    {
        output = CCU80_CC80_CHC_OCS2::
            inverted_cc8yst1_signal_path_connected_ccu8xouty1;
    }
    else if ((result = !strncmp(
                  data, "cc8yst1_signal_path_connected_ccu8xouty1", 40)))
    {
        output = CCU80_CC80_CHC_OCS2::cc8yst1_signal_path_connected_ccu8xouty1;
    }

    return result;
}

}; // namespace XMC4700
