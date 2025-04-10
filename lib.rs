mod bindings;

fn main() {
    let mut x = bindings::foo { x: 2 };
    unsafe { bindings::fizz(1, &mut x as *mut bindings::foo) }
}