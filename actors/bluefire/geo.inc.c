#include "src/game/envfx_snow.h"

const GeoLayout bluefire_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bluefire_bluefire_mesh_layer_5),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT, bluefire_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
