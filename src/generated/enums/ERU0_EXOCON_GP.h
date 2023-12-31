/**
 * \file
 * \brief Generated by ifgen (3.2.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace XMC4700
{

enum class ERU0_EXOCON_GP : uint8_t
{
    always_disabled_eru_iouty_can_not_be_activated /*!< ERU_GOUTy is always
                                                      disabled and ERU_IOUTy
                                                      can not be activated */
        ,
    always_enabled_eru_iouty_becomes_activated_wi_cont =
        1 /*!< ERU_GOUTy is always enabled and ERU_IOUTy becomes activated with
             each activation of ERU_TOUTy */
        ,
    equal_eru_pdouty_eru_iouty_becomes_activated__cont =
        2 /*!< ERU_GOUTy is equal to ERU_PDOUTy and ERU_IOUTy becomes activated
             with an activation of ERU_TOUTy while the desired pattern is
             detected (pattern match PDR = 1) */
        ,
    inverted_eru_pdouty_eru_iouty_becomes_activat_cont =
        3 /*!< ERU_GOUTy is inverted to ERU_PDOUTy and ERU_IOUTy becomes
             activated with an activation of ERU_TOUTy while the desired
             pattern is not detected (pattern miss PDR = 0) */
};
static_assert(sizeof(ERU0_EXOCON_GP) == 1);

/**
 * Converts ERU0_EXOCON_GP to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ERU0_EXOCON_GP instance)
{
    const char *result = "UNKNOWN ERU0_EXOCON_GP";

    switch (instance)
    {
    case ERU0_EXOCON_GP::always_disabled_eru_iouty_can_not_be_activated:
        result = "always_disabled_eru_iouty_can_not_be_activated";
        break;
    case ERU0_EXOCON_GP::always_enabled_eru_iouty_becomes_activated_wi_cont:
        result = "always_enabled_eru_iouty_becomes_activated_wi_cont";
        break;
    case ERU0_EXOCON_GP::equal_eru_pdouty_eru_iouty_becomes_activated__cont:
        result = "equal_eru_pdouty_eru_iouty_becomes_activated__cont";
        break;
    case ERU0_EXOCON_GP::inverted_eru_pdouty_eru_iouty_becomes_activat_cont:
        result = "inverted_eru_pdouty_eru_iouty_becomes_activat_cont";
        break;
    }

    return result;
}

/**
 * Converts a C string to ERU0_EXOCON_GP.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ERU0_EXOCON_GP &output)
{
    bool result = false;

    if ((result = !strncmp(
             data, "always_disabled_eru_iouty_can_not_be_activated", 46)))
    {
        output =
            ERU0_EXOCON_GP::always_disabled_eru_iouty_can_not_be_activated;
    }
    else if ((result = !strncmp(
                  data, "always_enabled_eru_iouty_becomes_activated_wi_cont",
                  50)))
    {
        output =
            ERU0_EXOCON_GP::always_enabled_eru_iouty_becomes_activated_wi_cont;
    }
    else if ((result = !strncmp(
                  data, "equal_eru_pdouty_eru_iouty_becomes_activated__cont",
                  50)))
    {
        output =
            ERU0_EXOCON_GP::equal_eru_pdouty_eru_iouty_becomes_activated__cont;
    }
    else if ((result = !strncmp(
                  data, "inverted_eru_pdouty_eru_iouty_becomes_activat_cont",
                  50)))
    {
        output =
            ERU0_EXOCON_GP::inverted_eru_pdouty_eru_iouty_becomes_activat_cont;
    }

    return result;
}

}; // namespace XMC4700
