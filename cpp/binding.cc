/**
 * https://github.com/nodejs/node-addon-api/blob/master/test/binding.cc
 */
#include <napi.h>

using namespace Napi;

Object InitCalc(Env env);

Object Init(Env env, Object exports) {
  exports.Set("calc", InitCalc(env));

  return exports;
}

NODE_API_MODULE(addon, Init)
