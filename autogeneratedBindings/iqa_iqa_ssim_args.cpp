/**
 *
 * MACHINE GENERATED FILE. DO NOT EDIT.
 *
 * Bindings for class iqa_ssim_args
 *
 * This file has been generated by dub 2.2.4.
 */
#include "dub/dub.h"
#include "iqa.h"


/** Set attributes (key, value)
 *
 */
static int iqa_ssim_args__set_(lua_State *L) {

	iqa_ssim_args *self = *((iqa_ssim_args **)dub::checksdata_n(L, 1, "iqa.iqa_ssim_args"));
	const char *key = luaL_checkstring(L, 2);
	int key_h = dub::hash(key, 10);

	switch (key_h) {
		case 8: {
			if (DUB_ASSERT_KEY(key, "alpha")) break;

			self->alpha = luaL_checknumber(L, 3);
			return 0;
		}

		case 0: {
			if (DUB_ASSERT_KEY(key, "beta")) break;

			self->beta = luaL_checknumber(L, 3);
			return 0;
		}

		case 3: {
			if (DUB_ASSERT_KEY(key, "gamma")) break;

			self->gamma = luaL_checknumber(L, 3);
			return 0;
		}

		case 6: {
			if (DUB_ASSERT_KEY(key, "L")) break;

			self->L = luaL_checkinteger(L, 3);
			return 0;
		}

		case 4: {
			if (DUB_ASSERT_KEY(key, "K1")) break;

			self->K1 = luaL_checknumber(L, 3);
			return 0;
		}

		case 5: {
			if (DUB_ASSERT_KEY(key, "K2")) break;

			self->K2 = luaL_checknumber(L, 3);
			return 0;
		}

		case 2: {
			if (DUB_ASSERT_KEY(key, "f")) break;

			self->f = luaL_checkinteger(L, 3);
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
static int iqa_ssim_args__get_(lua_State *L) {

	iqa_ssim_args *self = *((iqa_ssim_args **)dub::checksdata_n(L, 1, "iqa.iqa_ssim_args", true));
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

	int key_h = dub::hash(key, 10);

	switch (key_h) {
		case 8: {
			if (DUB_ASSERT_KEY(key, "alpha")) break;

			lua_pushnumber(L, self->alpha);
			return 1;
		}

		case 0: {
			if (DUB_ASSERT_KEY(key, "beta")) break;

			lua_pushnumber(L, self->beta);
			return 1;
		}

		case 3: {
			if (DUB_ASSERT_KEY(key, "gamma")) break;

			lua_pushnumber(L, self->gamma);
			return 1;
		}

		case 6: {
			if (DUB_ASSERT_KEY(key, "L")) break;

			lua_pushnumber(L, self->L);
			return 1;
		}

		case 4: {
			if (DUB_ASSERT_KEY(key, "K1")) break;

			lua_pushnumber(L, self->K1);
			return 1;
		}

		case 5: {
			if (DUB_ASSERT_KEY(key, "K2")) break;

			lua_pushnumber(L, self->K2);
			return 1;
		}

		case 2: {
			if (DUB_ASSERT_KEY(key, "f")) break;

			lua_pushnumber(L, self->f);
			return 1;
		}
	}

	return 0;
}

/** iqa_ssim_args()
 *
 */
static int iqa_ssim_args_iqa_ssim_args(lua_State *L) {
	try {
		iqa_ssim_args *retval__ = new iqa_ssim_args();
		dub::pushudata(L, retval__, "iqa.iqa_ssim_args", true);
		return 1;
	} catch (std::exception &e) {
		lua_pushfstring(L, "new: %s", e.what());
	} catch (...) {
		lua_pushfstring(L, "new: Unknown exception");
	}

	return dub::error(L);
}



// --=============================================== __tostring
static int iqa_ssim_args___tostring(lua_State *L) {
	iqa_ssim_args *self = *((iqa_ssim_args **)dub::checksdata_n(L, 1, "iqa.iqa_ssim_args"));
	lua_pushfstring(L, "iqa.iqa_ssim_args: %p", self);

	return 1;
}

// --=============================================== METHODS

static const struct luaL_Reg iqa_ssim_args_member_methods[] = {
	{ "__newindex", iqa_ssim_args__set_  },
	{ "__index", iqa_ssim_args__get_  },
	{ "new", iqa_ssim_args_iqa_ssim_args },
	{ "__tostring", iqa_ssim_args___tostring },
	{ "deleted", dub::isDeleted       },
	{ NULL, NULL},
};


int luaopen_iqa_iqa_ssim_args(lua_State *L)
{
	// Create the metatable which will contain all the member methods
	luaL_newmetatable(L, "iqa.iqa_ssim_args");
	// <mt>

	// register member methods
	dub::fregister(L, iqa_ssim_args_member_methods);
	// setup meta-table
	dub::setup(L, "iqa.iqa_ssim_args");
	// <mt>
	return 1;
}
