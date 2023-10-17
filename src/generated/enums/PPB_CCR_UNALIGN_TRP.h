/**
 * \file
 * \brief Generated by ifgen (3.1.2).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class PPB_CCR_UNALIGN_TRP : uint8_t
{
    do_not_trap_unaligned_halfword_word_accesses /*!< do not trap unaligned
                                                    halfword and word accesses
                                                  */
        ,
    trap_unaligned_halfword_word_accesses =
        1 /*!< trap unaligned halfword and word accesses. */
};
static_assert(sizeof(PPB_CCR_UNALIGN_TRP) == 1);

/**
 * Converts PPB_CCR_UNALIGN_TRP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PPB_CCR_UNALIGN_TRP instance)
{
    const char *result = "UNKNOWN PPB_CCR_UNALIGN_TRP";

    switch (instance)
    {
    case PPB_CCR_UNALIGN_TRP::do_not_trap_unaligned_halfword_word_accesses:
        result = "do_not_trap_unaligned_halfword_word_accesses";
        break;
    case PPB_CCR_UNALIGN_TRP::trap_unaligned_halfword_word_accesses:
        result = "trap_unaligned_halfword_word_accesses";
        break;
    }

    return result;
}

/**
 * Converts a C string to PPB_CCR_UNALIGN_TRP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PPB_CCR_UNALIGN_TRP &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "do_not_trap_unaligned_halfword_word_accesses", 44)))
    {
        output =
            PPB_CCR_UNALIGN_TRP::do_not_trap_unaligned_halfword_word_accesses;
    }
    else if ((result =
                  !strncmp(data, "trap_unaligned_halfword_word_accesses", 37)))
    {
        output = PPB_CCR_UNALIGN_TRP::trap_unaligned_halfword_word_accesses;
    }

    return result;
}

}; // namespace XMC4700
