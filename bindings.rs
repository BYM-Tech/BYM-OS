#![allow(clippy::all)]
#![allow(non_upper_case_globals)]
#![allow(non_camel_case_types)]
#![allow(non_snake_case)]
#![allow(unused)]
#![allow(missing_docs)]

// Note that "bzip_bindings.rs" here must match the source_stem property from
// the rust_bindgen module.
include!(concat!(env!("OUT_DIR"), "/bzip_bindings.rs"));