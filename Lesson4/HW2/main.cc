//
// Created by bangoc on 21/10/2017.
//

/*
 Hãy hoàn thiện mô phỏng cây lớp như trong hierarchies.jpg,
 biên dịch chương trình sau. Để khi kết thúc sẽ thấy những thông báo
 như sau trên màn hình:

    Big Bucks inc.
        please slide to input 10 <-> 1000:

    Big Bucks inc.
        please dial to input 100 @ 10000:

    Powered by Liberated Software
        slide [10 <-> 1000]:

    Powered by Liberated Software
        dial (100 @ 10000)
 */


/*
 * please add your includes here
 */

void Run(const Ival_maker& m) {
    // Input an integer in [10..1000] using a slider
    Ival_slider* slider = m.slider(10, 1000);
    slider->prompt();
    slider->get_value();

    // Input an integer in [100..10000] using a dial
    Ival_dial* dial = m.dial(100, 10000);
    dial->prompt();
    dial->get_value();

    delete slider;
    delete dial;
}

int main() {
    // Use BB user interfaces
    BB_maker bb_impl;
    Run(bb_impl);

    // Use LS user interfaces
    LS_maker ls_impl;
    Run(ls_impl);
}