#import "UICircleButton+Smartcontrolhab.h"
@implementation UICircleButton (Smartcontrolhab)
- (void)initWithCoder:(NSCoder *)coder smartcontrolHab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)buttonActionReleasedSmartcontrolhab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)buttonActionTouchedSmartcontrolhab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}
- (void)timerTicked:(NSTimer*)timer smartcontrolHab:(NSString *)smartcontrolHab {
    NSLog(@"%@", smartcontrolHab);
}

@end
