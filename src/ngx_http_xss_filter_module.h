#ifndef NGX_HTTP_XSS_FILTER_MODULE_H
#define NGX_HTTP_XSS_FILTER_MODULE_H


#include <ngx_core.h>
#include <ngx_http.h>


typedef struct {
    ngx_str_t       callback_arg;
    ngx_flag_t      get_enabled;

    ngx_hash_t    types;
    ngx_array_t  *types_keys;

} ngx_http_xss_conf_t;


typedef struct {
    ngx_str_t       callback;
    ngx_flag_t      before_body_sent;

} ngx_http_xss_ctx_t;


#endif /* NGX_HTTP_XSS_FILTER_MODULE_H */
