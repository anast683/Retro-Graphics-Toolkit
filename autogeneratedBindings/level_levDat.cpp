/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class levDat
 *
 * This file has been generated by dub 2.2.4.
 */
#include "dub/dub.h"
#include "classlevel.h"


/** Set attributes (key, value)
 *
 */
static int levDat__set_(lua_State *L) {

	levDat *self = *((levDat **)dub::checksdata_n(L, 1, "level.levDat"));
	const char *key = luaL_checkstring(L, 2);
	int key_h = dub::hash(key, 6);

	switch (key_h) {
		case 1: {
			if (DUB_ASSERT_KEY(key, "id")) break;

			self->id = luaL_checkinteger(L, 3);
			return 0;
		}

		case 3: {
			if (DUB_ASSERT_KEY(key, "dat")) break;

			self->dat = luaL_checkinteger(L, 3);
			return 0;
		}

		case 5: {
			if (DUB_ASSERT_KEY(key, "xormask")) break;

			self->xormask = luaL_checkinteger(L, 3);
			return 0;
		}

		case 4: {
			if (DUB_ASSERT_KEY(key, "extra")) break;

			self->extra = luaL_checkinteger(L, 3);
			return 0;
		}
	}

	if (lua_istable(L, 1))
		lua_rawset(L, 1);

	else
		luaL_error(L, KEY_EXCEPTION_MSG, key);

	return 0;
}

/** Get attributes (key)
 *
 */
static int levDat__get_(lua_State *L) {

	levDat *self = *((levDat **)dub::checksdata_n(L, 1, "level.levDat", true));
	const char *key = luaL_checkstring(L, 2);
	// <self> "key" <mt>
	// rawget(mt, key)
	lua_pushvalue(L, 2);
	// <self> "key" <mt> "key"
	lua_rawget(L, -2);

	if (!lua_isnil(L, -1)) {
		// Found method.
		return 1;
	} else {
		// Not in mt = attribute access.
		lua_pop(L, 2);
	}

	int key_h = dub::hash(key, 6);

	switch (key_h) {
		case 1: {
			if (DUB_ASSERT_KEY(key, "id")) break;

			lua_pushinteger(L, self->id);
			return 1;
		}

		case 3: {
			if (DUB_ASSERT_KEY(key, "dat")) break;

			lua_pushinteger(L, self->dat);
			return 1;
		}

		case 5: {
			if (DUB_ASSERT_KEY(key, "xormask")) break;

			lua_pushinteger(L, self->xormask);
			return 1;
		}

		case 4: {
			if (DUB_ASSERT_KEY(key, "extra")) break;

			lua_pushinteger(L, self->extra);
			return 1;
		}
	}

	return 0;
}

/** levDat()
 *
 */
static int levDat_levDat(lua_State *L, struct levDat*d) {
	dub::pushudata(L, d, "level.levDat", false);
	return 1;
}



// --=============================================== __tostring
static int levDat___tostring(lua_State *L) {
	levDat *self = *((levDat **)dub::checksdata_n(L, 1, "level.levDat"));
	lua_pushfstring(L, "level.levDat: %p", self);

	return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg levDat_member_methods[] = {
	{ "__newindex", levDat__set_         },
	{ "__index", levDat__get_         },
	{ "__tostring", levDat___tostring    },
	{ NULL, NULL},
};


int luaopen_level_levDat(lua_State *L, struct levDat*d) {
	// Create the metatable which will contain all the member methods
	luaL_newmetatable(L, "level.levDat");
	// <mt>

	// register member methods
	dub::fregister(L, levDat_member_methods);
	// setup meta-table
	dub::setup(L, "level.levDat");
	// <mt>
	return levDat_levDat(L, d);
}
