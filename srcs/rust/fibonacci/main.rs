fn main() {
    let n: u128 = 62;
    let mut t1: u128 = 1;
    let mut t2: u128 = 0;

    for i in 1..n {
        if i > 2 {
            let curr: u128 = t1 + t2;
            t2 = t1;
            t1 = curr;
            print!("{curr} ");
        } else if i == 1 {
            print!("{t2} ");
        } else if i == 2 {
            print!("{t1} ");
        }
    }
}
