#pragma once

#include <adwaita.h>

G_BEGIN_DECLS

#define SC_TYPE_ARTURIA_CONTROL (sc_arturia_control_get_type ())

G_DECLARE_FINAL_TYPE (ScArturiaControl, sc_arturia_control, SC, ARTURIA_CONTROL, AdwBin)

uint16_t sc_arturia_control_get_id (ScArturiaControl *self);

G_END_DECLS

