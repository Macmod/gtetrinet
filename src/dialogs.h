#include <gnome.h>
#include <libgnomeui/libgnomeui.h>
#include <gconf/gconf-client.h>
#include <dirent.h>

#include "gtetrinet.h"
#include "misc.h"
#include "sound.h"
#include "config.h"

extern void teamdialog_new (void);
extern void connectdialog_new (void);
extern void connectingdialog_destroy (void);
extern void connectingdialog_new (void);
extern void connectdialog_connected (void);
extern void prefdialog_new (void);
